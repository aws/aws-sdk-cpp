/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/SidewalkUpdateImportInfo.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateWirelessDeviceImportTaskRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateWirelessDeviceImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWirelessDeviceImportTask"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline UpdateWirelessDeviceImportTaskRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline UpdateWirelessDeviceImportTaskRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the import task to be updated.</p>
     */
    inline UpdateWirelessDeviceImportTaskRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Sidewalk-related parameters of the import task to be updated.</p>
     */
    inline const SidewalkUpdateImportInfo& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk-related parameters of the import task to be updated.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>The Sidewalk-related parameters of the import task to be updated.</p>
     */
    inline void SetSidewalk(const SidewalkUpdateImportInfo& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>The Sidewalk-related parameters of the import task to be updated.</p>
     */
    inline void SetSidewalk(SidewalkUpdateImportInfo&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk-related parameters of the import task to be updated.</p>
     */
    inline UpdateWirelessDeviceImportTaskRequest& WithSidewalk(const SidewalkUpdateImportInfo& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk-related parameters of the import task to be updated.</p>
     */
    inline UpdateWirelessDeviceImportTaskRequest& WithSidewalk(SidewalkUpdateImportInfo&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SidewalkUpdateImportInfo m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
