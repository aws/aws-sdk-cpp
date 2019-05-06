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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeLaunchTemplateVersionsRequest : public EC2Request
  {
  public:
    DescribeLaunchTemplateVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLaunchTemplateVersions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template. You must specify either the launch template ID
     * or launch template name in the request.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template. You must specify either the launch template
     * ID or launch template name in the request.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more versions of the launch template.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }


    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline const Aws::String& GetMinVersion() const{ return m_minVersion; }

    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline bool MinVersionHasBeenSet() const { return m_minVersionHasBeenSet; }

    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline void SetMinVersion(const Aws::String& value) { m_minVersionHasBeenSet = true; m_minVersion = value; }

    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline void SetMinVersion(Aws::String&& value) { m_minVersionHasBeenSet = true; m_minVersion = std::move(value); }

    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline void SetMinVersion(const char* value) { m_minVersionHasBeenSet = true; m_minVersion.assign(value); }

    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithMinVersion(const Aws::String& value) { SetMinVersion(value); return *this;}

    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithMinVersion(Aws::String&& value) { SetMinVersion(std::move(value)); return *this;}

    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithMinVersion(const char* value) { SetMinVersion(value); return *this;}


    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline const Aws::String& GetMaxVersion() const{ return m_maxVersion; }

    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline bool MaxVersionHasBeenSet() const { return m_maxVersionHasBeenSet; }

    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline void SetMaxVersion(const Aws::String& value) { m_maxVersionHasBeenSet = true; m_maxVersion = value; }

    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline void SetMaxVersion(Aws::String&& value) { m_maxVersionHasBeenSet = true; m_maxVersion = std::move(value); }

    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline void SetMaxVersion(const char* value) { m_maxVersionHasBeenSet = true; m_maxVersion.assign(value); }

    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithMaxVersion(const Aws::String& value) { SetMaxVersion(value); return *this;}

    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithMaxVersion(Aws::String&& value) { SetMaxVersion(std::move(value)); return *this;}

    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithMaxVersion(const char* value) { SetMaxVersion(value); return *this;}


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline DescribeLaunchTemplateVersionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline DescribeLaunchTemplateVersionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p>
     * <code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p>
     * </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>ram-disk-id</code> - The RAM disk ID.</p> </li> </ul>
     */
    inline DescribeLaunchTemplateVersionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet;

    Aws::String m_minVersion;
    bool m_minVersionHasBeenSet;

    Aws::String m_maxVersion;
    bool m_maxVersionHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
