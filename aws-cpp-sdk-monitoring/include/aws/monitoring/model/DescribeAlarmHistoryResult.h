/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/AlarmHistoryItem.h>
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
namespace CloudWatch
{
namespace Model
{
  class DescribeAlarmHistoryResult
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmHistoryResult();
    AWS_CLOUDWATCH_API DescribeAlarmHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAlarmHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline const Aws::Vector<AlarmHistoryItem>& GetAlarmHistoryItems() const{ return m_alarmHistoryItems; }

    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline void SetAlarmHistoryItems(const Aws::Vector<AlarmHistoryItem>& value) { m_alarmHistoryItems = value; }

    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline void SetAlarmHistoryItems(Aws::Vector<AlarmHistoryItem>&& value) { m_alarmHistoryItems = std::move(value); }

    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline DescribeAlarmHistoryResult& WithAlarmHistoryItems(const Aws::Vector<AlarmHistoryItem>& value) { SetAlarmHistoryItems(value); return *this;}

    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline DescribeAlarmHistoryResult& WithAlarmHistoryItems(Aws::Vector<AlarmHistoryItem>&& value) { SetAlarmHistoryItems(std::move(value)); return *this;}

    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline DescribeAlarmHistoryResult& AddAlarmHistoryItems(const AlarmHistoryItem& value) { m_alarmHistoryItems.push_back(value); return *this; }

    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline DescribeAlarmHistoryResult& AddAlarmHistoryItems(AlarmHistoryItem&& value) { m_alarmHistoryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAlarmHistoryResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAlarmHistoryResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AlarmHistoryItem> m_alarmHistoryItems;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
