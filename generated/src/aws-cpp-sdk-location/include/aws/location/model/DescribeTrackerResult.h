/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/location/model/PositionFiltering.h>
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
namespace LocationService
{
namespace Model
{
  class DescribeTrackerResult
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeTrackerResult() = default;
    AWS_LOCATIONSERVICE_API DescribeTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DescribeTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the tracker resource.</p>
     */
    inline const Aws::String& GetTrackerName() const { return m_trackerName; }
    template<typename TrackerNameT = Aws::String>
    void SetTrackerName(TrackerNameT&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::forward<TrackerNameT>(value); }
    template<typename TrackerNameT = Aws::String>
    DescribeTrackerResult& WithTrackerName(TrackerNameT&& value) { SetTrackerName(std::forward<TrackerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetTrackerArn() const { return m_trackerArn; }
    template<typename TrackerArnT = Aws::String>
    void SetTrackerArn(TrackerArnT&& value) { m_trackerArnHasBeenSet = true; m_trackerArn = std::forward<TrackerArnT>(value); }
    template<typename TrackerArnT = Aws::String>
    DescribeTrackerResult& WithTrackerArn(TrackerArnT&& value) { SetTrackerArn(std::forward<TrackerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeTrackerResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeTrackerResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeTrackerResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    DescribeTrackerResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    DescribeTrackerResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a> assigned to the Amazon Location
     * resource.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DescribeTrackerResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position filtering method of the tracker resource.</p>
     */
    inline PositionFiltering GetPositionFiltering() const { return m_positionFiltering; }
    inline void SetPositionFiltering(PositionFiltering value) { m_positionFilteringHasBeenSet = true; m_positionFiltering = value; }
    inline DescribeTrackerResult& WithPositionFiltering(PositionFiltering value) { SetPositionFiltering(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether <code>UPDATE</code> events from this tracker in EventBridge are
     * enabled. If set to <code>true</code> these events will be sent to
     * EventBridge.</p>
     */
    inline bool GetEventBridgeEnabled() const { return m_eventBridgeEnabled; }
    inline void SetEventBridgeEnabled(bool value) { m_eventBridgeEnabledHasBeenSet = true; m_eventBridgeEnabled = value; }
    inline DescribeTrackerResult& WithEventBridgeEnabled(bool value) { SetEventBridgeEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables <code>GeospatialQueries</code> for a tracker that uses a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">Amazon
     * Web Services KMS customer managed key</a>.</p> <p>This parameter is only used if
     * you are using a KMS customer managed key.</p>  <p>If you wish to encrypt
     * your data using your own KMS customer managed key, then the Bounding Polygon
     * Queries feature will be disabled by default. This is because by using this
     * feature, a representation of your device positions will not be encrypted using
     * the your KMS managed key. The exact device position, however; is still encrypted
     * using your managed key.</p> <p>You can choose to opt-in to the Bounding Polygon
     * Quseries feature. This is done by setting the
     * <code>KmsKeyEnableGeospatialQueries</code> parameter to true when creating or
     * updating a Tracker.</p> 
     */
    inline bool GetKmsKeyEnableGeospatialQueries() const { return m_kmsKeyEnableGeospatialQueries; }
    inline void SetKmsKeyEnableGeospatialQueries(bool value) { m_kmsKeyEnableGeospatialQueriesHasBeenSet = true; m_kmsKeyEnableGeospatialQueries = value; }
    inline DescribeTrackerResult& WithKmsKeyEnableGeospatialQueries(bool value) { SetKmsKeyEnableGeospatialQueries(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrackerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::String m_trackerArn;
    bool m_trackerArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    PositionFiltering m_positionFiltering{PositionFiltering::NOT_SET};
    bool m_positionFilteringHasBeenSet = false;

    bool m_eventBridgeEnabled{false};
    bool m_eventBridgeEnabledHasBeenSet = false;

    bool m_kmsKeyEnableGeospatialQueries{false};
    bool m_kmsKeyEnableGeospatialQueriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
