/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryAssociation.h>
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
namespace FSx
{
namespace Model
{
  class CreateDataRepositoryAssociationResult
  {
  public:
    AWS_FSX_API CreateDataRepositoryAssociationResult();
    AWS_FSX_API CreateDataRepositoryAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateDataRepositoryAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response object returned after the data repository association is
     * created.</p>
     */
    inline const DataRepositoryAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The response object returned after the data repository association is
     * created.</p>
     */
    inline void SetAssociation(const DataRepositoryAssociation& value) { m_association = value; }

    /**
     * <p>The response object returned after the data repository association is
     * created.</p>
     */
    inline void SetAssociation(DataRepositoryAssociation&& value) { m_association = std::move(value); }

    /**
     * <p>The response object returned after the data repository association is
     * created.</p>
     */
    inline CreateDataRepositoryAssociationResult& WithAssociation(const DataRepositoryAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The response object returned after the data repository association is
     * created.</p>
     */
    inline CreateDataRepositoryAssociationResult& WithAssociation(DataRepositoryAssociation&& value) { SetAssociation(std::move(value)); return *this;}

  private:

    DataRepositoryAssociation m_association;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
