﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/CustomPluginState.h>
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
namespace KafkaConnect
{
namespace Model
{
  class DeleteCustomPluginResult
  {
  public:
    AWS_KAFKACONNECT_API DeleteCustomPluginResult();
    AWS_KAFKACONNECT_API DeleteCustomPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DeleteCustomPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const{ return m_customPluginArn; }
    inline void SetCustomPluginArn(const Aws::String& value) { m_customPluginArn = value; }
    inline void SetCustomPluginArn(Aws::String&& value) { m_customPluginArn = std::move(value); }
    inline void SetCustomPluginArn(const char* value) { m_customPluginArn.assign(value); }
    inline DeleteCustomPluginResult& WithCustomPluginArn(const Aws::String& value) { SetCustomPluginArn(value); return *this;}
    inline DeleteCustomPluginResult& WithCustomPluginArn(Aws::String&& value) { SetCustomPluginArn(std::move(value)); return *this;}
    inline DeleteCustomPluginResult& WithCustomPluginArn(const char* value) { SetCustomPluginArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the custom plugin.</p>
     */
    inline const CustomPluginState& GetCustomPluginState() const{ return m_customPluginState; }
    inline void SetCustomPluginState(const CustomPluginState& value) { m_customPluginState = value; }
    inline void SetCustomPluginState(CustomPluginState&& value) { m_customPluginState = std::move(value); }
    inline DeleteCustomPluginResult& WithCustomPluginState(const CustomPluginState& value) { SetCustomPluginState(value); return *this;}
    inline DeleteCustomPluginResult& WithCustomPluginState(CustomPluginState&& value) { SetCustomPluginState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteCustomPluginResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteCustomPluginResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteCustomPluginResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_customPluginArn;

    CustomPluginState m_customPluginState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
