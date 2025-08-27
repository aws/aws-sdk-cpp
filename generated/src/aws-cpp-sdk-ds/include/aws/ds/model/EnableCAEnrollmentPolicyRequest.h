/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>EnableCAEnrollmentPolicy</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableCAEnrollmentPolicyRequest">AWS
   * API Reference</a></p>
   */
  class EnableCAEnrollmentPolicyRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API EnableCAEnrollmentPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableCAEnrollmentPolicy"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory for which to enable the CA enrollment
     * policy.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    EnableCAEnrollmentPolicyRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Private Certificate Authority (PCA)
     * connector to use for automatic certificate enrollment. This connector must be
     * properly configured and accessible from the directory.</p> <p>The ARN format is:
     * <code>arn:aws:pca-connector-ad:<i>region</i>:<i>account-id</i>:connector/<i>connector-id</i>
     * </code> </p>
     */
    inline const Aws::String& GetPcaConnectorArn() const { return m_pcaConnectorArn; }
    inline bool PcaConnectorArnHasBeenSet() const { return m_pcaConnectorArnHasBeenSet; }
    template<typename PcaConnectorArnT = Aws::String>
    void SetPcaConnectorArn(PcaConnectorArnT&& value) { m_pcaConnectorArnHasBeenSet = true; m_pcaConnectorArn = std::forward<PcaConnectorArnT>(value); }
    template<typename PcaConnectorArnT = Aws::String>
    EnableCAEnrollmentPolicyRequest& WithPcaConnectorArn(PcaConnectorArnT&& value) { SetPcaConnectorArn(std::forward<PcaConnectorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_pcaConnectorArn;
    bool m_pcaConnectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
