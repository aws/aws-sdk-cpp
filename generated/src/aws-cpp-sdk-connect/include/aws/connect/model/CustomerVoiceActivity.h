/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about customer’s voice activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CustomerVoiceActivity">AWS
   * API Reference</a></p>
   */
  class CustomerVoiceActivity
  {
  public:
    AWS_CONNECT_API CustomerVoiceActivity() = default;
    AWS_CONNECT_API CustomerVoiceActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CustomerVoiceActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp that measures the beginning of the customer greeting from an
     * outbound voice call.</p>
     */
    inline const Aws::Utils::DateTime& GetGreetingStartTimestamp() const { return m_greetingStartTimestamp; }
    inline bool GreetingStartTimestampHasBeenSet() const { return m_greetingStartTimestampHasBeenSet; }
    template<typename GreetingStartTimestampT = Aws::Utils::DateTime>
    void SetGreetingStartTimestamp(GreetingStartTimestampT&& value) { m_greetingStartTimestampHasBeenSet = true; m_greetingStartTimestamp = std::forward<GreetingStartTimestampT>(value); }
    template<typename GreetingStartTimestampT = Aws::Utils::DateTime>
    CustomerVoiceActivity& WithGreetingStartTimestamp(GreetingStartTimestampT&& value) { SetGreetingStartTimestamp(std::forward<GreetingStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp that measures the end of the customer greeting from an outbound
     * voice call.</p>
     */
    inline const Aws::Utils::DateTime& GetGreetingEndTimestamp() const { return m_greetingEndTimestamp; }
    inline bool GreetingEndTimestampHasBeenSet() const { return m_greetingEndTimestampHasBeenSet; }
    template<typename GreetingEndTimestampT = Aws::Utils::DateTime>
    void SetGreetingEndTimestamp(GreetingEndTimestampT&& value) { m_greetingEndTimestampHasBeenSet = true; m_greetingEndTimestamp = std::forward<GreetingEndTimestampT>(value); }
    template<typename GreetingEndTimestampT = Aws::Utils::DateTime>
    CustomerVoiceActivity& WithGreetingEndTimestamp(GreetingEndTimestampT&& value) { SetGreetingEndTimestamp(std::forward<GreetingEndTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_greetingStartTimestamp{};
    bool m_greetingStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_greetingEndTimestamp{};
    bool m_greetingEndTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
