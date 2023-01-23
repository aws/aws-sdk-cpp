/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeDataRepositoryAssociationsResult
  {
  public:
    AWS_FSX_API DescribeDataRepositoryAssociationsResult();
    AWS_FSX_API DescribeDataRepositoryAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeDataRepositoryAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline const Aws::Vector<DataRepositoryAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline void SetAssociations(const Aws::Vector<DataRepositoryAssociation>& value) { m_associations = value; }

    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline void SetAssociations(Aws::Vector<DataRepositoryAssociation>&& value) { m_associations = std::move(value); }

    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline DescribeDataRepositoryAssociationsResult& WithAssociations(const Aws::Vector<DataRepositoryAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline DescribeDataRepositoryAssociationsResult& WithAssociations(Aws::Vector<DataRepositoryAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline DescribeDataRepositoryAssociationsResult& AddAssociations(const DataRepositoryAssociation& value) { m_associations.push_back(value); return *this; }

    /**
     * <p>An array of one or more data repository association descriptions.</p>
     */
    inline DescribeDataRepositoryAssociationsResult& AddAssociations(DataRepositoryAssociation&& value) { m_associations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDataRepositoryAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDataRepositoryAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDataRepositoryAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataRepositoryAssociation> m_associations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
