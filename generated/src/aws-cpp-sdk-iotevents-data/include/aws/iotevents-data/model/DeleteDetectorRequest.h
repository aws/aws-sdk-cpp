/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information used to delete the detector model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DeleteDetectorRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDetectorRequest
  {
  public:
    AWS_IOTEVENTSDATA_API DeleteDetectorRequest();
    AWS_IOTEVENTSDATA_API DeleteDetectorRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API DeleteDetectorRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline DeleteDetectorRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline DeleteDetectorRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID to assign to the <code>DeleteDetectorRequest</code>. Each
     * <code>"messageId"</code> must be unique within each batch sent.</p>
     */
    inline DeleteDetectorRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }

    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }

    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }

    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }

    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }

    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline DeleteDetectorRequest& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}

    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline DeleteDetectorRequest& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector model that was used to create the detector
     * instance.</p>
     */
    inline DeleteDetectorRequest& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}


    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }

    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }

    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }

    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }

    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline DeleteDetectorRequest& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline DeleteDetectorRequest& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateDetectorModel.html#iotevents-CreateDetectorModel-request-key">key</a>
     * used to identify the detector. </p>
     */
    inline DeleteDetectorRequest& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
