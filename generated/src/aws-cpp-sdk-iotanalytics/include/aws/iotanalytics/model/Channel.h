/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ChannelStorage.h>
#include <aws/iotanalytics/model/ChannelStatus.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>A collection of data from an MQTT topic. Channels archive the raw,
   * unprocessed messages before publishing the data to a pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_IOTANALYTICS_API Channel();
    AWS_IOTANALYTICS_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline Channel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline const ChannelStorage& GetStorage() const{ return m_storage; }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline void SetStorage(const ChannelStorage& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline void SetStorage(ChannelStorage&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline Channel& WithStorage(const ChannelStorage& value) { SetStorage(value); return *this;}

    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline Channel& WithStorage(ChannelStorage&& value) { SetStorage(std::move(value)); return *this;}


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the channel.</p>
     */
    inline const ChannelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the channel.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the channel.</p>
     */
    inline void SetStatus(const ChannelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the channel.</p>
     */
    inline void SetStatus(ChannelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the channel.</p>
     */
    inline Channel& WithStatus(const ChannelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the channel.</p>
     */
    inline Channel& WithStatus(ChannelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline Channel& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline Channel& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>When the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the channel was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the channel was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the channel was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the channel was created.</p>
     */
    inline Channel& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the channel was created.</p>
     */
    inline Channel& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the channel was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>When the channel was last updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>When the channel was last updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>When the channel was last updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>When the channel was last updated.</p>
     */
    inline Channel& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>When the channel was last updated.</p>
     */
    inline Channel& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const{ return m_lastMessageArrivalTime; }

    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }

    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline void SetLastMessageArrivalTime(const Aws::Utils::DateTime& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = value; }

    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline void SetLastMessageArrivalTime(Aws::Utils::DateTime&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::move(value); }

    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline Channel& WithLastMessageArrivalTime(const Aws::Utils::DateTime& value) { SetLastMessageArrivalTime(value); return *this;}

    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline Channel& WithLastMessageArrivalTime(Aws::Utils::DateTime&& value) { SetLastMessageArrivalTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelStorage m_storage;
    bool m_storageHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ChannelStatus m_status;
    bool m_statusHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastMessageArrivalTime;
    bool m_lastMessageArrivalTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
