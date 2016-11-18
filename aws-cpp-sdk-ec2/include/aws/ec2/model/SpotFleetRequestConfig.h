/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BatchState.h>
#include <aws/ec2/model/SpotFleetRequestConfigData.h>
#include <aws/core/utils/DateTime.h>

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
   * <p>Describes a Spot fleet request.</p>
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
     * <p>The ID of the Spot fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The state of the Spot fleet request.</p>
     */
    inline const BatchState& GetSpotFleetRequestState() const{ return m_spotFleetRequestState; }

    /**
     * <p>The state of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestState(const BatchState& value) { m_spotFleetRequestStateHasBeenSet = true; m_spotFleetRequestState = value; }

    /**
     * <p>The state of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestState(BatchState&& value) { m_spotFleetRequestStateHasBeenSet = true; m_spotFleetRequestState = value; }

    /**
     * <p>The state of the Spot fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestState(const BatchState& value) { SetSpotFleetRequestState(value); return *this;}

    /**
     * <p>The state of the Spot fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestState(BatchState&& value) { SetSpotFleetRequestState(value); return *this;}

    /**
     * <p>Information about the configuration of the Spot fleet request.</p>
     */
    inline const SpotFleetRequestConfigData& GetSpotFleetRequestConfig() const{ return m_spotFleetRequestConfig; }

    /**
     * <p>Information about the configuration of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestConfig(const SpotFleetRequestConfigData& value) { m_spotFleetRequestConfigHasBeenSet = true; m_spotFleetRequestConfig = value; }

    /**
     * <p>Information about the configuration of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestConfig(SpotFleetRequestConfigData&& value) { m_spotFleetRequestConfigHasBeenSet = true; m_spotFleetRequestConfig = value; }

    /**
     * <p>Information about the configuration of the Spot fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestConfig(const SpotFleetRequestConfigData& value) { SetSpotFleetRequestConfig(value); return *this;}

    /**
     * <p>Information about the configuration of the Spot fleet request.</p>
     */
    inline SpotFleetRequestConfig& WithSpotFleetRequestConfig(SpotFleetRequestConfigData&& value) { SetSpotFleetRequestConfig(value); return *this;}

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
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The creation date and time of the request.</p>
     */
    inline SpotFleetRequestConfig& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The creation date and time of the request.</p>
     */
    inline SpotFleetRequestConfig& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(value); return *this;}

  private:
    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet;
    BatchState m_spotFleetRequestState;
    bool m_spotFleetRequestStateHasBeenSet;
    SpotFleetRequestConfigData m_spotFleetRequestConfig;
    bool m_spotFleetRequestConfigHasBeenSet;
    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
