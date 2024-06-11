﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListDevelopmentSchemaArnsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListDevelopmentSchemaArnsResult();
    AWS_CLOUDDIRECTORY_API ListDevelopmentSchemaArnsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListDevelopmentSchemaArnsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSchemaArns() const{ return m_schemaArns; }
    inline void SetSchemaArns(const Aws::Vector<Aws::String>& value) { m_schemaArns = value; }
    inline void SetSchemaArns(Aws::Vector<Aws::String>&& value) { m_schemaArns = std::move(value); }
    inline ListDevelopmentSchemaArnsResult& WithSchemaArns(const Aws::Vector<Aws::String>& value) { SetSchemaArns(value); return *this;}
    inline ListDevelopmentSchemaArnsResult& WithSchemaArns(Aws::Vector<Aws::String>&& value) { SetSchemaArns(std::move(value)); return *this;}
    inline ListDevelopmentSchemaArnsResult& AddSchemaArns(const Aws::String& value) { m_schemaArns.push_back(value); return *this; }
    inline ListDevelopmentSchemaArnsResult& AddSchemaArns(Aws::String&& value) { m_schemaArns.push_back(std::move(value)); return *this; }
    inline ListDevelopmentSchemaArnsResult& AddSchemaArns(const char* value) { m_schemaArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDevelopmentSchemaArnsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDevelopmentSchemaArnsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDevelopmentSchemaArnsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDevelopmentSchemaArnsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDevelopmentSchemaArnsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDevelopmentSchemaArnsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_schemaArns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
