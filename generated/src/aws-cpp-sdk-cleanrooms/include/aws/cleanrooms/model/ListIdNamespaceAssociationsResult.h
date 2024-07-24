/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/IdNamespaceAssociationSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListIdNamespaceAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListIdNamespaceAssociationsResult();
    AWS_CLEANROOMS_API ListIdNamespaceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListIdNamespaceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIdNamespaceAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIdNamespaceAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIdNamespaceAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of the ID namespace associations that you
     * requested.</p>
     */
    inline const Aws::Vector<IdNamespaceAssociationSummary>& GetIdNamespaceAssociationSummaries() const{ return m_idNamespaceAssociationSummaries; }
    inline void SetIdNamespaceAssociationSummaries(const Aws::Vector<IdNamespaceAssociationSummary>& value) { m_idNamespaceAssociationSummaries = value; }
    inline void SetIdNamespaceAssociationSummaries(Aws::Vector<IdNamespaceAssociationSummary>&& value) { m_idNamespaceAssociationSummaries = std::move(value); }
    inline ListIdNamespaceAssociationsResult& WithIdNamespaceAssociationSummaries(const Aws::Vector<IdNamespaceAssociationSummary>& value) { SetIdNamespaceAssociationSummaries(value); return *this;}
    inline ListIdNamespaceAssociationsResult& WithIdNamespaceAssociationSummaries(Aws::Vector<IdNamespaceAssociationSummary>&& value) { SetIdNamespaceAssociationSummaries(std::move(value)); return *this;}
    inline ListIdNamespaceAssociationsResult& AddIdNamespaceAssociationSummaries(const IdNamespaceAssociationSummary& value) { m_idNamespaceAssociationSummaries.push_back(value); return *this; }
    inline ListIdNamespaceAssociationsResult& AddIdNamespaceAssociationSummaries(IdNamespaceAssociationSummary&& value) { m_idNamespaceAssociationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIdNamespaceAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIdNamespaceAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIdNamespaceAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<IdNamespaceAssociationSummary> m_idNamespaceAssociationSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
