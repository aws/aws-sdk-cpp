/**
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
   * beginning with <code>#</code> are treated as comments and are ignored. For more
   * information on the environment variable file syntax, see <a
   * href="https://docs.docker.com/compose/env-file/">Declare default environment
   * variables in file</a>.</p> <p>If there are environment variables specified using
   * the <code>environment</code> parameter in a container definition, they take
   * precedence over the variables contained within an environment file. If multiple
   * environment files are specified that contain the same variable, they are
   * processed from the top down. It is recommended to use unique variable names. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
   * environment variables</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> <p>This field is only valid for containers in Fargate tasks that
   * use platform version <code>1.4.0</code> or later.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/EnvironmentFile">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API EnvironmentFile
  {
  public:
    EnvironmentFile();
    EnvironmentFile(Aws::Utils::Json::JsonView jsonValue);
    EnvironmentFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline EnvironmentFile& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline EnvironmentFile& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline EnvironmentFile& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline const EnvironmentFileType& GetType() const{ return m_type; }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline void SetType(const EnvironmentFileType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline void SetType(EnvironmentFileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline EnvironmentFile& WithType(const EnvironmentFileType& value) { SetType(value); return *this;}

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline EnvironmentFile& WithType(EnvironmentFileType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    EnvironmentFileType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
