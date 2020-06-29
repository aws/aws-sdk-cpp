/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociation.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class AWS_CODEGURUREVIEWER_API DisassociateRepositoryResult
  {
  public:
    DisassociateRepositoryResult();
    DisassociateRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisassociateRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the disassociated repository.</p>
     */
    inline const RepositoryAssociation& GetRepositoryAssociation() const{ return m_repositoryAssociation; }

    /**
     * <p>Information about the disassociated repository.</p>
     */
    inline void SetRepositoryAssociation(const RepositoryAssociation& value) { m_repositoryAssociation = value; }

    /**
     * <p>Information about the disassociated repository.</p>
     */
    inline void SetRepositoryAssociation(RepositoryAssociation&& value) { m_repositoryAssociation = std::move(value); }

    /**
     * <p>Information about the disassociated repository.</p>
     */
    inline DisassociateRepositoryResult& WithRepositoryAssociation(const RepositoryAssociation& value) { SetRepositoryAssociation(value); return *this;}

    /**
     * <p>Information about the disassociated repository.</p>
     */
    inline DisassociateRepositoryResult& WithRepositoryAssociation(RepositoryAssociation&& value) { SetRepositoryAssociation(std::move(value)); return *this;}

  private:

    RepositoryAssociation m_repositoryAssociation;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
