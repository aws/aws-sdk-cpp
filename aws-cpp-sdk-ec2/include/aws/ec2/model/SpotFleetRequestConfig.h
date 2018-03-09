/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ActivityStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SpotFleetRequestConfigData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BatchState.h>
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
  class AWS_EC2_API SpotFleetRequestConfig
  {
  public:
    SpotFleetRequestConfig();
    SpotFleetRequestConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotFleetRequestConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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

  private:

    ActivityStatus m_activityStatus;
    bool m_activityStatusHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    SpotFleetRequestConfigData m_spotFleetRequestConfig;
    bool m_spotFleetRequestConfigHasBeenSet;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet;

    BatchState m_spotFleetRequestState;
    bool m_spotFleetRequestStateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
