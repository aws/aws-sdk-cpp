/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteOTAUpdateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteOTAUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOTAUpdate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const{ return m_otaUpdateId; }

    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }

    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline void SetOtaUpdateId(const Aws::String& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = value; }

    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline void SetOtaUpdateId(Aws::String&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::move(value); }

    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline void SetOtaUpdateId(const char* value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId.assign(value); }

    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline DeleteOTAUpdateRequest& WithOtaUpdateId(const Aws::String& value) { SetOtaUpdateId(value); return *this;}

    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline DeleteOTAUpdateRequest& WithOtaUpdateId(Aws::String&& value) { SetOtaUpdateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline DeleteOTAUpdateRequest& WithOtaUpdateId(const char* value) { SetOtaUpdateId(value); return *this;}


    /**
     * <p>When true, the stream created by the OTAUpdate process is deleted when the
     * OTA update is deleted. Ignored if the stream specified in the OTAUpdate is
     * supplied by the user.</p>
     */
    inline bool GetDeleteStream() const{ return m_deleteStream; }

    /**
     * <p>When true, the stream created by the OTAUpdate process is deleted when the
     * OTA update is deleted. Ignored if the stream specified in the OTAUpdate is
     * supplied by the user.</p>
     */
    inline bool DeleteStreamHasBeenSet() const { return m_deleteStreamHasBeenSet; }

    /**
     * <p>When true, the stream created by the OTAUpdate process is deleted when the
     * OTA update is deleted. Ignored if the stream specified in the OTAUpdate is
     * supplied by the user.</p>
     */
    inline void SetDeleteStream(bool value) { m_deleteStreamHasBeenSet = true; m_deleteStream = value; }

    /**
     * <p>When true, the stream created by the OTAUpdate process is deleted when the
     * OTA update is deleted. Ignored if the stream specified in the OTAUpdate is
     * supplied by the user.</p>
     */
    inline DeleteOTAUpdateRequest& WithDeleteStream(bool value) { SetDeleteStream(value); return *this;}


    /**
     * <p>When true, deletes the IoT job created by the OTAUpdate process even if it is
     * "IN_PROGRESS". Otherwise, if the job is not in a terminal state ("COMPLETED" or
     * "CANCELED") an exception will occur. The default is false.</p>
     */
    inline bool GetForceDeleteAWSJob() const{ return m_forceDeleteAWSJob; }

    /**
     * <p>When true, deletes the IoT job created by the OTAUpdate process even if it is
     * "IN_PROGRESS". Otherwise, if the job is not in a terminal state ("COMPLETED" or
     * "CANCELED") an exception will occur. The default is false.</p>
     */
    inline bool ForceDeleteAWSJobHasBeenSet() const { return m_forceDeleteAWSJobHasBeenSet; }

    /**
     * <p>When true, deletes the IoT job created by the OTAUpdate process even if it is
     * "IN_PROGRESS". Otherwise, if the job is not in a terminal state ("COMPLETED" or
     * "CANCELED") an exception will occur. The default is false.</p>
     */
    inline void SetForceDeleteAWSJob(bool value) { m_forceDeleteAWSJobHasBeenSet = true; m_forceDeleteAWSJob = value; }

    /**
     * <p>When true, deletes the IoT job created by the OTAUpdate process even if it is
     * "IN_PROGRESS". Otherwise, if the job is not in a terminal state ("COMPLETED" or
     * "CANCELED") an exception will occur. The default is false.</p>
     */
    inline DeleteOTAUpdateRequest& WithForceDeleteAWSJob(bool value) { SetForceDeleteAWSJob(value); return *this;}

  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    bool m_deleteStream;
    bool m_deleteStreamHasBeenSet = false;

    bool m_forceDeleteAWSJob;
    bool m_forceDeleteAWSJobHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
