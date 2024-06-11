﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/EnvironmentFileType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>A list of files containing the environment variables to pass to a container.
   * You can specify up to ten environment files. The file must have a
   * <code>.env</code> file extension. Each line in an environment file should
   * contain an environment variable in <code>VARIABLE=VALUE</code> format. Lines
   * beginning with <code>#</code> are treated as comments and are ignored.</p> <p>If
   * there are environment variables specified using the <code>environment</code>
   * parameter in a container definition, they take precedence over the variables
   * contained within an environment file. If multiple environment files are
   * specified that contain the same variable, they're processed from the top down.
   * We recommend that you use unique variable names. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/use-environment-file.html">Use
   * a file to pass environment variables to a container</a> in the <i>Amazon Elastic
   * Container Service Developer Guide</i>.</p> <p>Environment variable files are
   * objects in Amazon S3 and all Amazon S3 security considerations apply. </p>
   * <p>You must use the following platforms for the Fargate launch type:</p> <ul>
   * <li> <p>Linux platform version <code>1.4.0</code> or later.</p> </li> <li>
   * <p>Windows platform version <code>1.0.0</code> or later.</p> </li> </ul>
   * <p>Consider the following when using the Fargate launch type:</p> <ul> <li>
   * <p>The file is handled like a native Docker env-file.</p> </li> <li> <p>There is
   * no support for shell escape handling.</p> </li> <li> <p>The container entry
   * point interperts the <code>VARIABLE</code> values.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/EnvironmentFile">AWS
   * API Reference</a></p>
   */
  class EnvironmentFile
  {
  public:
    AWS_ECS_API EnvironmentFile();
    AWS_ECS_API EnvironmentFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API EnvironmentFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline EnvironmentFile& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline EnvironmentFile& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline EnvironmentFile& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type to use. Environment files are objects in Amazon S3. The only
     * supported value is <code>s3</code>.</p>
     */
    inline const EnvironmentFileType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EnvironmentFileType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EnvironmentFileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline EnvironmentFile& WithType(const EnvironmentFileType& value) { SetType(value); return *this;}
    inline EnvironmentFile& WithType(EnvironmentFileType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    EnvironmentFileType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
