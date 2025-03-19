/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/RepositoryMetadata.h>
#include <aws/codecommit/model/BatchGetRepositoriesError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a batch get repositories operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositoriesOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetRepositoriesResult
  {
  public:
    AWS_CODECOMMIT_API BatchGetRepositoriesResult() = default;
    AWS_CODECOMMIT_API BatchGetRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchGetRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline const Aws::Vector<RepositoryMetadata>& GetRepositories() const { return m_repositories; }
    template<typename RepositoriesT = Aws::Vector<RepositoryMetadata>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<RepositoryMetadata>>
    BatchGetRepositoriesResult& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = RepositoryMetadata>
    BatchGetRepositoriesResult& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoriesNotFound() const { return m_repositoriesNotFound; }
    template<typename RepositoriesNotFoundT = Aws::Vector<Aws::String>>
    void SetRepositoriesNotFound(RepositoriesNotFoundT&& value) { m_repositoriesNotFoundHasBeenSet = true; m_repositoriesNotFound = std::forward<RepositoriesNotFoundT>(value); }
    template<typename RepositoriesNotFoundT = Aws::Vector<Aws::String>>
    BatchGetRepositoriesResult& WithRepositoriesNotFound(RepositoriesNotFoundT&& value) { SetRepositoriesNotFound(std::forward<RepositoriesNotFoundT>(value)); return *this;}
    template<typename RepositoriesNotFoundT = Aws::String>
    BatchGetRepositoriesResult& AddRepositoriesNotFound(RepositoriesNotFoundT&& value) { m_repositoriesNotFoundHasBeenSet = true; m_repositoriesNotFound.emplace_back(std::forward<RepositoriesNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline const Aws::Vector<BatchGetRepositoriesError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetRepositoriesError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetRepositoriesError>>
    BatchGetRepositoriesResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetRepositoriesError>
    BatchGetRepositoriesResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetRepositoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RepositoryMetadata> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_repositoriesNotFound;
    bool m_repositoriesNotFoundHasBeenSet = false;

    Aws::Vector<BatchGetRepositoriesError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
