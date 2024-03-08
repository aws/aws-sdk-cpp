/**
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


    /**
     * <p>The endpoints attached to an accelerator in a cross-account attachment.</p>
     */
    inline const Aws::Vector<CrossAccountResource>& GetCrossAccountResources() const{ return m_crossAccountResources; }

    /**
     * <p>The endpoints attached to an accelerator in a cross-account attachment.</p>
     */
    inline void SetCrossAccountResources(const Aws::Vector<CrossAccountResource>& value) { m_crossAccountResources = value; }

    /**
     * <p>The endpoints attached to an accelerator in a cross-account attachment.</p>
     */
    inline void SetCrossAccountResources(Aws::Vector<CrossAccountResource>&& value) { m_crossAccountResources = std::move(value); }

    /**
     * <p>The endpoints attached to an accelerator in a cross-account attachment.</p>
     */
    inline ListCrossAccountResourcesResult& WithCrossAccountResources(const Aws::Vector<CrossAccountResource>& value) { SetCrossAccountResources(value); return *this;}

    /**
     * <p>The endpoints attached to an accelerator in a cross-account attachment.</p>
     */
    inline ListCrossAccountResourcesResult& WithCrossAccountResources(Aws::Vector<CrossAccountResource>&& value) { SetCrossAccountResources(std::move(value)); return *this;}

    /**
     * <p>The endpoints attached to an accelerator in a cross-account attachment.</p>
     */
    inline ListCrossAccountResourcesResult& AddCrossAccountResources(const CrossAccountResource& value) { m_crossAccountResources.push_back(value); return *this; }

    /**
     * <p>The endpoints attached to an accelerator in a cross-account attachment.</p>
     */
    inline ListCrossAccountResourcesResult& AddCrossAccountResources(CrossAccountResource&& value) { m_crossAccountResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCrossAccountResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCrossAccountResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCrossAccountResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCrossAccountResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCrossAccountResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCrossAccountResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CrossAccountResource> m_crossAccountResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
