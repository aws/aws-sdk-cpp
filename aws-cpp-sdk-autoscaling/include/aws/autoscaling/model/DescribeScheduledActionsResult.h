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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/ScheduledUpdateGroupAction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class AWS_AUTOSCALING_API DescribeScheduledActionsResult
  {
  public:
    DescribeScheduledActionsResult();
    DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The scheduled actions.</p>
     */
    inline const Aws::Vector<ScheduledUpdateGroupAction>& GetScheduledUpdateGroupActions() const{ return m_scheduledUpdateGroupActions; }

    /**
     * <p>The scheduled actions.</p>
     */
    inline void SetScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupAction>& value) { m_scheduledUpdateGroupActions = value; }

    /**
     * <p>The scheduled actions.</p>
     */
    inline void SetScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupAction>&& value) { m_scheduledUpdateGroupActions = std::move(value); }

    /**
     * <p>The scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& WithScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupAction>& value) { SetScheduledUpdateGroupActions(value); return *this;}

    /**
     * <p>The scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& WithScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupAction>&& value) { SetScheduledUpdateGroupActions(std::move(value)); return *this;}

    /**
     * <p>The scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& AddScheduledUpdateGroupActions(const ScheduledUpdateGroupAction& value) { m_scheduledUpdateGroupActions.push_back(value); return *this; }

    /**
     * <p>The scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& AddScheduledUpdateGroupActions(ScheduledUpdateGroupAction&& value) { m_scheduledUpdateGroupActions.push_back(std::move(value)); return *this; }


    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeScheduledActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeScheduledActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeScheduledActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeScheduledActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeScheduledActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ScheduledUpdateGroupAction> m_scheduledUpdateGroupActions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
