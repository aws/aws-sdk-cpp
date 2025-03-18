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
    AWS_CONNECTCASES_API ContactContent() = default;
    AWS_CONNECTCASES_API ContactContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API ContactContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline const Aws::String& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = Aws::String>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = Aws::String>
    ContactContent& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The difference between the <code>InitiationTimestamp</code> and the
     * <code>DisconnectTimestamp</code> of the contact.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToSystemTime() const { return m_connectedToSystemTime; }
    inline bool ConnectedToSystemTimeHasBeenSet() const { return m_connectedToSystemTimeHasBeenSet; }
    template<typename ConnectedToSystemTimeT = Aws::Utils::DateTime>
    void SetConnectedToSystemTime(ConnectedToSystemTimeT&& value) { m_connectedToSystemTimeHasBeenSet = true; m_connectedToSystemTime = std::forward<ConnectedToSystemTimeT>(value); }
    template<typename ConnectedToSystemTimeT = Aws::Utils::DateTime>
    ContactContent& WithConnectedToSystemTime(ConnectedToSystemTimeT&& value) { SetConnectedToSystemTime(std::forward<ConnectedToSystemTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline const Aws::String& GetContactArn() const { return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    template<typename ContactArnT = Aws::String>
    void SetContactArn(ContactArnT&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::forward<ContactArnT>(value); }
    template<typename ContactArnT = Aws::String>
    ContactContent& WithContactArn(ContactArnT&& value) { SetContactArn(std::forward<ContactArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToSystemTime{};
    bool m_connectedToSystemTimeHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
