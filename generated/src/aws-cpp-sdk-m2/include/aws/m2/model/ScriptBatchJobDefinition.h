/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A batch job definition contained in a script.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ScriptBatchJobDefinition">AWS
   * API Reference</a></p>
   */
  class ScriptBatchJobDefinition
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ScriptBatchJobDefinition();
    AWS_MAINFRAMEMODERNIZATION_API ScriptBatchJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API ScriptBatchJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline const Aws::String& GetScriptName() const{ return m_scriptName; }

    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline bool ScriptNameHasBeenSet() const { return m_scriptNameHasBeenSet; }

    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline void SetScriptName(const Aws::String& value) { m_scriptNameHasBeenSet = true; m_scriptName = value; }

    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline void SetScriptName(Aws::String&& value) { m_scriptNameHasBeenSet = true; m_scriptName = std::move(value); }

    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline void SetScriptName(const char* value) { m_scriptNameHasBeenSet = true; m_scriptName.assign(value); }

    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline ScriptBatchJobDefinition& WithScriptName(const Aws::String& value) { SetScriptName(value); return *this;}

    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline ScriptBatchJobDefinition& WithScriptName(Aws::String&& value) { SetScriptName(std::move(value)); return *this;}

    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline ScriptBatchJobDefinition& WithScriptName(const char* value) { SetScriptName(value); return *this;}

  private:

    Aws::String m_scriptName;
    bool m_scriptNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
