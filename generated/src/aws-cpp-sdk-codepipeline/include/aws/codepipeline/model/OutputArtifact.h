/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the output of an action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/OutputArtifact">AWS
   * API Reference</a></p>
   */
  class OutputArtifact
  {
  public:
    AWS_CODEPIPELINE_API OutputArtifact() = default;
    AWS_CODEPIPELINE_API OutputArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API OutputArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the output of an artifact, such as "My App".</p> <p>The input
     * artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p> <p>Output artifact names must be unique within
     * a pipeline.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OutputArtifact& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files that you want to associate with the output artifact that will be
     * exported from the compute action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = Aws::Vector<Aws::String>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<Aws::String>>
    OutputArtifact& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = Aws::String>
    OutputArtifact& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_files;
    bool m_filesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
