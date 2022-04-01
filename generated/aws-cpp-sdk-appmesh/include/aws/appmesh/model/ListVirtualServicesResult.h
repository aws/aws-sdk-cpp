﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualServiceRef.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServicesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ListVirtualServicesResult
  {
  public:
    ListVirtualServicesResult();
    ListVirtualServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVirtualServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualServiceRef>& GetVirtualServices() const{ return m_virtualServices; }

    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline void SetVirtualServices(const Aws::Vector<VirtualServiceRef>& value) { m_virtualServices = value; }

    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline void SetVirtualServices(Aws::Vector<VirtualServiceRef>&& value) { m_virtualServices = std::move(value); }

    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline ListVirtualServicesResult& WithVirtualServices(const Aws::Vector<VirtualServiceRef>& value) { SetVirtualServices(value); return *this;}

    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline ListVirtualServicesResult& WithVirtualServices(Aws::Vector<VirtualServiceRef>&& value) { SetVirtualServices(std::move(value)); return *this;}

    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline ListVirtualServicesResult& AddVirtualServices(const VirtualServiceRef& value) { m_virtualServices.push_back(value); return *this; }

    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline ListVirtualServicesResult& AddVirtualServices(VirtualServiceRef&& value) { m_virtualServices.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VirtualServiceRef> m_virtualServices;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
