/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ListGroupResourcesItem.h>
#include <aws/resource-groups/model/QueryError.h>
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
namespace ResourceGroups
{
namespace Model
{
  class ListGroupResourcesResult
  {
  public:
    AWS_RESOURCEGROUPS_API ListGroupResourcesResult();
    AWS_RESOURCEGROUPS_API ListGroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API ListGroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of resources from which you can determine each resource's identity,
     * type, and group membership status.</p>
     */
    inline const Aws::Vector<ListGroupResourcesItem>& GetResources() const{ return m_resources; }

    /**
     * <p>An array of resources from which you can determine each resource's identity,
     * type, and group membership status.</p>
     */
    inline void SetResources(const Aws::Vector<ListGroupResourcesItem>& value) { m_resources = value; }

    /**
     * <p>An array of resources from which you can determine each resource's identity,
     * type, and group membership status.</p>
     */
    inline void SetResources(Aws::Vector<ListGroupResourcesItem>&& value) { m_resources = std::move(value); }

    /**
     * <p>An array of resources from which you can determine each resource's identity,
     * type, and group membership status.</p>
     */
    inline ListGroupResourcesResult& WithResources(const Aws::Vector<ListGroupResourcesItem>& value) { SetResources(value); return *this;}

    /**
     * <p>An array of resources from which you can determine each resource's identity,
     * type, and group membership status.</p>
     */
    inline ListGroupResourcesResult& WithResources(Aws::Vector<ListGroupResourcesItem>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>An array of resources from which you can determine each resource's identity,
     * type, and group membership status.</p>
     */
    inline ListGroupResourcesResult& AddResources(const ListGroupResourcesItem& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>An array of resources from which you can determine each resource's identity,
     * type, and group membership status.</p>
     */
    inline ListGroupResourcesResult& AddResources(ListGroupResourcesItem&& value) { m_resources.push_back(std::move(value)); return *this; }


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
    inline ListGroupResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListGroupResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListGroupResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>QueryError</code> objects. Each error is an object that
     * contains <code>ErrorCode</code> and <code>Message</code> structures. Possible
     * values for <code>ErrorCode</code> are <code>CLOUDFORMATION_STACK_INACTIVE</code>
     * and <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline const Aws::Vector<QueryError>& GetQueryErrors() const{ return m_queryErrors; }

    /**
     * <p>A list of <code>QueryError</code> objects. Each error is an object that
     * contains <code>ErrorCode</code> and <code>Message</code> structures. Possible
     * values for <code>ErrorCode</code> are <code>CLOUDFORMATION_STACK_INACTIVE</code>
     * and <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline void SetQueryErrors(const Aws::Vector<QueryError>& value) { m_queryErrors = value; }

    /**
     * <p>A list of <code>QueryError</code> objects. Each error is an object that
     * contains <code>ErrorCode</code> and <code>Message</code> structures. Possible
     * values for <code>ErrorCode</code> are <code>CLOUDFORMATION_STACK_INACTIVE</code>
     * and <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline void SetQueryErrors(Aws::Vector<QueryError>&& value) { m_queryErrors = std::move(value); }

    /**
     * <p>A list of <code>QueryError</code> objects. Each error is an object that
     * contains <code>ErrorCode</code> and <code>Message</code> structures. Possible
     * values for <code>ErrorCode</code> are <code>CLOUDFORMATION_STACK_INACTIVE</code>
     * and <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline ListGroupResourcesResult& WithQueryErrors(const Aws::Vector<QueryError>& value) { SetQueryErrors(value); return *this;}

    /**
     * <p>A list of <code>QueryError</code> objects. Each error is an object that
     * contains <code>ErrorCode</code> and <code>Message</code> structures. Possible
     * values for <code>ErrorCode</code> are <code>CLOUDFORMATION_STACK_INACTIVE</code>
     * and <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline ListGroupResourcesResult& WithQueryErrors(Aws::Vector<QueryError>&& value) { SetQueryErrors(std::move(value)); return *this;}

    /**
     * <p>A list of <code>QueryError</code> objects. Each error is an object that
     * contains <code>ErrorCode</code> and <code>Message</code> structures. Possible
     * values for <code>ErrorCode</code> are <code>CLOUDFORMATION_STACK_INACTIVE</code>
     * and <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline ListGroupResourcesResult& AddQueryErrors(const QueryError& value) { m_queryErrors.push_back(value); return *this; }

    /**
     * <p>A list of <code>QueryError</code> objects. Each error is an object that
     * contains <code>ErrorCode</code> and <code>Message</code> structures. Possible
     * values for <code>ErrorCode</code> are <code>CLOUDFORMATION_STACK_INACTIVE</code>
     * and <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline ListGroupResourcesResult& AddQueryErrors(QueryError&& value) { m_queryErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ListGroupResourcesItem> m_resources;

    Aws::String m_nextToken;

    Aws::Vector<QueryError> m_queryErrors;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
