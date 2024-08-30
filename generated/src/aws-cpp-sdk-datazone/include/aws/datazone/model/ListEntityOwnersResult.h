/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/OwnerPropertiesOutput.h>
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
namespace DataZone
{
namespace Model
{
  class ListEntityOwnersResult
  {
  public:
    AWS_DATAZONE_API ListEntityOwnersResult();
    AWS_DATAZONE_API ListEntityOwnersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListEntityOwnersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the number of entities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of entities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListEntityOwners</code> to list the next set of entities.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEntityOwnersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEntityOwnersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEntityOwnersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owners of the entity.</p>
     */
    inline const Aws::Vector<OwnerPropertiesOutput>& GetOwners() const{ return m_owners; }
    inline void SetOwners(const Aws::Vector<OwnerPropertiesOutput>& value) { m_owners = value; }
    inline void SetOwners(Aws::Vector<OwnerPropertiesOutput>&& value) { m_owners = std::move(value); }
    inline ListEntityOwnersResult& WithOwners(const Aws::Vector<OwnerPropertiesOutput>& value) { SetOwners(value); return *this;}
    inline ListEntityOwnersResult& WithOwners(Aws::Vector<OwnerPropertiesOutput>&& value) { SetOwners(std::move(value)); return *this;}
    inline ListEntityOwnersResult& AddOwners(const OwnerPropertiesOutput& value) { m_owners.push_back(value); return *this; }
    inline ListEntityOwnersResult& AddOwners(OwnerPropertiesOutput&& value) { m_owners.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEntityOwnersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEntityOwnersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEntityOwnersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<OwnerPropertiesOutput> m_owners;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
