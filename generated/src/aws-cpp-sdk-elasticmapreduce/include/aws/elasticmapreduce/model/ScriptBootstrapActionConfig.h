/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ScriptBootstrapActionConfig
  {
  public:
    AWS_EMR_API ScriptBootstrapActionConfig();
    AWS_EMR_API ScriptBootstrapActionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ScriptBootstrapActionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
     */
    inline ScriptBootstrapActionConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
     */
    inline ScriptBootstrapActionConfig& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>Location in Amazon S3 of the script to run during a bootstrap action.</p>
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
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
