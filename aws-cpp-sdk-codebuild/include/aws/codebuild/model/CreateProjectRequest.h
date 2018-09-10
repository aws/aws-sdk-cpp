﻿/*
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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/codebuild/model/ProjectCache.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API CreateProjectRequest : public CodeBuildRequest
  {
  public:
    CreateProjectRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the build project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the build project.</p>
     */
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the build input source code for the build project.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information about the build input source code for the build project.</p>
     */
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the build input source code for the build project.</p>
     */
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Information about the build input source code for the build project.</p>
     */
    inline CreateProjectRequest& WithSource(const ProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the build input source code for the build project.</p>
     */
    inline CreateProjectRequest& WithSource(ProjectSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const{ return m_secondarySources; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySources(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = value; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySources(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::move(value); }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline CreateProjectRequest& WithSecondarySources(const Aws::Vector<ProjectSource>& value) { SetSecondarySources(value); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline CreateProjectRequest& WithSecondarySources(Aws::Vector<ProjectSource>&& value) { SetSecondarySources(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline CreateProjectRequest& AddSecondarySources(const ProjectSource& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline CreateProjectRequest& AddSecondarySources(ProjectSource&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline void SetArtifacts(const ProjectArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline void SetArtifacts(ProjectArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }

    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline CreateProjectRequest& WithArtifacts(const ProjectArtifacts& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline CreateProjectRequest& WithArtifacts(ProjectArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<ProjectArtifacts>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline void SetSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline void SetSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline CreateProjectRequest& WithSecondaryArtifacts(const Aws::Vector<ProjectArtifacts>& value) { SetSecondaryArtifacts(value); return *this;}

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline CreateProjectRequest& WithSecondaryArtifacts(Aws::Vector<ProjectArtifacts>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline CreateProjectRequest& AddSecondaryArtifacts(const ProjectArtifacts& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline CreateProjectRequest& AddSecondaryArtifacts(ProjectArtifacts&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline const ProjectCache& GetCache() const{ return m_cache; }

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline void SetCache(const ProjectCache& value) { m_cacheHasBeenSet = true; m_cache = value; }

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline void SetCache(ProjectCache&& value) { m_cacheHasBeenSet = true; m_cache = std::move(value); }

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline CreateProjectRequest& WithCache(const ProjectCache& value) { SetCache(value); return *this;}

    /**
     * <p>Stores recently used information so that it can be quickly accessed at a
     * later time.</p>
     */
    inline CreateProjectRequest& WithCache(ProjectCache&& value) { SetCache(std::move(value)); return *this;}


    /**
     * <p>Information about the build environment for the build project.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information about the build environment for the build project.</p>
     */
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for the build project.</p>
     */
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Information about the build environment for the build project.</p>
     */
    inline CreateProjectRequest& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information about the build environment for the build project.</p>
     */
    inline CreateProjectRequest& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline CreateProjectRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline CreateProjectRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline CreateProjectRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>How long, in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait
     * until timing out any build that has not been marked as completed. The default is
     * 60 minutes.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>How long, in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait
     * until timing out any build that has not been marked as completed. The default is
     * 60 minutes.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>How long, in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait
     * until timing out any build that has not been marked as completed. The default is
     * 60 minutes.</p>
     */
    inline CreateProjectRequest& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>You can specify either the
     * CMK's Amazon Resource Name (ARN) or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>You can specify either the
     * CMK's Amazon Resource Name (ARN) or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>You can specify either the
     * CMK's Amazon Resource Name (ARN) or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>You can specify either the
     * CMK's Amazon Resource Name (ARN) or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>You can specify either the
     * CMK's Amazon Resource Name (ARN) or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline CreateProjectRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>You can specify either the
     * CMK's Amazon Resource Name (ARN) or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline CreateProjectRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>You can specify either the
     * CMK's Amazon Resource Name (ARN) or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline CreateProjectRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>A set of tags for this build project.</p> <p>These tags are available for use
     * by AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags for this build project.</p> <p>These tags are available for use
     * by AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A set of tags for this build project.</p> <p>These tags are available for use
     * by AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A set of tags for this build project.</p> <p>These tags are available for use
     * by AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline CreateProjectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags for this build project.</p> <p>These tags are available for use
     * by AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline CreateProjectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags for this build project.</p> <p>These tags are available for use
     * by AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline CreateProjectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A set of tags for this build project.</p> <p>These tags are available for use
     * by AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline CreateProjectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline CreateProjectRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>VpcConfig enables AWS CodeBuild to access resources in an Amazon VPC.</p>
     */
    inline CreateProjectRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Set this to true to generate a publicly-accessible URL for your project's
     * build badge.</p>
     */
    inline bool GetBadgeEnabled() const{ return m_badgeEnabled; }

    /**
     * <p>Set this to true to generate a publicly-accessible URL for your project's
     * build badge.</p>
     */
    inline void SetBadgeEnabled(bool value) { m_badgeEnabledHasBeenSet = true; m_badgeEnabled = value; }

    /**
     * <p>Set this to true to generate a publicly-accessible URL for your project's
     * build badge.</p>
     */
    inline CreateProjectRequest& WithBadgeEnabled(bool value) { SetBadgeEnabled(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ProjectSource m_source;
    bool m_sourceHasBeenSet;

    Aws::Vector<ProjectSource> m_secondarySources;
    bool m_secondarySourcesHasBeenSet;

    ProjectArtifacts m_artifacts;
    bool m_artifactsHasBeenSet;

    Aws::Vector<ProjectArtifacts> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet;

    ProjectCache m_cache;
    bool m_cacheHasBeenSet;

    ProjectEnvironment m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    bool m_badgeEnabled;
    bool m_badgeEnabledHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
