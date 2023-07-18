﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A file that contain environment variables to pass to a
   * container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails
  {
  public:
    AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails();
    AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of environment file.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of environment file.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of environment file.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of environment file.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of environment file.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of environment file.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of environment file.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of environment file.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The ARN of the S3 object that contains the environment variable file.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
