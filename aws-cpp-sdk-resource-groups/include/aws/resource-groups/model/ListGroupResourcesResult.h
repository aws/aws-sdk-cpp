/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/ResourceIdentifier.h>
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
  class AWS_RESOURCEGROUPS_API ListGroupResourcesResult
  {
  public:
    ListGroupResourcesResult();
    ListGroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline const Aws::Vector<ResourceIdentifier>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }

    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline void SetResourceIdentifiers(const Aws::Vector<ResourceIdentifier>& value) { m_resourceIdentifiers = value; }

    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline void SetResourceIdentifiers(Aws::Vector<ResourceIdentifier>&& value) { m_resourceIdentifiers = std::move(value); }

    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline ListGroupResourcesResult& WithResourceIdentifiers(const Aws::Vector<ResourceIdentifier>& value) { SetResourceIdentifiers(value); return *this;}

    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline ListGroupResourcesResult& WithResourceIdentifiers(Aws::Vector<ResourceIdentifier>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline ListGroupResourcesResult& AddResourceIdentifiers(const ResourceIdentifier& value) { m_resourceIdentifiers.push_back(value); return *this; }

    /**
     * <p>The ARNs and resource types of resources that are members of the group that
     * you specified.</p>
     */
    inline ListGroupResourcesResult& AddResourceIdentifiers(ResourceIdentifier&& value) { m_resourceIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The NextToken value to include in a subsequent
     * <code>ListGroupResources</code> request, to get more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The NextToken value to include in a subsequent
     * <code>ListGroupResources</code> request, to get more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The NextToken value to include in a subsequent
     * <code>ListGroupResources</code> request, to get more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The NextToken value to include in a subsequent
     * <code>ListGroupResources</code> request, to get more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The NextToken value to include in a subsequent
     * <code>ListGroupResources</code> request, to get more results.</p>
     */
    inline ListGroupResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The NextToken value to include in a subsequent
     * <code>ListGroupResources</code> request, to get more results.</p>
     */
    inline ListGroupResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The NextToken value to include in a subsequent
     * <code>ListGroupResources</code> request, to get more results.</p>
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

    Aws::Vector<ResourceIdentifier> m_resourceIdentifiers;

    Aws::String m_nextToken;

    Aws::Vector<QueryError> m_queryErrors;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
