/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConnectionTypeBrief.h>
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
namespace Glue
{
namespace Model
{
  class ListConnectionTypesResult
  {
  public:
    AWS_GLUE_API ListConnectionTypesResult();
    AWS_GLUE_API ListConnectionTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListConnectionTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ConnectionTypeBrief</code> objects containing brief
     * information about the supported connection types.</p>
     */
    inline const Aws::Vector<ConnectionTypeBrief>& GetConnectionTypes() const{ return m_connectionTypes; }
    inline void SetConnectionTypes(const Aws::Vector<ConnectionTypeBrief>& value) { m_connectionTypes = value; }
    inline void SetConnectionTypes(Aws::Vector<ConnectionTypeBrief>&& value) { m_connectionTypes = std::move(value); }
    inline ListConnectionTypesResult& WithConnectionTypes(const Aws::Vector<ConnectionTypeBrief>& value) { SetConnectionTypes(value); return *this;}
    inline ListConnectionTypesResult& WithConnectionTypes(Aws::Vector<ConnectionTypeBrief>&& value) { SetConnectionTypes(std::move(value)); return *this;}
    inline ListConnectionTypesResult& AddConnectionTypes(const ConnectionTypeBrief& value) { m_connectionTypes.push_back(value); return *this; }
    inline ListConnectionTypesResult& AddConnectionTypes(ConnectionTypeBrief&& value) { m_connectionTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the current list segment is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConnectionTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConnectionTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConnectionTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConnectionTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConnectionTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConnectionTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionTypeBrief> m_connectionTypes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
