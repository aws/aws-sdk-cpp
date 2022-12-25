/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>

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
namespace EventBridge
{
namespace Model
{
  class TestEventPatternResult
  {
  public:
    AWS_EVENTBRIDGE_API TestEventPatternResult();
    AWS_EVENTBRIDGE_API TestEventPatternResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API TestEventPatternResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the event matches the event pattern.</p>
     */
    inline bool GetResult() const{ return m_result; }

    /**
     * <p>Indicates whether the event matches the event pattern.</p>
     */
    inline void SetResult(bool value) { m_result = value; }

    /**
     * <p>Indicates whether the event matches the event pattern.</p>
     */
    inline TestEventPatternResult& WithResult(bool value) { SetResult(value); return *this;}

  private:

    bool m_result;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
