/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the
   * RemoveNotificationChannelRequest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemoveNotificationChannelRequest">AWS
   * API Reference</a></p>
   */
  class RemoveNotificationChannelRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API RemoveNotificationChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveNotificationChannel"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;


    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline RemoveNotificationChannelRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline RemoveNotificationChannelRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * <p>The id of the channel that we want to stop receiving notifications.</p>
     */
    inline RemoveNotificationChannelRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline RemoveNotificationChannelRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline RemoveNotificationChannelRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group we want to change notification configuration
     * for.</p>
     */
    inline RemoveNotificationChannelRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
