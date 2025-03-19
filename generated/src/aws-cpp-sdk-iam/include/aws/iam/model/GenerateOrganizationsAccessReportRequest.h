/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class GenerateOrganizationsAccessReportRequest : public IAMRequest
  {
  public:
    AWS_IAM_API GenerateOrganizationsAccessReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateOrganizationsAccessReport"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The path of the Organizations entity (root, OU, or account). You can build an
     * entity path using the known structure of your organization. For example, assume
     * that your account ID is <code>123456789012</code> and its parent OU ID is
     * <code>ou-rge0-awsabcde</code>. The organization root ID is
     * <code>r-f6g7h8i9j0example</code> and your organization ID is
     * <code>o-a1b2c3d4e5</code>. Your entity path is
     * <code>o-a1b2c3d4e5/r-f6g7h8i9j0example/ou-rge0-awsabcde/123456789012</code>.</p>
     */
    inline const Aws::String& GetEntityPath() const { return m_entityPath; }
    inline bool EntityPathHasBeenSet() const { return m_entityPathHasBeenSet; }
    template<typename EntityPathT = Aws::String>
    void SetEntityPath(EntityPathT&& value) { m_entityPathHasBeenSet = true; m_entityPath = std::forward<EntityPathT>(value); }
    template<typename EntityPathT = Aws::String>
    GenerateOrganizationsAccessReportRequest& WithEntityPath(EntityPathT&& value) { SetEntityPath(std::forward<EntityPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Organizations service control policy (SCP). This
     * parameter is optional.</p> <p>This ID is used to generate information about when
     * an account principal that is limited by the SCP attempted to access an Amazon
     * Web Services service.</p>
     */
    inline const Aws::String& GetOrganizationsPolicyId() const { return m_organizationsPolicyId; }
    inline bool OrganizationsPolicyIdHasBeenSet() const { return m_organizationsPolicyIdHasBeenSet; }
    template<typename OrganizationsPolicyIdT = Aws::String>
    void SetOrganizationsPolicyId(OrganizationsPolicyIdT&& value) { m_organizationsPolicyIdHasBeenSet = true; m_organizationsPolicyId = std::forward<OrganizationsPolicyIdT>(value); }
    template<typename OrganizationsPolicyIdT = Aws::String>
    GenerateOrganizationsAccessReportRequest& WithOrganizationsPolicyId(OrganizationsPolicyIdT&& value) { SetOrganizationsPolicyId(std::forward<OrganizationsPolicyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityPath;
    bool m_entityPathHasBeenSet = false;

    Aws::String m_organizationsPolicyId;
    bool m_organizationsPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
