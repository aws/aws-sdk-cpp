/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeLaunchTemplateVersionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeLaunchTemplateVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLaunchTemplateVersions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeLaunchTemplateVersionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the launch template.</p> <p>To describe one or more versions of a
     * specified launch template, you must specify either the launch template ID or the
     * launch template name, but not both.</p> <p>To describe all the latest or default
     * launch template versions in your account, you must omit this parameter.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const { return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    template<typename LaunchTemplateIdT = Aws::String>
    void SetLaunchTemplateId(LaunchTemplateIdT&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::forward<LaunchTemplateIdT>(value); }
    template<typename LaunchTemplateIdT = Aws::String>
    DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateId(LaunchTemplateIdT&& value) { SetLaunchTemplateId(std::forward<LaunchTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p> <p>To describe one or more versions of a
     * specified launch template, you must specify either the launch template name or
     * the launch template ID, but not both.</p> <p>To describe all the latest or
     * default launch template versions in your account, you must omit this
     * parameter.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const { return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    template<typename LaunchTemplateNameT = Aws::String>
    void SetLaunchTemplateName(LaunchTemplateNameT&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::forward<LaunchTemplateNameT>(value); }
    template<typename LaunchTemplateNameT = Aws::String>
    DescribeLaunchTemplateVersionsRequest& WithLaunchTemplateName(LaunchTemplateNameT&& value) { SetLaunchTemplateName(std::forward<LaunchTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more versions of the launch template. Valid values depend on whether
     * you are describing a specified launch template (by ID or name) or all launch
     * templates in your account.</p> <p>To describe one or more versions of a
     * specified launch template, valid values are <code>$Latest</code>,
     * <code>$Default</code>, and numbers.</p> <p>To describe all launch templates in
     * your account that are defined as the latest version, the valid value is
     * <code>$Latest</code>. To describe all launch templates in your account that are
     * defined as the default version, the valid value is <code>$Default</code>. You
     * can specify <code>$Latest</code> and <code>$Default</code> in the same request.
     * You cannot specify numbers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const { return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    DescribeLaunchTemplateVersionsRequest& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = Aws::String>
    DescribeLaunchTemplateVersionsRequest& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number after which to describe launch template versions.</p>
     */
    inline const Aws::String& GetMinVersion() const { return m_minVersion; }
    inline bool MinVersionHasBeenSet() const { return m_minVersionHasBeenSet; }
    template<typename MinVersionT = Aws::String>
    void SetMinVersion(MinVersionT&& value) { m_minVersionHasBeenSet = true; m_minVersion = std::forward<MinVersionT>(value); }
    template<typename MinVersionT = Aws::String>
    DescribeLaunchTemplateVersionsRequest& WithMinVersion(MinVersionT&& value) { SetMinVersion(std::forward<MinVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number up to which to describe launch template versions.</p>
     */
    inline const Aws::String& GetMaxVersion() const { return m_maxVersion; }
    inline bool MaxVersionHasBeenSet() const { return m_maxVersionHasBeenSet; }
    template<typename MaxVersionT = Aws::String>
    void SetMaxVersion(MaxVersionT&& value) { m_maxVersionHasBeenSet = true; m_maxVersion = std::forward<MaxVersionT>(value); }
    template<typename MaxVersionT = Aws::String>
    DescribeLaunchTemplateVersionsRequest& WithMaxVersion(MaxVersionT&& value) { SetMaxVersion(std::forward<MaxVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLaunchTemplateVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeLaunchTemplateVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template version was created.</p> </li> <li> <p>
     * <code>ebs-optimized</code> - A boolean that indicates whether the instance is
     * optimized for Amazon EBS I/O.</p> </li> <li> <p> <code>http-endpoint</code> -
     * Indicates whether the HTTP metadata endpoint on your instances is enabled
     * (<code>enabled</code> | <code>disabled</code>).</p> </li> <li> <p>
     * <code>http-protocol-ipv4</code> - Indicates whether the IPv4 endpoint for the
     * instance metadata service is enabled (<code>enabled</code> |
     * <code>disabled</code>).</p> </li> <li> <p> <code>host-resource-group-arn</code>
     * - The ARN of the host resource group in which to launch the instances.</p> </li>
     * <li> <p> <code>http-tokens</code> - The state of token usage for your instance
     * metadata requests (<code>optional</code> | <code>required</code>).</p> </li>
     * <li> <p> <code>iam-instance-profile</code> - The ARN of the IAM instance
     * profile.</p> </li> <li> <p> <code>image-id</code> - The ID of the AMI.</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type.</p> </li> <li> <p>
     * <code>is-default-version</code> - A boolean that indicates whether the launch
     * template version is the default version.</p> </li> <li> <p>
     * <code>kernel-id</code> - The kernel ID.</p> </li> <li> <p>
     * <code>license-configuration-arn</code> - The ARN of the license
     * configuration.</p> </li> <li> <p> <code>network-card-index</code> - The index of
     * the network card.</p> </li> <li> <p> <code>ram-disk-id</code> - The RAM disk
     * ID.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeLaunchTemplateVersionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeLaunchTemplateVersionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, and if a Systems Manager parameter is specified for
     * <code>ImageId</code>, the AMI ID is displayed in the response for
     * <code>imageId</code>.</p> <p>If <code>false</code>, and if a Systems Manager
     * parameter is specified for <code>ImageId</code>, the parameter is displayed in
     * the response for <code>imageId</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-launch-template.html#use-an-ssm-parameter-instead-of-an-ami-id">Use
     * a Systems Manager parameter instead of an AMI ID</a> in the <i>Amazon EC2 User
     * Guide</i>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetResolveAlias() const { return m_resolveAlias; }
    inline bool ResolveAliasHasBeenSet() const { return m_resolveAliasHasBeenSet; }
    inline void SetResolveAlias(bool value) { m_resolveAliasHasBeenSet = true; m_resolveAlias = value; }
    inline DescribeLaunchTemplateVersionsRequest& WithResolveAlias(bool value) { SetResolveAlias(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::String m_minVersion;
    bool m_minVersionHasBeenSet = false;

    Aws::String m_maxVersion;
    bool m_maxVersionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_resolveAlias{false};
    bool m_resolveAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
