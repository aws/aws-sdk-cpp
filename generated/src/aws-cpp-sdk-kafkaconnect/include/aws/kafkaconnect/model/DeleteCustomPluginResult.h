/**
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
    AWS_KAFKACONNECT_API DeleteCustomPluginResult() = default;
    AWS_KAFKACONNECT_API DeleteCustomPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DeleteCustomPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const { return m_customPluginArn; }
    template<typename CustomPluginArnT = Aws::String>
    void SetCustomPluginArn(CustomPluginArnT&& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = std::forward<CustomPluginArnT>(value); }
    template<typename CustomPluginArnT = Aws::String>
    DeleteCustomPluginResult& WithCustomPluginArn(CustomPluginArnT&& value) { SetCustomPluginArn(std::forward<CustomPluginArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the custom plugin.</p>
     */
    inline CustomPluginState GetCustomPluginState() const { return m_customPluginState; }
    inline void SetCustomPluginState(CustomPluginState value) { m_customPluginStateHasBeenSet = true; m_customPluginState = value; }
    inline DeleteCustomPluginResult& WithCustomPluginState(CustomPluginState value) { SetCustomPluginState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteCustomPluginResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customPluginArn;
    bool m_customPluginArnHasBeenSet = false;

    CustomPluginState m_customPluginState{CustomPluginState::NOT_SET};
    bool m_customPluginStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
