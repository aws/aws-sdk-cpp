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
    AWS_CODEPIPELINE_API OutputArtifact();
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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OutputArtifact& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OutputArtifact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OutputArtifact& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files that you want to associate with the output artifact that will be
     * exported from the compute action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFiles() const{ return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    inline void SetFiles(const Aws::Vector<Aws::String>& value) { m_filesHasBeenSet = true; m_files = value; }
    inline void SetFiles(Aws::Vector<Aws::String>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }
    inline OutputArtifact& WithFiles(const Aws::Vector<Aws::String>& value) { SetFiles(value); return *this;}
    inline OutputArtifact& WithFiles(Aws::Vector<Aws::String>&& value) { SetFiles(std::move(value)); return *this;}
    inline OutputArtifact& AddFiles(const Aws::String& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }
    inline OutputArtifact& AddFiles(Aws::String&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }
    inline OutputArtifact& AddFiles(const char* value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }
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
