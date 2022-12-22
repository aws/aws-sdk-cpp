/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/EventTopic.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>The result of a DescribeEventTopic request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeEventTopicsResult">AWS
   * API Reference</a></p>
   */
  class DescribeEventTopicsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsResult();
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline const Aws::Vector<EventTopic>& GetEventTopics() const{ return m_eventTopics; }

    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline void SetEventTopics(const Aws::Vector<EventTopic>& value) { m_eventTopics = value; }

    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline void SetEventTopics(Aws::Vector<EventTopic>&& value) { m_eventTopics = std::move(value); }

    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline DescribeEventTopicsResult& WithEventTopics(const Aws::Vector<EventTopic>& value) { SetEventTopics(value); return *this;}

    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline DescribeEventTopicsResult& WithEventTopics(Aws::Vector<EventTopic>&& value) { SetEventTopics(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline DescribeEventTopicsResult& AddEventTopics(const EventTopic& value) { m_eventTopics.push_back(value); return *this; }

    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline DescribeEventTopicsResult& AddEventTopics(EventTopic&& value) { m_eventTopics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EventTopic> m_eventTopics;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
