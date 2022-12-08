/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/RepositoryMetadata.h>
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
   * <p>Represents the output of a get repository operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryOutput">AWS
   * API Reference</a></p>
   */
  class GetRepositoryResult
  {
  public:
    AWS_CODECOMMIT_API GetRepositoryResult();
    AWS_CODECOMMIT_API GetRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the repository.</p>
     */
    inline const RepositoryMetadata& GetRepositoryMetadata() const{ return m_repositoryMetadata; }

    /**
     * <p>Information about the repository.</p>
     */
    inline void SetRepositoryMetadata(const RepositoryMetadata& value) { m_repositoryMetadata = value; }

    /**
     * <p>Information about the repository.</p>
     */
    inline void SetRepositoryMetadata(RepositoryMetadata&& value) { m_repositoryMetadata = std::move(value); }

    /**
     * <p>Information about the repository.</p>
     */
    inline GetRepositoryResult& WithRepositoryMetadata(const RepositoryMetadata& value) { SetRepositoryMetadata(value); return *this;}

    /**
     * <p>Information about the repository.</p>
     */
    inline GetRepositoryResult& WithRepositoryMetadata(RepositoryMetadata&& value) { SetRepositoryMetadata(std::move(value)); return *this;}

  private:

    RepositoryMetadata m_repositoryMetadata;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
