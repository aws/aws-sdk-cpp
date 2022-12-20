/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/LaunchProfileState.h>
#include <aws/nimble/model/LaunchProfileStatusCode.h>
#include <aws/nimble/model/StreamConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/nimble/model/ValidationResult.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A launch profile controls your artist workforce’s access to studio
   * components, like compute farms, shared file systems, managed file systems, and
   * license server configurations, as well as instance types and Amazon Machine
   * Images (AMIs). </p> <p>Studio administrators create launch profiles in the
   * Nimble Studio console. Artists can use their launch profiles to launch an
   * instance from the Nimble Studio portal. Each user’s launch profile defines how
   * they can launch a streaming session. By default, studio admins can use all
   * launch profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/LaunchProfile">AWS
   * API Reference</a></p>
   */
  class LaunchProfile
  {
  public:
    AWS_NIMBLESTUDIO_API LaunchProfile();
    AWS_NIMBLESTUDIO_API LaunchProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API LaunchProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline LaunchProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline LaunchProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline LaunchProfile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline LaunchProfile& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline LaunchProfile& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline LaunchProfile& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline LaunchProfile& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that created the launch profile.</p>
     */
    inline LaunchProfile& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline LaunchProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline LaunchProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of the launch profile.</p>
     */
    inline LaunchProfile& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2SubnetIds() const{ return m_ec2SubnetIds; }

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline bool Ec2SubnetIdsHasBeenSet() const { return m_ec2SubnetIdsHasBeenSet; }

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline void SetEc2SubnetIds(const Aws::Vector<Aws::String>& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds = value; }

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline void SetEc2SubnetIds(Aws::Vector<Aws::String>&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds = std::move(value); }

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline LaunchProfile& WithEc2SubnetIds(const Aws::Vector<Aws::String>& value) { SetEc2SubnetIds(value); return *this;}

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline LaunchProfile& WithEc2SubnetIds(Aws::Vector<Aws::String>&& value) { SetEc2SubnetIds(std::move(value)); return *this;}

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline LaunchProfile& AddEc2SubnetIds(const Aws::String& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(value); return *this; }

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline LaunchProfile& AddEc2SubnetIds(Aws::String&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Unique identifiers for a collection of EC2 subnets.</p>
     */
    inline LaunchProfile& AddEc2SubnetIds(const char* value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(value); return *this; }


    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline LaunchProfile& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline LaunchProfile& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline LaunchProfile& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}


    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchProfileProtocolVersions() const{ return m_launchProfileProtocolVersions; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline bool LaunchProfileProtocolVersionsHasBeenSet() const { return m_launchProfileProtocolVersionsHasBeenSet; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline void SetLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = value; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline void SetLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = std::move(value); }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline LaunchProfile& WithLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { SetLaunchProfileProtocolVersions(value); return *this;}

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline LaunchProfile& WithLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { SetLaunchProfileProtocolVersions(std::move(value)); return *this;}

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline LaunchProfile& AddLaunchProfileProtocolVersions(const Aws::String& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline LaunchProfile& AddLaunchProfileProtocolVersions(Aws::String&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline LaunchProfile& AddLaunchProfileProtocolVersions(const char* value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }


    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline LaunchProfile& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline LaunchProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the launch profile.</p>
     */
    inline LaunchProfile& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current state.</p>
     */
    inline const LaunchProfileState& GetState() const{ return m_state; }

    /**
     * <p>The current state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(const LaunchProfileState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(LaunchProfileState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state.</p>
     */
    inline LaunchProfile& WithState(const LaunchProfileState& value) { SetState(value); return *this;}

    /**
     * <p>The current state.</p>
     */
    inline LaunchProfile& WithState(LaunchProfileState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status code.</p>
     */
    inline const LaunchProfileStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code.</p>
     */
    inline void SetStatusCode(const LaunchProfileStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code.</p>
     */
    inline void SetStatusCode(LaunchProfileStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code.</p>
     */
    inline LaunchProfile& WithStatusCode(const LaunchProfileStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code.</p>
     */
    inline LaunchProfile& WithStatusCode(LaunchProfileStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The status message for the launch profile.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the launch profile.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the launch profile.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the launch profile.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the launch profile.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the launch profile.</p>
     */
    inline LaunchProfile& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the launch profile.</p>
     */
    inline LaunchProfile& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the launch profile.</p>
     */
    inline LaunchProfile& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline const StreamConfiguration& GetStreamConfiguration() const{ return m_streamConfiguration; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline void SetStreamConfiguration(const StreamConfiguration& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = value; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline void SetStreamConfiguration(StreamConfiguration&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::move(value); }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline LaunchProfile& WithStreamConfiguration(const StreamConfiguration& value) { SetStreamConfiguration(value); return *this;}

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline LaunchProfile& WithStreamConfiguration(StreamConfiguration&& value) { SetStreamConfiguration(std::move(value)); return *this;}


    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStudioComponentIds() const{ return m_studioComponentIds; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline bool StudioComponentIdsHasBeenSet() const { return m_studioComponentIdsHasBeenSet; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline void SetStudioComponentIds(const Aws::Vector<Aws::String>& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = value; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline void SetStudioComponentIds(Aws::Vector<Aws::String>&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = std::move(value); }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline LaunchProfile& WithStudioComponentIds(const Aws::Vector<Aws::String>& value) { SetStudioComponentIds(value); return *this;}

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline LaunchProfile& WithStudioComponentIds(Aws::Vector<Aws::String>&& value) { SetStudioComponentIds(std::move(value)); return *this;}

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline LaunchProfile& AddStudioComponentIds(const Aws::String& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline LaunchProfile& AddStudioComponentIds(Aws::String&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline LaunchProfile& AddStudioComponentIds(const char* value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }


    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline LaunchProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline LaunchProfile& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline LaunchProfile& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline LaunchProfile& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline LaunchProfile& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline LaunchProfile& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The list of the latest validation results.</p>
     */
    inline const Aws::Vector<ValidationResult>& GetValidationResults() const{ return m_validationResults; }

    /**
     * <p>The list of the latest validation results.</p>
     */
    inline bool ValidationResultsHasBeenSet() const { return m_validationResultsHasBeenSet; }

    /**
     * <p>The list of the latest validation results.</p>
     */
    inline void SetValidationResults(const Aws::Vector<ValidationResult>& value) { m_validationResultsHasBeenSet = true; m_validationResults = value; }

    /**
     * <p>The list of the latest validation results.</p>
     */
    inline void SetValidationResults(Aws::Vector<ValidationResult>&& value) { m_validationResultsHasBeenSet = true; m_validationResults = std::move(value); }

    /**
     * <p>The list of the latest validation results.</p>
     */
    inline LaunchProfile& WithValidationResults(const Aws::Vector<ValidationResult>& value) { SetValidationResults(value); return *this;}

    /**
     * <p>The list of the latest validation results.</p>
     */
    inline LaunchProfile& WithValidationResults(Aws::Vector<ValidationResult>&& value) { SetValidationResults(std::move(value)); return *this;}

    /**
     * <p>The list of the latest validation results.</p>
     */
    inline LaunchProfile& AddValidationResults(const ValidationResult& value) { m_validationResultsHasBeenSet = true; m_validationResults.push_back(value); return *this; }

    /**
     * <p>The list of the latest validation results.</p>
     */
    inline LaunchProfile& AddValidationResults(ValidationResult&& value) { m_validationResultsHasBeenSet = true; m_validationResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2SubnetIds;
    bool m_ec2SubnetIdsHasBeenSet = false;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchProfileProtocolVersions;
    bool m_launchProfileProtocolVersionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LaunchProfileState m_state;
    bool m_stateHasBeenSet = false;

    LaunchProfileStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    StreamConfiguration m_streamConfiguration;
    bool m_streamConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_studioComponentIds;
    bool m_studioComponentIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Vector<ValidationResult> m_validationResults;
    bool m_validationResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
