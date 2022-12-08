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
    AWS_EC2_API SpotFleetRequestConfig();
    AWS_EC2_API SpotFleetRequestConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotFleetRequestConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The progress of the Spot Fleet request. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the fleet is decreased, the status is <code>pending_termination</code>
     * while Spot Instances are terminating.</p>
     */
    inline const ActivityStatus& GetActivityStatus() const{ return m_activityStatus; }

    /**
     * <p>The progress of the Spot Fleet request. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the fleet is decreased, the status is <code>pending_termination</code>
     * while Spot Instances are terminating.</p>
     */
    inline bool ActivityStatusHasBeenSet() const { return m_activityStatusHasBeenSet; }

    /**
     * <p>The progress of the Spot Fleet request. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the fleet is decreased, the status is <code>pending_termination</code>
     * while Spot Instances are terminating.</p>
     */
    inline void SetActivityStatus(const ActivityStatus& value) { m_activityStatusHasBeenSet = true; m_activityStatus = value; }

    /**
     * <p>The progress of the Spot Fleet request. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the fleet is decreased, the status is <code>pending_termination</code>
     * while Spot Instances are terminating.</p>
     */
    inline void SetActivityStatus(ActivityStatus&& value) { m_activityStatusHasBeenSet = true; m_activityStatus = std::move(value); }

    /**
     * <p>The progress of the Spot Fleet request. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the fleet is decreased, the status is <code>pending_termination</code>
     * while Spot Instances are terminating.</p>
     */
    inline SpotFleetRequestConfig& WithActivityStatus(const ActivityStatus& value) { SetActivityStatus(value); return *this;}

    /**
     * <p>The progress of the Spot Fleet request. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the fleet is decreased, the status is <code>pending_termination</code>
     * while Spot Instances are terminating.</p>
     */
    inline SpotFleetRequestConfig& WithActivityStatus(ActivityStatus&& value) { SetActivityStatus(std::move(value)); return *this;}


    /**
     * <p>The creation date and time of the request.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The creation date and time of the request.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The creation date and time of the request.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The creation date and time of the request.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The creation date and time of the request.</p>
     */
    inline SpotFleetRequestConfig& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The creation date and time of the request.</p>
     */
    inline SpotFleetRequestConfig& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Spot Fleet request.</p>
     */
    inline const SpotFleetRequestConfigData& GetSpotFleetRequestConfig() const{ return m_spotFleetRequestConfig; }

    /**
     * <p>The configuration of the Spot Fleet request.</p>
     */
    inline bool SpotFleetRequestConfigHasBeenSet() const { return m_spotFleetRequestConfigHasBeenSet; }

    /**
     * <p>The configuration of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestConfig(const SpotFleetRequestConfigData& value) { m_spotFleetRequestConfigHasBeenSet = true; m_spotFleetRequestConfig = value; }

    /**
     * <p>The configuration of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestConfig(SpotFleetRequestConfigData&& value) { m_spotFleetRequestConfigHasBeenSet = true; m_spotFleetRequestConfig = std::move(value); }

    /**
     * <p>The configuration of the Spot Fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestConfig(const SpotFleetRequestConfigData& value) { SetSpotFleetRequestConfig(value); return *this;}

    /**
     * <p>The configuration of the Spot Fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestConfig(SpotFleetRequestConfigData&& value) { SetSpotFleetRequestConfig(std::move(value)); return *this;}


    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline bool SpotFleetRequestIdHasBeenSet() const { return m_spotFleetRequestIdHasBeenSet; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}


    /**
     * <p>The state of the Spot Fleet request.</p>
     */
    inline const BatchState& GetSpotFleetRequestState() const{ return m_spotFleetRequestState; }

    /**
     * <p>The state of the Spot Fleet request.</p>
     */
    inline bool SpotFleetRequestStateHasBeenSet() const { return m_spotFleetRequestStateHasBeenSet; }

    /**
     * <p>The state of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestState(const BatchState& value) { m_spotFleetRequestStateHasBeenSet = true; m_spotFleetRequestState = value; }

    /**
     * <p>The state of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestState(BatchState&& value) { m_spotFleetRequestStateHasBeenSet = true; m_spotFleetRequestState = std::move(value); }

    /**
     * <p>The state of the Spot Fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestState(const BatchState& value) { SetSpotFleetRequestState(value); return *this;}

    /**
     * <p>The state of the Spot Fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestState(BatchState&& value) { SetSpotFleetRequestState(std::move(value)); return *this;}


    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline SpotFleetRequestConfig& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline SpotFleetRequestConfig& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline SpotFleetRequestConfig& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for a Spot Fleet resource.</p>
     */
    inline SpotFleetRequestConfig& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ActivityStatus m_activityStatus;
    bool m_activityStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    SpotFleetRequestConfigData m_spotFleetRequestConfig;
    bool m_spotFleetRequestConfigHasBeenSet = false;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet = false;

    BatchState m_spotFleetRequestState;
    bool m_spotFleetRequestStateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
