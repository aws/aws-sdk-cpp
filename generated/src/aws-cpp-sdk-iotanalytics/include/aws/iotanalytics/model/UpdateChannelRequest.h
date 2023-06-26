/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ChannelStorage.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class UpdateChannelRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel to be updated.</p>
     */
    inline UpdateChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline const ChannelStorage& GetChannelStorage() const{ return m_channelStorage; }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline bool ChannelStorageHasBeenSet() const { return m_channelStorageHasBeenSet; }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline void SetChannelStorage(const ChannelStorage& value) { m_channelStorageHasBeenSet = true; m_channelStorage = value; }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline void SetChannelStorage(ChannelStorage&& value) { m_channelStorageHasBeenSet = true; m_channelStorage = std::move(value); }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline UpdateChannelRequest& WithChannelStorage(const ChannelStorage& value) { SetChannelStorage(value); return *this;}

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline UpdateChannelRequest& WithChannelStorage(ChannelStorage&& value) { SetChannelStorage(std::move(value)); return *this;}


    /**
     * <p>How long, in days, message data is kept for the channel. The retention period
     * can't be updated if the channel's Amazon S3 storage is customer-managed.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the channel. The retention period
     * can't be updated if the channel's Amazon S3 storage is customer-managed.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long, in days, message data is kept for the channel. The retention period
     * can't be updated if the channel's Amazon S3 storage is customer-managed.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the channel. The retention period
     * can't be updated if the channel's Amazon S3 storage is customer-managed.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the channel. The retention period
     * can't be updated if the channel's Amazon S3 storage is customer-managed.</p>
     */
    inline UpdateChannelRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the channel. The retention period
     * can't be updated if the channel's Amazon S3 storage is customer-managed.</p>
     */
    inline UpdateChannelRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    ChannelStorage m_channelStorage;
    bool m_channelStorageHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
