/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about a source file that is part of changes made in a
   * commit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/SourceFileSpecifier">AWS
   * API Reference</a></p>
   */
  class SourceFileSpecifier
  {
  public:
    AWS_CODECOMMIT_API SourceFileSpecifier() = default;
    AWS_CODECOMMIT_API SourceFileSpecifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API SourceFileSpecifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full path to the file, including the name of the file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    SourceFileSpecifier& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to remove the source file from the parent commit.</p>
     */
    inline bool GetIsMove() const { return m_isMove; }
    inline bool IsMoveHasBeenSet() const { return m_isMoveHasBeenSet; }
    inline void SetIsMove(bool value) { m_isMoveHasBeenSet = true; m_isMove = value; }
    inline SourceFileSpecifier& WithIsMove(bool value) { SetIsMove(value); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    bool m_isMove{false};
    bool m_isMoveHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
