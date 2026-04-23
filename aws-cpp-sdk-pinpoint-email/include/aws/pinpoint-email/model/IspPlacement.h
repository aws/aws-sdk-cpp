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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/PlacementStatistics.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that describes how email sent during the predictive inbox placement
   * test was handled by a certain email provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/IspPlacement">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API IspPlacement
  {
  public:
    IspPlacement();
    IspPlacement(Aws::Utils::Json::JsonView jsonValue);
    IspPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline const Aws::String& GetIspName() const{ return m_ispName; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline bool IspNameHasBeenSet() const { return m_ispNameHasBeenSet; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(const Aws::String& value) { m_ispNameHasBeenSet = true; m_ispName = value; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(Aws::String&& value) { m_ispNameHasBeenSet = true; m_ispName = std::move(value); }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(const char* value) { m_ispNameHasBeenSet = true; m_ispName.assign(value); }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline IspPlacement& WithIspName(const Aws::String& value) { SetIspName(value); return *this;}

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline IspPlacement& WithIspName(Aws::String&& value) { SetIspName(std::move(value)); return *this;}

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline IspPlacement& WithIspName(const char* value) { SetIspName(value); return *this;}


    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline const PlacementStatistics& GetPlacementStatistics() const{ return m_placementStatistics; }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline bool PlacementStatisticsHasBeenSet() const { return m_placementStatisticsHasBeenSet; }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline void SetPlacementStatistics(const PlacementStatistics& value) { m_placementStatisticsHasBeenSet = true; m_placementStatistics = value; }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline void SetPlacementStatistics(PlacementStatistics&& value) { m_placementStatisticsHasBeenSet = true; m_placementStatistics = std::move(value); }

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline IspPlacement& WithPlacementStatistics(const PlacementStatistics& value) { SetPlacementStatistics(value); return *this;}

    /**
     * <p>An object that contains inbox placement metrics for a specific email
     * provider.</p>
     */
    inline IspPlacement& WithPlacementStatistics(PlacementStatistics&& value) { SetPlacementStatistics(std::move(value)); return *this;}

  private:

    Aws::String m_ispName;
    bool m_ispNameHasBeenSet;

    PlacementStatistics m_placementStatistics;
    bool m_placementStatisticsHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
