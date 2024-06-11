/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetCostEstimateRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetCostEstimateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostEstimate"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline GetCostEstimateRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline GetCostEstimateRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline GetCostEstimateRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost estimate start time.</p> <p>Constraints:</p> <ul> <li> <p>Specified
     * in Coordinated Universal Time (UTC).</p> </li> <li> <p>Specified in the Unix
     * time format.</p> <p>For example, if you want to use a start time of October 1,
     * 2018, at 8 PM UTC, specify <code>1538424000</code> as the start time.</p> </li>
     * </ul> <p>You can convert a human-friendly time to Unix time format using a
     * converter like <a href="https://www.epochconverter.com/">Epoch
     * converter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetCostEstimateRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetCostEstimateRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost estimate end time.</p> <p>Constraints:</p> <ul> <li> <p>Specified in
     * Coordinated Universal Time (UTC).</p> </li> <li> <p>Specified in the Unix time
     * format.</p> <p>For example, if you want to use an end time of October 1, 2018,
     * at 9 PM UTC, specify <code>1538427600</code> as the end time.</p> </li> </ul>
     * <p>You can convert a human-friendly time to Unix time format using a converter
     * like <a href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetCostEstimateRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetCostEstimateRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
