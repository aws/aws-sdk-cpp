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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration of the script to run during a bootstrap action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ScriptBootstrapActionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ScriptBootstrapActionConfig
  {
  public:
    ScriptBootstrapActionConfig();
    ScriptBootstrapActionConfig(Aws::Utils::Json::JsonView jsonValue);
    ScriptBootstrapActionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline ScriptBootstrapActionConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline ScriptBootstrapActionConfig& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>Location of the script to run during a bootstrap action. Can be either a
     * location in Amazon S3 or on a local file system.</p>
     */
    inline ScriptBootstrapActionConfig& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline ScriptBootstrapActionConfig& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline ScriptBootstrapActionConfig& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(std::move(value)); return *this;}

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline ScriptBootstrapActionConfig& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline ScriptBootstrapActionConfig& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of command line arguments to pass to the bootstrap action script.</p>
     */
    inline ScriptBootstrapActionConfig& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
