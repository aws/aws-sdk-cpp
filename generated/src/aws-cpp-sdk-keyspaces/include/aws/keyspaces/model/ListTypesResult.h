/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Keyspaces
{
namespace Model
{
  class ListTypesResult
  {
  public:
    AWS_KEYSPACES_API ListTypesResult();
    AWS_KEYSPACES_API ListTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API ListTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of types contained in the specified keyspace. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_types = value; }
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_types = std::move(value); }
    inline ListTypesResult& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}
    inline ListTypesResult& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}
    inline ListTypesResult& AddTypes(const Aws::String& value) { m_types.push_back(value); return *this; }
    inline ListTypesResult& AddTypes(Aws::String&& value) { m_types.push_back(std::move(value)); return *this; }
    inline ListTypesResult& AddTypes(const char* value) { m_types.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_types;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
