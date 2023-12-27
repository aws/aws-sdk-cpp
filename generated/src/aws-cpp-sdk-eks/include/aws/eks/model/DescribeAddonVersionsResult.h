/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AddonInfo.h>
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
  class DescribeAddonVersionsResult
  {
  public:
    AWS_EKS_API DescribeAddonVersionsResult();
    AWS_EKS_API DescribeAddonVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeAddonVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of available versions with Kubernetes version compatibility and
     * other properties.</p>
     */
    inline const Aws::Vector<AddonInfo>& GetAddons() const{ return m_addons; }

    /**
     * <p>The list of available versions with Kubernetes version compatibility and
     * other properties.</p>
     */
    inline void SetAddons(const Aws::Vector<AddonInfo>& value) { m_addons = value; }

    /**
     * <p>The list of available versions with Kubernetes version compatibility and
     * other properties.</p>
     */
    inline void SetAddons(Aws::Vector<AddonInfo>&& value) { m_addons = std::move(value); }

    /**
     * <p>The list of available versions with Kubernetes version compatibility and
     * other properties.</p>
     */
    inline DescribeAddonVersionsResult& WithAddons(const Aws::Vector<AddonInfo>& value) { SetAddons(value); return *this;}

    /**
     * <p>The list of available versions with Kubernetes version compatibility and
     * other properties.</p>
     */
    inline DescribeAddonVersionsResult& WithAddons(Aws::Vector<AddonInfo>&& value) { SetAddons(std::move(value)); return *this;}

    /**
     * <p>The list of available versions with Kubernetes version compatibility and
     * other properties.</p>
     */
    inline DescribeAddonVersionsResult& AddAddons(const AddonInfo& value) { m_addons.push_back(value); return *this; }

    /**
     * <p>The list of available versions with Kubernetes version compatibility and
     * other properties.</p>
     */
    inline DescribeAddonVersionsResult& AddAddons(AddonInfo&& value) { m_addons.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeAddonVersions</code> request. When the results of a
     * <code>DescribeAddonVersions</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeAddonVersions</code> request. When the results of a
     * <code>DescribeAddonVersions</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeAddonVersions</code> request. When the results of a
     * <code>DescribeAddonVersions</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeAddonVersions</code> request. When the results of a
     * <code>DescribeAddonVersions</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeAddonVersions</code> request. When the results of a
     * <code>DescribeAddonVersions</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline DescribeAddonVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeAddonVersions</code> request. When the results of a
     * <code>DescribeAddonVersions</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline DescribeAddonVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeAddonVersions</code> request. When the results of a
     * <code>DescribeAddonVersions</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline DescribeAddonVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAddonVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAddonVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAddonVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AddonInfo> m_addons;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
