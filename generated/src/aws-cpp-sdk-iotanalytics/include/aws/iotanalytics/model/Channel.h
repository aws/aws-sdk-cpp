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


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Channel& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where channel data is stored. You can choose one of
     * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
     * specified, the default is <code>serviceManagedS3</code>. You can't change this
     * storage option after the channel is created.</p>
     */
    inline const ChannelStorage& GetStorage() const{ return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    inline void SetStorage(const ChannelStorage& value) { m_storageHasBeenSet = true; m_storage = value; }
    inline void SetStorage(ChannelStorage&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }
    inline Channel& WithStorage(const ChannelStorage& value) { SetStorage(value); return *this;}
    inline Channel& WithStorage(ChannelStorage&& value) { SetStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the channel.</p>
     */
    inline const ChannelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChannelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChannelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Channel& WithStatus(const ChannelStatus& value) { SetStatus(value); return *this;}
    inline Channel& WithStatus(ChannelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in days, message data is kept for the channel.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }
    inline Channel& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}
    inline Channel& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Channel& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Channel& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the channel was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline Channel& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline Channel& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when a new message arrived in the channel.</p> <p>IoT Analytics
     * updates this value at most once per minute for one channel. Hence, the
     * <code>lastMessageArrivalTime</code> value is an approximation.</p> <p>This
     * feature only applies to messages that arrived in the data store after October
     * 23, 2020. </p>
     */
    inline const Aws::Utils::DateTime& GetLastMessageArrivalTime() const{ return m_lastMessageArrivalTime; }
    inline bool LastMessageArrivalTimeHasBeenSet() const { return m_lastMessageArrivalTimeHasBeenSet; }
    inline void SetLastMessageArrivalTime(const Aws::Utils::DateTime& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = value; }
    inline void SetLastMessageArrivalTime(Aws::Utils::DateTime&& value) { m_lastMessageArrivalTimeHasBeenSet = true; m_lastMessageArrivalTime = std::move(value); }
    inline Channel& WithLastMessageArrivalTime(const Aws::Utils::DateTime& value) { SetLastMessageArrivalTime(value); return *this;}
    inline Channel& WithLastMessageArrivalTime(Aws::Utils::DateTime&& value) { SetLastMessageArrivalTime(std::move(value)); return *this;}
    ///@}
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
