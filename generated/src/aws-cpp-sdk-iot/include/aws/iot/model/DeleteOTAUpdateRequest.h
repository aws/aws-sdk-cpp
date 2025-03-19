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
    AWS_IOT_API DeleteOTAUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOTAUpdate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the OTA update to delete.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const { return m_otaUpdateId; }
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }
    template<typename OtaUpdateIdT = Aws::String>
    void SetOtaUpdateId(OtaUpdateIdT&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::forward<OtaUpdateIdT>(value); }
    template<typename OtaUpdateIdT = Aws::String>
    DeleteOTAUpdateRequest& WithOtaUpdateId(OtaUpdateIdT&& value) { SetOtaUpdateId(std::forward<OtaUpdateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, the stream created by the OTAUpdate process is deleted when the
     * OTA update is deleted. Ignored if the stream specified in the OTAUpdate is
     * supplied by the user.</p>
     */
    inline bool GetDeleteStream() const { return m_deleteStream; }
    inline bool DeleteStreamHasBeenSet() const { return m_deleteStreamHasBeenSet; }
    inline void SetDeleteStream(bool value) { m_deleteStreamHasBeenSet = true; m_deleteStream = value; }
    inline DeleteOTAUpdateRequest& WithDeleteStream(bool value) { SetDeleteStream(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, deletes the IoT job created by the OTAUpdate process even if it is
     * "IN_PROGRESS". Otherwise, if the job is not in a terminal state ("COMPLETED" or
     * "CANCELED") an exception will occur. The default is false.</p>
     */
    inline bool GetForceDeleteAWSJob() const { return m_forceDeleteAWSJob; }
    inline bool ForceDeleteAWSJobHasBeenSet() const { return m_forceDeleteAWSJobHasBeenSet; }
    inline void SetForceDeleteAWSJob(bool value) { m_forceDeleteAWSJobHasBeenSet = true; m_forceDeleteAWSJob = value; }
    inline DeleteOTAUpdateRequest& WithForceDeleteAWSJob(bool value) { SetForceDeleteAWSJob(value); return *this;}
    ///@}
  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    bool m_deleteStream{false};
    bool m_deleteStreamHasBeenSet = false;

    bool m_forceDeleteAWSJob{false};
    bool m_forceDeleteAWSJobHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
