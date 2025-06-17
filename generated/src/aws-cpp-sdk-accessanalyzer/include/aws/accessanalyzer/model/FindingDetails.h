/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/InternalAccessDetails.h>
#include <aws/accessanalyzer/model/ExternalAccessDetails.h>
#include <aws/accessanalyzer/model/UnusedPermissionDetails.h>
#include <aws/accessanalyzer/model/UnusedIamUserAccessKeyDetails.h>
#include <aws/accessanalyzer/model/UnusedIamRoleDetails.h>
#include <aws/accessanalyzer/model/UnusedIamUserPasswordDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about an external access or unused access finding. Only
   * one parameter can be used in a <code>FindingDetails</code> object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingDetails">AWS
   * API Reference</a></p>
   */
  class FindingDetails
  {
  public:
    AWS_ACCESSANALYZER_API FindingDetails() = default;
    AWS_ACCESSANALYZER_API FindingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for an internal access analyzer finding. This contains
     * information about access patterns identified within your Amazon Web Services
     * organization or account.</p>
     */
    inline const InternalAccessDetails& GetInternalAccessDetails() const { return m_internalAccessDetails; }
    inline bool InternalAccessDetailsHasBeenSet() const { return m_internalAccessDetailsHasBeenSet; }
    template<typename InternalAccessDetailsT = InternalAccessDetails>
    void SetInternalAccessDetails(InternalAccessDetailsT&& value) { m_internalAccessDetailsHasBeenSet = true; m_internalAccessDetails = std::forward<InternalAccessDetailsT>(value); }
    template<typename InternalAccessDetailsT = InternalAccessDetails>
    FindingDetails& WithInternalAccessDetails(InternalAccessDetailsT&& value) { SetInternalAccessDetails(std::forward<InternalAccessDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for an external access analyzer finding.</p>
     */
    inline const ExternalAccessDetails& GetExternalAccessDetails() const { return m_externalAccessDetails; }
    inline bool ExternalAccessDetailsHasBeenSet() const { return m_externalAccessDetailsHasBeenSet; }
    template<typename ExternalAccessDetailsT = ExternalAccessDetails>
    void SetExternalAccessDetails(ExternalAccessDetailsT&& value) { m_externalAccessDetailsHasBeenSet = true; m_externalAccessDetails = std::forward<ExternalAccessDetailsT>(value); }
    template<typename ExternalAccessDetailsT = ExternalAccessDetails>
    FindingDetails& WithExternalAccessDetails(ExternalAccessDetailsT&& value) { SetExternalAccessDetails(std::forward<ExternalAccessDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for an unused access analyzer finding with an unused permission
     * finding type.</p>
     */
    inline const UnusedPermissionDetails& GetUnusedPermissionDetails() const { return m_unusedPermissionDetails; }
    inline bool UnusedPermissionDetailsHasBeenSet() const { return m_unusedPermissionDetailsHasBeenSet; }
    template<typename UnusedPermissionDetailsT = UnusedPermissionDetails>
    void SetUnusedPermissionDetails(UnusedPermissionDetailsT&& value) { m_unusedPermissionDetailsHasBeenSet = true; m_unusedPermissionDetails = std::forward<UnusedPermissionDetailsT>(value); }
    template<typename UnusedPermissionDetailsT = UnusedPermissionDetails>
    FindingDetails& WithUnusedPermissionDetails(UnusedPermissionDetailsT&& value) { SetUnusedPermissionDetails(std::forward<UnusedPermissionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * access key finding type.</p>
     */
    inline const UnusedIamUserAccessKeyDetails& GetUnusedIamUserAccessKeyDetails() const { return m_unusedIamUserAccessKeyDetails; }
    inline bool UnusedIamUserAccessKeyDetailsHasBeenSet() const { return m_unusedIamUserAccessKeyDetailsHasBeenSet; }
    template<typename UnusedIamUserAccessKeyDetailsT = UnusedIamUserAccessKeyDetails>
    void SetUnusedIamUserAccessKeyDetails(UnusedIamUserAccessKeyDetailsT&& value) { m_unusedIamUserAccessKeyDetailsHasBeenSet = true; m_unusedIamUserAccessKeyDetails = std::forward<UnusedIamUserAccessKeyDetailsT>(value); }
    template<typename UnusedIamUserAccessKeyDetailsT = UnusedIamUserAccessKeyDetails>
    FindingDetails& WithUnusedIamUserAccessKeyDetails(UnusedIamUserAccessKeyDetailsT&& value) { SetUnusedIamUserAccessKeyDetails(std::forward<UnusedIamUserAccessKeyDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for an unused access analyzer finding with an unused IAM role
     * finding type.</p>
     */
    inline const UnusedIamRoleDetails& GetUnusedIamRoleDetails() const { return m_unusedIamRoleDetails; }
    inline bool UnusedIamRoleDetailsHasBeenSet() const { return m_unusedIamRoleDetailsHasBeenSet; }
    template<typename UnusedIamRoleDetailsT = UnusedIamRoleDetails>
    void SetUnusedIamRoleDetails(UnusedIamRoleDetailsT&& value) { m_unusedIamRoleDetailsHasBeenSet = true; m_unusedIamRoleDetails = std::forward<UnusedIamRoleDetailsT>(value); }
    template<typename UnusedIamRoleDetailsT = UnusedIamRoleDetails>
    FindingDetails& WithUnusedIamRoleDetails(UnusedIamRoleDetailsT&& value) { SetUnusedIamRoleDetails(std::forward<UnusedIamRoleDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * password finding type.</p>
     */
    inline const UnusedIamUserPasswordDetails& GetUnusedIamUserPasswordDetails() const { return m_unusedIamUserPasswordDetails; }
    inline bool UnusedIamUserPasswordDetailsHasBeenSet() const { return m_unusedIamUserPasswordDetailsHasBeenSet; }
    template<typename UnusedIamUserPasswordDetailsT = UnusedIamUserPasswordDetails>
    void SetUnusedIamUserPasswordDetails(UnusedIamUserPasswordDetailsT&& value) { m_unusedIamUserPasswordDetailsHasBeenSet = true; m_unusedIamUserPasswordDetails = std::forward<UnusedIamUserPasswordDetailsT>(value); }
    template<typename UnusedIamUserPasswordDetailsT = UnusedIamUserPasswordDetails>
    FindingDetails& WithUnusedIamUserPasswordDetails(UnusedIamUserPasswordDetailsT&& value) { SetUnusedIamUserPasswordDetails(std::forward<UnusedIamUserPasswordDetailsT>(value)); return *this;}
    ///@}
  private:

    InternalAccessDetails m_internalAccessDetails;
    bool m_internalAccessDetailsHasBeenSet = false;

    ExternalAccessDetails m_externalAccessDetails;
    bool m_externalAccessDetailsHasBeenSet = false;

    UnusedPermissionDetails m_unusedPermissionDetails;
    bool m_unusedPermissionDetailsHasBeenSet = false;

    UnusedIamUserAccessKeyDetails m_unusedIamUserAccessKeyDetails;
    bool m_unusedIamUserAccessKeyDetailsHasBeenSet = false;

    UnusedIamRoleDetails m_unusedIamRoleDetails;
    bool m_unusedIamRoleDetailsHasBeenSet = false;

    UnusedIamUserPasswordDetails m_unusedIamUserPasswordDetails;
    bool m_unusedIamUserPasswordDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
