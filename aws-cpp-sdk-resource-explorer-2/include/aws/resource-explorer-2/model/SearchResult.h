/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/ResourceCount.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/model/Resource.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class SearchResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API SearchResult();
    AWS_RESOURCEEXPLORER2_API SearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API SearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of resources that match the query.</p>
     */
    inline const ResourceCount& GetCount() const{ return m_count; }

    /**
     * <p>The number of resources that match the query.</p>
     */
    inline void SetCount(const ResourceCount& value) { m_count = value; }

    /**
     * <p>The number of resources that match the query.</p>
     */
    inline void SetCount(ResourceCount&& value) { m_count = std::move(value); }

    /**
     * <p>The number of resources that match the query.</p>
     */
    inline SearchResult& WithCount(const ResourceCount& value) { SetCount(value); return *this;}

    /**
     * <p>The number of resources that match the query.</p>
     */
    inline SearchResult& WithCount(ResourceCount&& value) { SetCount(std::move(value)); return *this;}


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline SearchResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline SearchResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline SearchResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of structures that describe the resources that match the query.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>The list of structures that describe the resources that match the query.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resources = value; }

    /**
     * <p>The list of structures that describe the resources that match the query.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resources = std::move(value); }

    /**
     * <p>The list of structures that describe the resources that match the query.</p>
     */
    inline SearchResult& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>The list of structures that describe the resources that match the query.</p>
     */
    inline SearchResult& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The list of structures that describe the resources that match the query.</p>
     */
    inline SearchResult& AddResources(const Resource& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>The list of structures that describe the resources that match the query.</p>
     */
    inline SearchResult& AddResources(Resource&& value) { m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that this operation used to perform the
     * search.</p>
     */
    inline const Aws::String& GetViewArn() const{ return m_viewArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that this operation used to perform the
     * search.</p>
     */
    inline void SetViewArn(const Aws::String& value) { m_viewArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that this operation used to perform the
     * search.</p>
     */
    inline void SetViewArn(Aws::String&& value) { m_viewArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that this operation used to perform the
     * search.</p>
     */
    inline void SetViewArn(const char* value) { m_viewArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that this operation used to perform the
     * search.</p>
     */
    inline SearchResult& WithViewArn(const Aws::String& value) { SetViewArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that this operation used to perform the
     * search.</p>
     */
    inline SearchResult& WithViewArn(Aws::String&& value) { SetViewArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that this operation used to perform the
     * search.</p>
     */
    inline SearchResult& WithViewArn(const char* value) { SetViewArn(value); return *this;}

  private:

    ResourceCount m_count;

    Aws::String m_nextToken;

    Aws::Vector<Resource> m_resources;

    Aws::String m_viewArn;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
