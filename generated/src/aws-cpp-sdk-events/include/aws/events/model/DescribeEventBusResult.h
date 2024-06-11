/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class DescribeEventBusResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API DescribeEventBusResult();
    AWS_CLOUDWATCHEVENTS_API DescribeEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API DescribeEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the event bus. Currently, this is always
     * <code>default</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeEventBusResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeEventBusResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeEventBusResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account permitted to write events to
     * the current account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeEventBusResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeEventBusResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeEventBusResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy that enables the external account to send events to your
     * account.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline DescribeEventBusResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline DescribeEventBusResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline DescribeEventBusResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEventBusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEventBusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEventBusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
