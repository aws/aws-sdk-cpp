/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BatchScheduleActionCreateRequest.h>
#include <aws/medialive/model/BatchScheduleActionDeleteRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * List of actions to create and list of actions to delete.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateScheduleRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API BatchUpdateScheduleRequest : public MediaLiveRequest
  {
  public:
    BatchUpdateScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateSchedule"; }

    Aws::String SerializePayload() const override;


    /**
     * Id of the channel whose schedule is being updated.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * Id of the channel whose schedule is being updated.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * Id of the channel whose schedule is being updated.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * Id of the channel whose schedule is being updated.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * Id of the channel whose schedule is being updated.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * Id of the channel whose schedule is being updated.
     */
    inline BatchUpdateScheduleRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * Id of the channel whose schedule is being updated.
     */
    inline BatchUpdateScheduleRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * Id of the channel whose schedule is being updated.
     */
    inline BatchUpdateScheduleRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * Schedule actions to create in the schedule.
     */
    inline const BatchScheduleActionCreateRequest& GetCreates() const{ return m_creates; }

    /**
     * Schedule actions to create in the schedule.
     */
    inline bool CreatesHasBeenSet() const { return m_createsHasBeenSet; }

    /**
     * Schedule actions to create in the schedule.
     */
    inline void SetCreates(const BatchScheduleActionCreateRequest& value) { m_createsHasBeenSet = true; m_creates = value; }

    /**
     * Schedule actions to create in the schedule.
     */
    inline void SetCreates(BatchScheduleActionCreateRequest&& value) { m_createsHasBeenSet = true; m_creates = std::move(value); }

    /**
     * Schedule actions to create in the schedule.
     */
    inline BatchUpdateScheduleRequest& WithCreates(const BatchScheduleActionCreateRequest& value) { SetCreates(value); return *this;}

    /**
     * Schedule actions to create in the schedule.
     */
    inline BatchUpdateScheduleRequest& WithCreates(BatchScheduleActionCreateRequest&& value) { SetCreates(std::move(value)); return *this;}


    /**
     * Schedule actions to delete from the schedule.
     */
    inline const BatchScheduleActionDeleteRequest& GetDeletes() const{ return m_deletes; }

    /**
     * Schedule actions to delete from the schedule.
     */
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }

    /**
     * Schedule actions to delete from the schedule.
     */
    inline void SetDeletes(const BatchScheduleActionDeleteRequest& value) { m_deletesHasBeenSet = true; m_deletes = value; }

    /**
     * Schedule actions to delete from the schedule.
     */
    inline void SetDeletes(BatchScheduleActionDeleteRequest&& value) { m_deletesHasBeenSet = true; m_deletes = std::move(value); }

    /**
     * Schedule actions to delete from the schedule.
     */
    inline BatchUpdateScheduleRequest& WithDeletes(const BatchScheduleActionDeleteRequest& value) { SetDeletes(value); return *this;}

    /**
     * Schedule actions to delete from the schedule.
     */
    inline BatchUpdateScheduleRequest& WithDeletes(BatchScheduleActionDeleteRequest&& value) { SetDeletes(std::move(value)); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;

    BatchScheduleActionCreateRequest m_creates;
    bool m_createsHasBeenSet;

    BatchScheduleActionDeleteRequest m_deletes;
    bool m_deletesHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
