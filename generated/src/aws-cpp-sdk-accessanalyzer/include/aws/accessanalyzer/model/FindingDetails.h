/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
    AWS_ACCESSANALYZER_API FindingDetails();
    AWS_ACCESSANALYZER_API FindingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details for an external access analyzer finding.</p>
     */
    inline const ExternalAccessDetails& GetExternalAccessDetails() const{ return m_externalAccessDetails; }

    /**
     * <p>The details for an external access analyzer finding.</p>
     */
    inline bool ExternalAccessDetailsHasBeenSet() const { return m_externalAccessDetailsHasBeenSet; }

    /**
     * <p>The details for an external access analyzer finding.</p>
     */
    inline void SetExternalAccessDetails(const ExternalAccessDetails& value) { m_externalAccessDetailsHasBeenSet = true; m_externalAccessDetails = value; }

    /**
     * <p>The details for an external access analyzer finding.</p>
     */
    inline void SetExternalAccessDetails(ExternalAccessDetails&& value) { m_externalAccessDetailsHasBeenSet = true; m_externalAccessDetails = std::move(value); }

    /**
     * <p>The details for an external access analyzer finding.</p>
     */
    inline FindingDetails& WithExternalAccessDetails(const ExternalAccessDetails& value) { SetExternalAccessDetails(value); return *this;}

    /**
     * <p>The details for an external access analyzer finding.</p>
     */
    inline FindingDetails& WithExternalAccessDetails(ExternalAccessDetails&& value) { SetExternalAccessDetails(std::move(value)); return *this;}


    /**
     * <p>The details for an unused access analyzer finding with an unused permission
     * finding type.</p>
     */
    inline const UnusedPermissionDetails& GetUnusedPermissionDetails() const{ return m_unusedPermissionDetails; }

    /**
     * <p>The details for an unused access analyzer finding with an unused permission
     * finding type.</p>
     */
    inline bool UnusedPermissionDetailsHasBeenSet() const { return m_unusedPermissionDetailsHasBeenSet; }

    /**
     * <p>The details for an unused access analyzer finding with an unused permission
     * finding type.</p>
     */
    inline void SetUnusedPermissionDetails(const UnusedPermissionDetails& value) { m_unusedPermissionDetailsHasBeenSet = true; m_unusedPermissionDetails = value; }

    /**
     * <p>The details for an unused access analyzer finding with an unused permission
     * finding type.</p>
     */
    inline void SetUnusedPermissionDetails(UnusedPermissionDetails&& value) { m_unusedPermissionDetailsHasBeenSet = true; m_unusedPermissionDetails = std::move(value); }

    /**
     * <p>The details for an unused access analyzer finding with an unused permission
     * finding type.</p>
     */
    inline FindingDetails& WithUnusedPermissionDetails(const UnusedPermissionDetails& value) { SetUnusedPermissionDetails(value); return *this;}

    /**
     * <p>The details for an unused access analyzer finding with an unused permission
     * finding type.</p>
     */
    inline FindingDetails& WithUnusedPermissionDetails(UnusedPermissionDetails&& value) { SetUnusedPermissionDetails(std::move(value)); return *this;}


    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * access key finding type.</p>
     */
    inline const UnusedIamUserAccessKeyDetails& GetUnusedIamUserAccessKeyDetails() const{ return m_unusedIamUserAccessKeyDetails; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * access key finding type.</p>
     */
    inline bool UnusedIamUserAccessKeyDetailsHasBeenSet() const { return m_unusedIamUserAccessKeyDetailsHasBeenSet; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * access key finding type.</p>
     */
    inline void SetUnusedIamUserAccessKeyDetails(const UnusedIamUserAccessKeyDetails& value) { m_unusedIamUserAccessKeyDetailsHasBeenSet = true; m_unusedIamUserAccessKeyDetails = value; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * access key finding type.</p>
     */
    inline void SetUnusedIamUserAccessKeyDetails(UnusedIamUserAccessKeyDetails&& value) { m_unusedIamUserAccessKeyDetailsHasBeenSet = true; m_unusedIamUserAccessKeyDetails = std::move(value); }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * access key finding type.</p>
     */
    inline FindingDetails& WithUnusedIamUserAccessKeyDetails(const UnusedIamUserAccessKeyDetails& value) { SetUnusedIamUserAccessKeyDetails(value); return *this;}

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * access key finding type.</p>
     */
    inline FindingDetails& WithUnusedIamUserAccessKeyDetails(UnusedIamUserAccessKeyDetails&& value) { SetUnusedIamUserAccessKeyDetails(std::move(value)); return *this;}


    /**
     * <p>The details for an unused access analyzer finding with an unused IAM role
     * finding type.</p>
     */
    inline const UnusedIamRoleDetails& GetUnusedIamRoleDetails() const{ return m_unusedIamRoleDetails; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM role
     * finding type.</p>
     */
    inline bool UnusedIamRoleDetailsHasBeenSet() const { return m_unusedIamRoleDetailsHasBeenSet; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM role
     * finding type.</p>
     */
    inline void SetUnusedIamRoleDetails(const UnusedIamRoleDetails& value) { m_unusedIamRoleDetailsHasBeenSet = true; m_unusedIamRoleDetails = value; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM role
     * finding type.</p>
     */
    inline void SetUnusedIamRoleDetails(UnusedIamRoleDetails&& value) { m_unusedIamRoleDetailsHasBeenSet = true; m_unusedIamRoleDetails = std::move(value); }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM role
     * finding type.</p>
     */
    inline FindingDetails& WithUnusedIamRoleDetails(const UnusedIamRoleDetails& value) { SetUnusedIamRoleDetails(value); return *this;}

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM role
     * finding type.</p>
     */
    inline FindingDetails& WithUnusedIamRoleDetails(UnusedIamRoleDetails&& value) { SetUnusedIamRoleDetails(std::move(value)); return *this;}


    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * password finding type.</p>
     */
    inline const UnusedIamUserPasswordDetails& GetUnusedIamUserPasswordDetails() const{ return m_unusedIamUserPasswordDetails; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * password finding type.</p>
     */
    inline bool UnusedIamUserPasswordDetailsHasBeenSet() const { return m_unusedIamUserPasswordDetailsHasBeenSet; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * password finding type.</p>
     */
    inline void SetUnusedIamUserPasswordDetails(const UnusedIamUserPasswordDetails& value) { m_unusedIamUserPasswordDetailsHasBeenSet = true; m_unusedIamUserPasswordDetails = value; }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * password finding type.</p>
     */
    inline void SetUnusedIamUserPasswordDetails(UnusedIamUserPasswordDetails&& value) { m_unusedIamUserPasswordDetailsHasBeenSet = true; m_unusedIamUserPasswordDetails = std::move(value); }

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * password finding type.</p>
     */
    inline FindingDetails& WithUnusedIamUserPasswordDetails(const UnusedIamUserPasswordDetails& value) { SetUnusedIamUserPasswordDetails(value); return *this;}

    /**
     * <p>The details for an unused access analyzer finding with an unused IAM user
     * password finding type.</p>
     */
    inline FindingDetails& WithUnusedIamUserPasswordDetails(UnusedIamUserPasswordDetails&& value) { SetUnusedIamUserPasswordDetails(std::move(value)); return *this;}

  private:

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
