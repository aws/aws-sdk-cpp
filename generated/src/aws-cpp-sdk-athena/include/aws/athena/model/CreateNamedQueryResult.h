/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{
  class CreateNamedQueryResult
  {
  public:
    AWS_ATHENA_API CreateNamedQueryResult();
    AWS_ATHENA_API CreateNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API CreateNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryId = value; }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryId = std::move(value); }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline void SetNamedQueryId(const char* value) { m_namedQueryId.assign(value); }

    /**
     * <p>The unique ID of the query.</p>
     */
    inline CreateNamedQueryResult& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}

    /**
     * <p>The unique ID of the query.</p>
     */
    inline CreateNamedQueryResult& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the query.</p>
     */
    inline CreateNamedQueryResult& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateNamedQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateNamedQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateNamedQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_namedQueryId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
