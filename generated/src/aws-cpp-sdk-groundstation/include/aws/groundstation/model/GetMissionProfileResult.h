/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/KmsKey.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfileResponse">AWS
   * API Reference</a></p>
   */
  class GetMissionProfileResult
  {
  public:
    AWS_GROUNDSTATION_API GetMissionProfileResult() = default;
    AWS_GROUNDSTATION_API GetMissionProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetMissionProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline int GetContactPostPassDurationSeconds() const { return m_contactPostPassDurationSeconds; }
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSecondsHasBeenSet = true; m_contactPostPassDurationSeconds = value; }
    inline GetMissionProfileResult& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline int GetContactPrePassDurationSeconds() const { return m_contactPrePassDurationSeconds; }
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSecondsHasBeenSet = true; m_contactPrePassDurationSeconds = value; }
    inline GetMissionProfileResult& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a <i>from</i>
     * <code>Config</code> and a <i>to</i> <code>Config</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetDataflowEdges() const { return m_dataflowEdges; }
    template<typename DataflowEdgesT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetDataflowEdges(DataflowEdgesT&& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges = std::forward<DataflowEdgesT>(value); }
    template<typename DataflowEdgesT = Aws::Vector<Aws::Vector<Aws::String>>>
    GetMissionProfileResult& WithDataflowEdges(DataflowEdgesT&& value) { SetDataflowEdges(std::forward<DataflowEdgesT>(value)); return *this;}
    template<typename DataflowEdgesT = Aws::Vector<Aws::String>>
    GetMissionProfileResult& AddDataflowEdges(DataflowEdgesT&& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges.emplace_back(std::forward<DataflowEdgesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline int GetMinimumViableContactDurationSeconds() const { return m_minimumViableContactDurationSeconds; }
    inline void SetMinimumViableContactDurationSeconds(int value) { m_minimumViableContactDurationSecondsHasBeenSet = true; m_minimumViableContactDurationSeconds = value; }
    inline GetMissionProfileResult& WithMinimumViableContactDurationSeconds(int value) { SetMinimumViableContactDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const { return m_missionProfileArn; }
    template<typename MissionProfileArnT = Aws::String>
    void SetMissionProfileArn(MissionProfileArnT&& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = std::forward<MissionProfileArnT>(value); }
    template<typename MissionProfileArnT = Aws::String>
    GetMissionProfileResult& WithMissionProfileArn(MissionProfileArnT&& value) { SetMissionProfileArn(std::forward<MissionProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const { return m_missionProfileId; }
    template<typename MissionProfileIdT = Aws::String>
    void SetMissionProfileId(MissionProfileIdT&& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = std::forward<MissionProfileIdT>(value); }
    template<typename MissionProfileIdT = Aws::String>
    GetMissionProfileResult& WithMissionProfileId(MissionProfileIdT&& value) { SetMissionProfileId(std::forward<MissionProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a mission profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetMissionProfileResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a mission profile.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GetMissionProfileResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS key to use for encrypting streams.</p>
     */
    inline const KmsKey& GetStreamsKmsKey() const { return m_streamsKmsKey; }
    template<typename StreamsKmsKeyT = KmsKey>
    void SetStreamsKmsKey(StreamsKmsKeyT&& value) { m_streamsKmsKeyHasBeenSet = true; m_streamsKmsKey = std::forward<StreamsKmsKeyT>(value); }
    template<typename StreamsKmsKeyT = KmsKey>
    GetMissionProfileResult& WithStreamsKmsKey(StreamsKmsKeyT&& value) { SetStreamsKmsKey(std::forward<StreamsKmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Role to use for encrypting streams with KMS key.</p>
     */
    inline const Aws::String& GetStreamsKmsRole() const { return m_streamsKmsRole; }
    template<typename StreamsKmsRoleT = Aws::String>
    void SetStreamsKmsRole(StreamsKmsRoleT&& value) { m_streamsKmsRoleHasBeenSet = true; m_streamsKmsRole = std::forward<StreamsKmsRoleT>(value); }
    template<typename StreamsKmsRoleT = Aws::String>
    GetMissionProfileResult& WithStreamsKmsRole(StreamsKmsRoleT&& value) { SetStreamsKmsRole(std::forward<StreamsKmsRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetMissionProfileResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetMissionProfileResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline const Aws::String& GetTrackingConfigArn() const { return m_trackingConfigArn; }
    template<typename TrackingConfigArnT = Aws::String>
    void SetTrackingConfigArn(TrackingConfigArnT&& value) { m_trackingConfigArnHasBeenSet = true; m_trackingConfigArn = std::forward<TrackingConfigArnT>(value); }
    template<typename TrackingConfigArnT = Aws::String>
    GetMissionProfileResult& WithTrackingConfigArn(TrackingConfigArnT&& value) { SetTrackingConfigArn(std::forward<TrackingConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMissionProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_contactPostPassDurationSeconds{0};
    bool m_contactPostPassDurationSecondsHasBeenSet = false;

    int m_contactPrePassDurationSeconds{0};
    bool m_contactPrePassDurationSecondsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_dataflowEdges;
    bool m_dataflowEdgesHasBeenSet = false;

    int m_minimumViableContactDurationSeconds{0};
    bool m_minimumViableContactDurationSecondsHasBeenSet = false;

    Aws::String m_missionProfileArn;
    bool m_missionProfileArnHasBeenSet = false;

    Aws::String m_missionProfileId;
    bool m_missionProfileIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    KmsKey m_streamsKmsKey;
    bool m_streamsKmsKeyHasBeenSet = false;

    Aws::String m_streamsKmsRole;
    bool m_streamsKmsRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_trackingConfigArn;
    bool m_trackingConfigArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
