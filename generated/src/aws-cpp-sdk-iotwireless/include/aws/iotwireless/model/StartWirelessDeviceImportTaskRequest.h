/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/SidewalkStartImportInfo.h>
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
  class StartWirelessDeviceImportTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API StartWirelessDeviceImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartWirelessDeviceImportTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline StartWirelessDeviceImportTaskRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline StartWirelessDeviceImportTaskRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages from the devices in the import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline StartWirelessDeviceImportTaskRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline StartWirelessDeviceImportTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline StartWirelessDeviceImportTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline StartWirelessDeviceImportTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline StartWirelessDeviceImportTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline StartWirelessDeviceImportTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline StartWirelessDeviceImportTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline StartWirelessDeviceImportTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Sidewalk-related parameters for importing wireless devices that need to
     * be provisioned in bulk.</p>
     */
    inline const SidewalkStartImportInfo& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk-related parameters for importing wireless devices that need to
     * be provisioned in bulk.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>The Sidewalk-related parameters for importing wireless devices that need to
     * be provisioned in bulk.</p>
     */
    inline void SetSidewalk(const SidewalkStartImportInfo& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>The Sidewalk-related parameters for importing wireless devices that need to
     * be provisioned in bulk.</p>
     */
    inline void SetSidewalk(SidewalkStartImportInfo&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk-related parameters for importing wireless devices that need to
     * be provisioned in bulk.</p>
     */
    inline StartWirelessDeviceImportTaskRequest& WithSidewalk(const SidewalkStartImportInfo& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk-related parameters for importing wireless devices that need to
     * be provisioned in bulk.</p>
     */
    inline StartWirelessDeviceImportTaskRequest& WithSidewalk(SidewalkStartImportInfo&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SidewalkStartImportInfo m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
