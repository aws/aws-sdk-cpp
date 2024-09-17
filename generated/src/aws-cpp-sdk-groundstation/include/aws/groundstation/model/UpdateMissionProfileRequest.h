/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/KmsKey.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateMissionProfileRequest">AWS
   * API Reference</a></p>
   */
  class UpdateMissionProfileRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API UpdateMissionProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMissionProfile"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amount of time after a contact ends that you’d like to receive a Ground
     * Station Contact State Change event indicating the pass has finished.</p>
     */
    inline int GetContactPostPassDurationSeconds() const{ return m_contactPostPassDurationSeconds; }
    inline bool ContactPostPassDurationSecondsHasBeenSet() const { return m_contactPostPassDurationSecondsHasBeenSet; }
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSecondsHasBeenSet = true; m_contactPostPassDurationSeconds = value; }
    inline UpdateMissionProfileRequest& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time after a contact ends that you’d like to receive a Ground
     * Station Contact State Change event indicating the pass has finished.</p>
     */
    inline int GetContactPrePassDurationSeconds() const{ return m_contactPrePassDurationSeconds; }
    inline bool ContactPrePassDurationSecondsHasBeenSet() const { return m_contactPrePassDurationSecondsHasBeenSet; }
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSecondsHasBeenSet = true; m_contactPrePassDurationSeconds = value; }
    inline UpdateMissionProfileRequest& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a <i>from</i>
     * <code>Config</code> and a <i>to</i> <code>Config</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetDataflowEdges() const{ return m_dataflowEdges; }
    inline bool DataflowEdgesHasBeenSet() const { return m_dataflowEdgesHasBeenSet; }
    inline void SetDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges = value; }
    inline void SetDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges = std::move(value); }
    inline UpdateMissionProfileRequest& WithDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetDataflowEdges(value); return *this;}
    inline UpdateMissionProfileRequest& WithDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetDataflowEdges(std::move(value)); return *this;}
    inline UpdateMissionProfileRequest& AddDataflowEdges(const Aws::Vector<Aws::String>& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges.push_back(value); return *this; }
    inline UpdateMissionProfileRequest& AddDataflowEdges(Aws::Vector<Aws::String>&& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline int GetMinimumViableContactDurationSeconds() const{ return m_minimumViableContactDurationSeconds; }
    inline bool MinimumViableContactDurationSecondsHasBeenSet() const { return m_minimumViableContactDurationSecondsHasBeenSet; }
    inline void SetMinimumViableContactDurationSeconds(int value) { m_minimumViableContactDurationSecondsHasBeenSet = true; m_minimumViableContactDurationSeconds = value; }
    inline UpdateMissionProfileRequest& WithMinimumViableContactDurationSeconds(int value) { SetMinimumViableContactDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }
    inline bool MissionProfileIdHasBeenSet() const { return m_missionProfileIdHasBeenSet; }
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = value; }
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = std::move(value); }
    inline void SetMissionProfileId(const char* value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId.assign(value); }
    inline UpdateMissionProfileRequest& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}
    inline UpdateMissionProfileRequest& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}
    inline UpdateMissionProfileRequest& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a mission profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateMissionProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMissionProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMissionProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS key to use for encrypting streams.</p>
     */
    inline const KmsKey& GetStreamsKmsKey() const{ return m_streamsKmsKey; }
    inline bool StreamsKmsKeyHasBeenSet() const { return m_streamsKmsKeyHasBeenSet; }
    inline void SetStreamsKmsKey(const KmsKey& value) { m_streamsKmsKeyHasBeenSet = true; m_streamsKmsKey = value; }
    inline void SetStreamsKmsKey(KmsKey&& value) { m_streamsKmsKeyHasBeenSet = true; m_streamsKmsKey = std::move(value); }
    inline UpdateMissionProfileRequest& WithStreamsKmsKey(const KmsKey& value) { SetStreamsKmsKey(value); return *this;}
    inline UpdateMissionProfileRequest& WithStreamsKmsKey(KmsKey&& value) { SetStreamsKmsKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Role to use for encrypting streams with KMS key.</p>
     */
    inline const Aws::String& GetStreamsKmsRole() const{ return m_streamsKmsRole; }
    inline bool StreamsKmsRoleHasBeenSet() const { return m_streamsKmsRoleHasBeenSet; }
    inline void SetStreamsKmsRole(const Aws::String& value) { m_streamsKmsRoleHasBeenSet = true; m_streamsKmsRole = value; }
    inline void SetStreamsKmsRole(Aws::String&& value) { m_streamsKmsRoleHasBeenSet = true; m_streamsKmsRole = std::move(value); }
    inline void SetStreamsKmsRole(const char* value) { m_streamsKmsRoleHasBeenSet = true; m_streamsKmsRole.assign(value); }
    inline UpdateMissionProfileRequest& WithStreamsKmsRole(const Aws::String& value) { SetStreamsKmsRole(value); return *this;}
    inline UpdateMissionProfileRequest& WithStreamsKmsRole(Aws::String&& value) { SetStreamsKmsRole(std::move(value)); return *this;}
    inline UpdateMissionProfileRequest& WithStreamsKmsRole(const char* value) { SetStreamsKmsRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline const Aws::String& GetTrackingConfigArn() const{ return m_trackingConfigArn; }
    inline bool TrackingConfigArnHasBeenSet() const { return m_trackingConfigArnHasBeenSet; }
    inline void SetTrackingConfigArn(const Aws::String& value) { m_trackingConfigArnHasBeenSet = true; m_trackingConfigArn = value; }
    inline void SetTrackingConfigArn(Aws::String&& value) { m_trackingConfigArnHasBeenSet = true; m_trackingConfigArn = std::move(value); }
    inline void SetTrackingConfigArn(const char* value) { m_trackingConfigArnHasBeenSet = true; m_trackingConfigArn.assign(value); }
    inline UpdateMissionProfileRequest& WithTrackingConfigArn(const Aws::String& value) { SetTrackingConfigArn(value); return *this;}
    inline UpdateMissionProfileRequest& WithTrackingConfigArn(Aws::String&& value) { SetTrackingConfigArn(std::move(value)); return *this;}
    inline UpdateMissionProfileRequest& WithTrackingConfigArn(const char* value) { SetTrackingConfigArn(value); return *this;}
    ///@}
  private:

    int m_contactPostPassDurationSeconds;
    bool m_contactPostPassDurationSecondsHasBeenSet = false;

    int m_contactPrePassDurationSeconds;
    bool m_contactPrePassDurationSecondsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_dataflowEdges;
    bool m_dataflowEdgesHasBeenSet = false;

    int m_minimumViableContactDurationSeconds;
    bool m_minimumViableContactDurationSecondsHasBeenSet = false;

    Aws::String m_missionProfileId;
    bool m_missionProfileIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    KmsKey m_streamsKmsKey;
    bool m_streamsKmsKeyHasBeenSet = false;

    Aws::String m_streamsKmsRole;
    bool m_streamsKmsRoleHasBeenSet = false;

    Aws::String m_trackingConfigArn;
    bool m_trackingConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
