/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ActivityStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SpotFleetRequestConfigData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BatchState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Spot Fleet request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotFleetRequestConfig">AWS
   * API Reference</a></p>
   */
  class SpotFleetRequestConfig
  {
  public:
    AWS_EC2_API SpotFleetRequestConfig() = default;
    AWS_EC2_API SpotFleetRequestConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotFleetRequestConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The progress of the Spot Fleet request. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the fleet is decreased, the status is <code>pending_termination</code>
     * while Spot Instances are terminating.</p>
     */
    inline ActivityStatus GetActivityStatus() const { return m_activityStatus; }
    inline bool ActivityStatusHasBeenSet() const { return m_activityStatusHasBeenSet; }
    inline void SetActivityStatus(ActivityStatus value) { m_activityStatusHasBeenSet = true; m_activityStatus = value; }
    inline SpotFleetRequestConfig& WithActivityStatus(ActivityStatus value) { SetActivityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the request.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    SpotFleetRequestConfig& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Spot Fleet request.</p>
     */
    inline const SpotFleetRequestConfigData& GetSpotFleetRequestConfig() const { return m_spotFleetRequestConfig; }
    inline bool SpotFleetRequestConfigHasBeenSet() const { return m_spotFleetRequestConfigHasBeenSet; }
    template<typename SpotFleetRequestConfigT = SpotFleetRequestConfigData>
    void SetSpotFleetRequestConfig(SpotFleetRequestConfigT&& value) { m_spotFleetRequestConfigHasBeenSet = true; m_spotFleetRequestConfig = std::forward<SpotFleetRequestConfigT>(value); }
    template<typename SpotFleetRequestConfigT = SpotFleetRequestConfigData>
    SpotFleetRequestConfig& WithSpotFleetRequestConfig(SpotFleetRequestConfigT&& value) { SetSpotFleetRequestConfig(std::forward<SpotFleetRequestConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const { return m_spotFleetRequestId; }
    inline bool SpotFleetRequestIdHasBeenSet() const { return m_spotFleetRequestIdHasBeenSet; }
    template<typename SpotFleetRequestIdT = Aws::String>
    void SetSpotFleetRequestId(SpotFleetRequestIdT&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::forward<SpotFleetRequestIdT>(value); }
    template<typename SpotFleetRequestIdT = Aws::String>
    SpotFleetRequestConfig& WithSpotFleetRequestId(SpotFleetRequestIdT&& value) { SetSpotFleetRequestId(std::forward<SpotFleetRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Spot Fleet request.</p>
     */
    inline BatchState GetSpotFleetRequestState() const { return m_spotFleetRequestState; }
    inline bool SpotFleetRequestStateHasBeenSet() const { return m_spotFleetRequestStateHasBeenSet; }
    inline void SetSpotFleetRequestState(BatchState value) { m_spotFleetRequestStateHasBeenSet = true; m_spotFleetRequestState = value; }
    inline SpotFleetRequestConfig& WithSpotFleetRequestState(BatchState value) { SetSpotFleetRequestState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    SpotFleetRequestConfig& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    SpotFleetRequestConfig& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    ActivityStatus m_activityStatus{ActivityStatus::NOT_SET};
    bool m_activityStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    SpotFleetRequestConfigData m_spotFleetRequestConfig;
    bool m_spotFleetRequestConfigHasBeenSet = false;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet = false;

    BatchState m_spotFleetRequestState{BatchState::NOT_SET};
    bool m_spotFleetRequestStateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
