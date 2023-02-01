/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/EndpointState.h>
#include <aws/emr-containers/model/Certificate.h>
#include <aws/emr-containers/model/ConfigurationOverrides.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-containers/model/FailureReason.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>This entity represents the endpoint that is managed by Amazon EMR on
   * EKS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_EMRCONTAINERS_API Endpoint();
    AWS_EMRCONTAINERS_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline Endpoint& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline Endpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint.</p>
     */
    inline Endpoint& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline Endpoint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline Endpoint& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline Endpoint& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the endpoint.</p>
     */
    inline Endpoint& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }

    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = value; }

    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::move(value); }

    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId.assign(value); }

    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline Endpoint& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline Endpoint& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint's virtual cluster.</p>
     */
    inline Endpoint& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}


    /**
     * <p>The type of the endpoint.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the endpoint.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the endpoint.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the endpoint.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the endpoint.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the endpoint.</p>
     */
    inline Endpoint& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the endpoint.</p>
     */
    inline Endpoint& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the endpoint.</p>
     */
    inline Endpoint& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The state of the endpoint.</p>
     */
    inline const EndpointState& GetState() const{ return m_state; }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline void SetState(const EndpointState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline void SetState(EndpointState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the endpoint.</p>
     */
    inline Endpoint& WithState(const EndpointState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the endpoint.</p>
     */
    inline Endpoint& WithState(EndpointState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline Endpoint& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline Endpoint& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The EMR release version to be used for the endpoint.</p>
     */
    inline Endpoint& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline Endpoint& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline Endpoint& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The execution role ARN of the endpoint.</p>
     */
    inline Endpoint& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The certificate generated by emr control plane on customer behalf to secure
     * the managed endpoint.</p>
     */
    inline const Certificate& GetCertificateAuthority() const{ return m_certificateAuthority; }

    /**
     * <p>The certificate generated by emr control plane on customer behalf to secure
     * the managed endpoint.</p>
     */
    inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }

    /**
     * <p>The certificate generated by emr control plane on customer behalf to secure
     * the managed endpoint.</p>
     */
    inline void SetCertificateAuthority(const Certificate& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = value; }

    /**
     * <p>The certificate generated by emr control plane on customer behalf to secure
     * the managed endpoint.</p>
     */
    inline void SetCertificateAuthority(Certificate&& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = std::move(value); }

    /**
     * <p>The certificate generated by emr control plane on customer behalf to secure
     * the managed endpoint.</p>
     */
    inline Endpoint& WithCertificateAuthority(const Certificate& value) { SetCertificateAuthority(value); return *this;}

    /**
     * <p>The certificate generated by emr control plane on customer behalf to secure
     * the managed endpoint.</p>
     */
    inline Endpoint& WithCertificateAuthority(Certificate&& value) { SetCertificateAuthority(std::move(value)); return *this;}


    /**
     * <p>The configuration settings that are used to override existing configurations
     * for endpoints.</p>
     */
    inline const ConfigurationOverrides& GetConfigurationOverrides() const{ return m_configurationOverrides; }

    /**
     * <p>The configuration settings that are used to override existing configurations
     * for endpoints.</p>
     */
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }

    /**
     * <p>The configuration settings that are used to override existing configurations
     * for endpoints.</p>
     */
    inline void SetConfigurationOverrides(const ConfigurationOverrides& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = value; }

    /**
     * <p>The configuration settings that are used to override existing configurations
     * for endpoints.</p>
     */
    inline void SetConfigurationOverrides(ConfigurationOverrides&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::move(value); }

    /**
     * <p>The configuration settings that are used to override existing configurations
     * for endpoints.</p>
     */
    inline Endpoint& WithConfigurationOverrides(const ConfigurationOverrides& value) { SetConfigurationOverrides(value); return *this;}

    /**
     * <p>The configuration settings that are used to override existing configurations
     * for endpoints.</p>
     */
    inline Endpoint& WithConfigurationOverrides(ConfigurationOverrides&& value) { SetConfigurationOverrides(std::move(value)); return *this;}


    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }

    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }

    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }

    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }

    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }

    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline Endpoint& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}

    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline Endpoint& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}

    /**
     * <p>The server URL of the endpoint.</p>
     */
    inline Endpoint& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}


    /**
     * <p>The date and time when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the endpoint was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the endpoint was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the endpoint was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the endpoint was created.</p>
     */
    inline Endpoint& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the endpoint was created.</p>
     */
    inline Endpoint& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline const Aws::String& GetSecurityGroup() const{ return m_securityGroup; }

    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }

    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline void SetSecurityGroup(const Aws::String& value) { m_securityGroupHasBeenSet = true; m_securityGroup = value; }

    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline void SetSecurityGroup(Aws::String&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::move(value); }

    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline void SetSecurityGroup(const char* value) { m_securityGroupHasBeenSet = true; m_securityGroup.assign(value); }

    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline Endpoint& WithSecurityGroup(const Aws::String& value) { SetSecurityGroup(value); return *this;}

    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline Endpoint& WithSecurityGroup(Aws::String&& value) { SetSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>The security group configuration of the endpoint. </p>
     */
    inline Endpoint& WithSecurityGroup(const char* value) { SetSecurityGroup(value); return *this;}


    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline Endpoint& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline Endpoint& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline Endpoint& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline Endpoint& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnet IDs of the endpoint. </p>
     */
    inline Endpoint& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline const Aws::String& GetStateDetails() const{ return m_stateDetails; }

    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }

    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline void SetStateDetails(const Aws::String& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = value; }

    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline void SetStateDetails(Aws::String&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::move(value); }

    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline void SetStateDetails(const char* value) { m_stateDetailsHasBeenSet = true; m_stateDetails.assign(value); }

    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline Endpoint& WithStateDetails(const Aws::String& value) { SetStateDetails(value); return *this;}

    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline Endpoint& WithStateDetails(Aws::String&& value) { SetStateDetails(std::move(value)); return *this;}

    /**
     * <p> Additional details of the endpoint state. </p>
     */
    inline Endpoint& WithStateDetails(const char* value) { SetStateDetails(value); return *this;}


    /**
     * <p> The reasons why the endpoint has failed. </p>
     */
    inline const FailureReason& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p> The reasons why the endpoint has failed. </p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p> The reasons why the endpoint has failed. </p>
     */
    inline void SetFailureReason(const FailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p> The reasons why the endpoint has failed. </p>
     */
    inline void SetFailureReason(FailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p> The reasons why the endpoint has failed. </p>
     */
    inline Endpoint& WithFailureReason(const FailureReason& value) { SetFailureReason(value); return *this;}

    /**
     * <p> The reasons why the endpoint has failed. </p>
     */
    inline Endpoint& WithFailureReason(FailureReason&& value) { SetFailureReason(std::move(value)); return *this;}


    /**
     * <p>The tags of the endpoint. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the endpoint. </p>
     */
    inline Endpoint& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    EndpointState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Certificate m_certificateAuthority;
    bool m_certificateAuthorityHasBeenSet = false;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_securityGroup;
    bool m_securityGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    FailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
