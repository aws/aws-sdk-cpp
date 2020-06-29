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
  class AWS_CODEARTIFACT_API DeleteRepositoryResult
  {
  public:
    DeleteRepositoryResult();
    DeleteRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the deleted repository after processing the request. </p>
     */
    inline const RepositoryDescription& GetRepository() const{ return m_repository; }

    /**
     * <p> Information about the deleted repository after processing the request. </p>
     */
    inline void SetRepository(const RepositoryDescription& value) { m_repository = value; }

    /**
     * <p> Information about the deleted repository after processing the request. </p>
     */
    inline void SetRepository(RepositoryDescription&& value) { m_repository = std::move(value); }

    /**
     * <p> Information about the deleted repository after processing the request. </p>
     */
    inline DeleteRepositoryResult& WithRepository(const RepositoryDescription& value) { SetRepository(value); return *this;}

    /**
     * <p> Information about the deleted repository after processing the request. </p>
     */
    inline DeleteRepositoryResult& WithRepository(RepositoryDescription&& value) { SetRepository(std::move(value)); return *this;}

  private:

    RepositoryDescription m_repository;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
