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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Tag.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API UpdateProjectRequest : public CodeBuildRequest
  {
  public:
    UpdateProjectRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline UpdateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline UpdateProjectRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p> <note> <p>You cannot change a build
     * project's name.</p> </note>
     */
    inline UpdateProjectRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A new or replacement description of the build project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithSource(const ProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information to be changed about the build input source code for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithSource(ProjectSource&& value) { SetSource(value); return *this;}

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline const ProjectArtifacts& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline void SetArtifacts(const ProjectArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline void SetArtifacts(ProjectArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithArtifacts(const ProjectArtifacts& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information to be changed about the build output artifacts for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithArtifacts(ProjectArtifacts&& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information to be changed about the build environment for the build
     * project.</p>
     */
    inline UpdateProjectRequest& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline UpdateProjectRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline UpdateProjectRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The replacement ARN of the AWS Identity and Access Management (IAM) role that
     * enables AWS CodeBuild to interact with dependent AWS services on behalf of the
     * AWS account.</p>
     */
    inline UpdateProjectRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

    /**
     * <p>The replacement value in minutes, from 5 to 480 (8 hours), for AWS CodeBuild
     * to wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>The replacement value in minutes, from 5 to 480 (8 hours), for AWS CodeBuild
     * to wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>The replacement value in minutes, from 5 to 480 (8 hours), for AWS CodeBuild
     * to wait before timing out any related build that did not get marked as
     * completed.</p>
     */
    inline UpdateProjectRequest& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

    /**
     * <p>The replacement AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to be used for encrypting the build output artifacts.</p> <p>You can
     * specify either the CMK's Amazon Resource Name (ARN) or, if available, the CMK's
     * alias (using the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The replacement AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to be used for encrypting the build output artifacts.</p> <p>You can
     * specify either the CMK's Amazon Resource Name (ARN) or, if available, the CMK's
     * alias (using the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The replacement AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to be used for encrypting the build output artifacts.</p> <p>You can
     * specify either the CMK's Amazon Resource Name (ARN) or, if available, the CMK's
     * alias (using the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The replacement AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to be used for encrypting the build output artifacts.</p> <p>You can
     * specify either the CMK's Amazon Resource Name (ARN) or, if available, the CMK's
     * alias (using the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The replacement AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to be used for encrypting the build output artifacts.</p> <p>You can
     * specify either the CMK's Amazon Resource Name (ARN) or, if available, the CMK's
     * alias (using the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline UpdateProjectRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The replacement AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to be used for encrypting the build output artifacts.</p> <p>You can
     * specify either the CMK's Amazon Resource Name (ARN) or, if available, the CMK's
     * alias (using the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline UpdateProjectRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The replacement AWS Key Management Service (AWS KMS) customer master key
     * (CMK) to be used for encrypting the build output artifacts.</p> <p>You can
     * specify either the CMK's Amazon Resource Name (ARN) or, if available, the CMK's
     * alias (using the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline UpdateProjectRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The replacement set of tags for this build project.</p> <p>These tags are
     * available for use by AWS services that support AWS CodeBuild build project
     * tags.</p>
     */
    inline UpdateProjectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ProjectSource m_source;
    bool m_sourceHasBeenSet;
    ProjectArtifacts m_artifacts;
    bool m_artifactsHasBeenSet;
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
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
