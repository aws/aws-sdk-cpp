/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudcontrol/model/ResourceDescription.h>
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
namespace CloudControlApi
{
namespace Model
{
  class ListResourcesResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API ListResourcesResult();
    AWS_CLOUDCONTROLAPI_API ListResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API ListResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the resource type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the resource type.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }

    /**
     * <p>The name of the resource type.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }

    /**
     * <p>The name of the resource type.</p>
     */
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }

    /**
     * <p>The name of the resource type.</p>
     */
    inline ListResourcesResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the resource type.</p>
     */
    inline ListResourcesResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource type.</p>
     */
    inline ListResourcesResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline const Aws::Vector<ResourceDescription>& GetResourceDescriptions() const{ return m_resourceDescriptions; }

    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline void SetResourceDescriptions(const Aws::Vector<ResourceDescription>& value) { m_resourceDescriptions = value; }

    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline void SetResourceDescriptions(Aws::Vector<ResourceDescription>&& value) { m_resourceDescriptions = std::move(value); }

    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline ListResourcesResult& WithResourceDescriptions(const Aws::Vector<ResourceDescription>& value) { SetResourceDescriptions(value); return *this;}

    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline ListResourcesResult& WithResourceDescriptions(Aws::Vector<ResourceDescription>&& value) { SetResourceDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline ListResourcesResult& AddResourceDescriptions(const ResourceDescription& value) { m_resourceDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline ListResourcesResult& AddResourceDescriptions(ResourceDescription&& value) { m_resourceDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline ListResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline ListResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline ListResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_typeName;

    Aws::Vector<ResourceDescription> m_resourceDescriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
