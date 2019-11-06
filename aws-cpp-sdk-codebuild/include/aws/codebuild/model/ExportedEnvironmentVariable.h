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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about an exported environment variable. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ExportedEnvironmentVariable">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ExportedEnvironmentVariable
  {
  public:
    ExportedEnvironmentVariable();
    ExportedEnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    ExportedEnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline ExportedEnvironmentVariable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline ExportedEnvironmentVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of this exported environment variable. </p>
     */
    inline ExportedEnvironmentVariable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline ExportedEnvironmentVariable& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline ExportedEnvironmentVariable& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The value assigned to this exported environment variable. </p> <note> <p>
     * During a build, the value of a variable is available starting with the
     * <code>install</code> phase. It can be updated between the start of the
     * <code>install</code> phase and the end of the <code>post_build</code> phase.
     * After the <code>post_build</code> phase ends, the value of exported variables
     * cannot change.</p> </note>
     */
    inline ExportedEnvironmentVariable& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
