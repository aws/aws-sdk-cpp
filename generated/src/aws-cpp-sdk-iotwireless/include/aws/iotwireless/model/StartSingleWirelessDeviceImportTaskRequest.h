/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/SidewalkSingleStartImportInfo.h>
#include <aws/iotwireless/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class StartSingleWirelessDeviceImportTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API StartSingleWirelessDeviceImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSingleWirelessDeviceImportTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the device in the import task that will be onboarded to AWS IoT
     * Wireless.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline StartSingleWirelessDeviceImportTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline StartSingleWirelessDeviceImportTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline StartSingleWirelessDeviceImportTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of the wireless device for which an import task is being
     * started.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline StartSingleWirelessDeviceImportTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline StartSingleWirelessDeviceImportTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline StartSingleWirelessDeviceImportTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline StartSingleWirelessDeviceImportTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Sidewalk-related parameters for importing a single wireless device.</p>
     */
    inline const SidewalkSingleStartImportInfo& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk-related parameters for importing a single wireless device.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>The Sidewalk-related parameters for importing a single wireless device.</p>
     */
    inline void SetSidewalk(const SidewalkSingleStartImportInfo& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>The Sidewalk-related parameters for importing a single wireless device.</p>
     */
    inline void SetSidewalk(SidewalkSingleStartImportInfo&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk-related parameters for importing a single wireless device.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithSidewalk(const SidewalkSingleStartImportInfo& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk-related parameters for importing a single wireless device.</p>
     */
    inline StartSingleWirelessDeviceImportTaskRequest& WithSidewalk(SidewalkSingleStartImportInfo&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SidewalkSingleStartImportInfo m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
