/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQuery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateProtectedQueryResult
  {
  public:
    AWS_CLEANROOMS_API UpdateProtectedQueryResult();
    AWS_CLEANROOMS_API UpdateProtectedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateProtectedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The protected query output.</p>
     */
    inline const ProtectedQuery& GetProtectedQuery() const{ return m_protectedQuery; }

    /**
     * <p>The protected query output.</p>
     */
    inline void SetProtectedQuery(const ProtectedQuery& value) { m_protectedQuery = value; }

    /**
     * <p>The protected query output.</p>
     */
    inline void SetProtectedQuery(ProtectedQuery&& value) { m_protectedQuery = std::move(value); }

    /**
     * <p>The protected query output.</p>
     */
    inline UpdateProtectedQueryResult& WithProtectedQuery(const ProtectedQuery& value) { SetProtectedQuery(value); return *this;}

    /**
     * <p>The protected query output.</p>
     */
    inline UpdateProtectedQueryResult& WithProtectedQuery(ProtectedQuery&& value) { SetProtectedQuery(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProtectedQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProtectedQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProtectedQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProtectedQuery m_protectedQuery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
