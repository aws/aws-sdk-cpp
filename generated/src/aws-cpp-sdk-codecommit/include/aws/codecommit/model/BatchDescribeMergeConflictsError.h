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
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsError();
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BatchDescribeMergeConflictsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline BatchDescribeMergeConflictsError& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline BatchDescribeMergeConflictsError& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsError& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the exception.</p>
     */
    inline const Aws::String& GetExceptionName() const{ return m_exceptionName; }
    inline bool ExceptionNameHasBeenSet() const { return m_exceptionNameHasBeenSet; }
    inline void SetExceptionName(const Aws::String& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = value; }
    inline void SetExceptionName(Aws::String&& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = std::move(value); }
    inline void SetExceptionName(const char* value) { m_exceptionNameHasBeenSet = true; m_exceptionName.assign(value); }
    inline BatchDescribeMergeConflictsError& WithExceptionName(const Aws::String& value) { SetExceptionName(value); return *this;}
    inline BatchDescribeMergeConflictsError& WithExceptionName(Aws::String&& value) { SetExceptionName(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsError& WithExceptionName(const char* value) { SetExceptionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message provided by the exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchDescribeMergeConflictsError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchDescribeMergeConflictsError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchDescribeMergeConflictsError& WithMessage(const char* value) { SetMessage(value); return *this;}
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
