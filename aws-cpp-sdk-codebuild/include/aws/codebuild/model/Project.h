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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/Tag.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about a build project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Project">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API Project
  {
  public:
    Project();
    Project(const Aws::Utils::Json::JsonValue& jsonValue);
    Project& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the build project.</p>
     */
    inline Project& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline Project& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline Project& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline Project& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline Project& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build project.</p>
     */
    inline Project& WithArn(const char* value) { SetArn(value); return *this;}

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
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline Project& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline Project& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description that makes the build project easy to identify.</p>
     */
    inline Project& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline Project& WithSource(const ProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline Project& WithSource(ProjectSource&& value) { SetSource(value); return *this;}

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
    inline void SetArtifacts(ProjectArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline Project& WithArtifacts(const ProjectArtifacts& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the build output artifacts for the build project.</p>
     */
    inline Project& WithArtifacts(ProjectArtifacts&& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline Project& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline Project& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(value); return *this;}

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
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

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
    inline Project& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline Project& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that enables AWS
     * CodeBuild to interact with dependent AWS services on behalf of the AWS
     * account.</p>
     */
    inline Project& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

    /**
     * <p>How long, in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait
     * before timing out any related build that did not get marked as completed. The
     * default is 60 minutes.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>How long, in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait
     * before timing out any related build that did not get marked as completed. The
     * default is 60 minutes.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>How long, in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait
     * before timing out any related build that did not get marked as completed. The
     * default is 60 minutes.</p>
     */
    inline Project& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>This is expressed either as
     * the CMK's Amazon Resource Name (ARN) or, if specified, the CMK's alias (using
     * the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>This is expressed either as
     * the CMK's Amazon Resource Name (ARN) or, if specified, the CMK's alias (using
     * the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>This is expressed either as
     * the CMK's Amazon Resource Name (ARN) or, if specified, the CMK's alias (using
     * the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>This is expressed either as
     * the CMK's Amazon Resource Name (ARN) or, if specified, the CMK's alias (using
     * the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>This is expressed either as
     * the CMK's Amazon Resource Name (ARN) or, if specified, the CMK's alias (using
     * the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline Project& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>This is expressed either as
     * the CMK's Amazon Resource Name (ARN) or, if specified, the CMK's alias (using
     * the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline Project& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <p>This is expressed either as
     * the CMK's Amazon Resource Name (ARN) or, if specified, the CMK's alias (using
     * the format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline Project& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The tags for this build project.</p> <p>These tags are available for use by
     * AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for this build project.</p> <p>These tags are available for use by
     * AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for this build project.</p> <p>These tags are available for use by
     * AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for this build project.</p> <p>These tags are available for use by
     * AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline Project& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for this build project.</p> <p>These tags are available for use by
     * AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline Project& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for this build project.</p> <p>These tags are available for use by
     * AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline Project& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for this build project.</p> <p>These tags are available for use by
     * AWS services that support AWS CodeBuild build project tags.</p>
     */
    inline Project& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>When the build project was created, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>When the build project was created, expressed in Unix time format.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the build project was created, expressed in Unix time format.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the build project was created, expressed in Unix time format.</p>
     */
    inline Project& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>When the build project was created, expressed in Unix time format.</p>
     */
    inline Project& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(value); return *this;}

    /**
     * <p>When the build project's settings were last modified, expressed in Unix time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>When the build project's settings were last modified, expressed in Unix time
     * format.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>When the build project's settings were last modified, expressed in Unix time
     * format.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>When the build project's settings were last modified, expressed in Unix time
     * format.</p>
     */
    inline Project& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>When the build project's settings were last modified, expressed in Unix time
     * format.</p>
     */
    inline Project& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
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
    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;
    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
