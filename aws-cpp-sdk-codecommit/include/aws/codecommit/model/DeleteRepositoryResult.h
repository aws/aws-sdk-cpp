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
  class DeleteRepositoryResult
  {
  public:
    AWS_CODECOMMIT_API DeleteRepositoryResult();
    AWS_CODECOMMIT_API DeleteRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeleteRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
