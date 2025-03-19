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
   * <p>Returns information about errors in a BatchDescribeMergeConflicts
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDescribeMergeConflictsError">AWS
   * API Reference</a></p>
   */
  class BatchDescribeMergeConflictsError
  {
  public:
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsError() = default;
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    BatchDescribeMergeConflictsError& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the exception.</p>
     */
    inline const Aws::String& GetExceptionName() const { return m_exceptionName; }
    inline bool ExceptionNameHasBeenSet() const { return m_exceptionNameHasBeenSet; }
    template<typename ExceptionNameT = Aws::String>
    void SetExceptionName(ExceptionNameT&& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = std::forward<ExceptionNameT>(value); }
    template<typename ExceptionNameT = Aws::String>
    BatchDescribeMergeConflictsError& WithExceptionName(ExceptionNameT&& value) { SetExceptionName(std::forward<ExceptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message provided by the exception.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchDescribeMergeConflictsError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_exceptionName;
    bool m_exceptionNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
