/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/GrantStatus.h>
#include <aws/license-manager/model/Options.h>
#include <aws/license-manager/model/AllowedOperation.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateGrantVersionRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateGrantVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGrantVersion"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateGrantVersionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline const Aws::String& GetGrantArn() const { return m_grantArn; }
    inline bool GrantArnHasBeenSet() const { return m_grantArnHasBeenSet; }
    template<typename GrantArnT = Aws::String>
    void SetGrantArn(GrantArnT&& value) { m_grantArnHasBeenSet = true; m_grantArn = std::forward<GrantArnT>(value); }
    template<typename GrantArnT = Aws::String>
    CreateGrantVersionRequest& WithGrantArn(GrantArnT&& value) { SetGrantArn(std::forward<GrantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant name.</p>
     */
    inline const Aws::String& GetGrantName() const { return m_grantName; }
    inline bool GrantNameHasBeenSet() const { return m_grantNameHasBeenSet; }
    template<typename GrantNameT = Aws::String>
    void SetGrantName(GrantNameT&& value) { m_grantNameHasBeenSet = true; m_grantName = std::forward<GrantNameT>(value); }
    template<typename GrantNameT = Aws::String>
    CreateGrantVersionRequest& WithGrantName(GrantNameT&& value) { SetGrantName(std::forward<GrantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetAllowedOperations() const { return m_allowedOperations; }
    inline bool AllowedOperationsHasBeenSet() const { return m_allowedOperationsHasBeenSet; }
    template<typename AllowedOperationsT = Aws::Vector<AllowedOperation>>
    void SetAllowedOperations(AllowedOperationsT&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = std::forward<AllowedOperationsT>(value); }
    template<typename AllowedOperationsT = Aws::Vector<AllowedOperation>>
    CreateGrantVersionRequest& WithAllowedOperations(AllowedOperationsT&& value) { SetAllowedOperations(std::forward<AllowedOperationsT>(value)); return *this;}
    inline CreateGrantVersionRequest& AddAllowedOperations(AllowedOperation value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Grant status.</p>
     */
    inline GrantStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GrantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGrantVersionRequest& WithStatus(GrantStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    CreateGrantVersionRequest& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current version of the grant.</p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    CreateGrantVersionRequest& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options specified for the grant.</p>
     */
    inline const Options& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Options>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Options>
    CreateGrantVersionRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_grantArn;
    bool m_grantArnHasBeenSet = false;

    Aws::String m_grantName;
    bool m_grantNameHasBeenSet = false;

    Aws::Vector<AllowedOperation> m_allowedOperations;
    bool m_allowedOperationsHasBeenSet = false;

    GrantStatus m_status{GrantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Options m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
