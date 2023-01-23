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
   * <p>Returns information about errors in a BatchGetCommits
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetCommitsError">AWS
   * API Reference</a></p>
   */
  class BatchGetCommitsError
  {
  public:
    AWS_CODECOMMIT_API BatchGetCommitsError();
    AWS_CODECOMMIT_API BatchGetCommitsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BatchGetCommitsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }

    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }

    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline BatchGetCommitsError& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline BatchGetCommitsError& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>A commit ID that either could not be found or was not in a valid format.</p>
     */
    inline BatchGetCommitsError& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline BatchGetCommitsError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline BatchGetCommitsError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>An error code that specifies whether the commit ID was not valid or not
     * found.</p>
     */
    inline BatchGetCommitsError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline BatchGetCommitsError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline BatchGetCommitsError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message that provides detail about why the commit ID either was not
     * found or was not valid.</p>
     */
    inline BatchGetCommitsError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
