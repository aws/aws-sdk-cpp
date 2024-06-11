﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeScheduledActionsResult
  {
  public:
    AWS_AUTOSCALING_API DescribeScheduledActionsResult();
    AWS_AUTOSCALING_API DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The scheduled actions.</p>
     */
    inline const Aws::Vector<ScheduledUpdateGroupAction>& GetScheduledUpdateGroupActions() const{ return m_scheduledUpdateGroupActions; }
    inline void SetScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupAction>& value) { m_scheduledUpdateGroupActions = value; }
    inline void SetScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupAction>&& value) { m_scheduledUpdateGroupActions = std::move(value); }
    inline DescribeScheduledActionsResult& WithScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupAction>& value) { SetScheduledUpdateGroupActions(value); return *this;}
    inline DescribeScheduledActionsResult& WithScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupAction>&& value) { SetScheduledUpdateGroupActions(std::move(value)); return *this;}
    inline DescribeScheduledActionsResult& AddScheduledUpdateGroupActions(const ScheduledUpdateGroupAction& value) { m_scheduledUpdateGroupActions.push_back(value); return *this; }
    inline DescribeScheduledActionsResult& AddScheduledUpdateGroupActions(ScheduledUpdateGroupAction&& value) { m_scheduledUpdateGroupActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeScheduledActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScheduledActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScheduledActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeScheduledActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeScheduledActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScheduledUpdateGroupAction> m_scheduledUpdateGroupActions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
