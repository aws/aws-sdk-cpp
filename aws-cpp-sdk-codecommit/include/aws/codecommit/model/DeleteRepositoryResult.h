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
   * <p>Represents the output of a delete repository operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepositoryOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API DeleteRepositoryResult
  {
  public:
    DeleteRepositoryResult();
    DeleteRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the repository that was deleted.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID of the repository that was deleted.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryId = value; }

    /**
     * <p>The ID of the repository that was deleted.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryId = std::move(value); }

    /**
     * <p>The ID of the repository that was deleted.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryId.assign(value); }

    /**
     * <p>The ID of the repository that was deleted.</p>
     */
    inline DeleteRepositoryResult& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID of the repository that was deleted.</p>
     */
    inline DeleteRepositoryResult& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository that was deleted.</p>
     */
    inline DeleteRepositoryResult& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}

  private:

    Aws::String m_repositoryId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
