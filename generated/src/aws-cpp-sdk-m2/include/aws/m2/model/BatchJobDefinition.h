/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/FileBatchJobDefinition.h>
#include <aws/m2/model/ScriptBatchJobDefinition.h>
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
   * <p>Defines the details of a batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/BatchJobDefinition">AWS
   * API Reference</a></p>
   */
  class BatchJobDefinition
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API BatchJobDefinition() = default;
    AWS_MAINFRAMEMODERNIZATION_API BatchJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API BatchJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a file containing a batch job definition.</p>
     */
    inline const FileBatchJobDefinition& GetFileBatchJobDefinition() const { return m_fileBatchJobDefinition; }
    inline bool FileBatchJobDefinitionHasBeenSet() const { return m_fileBatchJobDefinitionHasBeenSet; }
    template<typename FileBatchJobDefinitionT = FileBatchJobDefinition>
    void SetFileBatchJobDefinition(FileBatchJobDefinitionT&& value) { m_fileBatchJobDefinitionHasBeenSet = true; m_fileBatchJobDefinition = std::forward<FileBatchJobDefinitionT>(value); }
    template<typename FileBatchJobDefinitionT = FileBatchJobDefinition>
    BatchJobDefinition& WithFileBatchJobDefinition(FileBatchJobDefinitionT&& value) { SetFileBatchJobDefinition(std::forward<FileBatchJobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A script containing a batch job definition.</p>
     */
    inline const ScriptBatchJobDefinition& GetScriptBatchJobDefinition() const { return m_scriptBatchJobDefinition; }
    inline bool ScriptBatchJobDefinitionHasBeenSet() const { return m_scriptBatchJobDefinitionHasBeenSet; }
    template<typename ScriptBatchJobDefinitionT = ScriptBatchJobDefinition>
    void SetScriptBatchJobDefinition(ScriptBatchJobDefinitionT&& value) { m_scriptBatchJobDefinitionHasBeenSet = true; m_scriptBatchJobDefinition = std::forward<ScriptBatchJobDefinitionT>(value); }
    template<typename ScriptBatchJobDefinitionT = ScriptBatchJobDefinition>
    BatchJobDefinition& WithScriptBatchJobDefinition(ScriptBatchJobDefinitionT&& value) { SetScriptBatchJobDefinition(std::forward<ScriptBatchJobDefinitionT>(value)); return *this;}
    ///@}
  private:

    FileBatchJobDefinition m_fileBatchJobDefinition;
    bool m_fileBatchJobDefinitionHasBeenSet = false;

    ScriptBatchJobDefinition m_scriptBatchJobDefinition;
    bool m_scriptBatchJobDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
