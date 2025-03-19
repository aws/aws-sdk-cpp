/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Starts a scan of the policies applied to the specified
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartResourceScanRequest">AWS
   * API Reference</a></p>
   */
  class StartResourceScanRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API StartResourceScanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartResourceScan"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> to use to scan the policies applied to the specified
     * resource.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const { return m_analyzerArn; }
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }
    template<typename AnalyzerArnT = Aws::String>
    void SetAnalyzerArn(AnalyzerArnT&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::forward<AnalyzerArnT>(value); }
    template<typename AnalyzerArnT = Aws::String>
    StartResourceScanRequest& WithAnalyzerArn(AnalyzerArnT&& value) { SetAnalyzerArn(std::forward<AnalyzerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource to scan.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    StartResourceScanRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the resource. For most Amazon
     * Web Services resources, the owning account is the account in which the resource
     * was created.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const { return m_resourceOwnerAccount; }
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }
    template<typename ResourceOwnerAccountT = Aws::String>
    void SetResourceOwnerAccount(ResourceOwnerAccountT&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::forward<ResourceOwnerAccountT>(value); }
    template<typename ResourceOwnerAccountT = Aws::String>
    StartResourceScanRequest& WithResourceOwnerAccount(ResourceOwnerAccountT&& value) { SetResourceOwnerAccount(std::forward<ResourceOwnerAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
