/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Amazon SNS topic names that receive status messages from the
     * specified Directory ID.</p>
     */
    inline const Aws::Vector<EventTopic>& GetEventTopics() const { return m_eventTopics; }
    template<typename EventTopicsT = Aws::Vector<EventTopic>>
    void SetEventTopics(EventTopicsT&& value) { m_eventTopicsHasBeenSet = true; m_eventTopics = std::forward<EventTopicsT>(value); }
    template<typename EventTopicsT = Aws::Vector<EventTopic>>
    DescribeEventTopicsResult& WithEventTopics(EventTopicsT&& value) { SetEventTopics(std::forward<EventTopicsT>(value)); return *this;}
    template<typename EventTopicsT = EventTopic>
    DescribeEventTopicsResult& AddEventTopics(EventTopicsT&& value) { m_eventTopicsHasBeenSet = true; m_eventTopics.emplace_back(std::forward<EventTopicsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventTopicsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventTopic> m_eventTopics;
    bool m_eventTopicsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
