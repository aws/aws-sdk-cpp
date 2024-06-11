﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CrossAccountResource.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCrossAccountResourcesResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourcesResult();
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCrossAccountResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cross-account resources used with an accelerator.</p>
     */
    inline const Aws::Vector<CrossAccountResource>& GetCrossAccountResources() const{ return m_crossAccountResources; }
    inline void SetCrossAccountResources(const Aws::Vector<CrossAccountResource>& value) { m_crossAccountResources = value; }
    inline void SetCrossAccountResources(Aws::Vector<CrossAccountResource>&& value) { m_crossAccountResources = std::move(value); }
    inline ListCrossAccountResourcesResult& WithCrossAccountResources(const Aws::Vector<CrossAccountResource>& value) { SetCrossAccountResources(value); return *this;}
    inline ListCrossAccountResourcesResult& WithCrossAccountResources(Aws::Vector<CrossAccountResource>&& value) { SetCrossAccountResources(std::move(value)); return *this;}
    inline ListCrossAccountResourcesResult& AddCrossAccountResources(const CrossAccountResource& value) { m_crossAccountResources.push_back(value); return *this; }
    inline ListCrossAccountResourcesResult& AddCrossAccountResources(CrossAccountResource&& value) { m_crossAccountResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCrossAccountResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCrossAccountResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCrossAccountResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCrossAccountResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCrossAccountResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCrossAccountResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CrossAccountResource> m_crossAccountResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
