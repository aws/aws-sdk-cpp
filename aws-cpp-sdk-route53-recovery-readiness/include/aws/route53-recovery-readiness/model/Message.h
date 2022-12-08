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
   * <p>Information relating to readiness check status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API Message();
    AWS_ROUTE53RECOVERYREADINESS_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of a readiness check message.</p>
     */
    inline const Aws::String& GetMessageText() const{ return m_messageText; }

    /**
     * <p>The text of a readiness check message.</p>
     */
    inline bool MessageTextHasBeenSet() const { return m_messageTextHasBeenSet; }

    /**
     * <p>The text of a readiness check message.</p>
     */
    inline void SetMessageText(const Aws::String& value) { m_messageTextHasBeenSet = true; m_messageText = value; }

    /**
     * <p>The text of a readiness check message.</p>
     */
    inline void SetMessageText(Aws::String&& value) { m_messageTextHasBeenSet = true; m_messageText = std::move(value); }

    /**
     * <p>The text of a readiness check message.</p>
     */
    inline void SetMessageText(const char* value) { m_messageTextHasBeenSet = true; m_messageText.assign(value); }

    /**
     * <p>The text of a readiness check message.</p>
     */
    inline Message& WithMessageText(const Aws::String& value) { SetMessageText(value); return *this;}

    /**
     * <p>The text of a readiness check message.</p>
     */
    inline Message& WithMessageText(Aws::String&& value) { SetMessageText(std::move(value)); return *this;}

    /**
     * <p>The text of a readiness check message.</p>
     */
    inline Message& WithMessageText(const char* value) { SetMessageText(value); return *this;}

  private:

    Aws::String m_messageText;
    bool m_messageTextHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
