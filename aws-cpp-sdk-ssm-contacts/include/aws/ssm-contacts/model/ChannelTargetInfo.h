/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about the contact channel that Incident Manager uses to engage
   * the contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ChannelTargetInfo">AWS
   * API Reference</a></p>
   */
  class ChannelTargetInfo
  {
  public:
    AWS_SSMCONTACTS_API ChannelTargetInfo();
    AWS_SSMCONTACTS_API ChannelTargetInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ChannelTargetInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelId() const{ return m_contactChannelId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelId(const Aws::String& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelId(Aws::String&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelId(const char* value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline ChannelTargetInfo& WithContactChannelId(const Aws::String& value) { SetContactChannelId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline ChannelTargetInfo& WithContactChannelId(Aws::String&& value) { SetContactChannelId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline ChannelTargetInfo& WithContactChannelId(const char* value) { SetContactChannelId(value); return *this;}


    /**
     * <p>The number of minutes to wait to retry sending engagement in the case the
     * engagement initially fails.</p>
     */
    inline int GetRetryIntervalInMinutes() const{ return m_retryIntervalInMinutes; }

    /**
     * <p>The number of minutes to wait to retry sending engagement in the case the
     * engagement initially fails.</p>
     */
    inline bool RetryIntervalInMinutesHasBeenSet() const { return m_retryIntervalInMinutesHasBeenSet; }

    /**
     * <p>The number of minutes to wait to retry sending engagement in the case the
     * engagement initially fails.</p>
     */
    inline void SetRetryIntervalInMinutes(int value) { m_retryIntervalInMinutesHasBeenSet = true; m_retryIntervalInMinutes = value; }

    /**
     * <p>The number of minutes to wait to retry sending engagement in the case the
     * engagement initially fails.</p>
     */
    inline ChannelTargetInfo& WithRetryIntervalInMinutes(int value) { SetRetryIntervalInMinutes(value); return *this;}

  private:

    Aws::String m_contactChannelId;
    bool m_contactChannelIdHasBeenSet = false;

    int m_retryIntervalInMinutes;
    bool m_retryIntervalInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
