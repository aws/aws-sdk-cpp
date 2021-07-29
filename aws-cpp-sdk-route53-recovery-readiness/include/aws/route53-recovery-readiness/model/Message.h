/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * Information relating to readiness check status<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Message">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API Message
  {
  public:
    Message();
    Message(Aws::Utils::Json::JsonView jsonValue);
    Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The text of a readiness check message
     */
    inline const Aws::String& GetMessageText() const{ return m_messageText; }

    /**
     * The text of a readiness check message
     */
    inline bool MessageTextHasBeenSet() const { return m_messageTextHasBeenSet; }

    /**
     * The text of a readiness check message
     */
    inline void SetMessageText(const Aws::String& value) { m_messageTextHasBeenSet = true; m_messageText = value; }

    /**
     * The text of a readiness check message
     */
    inline void SetMessageText(Aws::String&& value) { m_messageTextHasBeenSet = true; m_messageText = std::move(value); }

    /**
     * The text of a readiness check message
     */
    inline void SetMessageText(const char* value) { m_messageTextHasBeenSet = true; m_messageText.assign(value); }

    /**
     * The text of a readiness check message
     */
    inline Message& WithMessageText(const Aws::String& value) { SetMessageText(value); return *this;}

    /**
     * The text of a readiness check message
     */
    inline Message& WithMessageText(Aws::String&& value) { SetMessageText(std::move(value)); return *this;}

    /**
     * The text of a readiness check message
     */
    inline Message& WithMessageText(const char* value) { SetMessageText(value); return *this;}

  private:

    Aws::String m_messageText;
    bool m_messageTextHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
