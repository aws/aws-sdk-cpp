/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DeleteScheduleRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteScheduleRequest">AWS
   * API Reference</a></p>
   */
  class DeleteScheduleRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DeleteScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSchedule"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline DeleteScheduleRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline DeleteScheduleRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * Id of the channel whose schedule is being deleted.
     */
    inline DeleteScheduleRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
