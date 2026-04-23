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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/model/ToolchainSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>The toolchain template file provided with the project request. AWS CodeStar
   * uses the template to provision the toolchain stack in AWS
   * CloudFormation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/Toolchain">AWS
   * API Reference</a></p>
   */
  class AWS_CODESTAR_API Toolchain
  {
  public:
    Toolchain();
    Toolchain(Aws::Utils::Json::JsonView jsonValue);
    Toolchain& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location where the toolchain template file provided with the
     * project request is stored. AWS CodeStar retrieves the file during project
     * creation.</p>
     */
    inline const ToolchainSource& GetSource() const{ return m_source; }

    /**
     * <p>The Amazon S3 location where the toolchain template file provided with the
     * project request is stored. AWS CodeStar retrieves the file during project
     * creation.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Amazon S3 location where the toolchain template file provided with the
     * project request is stored. AWS CodeStar retrieves the file during project
     * creation.</p>
     */
    inline void SetSource(const ToolchainSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Amazon S3 location where the toolchain template file provided with the
     * project request is stored. AWS CodeStar retrieves the file during project
     * creation.</p>
     */
    inline void SetSource(ToolchainSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Amazon S3 location where the toolchain template file provided with the
     * project request is stored. AWS CodeStar retrieves the file during project
     * creation.</p>
     */
    inline Toolchain& WithSource(const ToolchainSource& value) { SetSource(value); return *this;}

    /**
     * <p>The Amazon S3 location where the toolchain template file provided with the
     * project request is stored. AWS CodeStar retrieves the file during project
     * creation.</p>
     */
    inline Toolchain& WithSource(ToolchainSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline Toolchain& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline Toolchain& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The service role ARN for AWS CodeStar to use for the toolchain template
     * during stack provisioning.</p>
     */
    inline Toolchain& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStackParameters() const{ return m_stackParameters; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline bool StackParametersHasBeenSet() const { return m_stackParametersHasBeenSet; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline void SetStackParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_stackParametersHasBeenSet = true; m_stackParameters = value; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline void SetStackParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_stackParametersHasBeenSet = true; m_stackParameters = std::move(value); }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& WithStackParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetStackParameters(value); return *this;}

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& WithStackParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetStackParameters(std::move(value)); return *this;}

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& AddStackParameters(const Aws::String& key, const Aws::String& value) { m_stackParametersHasBeenSet = true; m_stackParameters.emplace(key, value); return *this; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& AddStackParameters(Aws::String&& key, const Aws::String& value) { m_stackParametersHasBeenSet = true; m_stackParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& AddStackParameters(const Aws::String& key, Aws::String&& value) { m_stackParametersHasBeenSet = true; m_stackParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& AddStackParameters(Aws::String&& key, Aws::String&& value) { m_stackParametersHasBeenSet = true; m_stackParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& AddStackParameters(const char* key, Aws::String&& value) { m_stackParametersHasBeenSet = true; m_stackParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& AddStackParameters(Aws::String&& key, const char* value) { m_stackParametersHasBeenSet = true; m_stackParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of parameter overrides to be passed into the toolchain template
     * during stack provisioning, if any.</p>
     */
    inline Toolchain& AddStackParameters(const char* key, const char* value) { m_stackParametersHasBeenSet = true; m_stackParameters.emplace(key, value); return *this; }

  private:

    ToolchainSource m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_stackParameters;
    bool m_stackParametersHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
