﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class ListMLTransformsResult
  {
  public:
    AWS_GLUE_API ListMLTransformsResult();
    AWS_GLUE_API ListMLTransformsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListMLTransformsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransformIds() const{ return m_transformIds; }
    inline void SetTransformIds(const Aws::Vector<Aws::String>& value) { m_transformIds = value; }
    inline void SetTransformIds(Aws::Vector<Aws::String>&& value) { m_transformIds = std::move(value); }
    inline ListMLTransformsResult& WithTransformIds(const Aws::Vector<Aws::String>& value) { SetTransformIds(value); return *this;}
    inline ListMLTransformsResult& WithTransformIds(Aws::Vector<Aws::String>&& value) { SetTransformIds(std::move(value)); return *this;}
    inline ListMLTransformsResult& AddTransformIds(const Aws::String& value) { m_transformIds.push_back(value); return *this; }
    inline ListMLTransformsResult& AddTransformIds(Aws::String&& value) { m_transformIds.push_back(std::move(value)); return *this; }
    inline ListMLTransformsResult& AddTransformIds(const char* value) { m_transformIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMLTransformsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMLTransformsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMLTransformsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMLTransformsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMLTransformsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMLTransformsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_transformIds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
