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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/RepositoryMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_CODECOMMIT_API BatchGetRepositoriesResult
  {
  public:
    BatchGetRepositoriesResult();
    BatchGetRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<RepositoryMetadata> m_repositories;

    Aws::Vector<Aws::String> m_repositoriesNotFound;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
