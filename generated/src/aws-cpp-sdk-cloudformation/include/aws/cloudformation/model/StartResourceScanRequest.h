/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ScanFilter.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class StartResourceScanRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API StartResourceScanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartResourceScan"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A unique identifier for this <code>StartResourceScan</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to start a new resource scan.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartResourceScanRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan filters to use.</p>
     */
    inline const Aws::Vector<ScanFilter>& GetScanFilters() const { return m_scanFilters; }
    inline bool ScanFiltersHasBeenSet() const { return m_scanFiltersHasBeenSet; }
    template<typename ScanFiltersT = Aws::Vector<ScanFilter>>
    void SetScanFilters(ScanFiltersT&& value) { m_scanFiltersHasBeenSet = true; m_scanFilters = std::forward<ScanFiltersT>(value); }
    template<typename ScanFiltersT = Aws::Vector<ScanFilter>>
    StartResourceScanRequest& WithScanFilters(ScanFiltersT&& value) { SetScanFilters(std::forward<ScanFiltersT>(value)); return *this;}
    template<typename ScanFiltersT = ScanFilter>
    StartResourceScanRequest& AddScanFilters(ScanFiltersT&& value) { m_scanFiltersHasBeenSet = true; m_scanFilters.emplace_back(std::forward<ScanFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<ScanFilter> m_scanFilters;
    bool m_scanFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
