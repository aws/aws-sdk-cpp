﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{
  class ListAddonsResult
  {
  public:
    AWS_EKS_API ListAddonsResult();
    AWS_EKS_API ListAddonsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListAddonsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of installed add-ons.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddons() const{ return m_addons; }
    inline void SetAddons(const Aws::Vector<Aws::String>& value) { m_addons = value; }
    inline void SetAddons(Aws::Vector<Aws::String>&& value) { m_addons = std::move(value); }
    inline ListAddonsResult& WithAddons(const Aws::Vector<Aws::String>& value) { SetAddons(value); return *this;}
    inline ListAddonsResult& WithAddons(Aws::Vector<Aws::String>&& value) { SetAddons(std::move(value)); return *this;}
    inline ListAddonsResult& AddAddons(const Aws::String& value) { m_addons.push_back(value); return *this; }
    inline ListAddonsResult& AddAddons(Aws::String&& value) { m_addons.push_back(std::move(value)); return *this; }
    inline ListAddonsResult& AddAddons(const char* value) { m_addons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAddons</code> request. When the results of a <code>ListAddons</code>
     * request exceed <code>maxResults</code>, you can use this value to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAddonsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAddonsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAddonsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAddonsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAddonsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAddonsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_addons;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
