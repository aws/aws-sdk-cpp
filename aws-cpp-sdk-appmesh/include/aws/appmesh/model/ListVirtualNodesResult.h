﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualNodeRef.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ListVirtualNodesResult
  {
  public:
    ListVirtualNodesResult();
    ListVirtualNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVirtualNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualNodeRef>& GetVirtualNodes() const{ return m_virtualNodes; }

    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline void SetVirtualNodes(const Aws::Vector<VirtualNodeRef>& value) { m_virtualNodes = value; }

    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline void SetVirtualNodes(Aws::Vector<VirtualNodeRef>&& value) { m_virtualNodes = std::move(value); }

    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline ListVirtualNodesResult& WithVirtualNodes(const Aws::Vector<VirtualNodeRef>& value) { SetVirtualNodes(value); return *this;}

    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline ListVirtualNodesResult& WithVirtualNodes(Aws::Vector<VirtualNodeRef>&& value) { SetVirtualNodes(std::move(value)); return *this;}

    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline ListVirtualNodesResult& AddVirtualNodes(const VirtualNodeRef& value) { m_virtualNodes.push_back(value); return *this; }

    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline ListVirtualNodesResult& AddVirtualNodes(VirtualNodeRef&& value) { m_virtualNodes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VirtualNodeRef> m_virtualNodes;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
