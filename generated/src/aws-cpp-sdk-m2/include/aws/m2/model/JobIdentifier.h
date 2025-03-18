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
   * <p>Identifies a specific batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/JobIdentifier">AWS
   * API Reference</a></p>
   */
  class JobIdentifier
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API JobIdentifier() = default;
    AWS_MAINFRAMEMODERNIZATION_API JobIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API JobIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the file that contains the batch job definition.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    JobIdentifier& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the script that contains the batch job definition.</p>
     */
    inline const Aws::String& GetScriptName() const { return m_scriptName; }
    inline bool ScriptNameHasBeenSet() const { return m_scriptNameHasBeenSet; }
    template<typename ScriptNameT = Aws::String>
    void SetScriptName(ScriptNameT&& value) { m_scriptNameHasBeenSet = true; m_scriptName = std::forward<ScriptNameT>(value); }
    template<typename ScriptNameT = Aws::String>
    JobIdentifier& WithScriptName(ScriptNameT&& value) { SetScriptName(std::forward<ScriptNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_scriptName;
    bool m_scriptNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
