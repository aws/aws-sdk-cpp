/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/model/RepositoryMetadata.h>

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
   * <p>Represents the output of a create repository operation.</p>
   */
  class AWS_CODECOMMIT_API CreateRepositoryResult
  {
  public:
    CreateRepositoryResult();
    CreateRepositoryResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRepositoryResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the newly created repository.</p>
     */
    inline const RepositoryMetadata& GetRepositoryMetadata() const{ return m_repositoryMetadata; }

    /**
     * <p>Information about the newly created repository.</p>
     */
    inline void SetRepositoryMetadata(const RepositoryMetadata& value) { m_repositoryMetadata = value; }

    /**
     * <p>Information about the newly created repository.</p>
     */
    inline void SetRepositoryMetadata(RepositoryMetadata&& value) { m_repositoryMetadata = value; }

    /**
     * <p>Information about the newly created repository.</p>
     */
    inline CreateRepositoryResult& WithRepositoryMetadata(const RepositoryMetadata& value) { SetRepositoryMetadata(value); return *this;}

    /**
     * <p>Information about the newly created repository.</p>
     */
    inline CreateRepositoryResult& WithRepositoryMetadata(RepositoryMetadata&& value) { SetRepositoryMetadata(value); return *this;}

  private:
    RepositoryMetadata m_repositoryMetadata;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
