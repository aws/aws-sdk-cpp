/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/RepositoryDescription.h>
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
namespace CodeArtifact
{
namespace Model
{
  class DescribeRepositoryResult
  {
  public:
    AWS_CODEARTIFACT_API DescribeRepositoryResult();
    AWS_CODEARTIFACT_API DescribeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DescribeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline const RepositoryDescription& GetRepository() const{ return m_repository; }

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline void SetRepository(const RepositoryDescription& value) { m_repository = value; }

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline void SetRepository(RepositoryDescription&& value) { m_repository = std::move(value); }

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline DescribeRepositoryResult& WithRepository(const RepositoryDescription& value) { SetRepository(value); return *this;}

    /**
     * <p> A <code>RepositoryDescription</code> object that contains the requested
     * repository information. </p>
     */
    inline DescribeRepositoryResult& WithRepository(RepositoryDescription&& value) { SetRepository(std::move(value)); return *this;}

  private:

    RepositoryDescription m_repository;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
