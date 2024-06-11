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
    AWS_CONNECT_API CustomerVoiceActivity();
    AWS_CONNECT_API CustomerVoiceActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CustomerVoiceActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp that measures the beginning of the customer greeting from an
     * outbound voice call.</p>
     */
    inline const Aws::Utils::DateTime& GetGreetingStartTimestamp() const{ return m_greetingStartTimestamp; }
    inline bool GreetingStartTimestampHasBeenSet() const { return m_greetingStartTimestampHasBeenSet; }
    inline void SetGreetingStartTimestamp(const Aws::Utils::DateTime& value) { m_greetingStartTimestampHasBeenSet = true; m_greetingStartTimestamp = value; }
    inline void SetGreetingStartTimestamp(Aws::Utils::DateTime&& value) { m_greetingStartTimestampHasBeenSet = true; m_greetingStartTimestamp = std::move(value); }
    inline CustomerVoiceActivity& WithGreetingStartTimestamp(const Aws::Utils::DateTime& value) { SetGreetingStartTimestamp(value); return *this;}
    inline CustomerVoiceActivity& WithGreetingStartTimestamp(Aws::Utils::DateTime&& value) { SetGreetingStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp that measures the end of the customer greeting from an outbound
     * voice call.</p>
     */
    inline const Aws::Utils::DateTime& GetGreetingEndTimestamp() const{ return m_greetingEndTimestamp; }
    inline bool GreetingEndTimestampHasBeenSet() const { return m_greetingEndTimestampHasBeenSet; }
    inline void SetGreetingEndTimestamp(const Aws::Utils::DateTime& value) { m_greetingEndTimestampHasBeenSet = true; m_greetingEndTimestamp = value; }
    inline void SetGreetingEndTimestamp(Aws::Utils::DateTime&& value) { m_greetingEndTimestampHasBeenSet = true; m_greetingEndTimestamp = std::move(value); }
    inline CustomerVoiceActivity& WithGreetingEndTimestamp(const Aws::Utils::DateTime& value) { SetGreetingEndTimestamp(value); return *this;}
    inline CustomerVoiceActivity& WithGreetingEndTimestamp(Aws::Utils::DateTime&& value) { SetGreetingEndTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_greetingStartTimestamp;
    bool m_greetingStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_greetingEndTimestamp;
    bool m_greetingEndTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
