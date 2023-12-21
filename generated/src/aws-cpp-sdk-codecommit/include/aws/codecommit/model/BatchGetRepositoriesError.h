/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/BatchGetRepositoriesErrorCodeEnum.h>
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
   * <p>Returns information about errors in a BatchGetRepositories
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositoriesError">AWS
   * API Reference</a></p>
   */
  class BatchGetRepositoriesError
  {
  public:
    AWS_CODECOMMIT_API BatchGetRepositoriesError();
    AWS_CODECOMMIT_API BatchGetRepositoriesError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BatchGetRepositoriesError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }

    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }

    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::move(value); }

    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }

    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline BatchGetRepositoriesError& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline BatchGetRepositoriesError& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline BatchGetRepositoriesError& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}


    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline BatchGetRepositoriesError& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline BatchGetRepositoriesError& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of a repository that either could not be found or was not in a valid
     * state.</p>
     */
    inline BatchGetRepositoriesError& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>An error code that specifies the type of failure.</p>
     */
    inline const BatchGetRepositoriesErrorCodeEnum& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code that specifies the type of failure.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>An error code that specifies the type of failure.</p>
     */
    inline void SetErrorCode(const BatchGetRepositoriesErrorCodeEnum& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code that specifies the type of failure.</p>
     */
    inline void SetErrorCode(BatchGetRepositoriesErrorCodeEnum&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code that specifies the type of failure.</p>
     */
    inline BatchGetRepositoriesError& WithErrorCode(const BatchGetRepositoriesErrorCodeEnum& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code that specifies the type of failure.</p>
     */
    inline BatchGetRepositoriesError& WithErrorCode(BatchGetRepositoriesErrorCodeEnum&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline BatchGetRepositoriesError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline BatchGetRepositoriesError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message that provides detail about why the repository either was not
     * found or was not in a valid state.</p>
     */
    inline BatchGetRepositoriesError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    BatchGetRepositoriesErrorCodeEnum m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
