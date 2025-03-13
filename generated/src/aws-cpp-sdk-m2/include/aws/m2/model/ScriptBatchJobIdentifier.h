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
   * <p>A batch job identifier in which the batch job to run is identified by the
   * script name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ScriptBatchJobIdentifier">AWS
   * API Reference</a></p>
   */
  class ScriptBatchJobIdentifier
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ScriptBatchJobIdentifier() = default;
    AWS_MAINFRAMEMODERNIZATION_API ScriptBatchJobIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API ScriptBatchJobIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the script containing the batch job definition.</p>
     */
    inline const Aws::String& GetScriptName() const { return m_scriptName; }
    inline bool ScriptNameHasBeenSet() const { return m_scriptNameHasBeenSet; }
    template<typename ScriptNameT = Aws::String>
    void SetScriptName(ScriptNameT&& value) { m_scriptNameHasBeenSet = true; m_scriptName = std::forward<ScriptNameT>(value); }
    template<typename ScriptNameT = Aws::String>
    ScriptBatchJobIdentifier& WithScriptName(ScriptNameT&& value) { SetScriptName(std::forward<ScriptNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scriptName;
    bool m_scriptNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
