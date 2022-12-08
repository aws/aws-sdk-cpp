/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines a Amazon Pinpoint destination for email events. You
   * can use Amazon Pinpoint events to create attributes in Amazon Pinpoint projects.
   * You can use these attributes to create segments for your
   * campaigns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PinpointDestination">AWS
   * API Reference</a></p>
   */
  class PinpointDestination
  {
  public:
    AWS_PINPOINTEMAIL_API PinpointDestination();
    AWS_PINPOINTEMAIL_API PinpointDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API PinpointDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline PinpointDestination& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline PinpointDestination& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project that you want
     * to send email events to.</p>
     */
    inline PinpointDestination& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
