/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Information about errors in a BatchDescribeMergeConflicts
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchDescribeMergeConflictsError">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API BatchDescribeMergeConflictsError
  {
  public:
    BatchDescribeMergeConflictsError();
    BatchDescribeMergeConflictsError(Aws::Utils::Json::JsonView jsonValue);
    BatchDescribeMergeConflictsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The path to the file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The path to the file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The path to the file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The path to the file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The path to the file.</p>
     */
    inline BatchDescribeMergeConflictsError& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The path to the file.</p>
     */
    inline BatchDescribeMergeConflictsError& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The path to the file.</p>
     */
    inline BatchDescribeMergeConflictsError& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The name of the exception.</p>
     */
    inline const Aws::String& GetExceptionName() const{ return m_exceptionName; }

    /**
     * <p>The name of the exception.</p>
     */
    inline bool ExceptionNameHasBeenSet() const { return m_exceptionNameHasBeenSet; }

    /**
     * <p>The name of the exception.</p>
     */
    inline void SetExceptionName(const Aws::String& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = value; }

    /**
     * <p>The name of the exception.</p>
     */
    inline void SetExceptionName(Aws::String&& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = std::move(value); }

    /**
     * <p>The name of the exception.</p>
     */
    inline void SetExceptionName(const char* value) { m_exceptionNameHasBeenSet = true; m_exceptionName.assign(value); }

    /**
     * <p>The name of the exception.</p>
     */
    inline BatchDescribeMergeConflictsError& WithExceptionName(const Aws::String& value) { SetExceptionName(value); return *this;}

    /**
     * <p>The name of the exception.</p>
     */
    inline BatchDescribeMergeConflictsError& WithExceptionName(Aws::String&& value) { SetExceptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the exception.</p>
     */
    inline BatchDescribeMergeConflictsError& WithExceptionName(const char* value) { SetExceptionName(value); return *this;}


    /**
     * <p>The message provided by the exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message provided by the exception.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message provided by the exception.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message provided by the exception.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message provided by the exception.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message provided by the exception.</p>
     */
    inline BatchDescribeMergeConflictsError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message provided by the exception.</p>
     */
    inline BatchDescribeMergeConflictsError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message provided by the exception.</p>
     */
    inline BatchDescribeMergeConflictsError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    Aws::String m_exceptionName;
    bool m_exceptionNameHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
