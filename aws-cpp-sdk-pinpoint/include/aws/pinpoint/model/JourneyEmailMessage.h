/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the "From" address for an email message that's sent to participants
   * in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyEmailMessage">AWS
   * API Reference</a></p>
   */
  class JourneyEmailMessage
  {
  public:
    AWS_PINPOINT_API JourneyEmailMessage();
    AWS_PINPOINT_API JourneyEmailMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyEmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline JourneyEmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline JourneyEmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * <p>The verified email address to send the email message from. The default
     * address is the FromAddress specified for the email channel for the
     * application.</p>
     */
    inline JourneyEmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}

  private:

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
