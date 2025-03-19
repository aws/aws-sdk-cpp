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
  class CreateCustomPluginResult
  {
  public:
    AWS_KAFKACONNECT_API CreateCustomPluginResult() = default;
    AWS_KAFKACONNECT_API CreateCustomPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API CreateCustomPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const { return m_customPluginArn; }
    template<typename CustomPluginArnT = Aws::String>
    void SetCustomPluginArn(CustomPluginArnT&& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = std::forward<CustomPluginArnT>(value); }
    template<typename CustomPluginArnT = Aws::String>
    CreateCustomPluginResult& WithCustomPluginArn(CustomPluginArnT&& value) { SetCustomPluginArn(std::forward<CustomPluginArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the custom plugin.</p>
     */
    inline CustomPluginState GetCustomPluginState() const { return m_customPluginState; }
    inline void SetCustomPluginState(CustomPluginState value) { m_customPluginStateHasBeenSet = true; m_customPluginState = value; }
    inline CreateCustomPluginResult& WithCustomPluginState(CustomPluginState value) { SetCustomPluginState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom plugin.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCustomPluginResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline long long GetRevision() const { return m_revision; }
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline CreateCustomPluginResult& WithRevision(long long value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCustomPluginResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customPluginArn;
    bool m_customPluginArnHasBeenSet = false;

    CustomPluginState m_customPluginState{CustomPluginState::NOT_SET};
    bool m_customPluginStateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_revision{0};
    bool m_revisionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
