/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ClusterStatus.h>
#include <aws/elasticmapreduce/model/Ec2InstanceAttributes.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/Application.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <aws/elasticmapreduce/model/Configuration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>The detailed description of the cluster.</p>
   */
  class AWS_EMR_API Cluster
  {
  public:
    Cluster();
    Cluster(const Aws::Utils::Json::JsonValue& jsonValue);
    Cluster& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline Cluster& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline Cluster& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline Cluster& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline void SetStatus(const ClusterStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline void SetStatus(ClusterStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline Cluster& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status details about the cluster.</p>
     */
    inline Cluster& WithStatus(ClusterStatus&& value) { SetStatus(value); return *this;}

    
    inline const Ec2InstanceAttributes& GetEc2InstanceAttributes() const{ return m_ec2InstanceAttributes; }

    
    inline void SetEc2InstanceAttributes(const Ec2InstanceAttributes& value) { m_ec2InstanceAttributesHasBeenSet = true; m_ec2InstanceAttributes = value; }

    
    inline void SetEc2InstanceAttributes(Ec2InstanceAttributes&& value) { m_ec2InstanceAttributesHasBeenSet = true; m_ec2InstanceAttributes = value; }

    
    inline Cluster& WithEc2InstanceAttributes(const Ec2InstanceAttributes& value) { SetEc2InstanceAttributes(value); return *this;}

    
    inline Cluster& WithEc2InstanceAttributes(Ec2InstanceAttributes&& value) { SetEc2InstanceAttributes(value); return *this;}

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline Cluster& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline Cluster& WithLogUri(Aws::String&& value) { SetLogUri(value); return *this;}

    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline Cluster& WithLogUri(const char* value) { SetLogUri(value); return *this;}

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline const Aws::String& GetRequestedAmiVersion() const{ return m_requestedAmiVersion; }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline void SetRequestedAmiVersion(const Aws::String& value) { m_requestedAmiVersionHasBeenSet = true; m_requestedAmiVersion = value; }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline void SetRequestedAmiVersion(Aws::String&& value) { m_requestedAmiVersionHasBeenSet = true; m_requestedAmiVersion = value; }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline void SetRequestedAmiVersion(const char* value) { m_requestedAmiVersionHasBeenSet = true; m_requestedAmiVersion.assign(value); }

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline Cluster& WithRequestedAmiVersion(const Aws::String& value) { SetRequestedAmiVersion(value); return *this;}

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline Cluster& WithRequestedAmiVersion(Aws::String&& value) { SetRequestedAmiVersion(value); return *this;}

    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline Cluster& WithRequestedAmiVersion(const char* value) { SetRequestedAmiVersion(value); return *this;}

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline const Aws::String& GetRunningAmiVersion() const{ return m_runningAmiVersion; }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline void SetRunningAmiVersion(const Aws::String& value) { m_runningAmiVersionHasBeenSet = true; m_runningAmiVersion = value; }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline void SetRunningAmiVersion(Aws::String&& value) { m_runningAmiVersionHasBeenSet = true; m_runningAmiVersion = value; }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline void SetRunningAmiVersion(const char* value) { m_runningAmiVersionHasBeenSet = true; m_runningAmiVersion.assign(value); }

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline Cluster& WithRunningAmiVersion(const Aws::String& value) { SetRunningAmiVersion(value); return *this;}

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline Cluster& WithRunningAmiVersion(Aws::String&& value) { SetRunningAmiVersion(value); return *this;}

    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline Cluster& WithRunningAmiVersion(const char* value) { SetRunningAmiVersion(value); return *this;}

    /**
     * <p>The release label for the Amazon EMR release. For Amazon EMR 3.x and 2.x
     * AMIs, use amiVersion instead instead of ReleaseLabel.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The release label for the Amazon EMR release. For Amazon EMR 3.x and 2.x
     * AMIs, use amiVersion instead instead of ReleaseLabel.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The release label for the Amazon EMR release. For Amazon EMR 3.x and 2.x
     * AMIs, use amiVersion instead instead of ReleaseLabel.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The release label for the Amazon EMR release. For Amazon EMR 3.x and 2.x
     * AMIs, use amiVersion instead instead of ReleaseLabel.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The release label for the Amazon EMR release. For Amazon EMR 3.x and 2.x
     * AMIs, use amiVersion instead instead of ReleaseLabel.</p>
     */
    inline Cluster& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The release label for the Amazon EMR release. For Amazon EMR 3.x and 2.x
     * AMIs, use amiVersion instead instead of ReleaseLabel.</p>
     */
    inline Cluster& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The release label for the Amazon EMR release. For Amazon EMR 3.x and 2.x
     * AMIs, use amiVersion instead instead of ReleaseLabel.</p>
     */
    inline Cluster& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline bool GetAutoTerminate() const{ return m_autoTerminate; }

    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline void SetAutoTerminate(bool value) { m_autoTerminateHasBeenSet = true; m_autoTerminate = value; }

    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline Cluster& WithAutoTerminate(bool value) { SetAutoTerminate(value); return *this;}

    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline bool GetTerminationProtected() const{ return m_terminationProtected; }

    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }

    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline Cluster& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}

    /**
     * <p>Indicates whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and manage the job flow if they have the
     * proper policy permissions set. If this value is <code>false</code>, only the IAM
     * user that created the cluster can view and manage it. This value can be changed
     * using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }

    /**
     * <p>Indicates whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and manage the job flow if they have the
     * proper policy permissions set. If this value is <code>false</code>, only the IAM
     * user that created the cluster can view and manage it. This value can be changed
     * using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }

    /**
     * <p>Indicates whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and manage the job flow if they have the
     * proper policy permissions set. If this value is <code>false</code>, only the IAM
     * user that created the cluster can view and manage it. This value can be changed
     * using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline Cluster& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& WithApplications(Aws::Vector<Application>&& value) { SetApplications(value); return *this;}

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline Cluster& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline Cluster& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline Cluster& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline Cluster& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline Cluster& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

    /**
     * <p>An approximation of the cost of the job flow, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline int GetNormalizedInstanceHours() const{ return m_normalizedInstanceHours; }

    /**
     * <p>An approximation of the cost of the job flow, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline void SetNormalizedInstanceHours(int value) { m_normalizedInstanceHoursHasBeenSet = true; m_normalizedInstanceHours = value; }

    /**
     * <p>An approximation of the cost of the job flow, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an EC2 instance that is roughly four
     * times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline Cluster& WithNormalizedInstanceHours(int value) { SetNormalizedInstanceHours(value); return *this;}

    /**
     * <p>The public DNS name of the master EC2 instance.</p>
     */
    inline const Aws::String& GetMasterPublicDnsName() const{ return m_masterPublicDnsName; }

    /**
     * <p>The public DNS name of the master EC2 instance.</p>
     */
    inline void SetMasterPublicDnsName(const Aws::String& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = value; }

    /**
     * <p>The public DNS name of the master EC2 instance.</p>
     */
    inline void SetMasterPublicDnsName(Aws::String&& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = value; }

    /**
     * <p>The public DNS name of the master EC2 instance.</p>
     */
    inline void SetMasterPublicDnsName(const char* value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName.assign(value); }

    /**
     * <p>The public DNS name of the master EC2 instance.</p>
     */
    inline Cluster& WithMasterPublicDnsName(const Aws::String& value) { SetMasterPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name of the master EC2 instance.</p>
     */
    inline Cluster& WithMasterPublicDnsName(Aws::String&& value) { SetMasterPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name of the master EC2 instance.</p>
     */
    inline Cluster& WithMasterPublicDnsName(const char* value) { SetMasterPublicDnsName(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * Configurations supplied to the EMR cluster.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * Configurations supplied to the EMR cluster.</p>
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * Configurations supplied to the EMR cluster.</p>
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * Configurations supplied to the EMR cluster.</p>
     */
    inline Cluster& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * Configurations supplied to the EMR cluster.</p>
     */
    inline Cluster& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(value); return *this;}

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * Configurations supplied to the EMR cluster.</p>
     */
    inline Cluster& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <note> <p>Amazon EMR releases 4.x or later.</p> </note> <p>The list of
     * Configurations supplied to the EMR cluster.</p>
     */
    inline Cluster& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline Cluster& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline Cluster& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline Cluster& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ClusterStatus m_status;
    bool m_statusHasBeenSet;
    Ec2InstanceAttributes m_ec2InstanceAttributes;
    bool m_ec2InstanceAttributesHasBeenSet;
    Aws::String m_logUri;
    bool m_logUriHasBeenSet;
    Aws::String m_requestedAmiVersion;
    bool m_requestedAmiVersionHasBeenSet;
    Aws::String m_runningAmiVersion;
    bool m_runningAmiVersionHasBeenSet;
    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet;
    bool m_autoTerminate;
    bool m_autoTerminateHasBeenSet;
    bool m_terminationProtected;
    bool m_terminationProtectedHasBeenSet;
    bool m_visibleToAllUsers;
    bool m_visibleToAllUsersHasBeenSet;
    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
    int m_normalizedInstanceHours;
    bool m_normalizedInstanceHoursHasBeenSet;
    Aws::String m_masterPublicDnsName;
    bool m_masterPublicDnsNameHasBeenSet;
    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet;
    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
