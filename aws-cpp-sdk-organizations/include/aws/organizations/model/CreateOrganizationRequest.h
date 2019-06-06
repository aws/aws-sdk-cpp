/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/OrganizationFeatureSet.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API CreateOrganizationRequest : public OrganizationsRequest
  {
  public:
    CreateOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOrganization"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the feature set supported by the new organization. Each feature set
     * supports different levels of functionality.</p> <ul> <li> <p>
     * <code>CONSOLIDATED_BILLING</code>: All member accounts have their bills
     * consolidated to and paid by the master account. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-cb-only">Consolidated
     * billing</a> in the <i>AWS Organizations User Guide.</i> </p> <p> The
     * consolidated billing feature subset isn't available for organizations in the AWS
     * GovCloud (US) Region.</p> </li> <li> <p> <code>ALL</code>: In addition to all
     * the features supported by the consolidated billing feature set, the master
     * account can also apply any type of policy to any member account in the
     * organization. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-all">All
     * features</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
     */
    inline const OrganizationFeatureSet& GetFeatureSet() const{ return m_featureSet; }

    /**
     * <p>Specifies the feature set supported by the new organization. Each feature set
     * supports different levels of functionality.</p> <ul> <li> <p>
     * <code>CONSOLIDATED_BILLING</code>: All member accounts have their bills
     * consolidated to and paid by the master account. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-cb-only">Consolidated
     * billing</a> in the <i>AWS Organizations User Guide.</i> </p> <p> The
     * consolidated billing feature subset isn't available for organizations in the AWS
     * GovCloud (US) Region.</p> </li> <li> <p> <code>ALL</code>: In addition to all
     * the features supported by the consolidated billing feature set, the master
     * account can also apply any type of policy to any member account in the
     * organization. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-all">All
     * features</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
     */
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }

    /**
     * <p>Specifies the feature set supported by the new organization. Each feature set
     * supports different levels of functionality.</p> <ul> <li> <p>
     * <code>CONSOLIDATED_BILLING</code>: All member accounts have their bills
     * consolidated to and paid by the master account. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-cb-only">Consolidated
     * billing</a> in the <i>AWS Organizations User Guide.</i> </p> <p> The
     * consolidated billing feature subset isn't available for organizations in the AWS
     * GovCloud (US) Region.</p> </li> <li> <p> <code>ALL</code>: In addition to all
     * the features supported by the consolidated billing feature set, the master
     * account can also apply any type of policy to any member account in the
     * organization. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-all">All
     * features</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
     */
    inline void SetFeatureSet(const OrganizationFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }

    /**
     * <p>Specifies the feature set supported by the new organization. Each feature set
     * supports different levels of functionality.</p> <ul> <li> <p>
     * <code>CONSOLIDATED_BILLING</code>: All member accounts have their bills
     * consolidated to and paid by the master account. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-cb-only">Consolidated
     * billing</a> in the <i>AWS Organizations User Guide.</i> </p> <p> The
     * consolidated billing feature subset isn't available for organizations in the AWS
     * GovCloud (US) Region.</p> </li> <li> <p> <code>ALL</code>: In addition to all
     * the features supported by the consolidated billing feature set, the master
     * account can also apply any type of policy to any member account in the
     * organization. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-all">All
     * features</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
     */
    inline void SetFeatureSet(OrganizationFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }

    /**
     * <p>Specifies the feature set supported by the new organization. Each feature set
     * supports different levels of functionality.</p> <ul> <li> <p>
     * <code>CONSOLIDATED_BILLING</code>: All member accounts have their bills
     * consolidated to and paid by the master account. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-cb-only">Consolidated
     * billing</a> in the <i>AWS Organizations User Guide.</i> </p> <p> The
     * consolidated billing feature subset isn't available for organizations in the AWS
     * GovCloud (US) Region.</p> </li> <li> <p> <code>ALL</code>: In addition to all
     * the features supported by the consolidated billing feature set, the master
     * account can also apply any type of policy to any member account in the
     * organization. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-all">All
     * features</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
     */
    inline CreateOrganizationRequest& WithFeatureSet(const OrganizationFeatureSet& value) { SetFeatureSet(value); return *this;}

    /**
     * <p>Specifies the feature set supported by the new organization. Each feature set
     * supports different levels of functionality.</p> <ul> <li> <p>
     * <code>CONSOLIDATED_BILLING</code>: All member accounts have their bills
     * consolidated to and paid by the master account. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-cb-only">Consolidated
     * billing</a> in the <i>AWS Organizations User Guide.</i> </p> <p> The
     * consolidated billing feature subset isn't available for organizations in the AWS
     * GovCloud (US) Region.</p> </li> <li> <p> <code>ALL</code>: In addition to all
     * the features supported by the consolidated billing feature set, the master
     * account can also apply any type of policy to any member account in the
     * organization. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-all">All
     * features</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
     */
    inline CreateOrganizationRequest& WithFeatureSet(OrganizationFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}

  private:

    OrganizationFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
