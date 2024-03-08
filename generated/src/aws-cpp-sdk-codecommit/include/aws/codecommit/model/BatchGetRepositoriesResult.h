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
    AWS_CODECOMMIT_API BatchGetRepositoriesResult();
    AWS_CODECOMMIT_API BatchGetRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchGetRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline const Aws::Vector<RepositoryMetadata>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline void SetRepositories(const Aws::Vector<RepositoryMetadata>& value) { m_repositories = value; }

    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline void SetRepositories(Aws::Vector<RepositoryMetadata>&& value) { m_repositories = std::move(value); }

    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline BatchGetRepositoriesResult& WithRepositories(const Aws::Vector<RepositoryMetadata>& value) { SetRepositories(value); return *this;}

    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline BatchGetRepositoriesResult& WithRepositories(Aws::Vector<RepositoryMetadata>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline BatchGetRepositoriesResult& AddRepositories(const RepositoryMetadata& value) { m_repositories.push_back(value); return *this; }

    /**
     * <p>A list of repositories returned by the batch get repositories operation.</p>
     */
    inline BatchGetRepositoriesResult& AddRepositories(RepositoryMetadata&& value) { m_repositories.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoriesNotFound() const{ return m_repositoriesNotFound; }

    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline void SetRepositoriesNotFound(const Aws::Vector<Aws::String>& value) { m_repositoriesNotFound = value; }

    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline void SetRepositoriesNotFound(Aws::Vector<Aws::String>&& value) { m_repositoriesNotFound = std::move(value); }

    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline BatchGetRepositoriesResult& WithRepositoriesNotFound(const Aws::Vector<Aws::String>& value) { SetRepositoriesNotFound(value); return *this;}

    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline BatchGetRepositoriesResult& WithRepositoriesNotFound(Aws::Vector<Aws::String>&& value) { SetRepositoriesNotFound(std::move(value)); return *this;}

    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline BatchGetRepositoriesResult& AddRepositoriesNotFound(const Aws::String& value) { m_repositoriesNotFound.push_back(value); return *this; }

    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline BatchGetRepositoriesResult& AddRepositoriesNotFound(Aws::String&& value) { m_repositoriesNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>Returns a list of repository names for which information could not be
     * found.</p>
     */
    inline BatchGetRepositoriesResult& AddRepositoriesNotFound(const char* value) { m_repositoriesNotFound.push_back(value); return *this; }


    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline const Aws::Vector<BatchGetRepositoriesError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetRepositoriesError>& value) { m_errors = value; }

    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetRepositoriesError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline BatchGetRepositoriesResult& WithErrors(const Aws::Vector<BatchGetRepositoriesError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline BatchGetRepositoriesResult& WithErrors(Aws::Vector<BatchGetRepositoriesError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline BatchGetRepositoriesResult& AddErrors(const BatchGetRepositoriesError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Returns information about any errors returned when attempting to retrieve
     * information about the repositories.</p>
     */
    inline BatchGetRepositoriesResult& AddErrors(BatchGetRepositoriesError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetRepositoriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetRepositoriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetRepositoriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RepositoryMetadata> m_repositories;

    Aws::Vector<Aws::String> m_repositoriesNotFound;

    Aws::Vector<BatchGetRepositoriesError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
