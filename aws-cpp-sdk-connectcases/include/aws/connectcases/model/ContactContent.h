/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>An object that represents a content of an Amazon Connect contact
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ContactContent">AWS
   * API Reference</a></p>
   */
  class ContactContent
  {
  public:
    AWS_CONNECTCASES_API ContactContent();
    AWS_CONNECTCASES_API ContactContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API ContactContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline const Aws::String& GetChannel() const{ return m_channel; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline void SetChannel(const Aws::String& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline void SetChannel(Aws::String&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline void SetChannel(const char* value) { m_channelHasBeenSet = true; m_channel.assign(value); }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactContent& WithChannel(const Aws::String& value) { SetChannel(value); return *this;}

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactContent& WithChannel(Aws::String&& value) { SetChannel(std::move(value)); return *this;}

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactContent& WithChannel(const char* value) { SetChannel(value); return *this;}


    /**
     * <p>The difference between the <code>InitiationTimestamp</code> and the
     * <code>DisconnectTimestamp</code> of the contact.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToSystemTime() const{ return m_connectedToSystemTime; }

    /**
     * <p>The difference between the <code>InitiationTimestamp</code> and the
     * <code>DisconnectTimestamp</code> of the contact.</p>
     */
    inline bool ConnectedToSystemTimeHasBeenSet() const { return m_connectedToSystemTimeHasBeenSet; }

    /**
     * <p>The difference between the <code>InitiationTimestamp</code> and the
     * <code>DisconnectTimestamp</code> of the contact.</p>
     */
    inline void SetConnectedToSystemTime(const Aws::Utils::DateTime& value) { m_connectedToSystemTimeHasBeenSet = true; m_connectedToSystemTime = value; }

    /**
     * <p>The difference between the <code>InitiationTimestamp</code> and the
     * <code>DisconnectTimestamp</code> of the contact.</p>
     */
    inline void SetConnectedToSystemTime(Aws::Utils::DateTime&& value) { m_connectedToSystemTimeHasBeenSet = true; m_connectedToSystemTime = std::move(value); }

    /**
     * <p>The difference between the <code>InitiationTimestamp</code> and the
     * <code>DisconnectTimestamp</code> of the contact.</p>
     */
    inline ContactContent& WithConnectedToSystemTime(const Aws::Utils::DateTime& value) { SetConnectedToSystemTime(value); return *this;}

    /**
     * <p>The difference between the <code>InitiationTimestamp</code> and the
     * <code>DisconnectTimestamp</code> of the contact.</p>
     */
    inline ContactContent& WithConnectedToSystemTime(Aws::Utils::DateTime&& value) { SetConnectedToSystemTime(std::move(value)); return *this;}


    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline ContactContent& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline ContactContent& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline ContactContent& WithContactArn(const char* value) { SetContactArn(value); return *this;}

  private:

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToSystemTime;
    bool m_connectedToSystemTimeHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
