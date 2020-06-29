/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCodeBuildProjectEnvironment.h>
#include <aws/securityhub/model/AwsCodeBuildProjectSource.h>
#include <aws/securityhub/model/AwsCodeBuildProjectVpcConfig.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an AWS CodeBuild project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsCodeBuildProjectDetails
  {
  public:
    AwsCodeBuildProjectDetails();
    AwsCodeBuildProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsCodeBuildProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline AwsCodeBuildProjectDetails& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline AwsCodeBuildProjectDetails& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) used to
     * encrypt the build output artifacts.</p> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK alias (using the format
     * alias/alias-name). </p>
     */
    inline AwsCodeBuildProjectDetails& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline const AwsCodeBuildProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline void SetEnvironment(const AwsCodeBuildProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline void SetEnvironment(AwsCodeBuildProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithEnvironment(const AwsCodeBuildProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithEnvironment(AwsCodeBuildProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The name of the build project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the build project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline AwsCodeBuildProjectDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline const AwsCodeBuildProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline void SetSource(const AwsCodeBuildProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline void SetSource(AwsCodeBuildProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithSource(const AwsCodeBuildProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithSource(AwsCodeBuildProjectSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline AwsCodeBuildProjectDetails& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline AwsCodeBuildProjectDetails& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that enables AWS CodeBuild to interact with dependent
     * AWS services on behalf of the AWS account.</p>
     */
    inline AwsCodeBuildProjectDetails& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>Information about the VPC configuration that AWS CodeBuild accesses.</p>
     */
    inline const AwsCodeBuildProjectVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Information about the VPC configuration that AWS CodeBuild accesses.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>Information about the VPC configuration that AWS CodeBuild accesses.</p>
     */
    inline void SetVpcConfig(const AwsCodeBuildProjectVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>Information about the VPC configuration that AWS CodeBuild accesses.</p>
     */
    inline void SetVpcConfig(AwsCodeBuildProjectVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>Information about the VPC configuration that AWS CodeBuild accesses.</p>
     */
    inline AwsCodeBuildProjectDetails& WithVpcConfig(const AwsCodeBuildProjectVpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Information about the VPC configuration that AWS CodeBuild accesses.</p>
     */
    inline AwsCodeBuildProjectDetails& WithVpcConfig(AwsCodeBuildProjectVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;

    AwsCodeBuildProjectEnvironment m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AwsCodeBuildProjectSource m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    AwsCodeBuildProjectVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
