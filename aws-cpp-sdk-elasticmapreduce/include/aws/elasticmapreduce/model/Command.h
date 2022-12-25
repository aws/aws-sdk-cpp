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
   * <p>An entity describing an executable that runs on a cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Command">AWS
   * API Reference</a></p>
   */
  class Command
  {
  public:
    AWS_EMR_API Command();
    AWS_EMR_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the command.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the command.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the command.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the command.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the command.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the command.</p>
     */
    inline Command& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the command.</p>
     */
    inline Command& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the command.</p>
     */
    inline Command& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline const Aws::String& GetScriptPath() const{ return m_scriptPath; }

    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline bool ScriptPathHasBeenSet() const { return m_scriptPathHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline void SetScriptPath(const Aws::String& value) { m_scriptPathHasBeenSet = true; m_scriptPath = value; }

    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline void SetScriptPath(Aws::String&& value) { m_scriptPathHasBeenSet = true; m_scriptPath = std::move(value); }

    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline void SetScriptPath(const char* value) { m_scriptPathHasBeenSet = true; m_scriptPath.assign(value); }

    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline Command& WithScriptPath(const Aws::String& value) { SetScriptPath(value); return *this;}

    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline Command& WithScriptPath(Aws::String&& value) { SetScriptPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the command script.</p>
     */
    inline Command& WithScriptPath(const char* value) { SetScriptPath(value); return *this;}


    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline Command& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline Command& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(std::move(value)); return *this;}

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline Command& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline Command& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }

    /**
     * <p>Arguments for Amazon EMR to pass to the command for execution.</p>
     */
    inline Command& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_scriptPath;
    bool m_scriptPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
