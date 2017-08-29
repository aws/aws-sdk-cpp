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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceComplianceSummaryItem.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListResourceComplianceSummariesResult
  {
  public:
    ListResourceComplianceSummariesResult();
    ListResourceComplianceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourceComplianceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A summary count for specified or targeted managed instances. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline const Aws::Vector<ResourceComplianceSummaryItem>& GetResourceComplianceSummaryItems() const{ return m_resourceComplianceSummaryItems; }

    /**
     * <p>A summary count for specified or targeted managed instances. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline void SetResourceComplianceSummaryItems(const Aws::Vector<ResourceComplianceSummaryItem>& value) { m_resourceComplianceSummaryItems = value; }

    /**
     * <p>A summary count for specified or targeted managed instances. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline void SetResourceComplianceSummaryItems(Aws::Vector<ResourceComplianceSummaryItem>&& value) { m_resourceComplianceSummaryItems = std::move(value); }

    /**
     * <p>A summary count for specified or targeted managed instances. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline ListResourceComplianceSummariesResult& WithResourceComplianceSummaryItems(const Aws::Vector<ResourceComplianceSummaryItem>& value) { SetResourceComplianceSummaryItems(value); return *this;}

    /**
     * <p>A summary count for specified or targeted managed instances. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline ListResourceComplianceSummariesResult& WithResourceComplianceSummaryItems(Aws::Vector<ResourceComplianceSummaryItem>&& value) { SetResourceComplianceSummaryItems(std::move(value)); return *this;}

    /**
     * <p>A summary count for specified or targeted managed instances. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline ListResourceComplianceSummariesResult& AddResourceComplianceSummaryItems(const ResourceComplianceSummaryItem& value) { m_resourceComplianceSummaryItems.push_back(value); return *this; }

    /**
     * <p>A summary count for specified or targeted managed instances. Summary count
     * includes information about compliant and non-compliant State Manager
     * associations, patch status, or custom items according to the filter criteria
     * that you specify. </p>
     */
    inline ListResourceComplianceSummariesResult& AddResourceComplianceSummaryItems(ResourceComplianceSummaryItem&& value) { m_resourceComplianceSummaryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListResourceComplianceSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListResourceComplianceSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListResourceComplianceSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceComplianceSummaryItem> m_resourceComplianceSummaryItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
