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
    AWS_LICENSEMANAGER_API CreateGrantVersionRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateGrantVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateGrantVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateGrantVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the grant.</p>
     */
    inline const Aws::String& GetGrantArn() const{ return m_grantArn; }
    inline bool GrantArnHasBeenSet() const { return m_grantArnHasBeenSet; }
    inline void SetGrantArn(const Aws::String& value) { m_grantArnHasBeenSet = true; m_grantArn = value; }
    inline void SetGrantArn(Aws::String&& value) { m_grantArnHasBeenSet = true; m_grantArn = std::move(value); }
    inline void SetGrantArn(const char* value) { m_grantArnHasBeenSet = true; m_grantArn.assign(value); }
    inline CreateGrantVersionRequest& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}
    inline CreateGrantVersionRequest& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}
    inline CreateGrantVersionRequest& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant name.</p>
     */
    inline const Aws::String& GetGrantName() const{ return m_grantName; }
    inline bool GrantNameHasBeenSet() const { return m_grantNameHasBeenSet; }
    inline void SetGrantName(const Aws::String& value) { m_grantNameHasBeenSet = true; m_grantName = value; }
    inline void SetGrantName(Aws::String&& value) { m_grantNameHasBeenSet = true; m_grantName = std::move(value); }
    inline void SetGrantName(const char* value) { m_grantNameHasBeenSet = true; m_grantName.assign(value); }
    inline CreateGrantVersionRequest& WithGrantName(const Aws::String& value) { SetGrantName(value); return *this;}
    inline CreateGrantVersionRequest& WithGrantName(Aws::String&& value) { SetGrantName(std::move(value)); return *this;}
    inline CreateGrantVersionRequest& WithGrantName(const char* value) { SetGrantName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allowed operations for the grant.</p>
     */
    inline const Aws::Vector<AllowedOperation>& GetAllowedOperations() const{ return m_allowedOperations; }
    inline bool AllowedOperationsHasBeenSet() const { return m_allowedOperationsHasBeenSet; }
    inline void SetAllowedOperations(const Aws::Vector<AllowedOperation>& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = value; }
    inline void SetAllowedOperations(Aws::Vector<AllowedOperation>&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations = std::move(value); }
    inline CreateGrantVersionRequest& WithAllowedOperations(const Aws::Vector<AllowedOperation>& value) { SetAllowedOperations(value); return *this;}
    inline CreateGrantVersionRequest& WithAllowedOperations(Aws::Vector<AllowedOperation>&& value) { SetAllowedOperations(std::move(value)); return *this;}
    inline CreateGrantVersionRequest& AddAllowedOperations(const AllowedOperation& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(value); return *this; }
    inline CreateGrantVersionRequest& AddAllowedOperations(AllowedOperation&& value) { m_allowedOperationsHasBeenSet = true; m_allowedOperations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Grant status.</p>
     */
    inline const GrantStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GrantStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GrantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateGrantVersionRequest& WithStatus(const GrantStatus& value) { SetStatus(value); return *this;}
    inline CreateGrantVersionRequest& WithStatus(GrantStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grant status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline CreateGrantVersionRequest& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline CreateGrantVersionRequest& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline CreateGrantVersionRequest& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current version of the grant.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline CreateGrantVersionRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline CreateGrantVersionRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline CreateGrantVersionRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options specified for the grant.</p>
     */
    inline const Options& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Options& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Options&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline CreateGrantVersionRequest& WithOptions(const Options& value) { SetOptions(value); return *this;}
    inline CreateGrantVersionRequest& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}
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

    GrantStatus m_status;
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
