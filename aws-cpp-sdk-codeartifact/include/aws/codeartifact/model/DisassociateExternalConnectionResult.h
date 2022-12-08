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
  class DisassociateExternalConnectionResult
  {
  public:
    AWS_CODEARTIFACT_API DisassociateExternalConnectionResult();
    AWS_CODEARTIFACT_API DisassociateExternalConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DisassociateExternalConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline const RepositoryDescription& GetRepository() const{ return m_repository; }

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline void SetRepository(const RepositoryDescription& value) { m_repository = value; }

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline void SetRepository(RepositoryDescription&& value) { m_repository = std::move(value); }

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline DisassociateExternalConnectionResult& WithRepository(const RepositoryDescription& value) { SetRepository(value); return *this;}

    /**
     * <p> The repository associated with the removed external connection. </p>
     */
    inline DisassociateExternalConnectionResult& WithRepository(RepositoryDescription&& value) { SetRepository(std::move(value)); return *this;}

  private:

    RepositoryDescription m_repository;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
