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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API GetFilterRequest : public GuardDutyRequest
  {
  public:
    GetFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFilter"; }

    Aws::String SerializePayload() const override;


    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline GetFilterRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline GetFilterRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The detector ID that specifies the GuardDuty service where you want to list the
     * details of the specified filter.
     */
    inline GetFilterRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * The name of the filter whose details you want to get.
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * The name of the filter whose details you want to get.
     */
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    /**
     * The name of the filter whose details you want to get.
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * The name of the filter whose details you want to get.
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * The name of the filter whose details you want to get.
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * The name of the filter whose details you want to get.
     */
    inline GetFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * The name of the filter whose details you want to get.
     */
    inline GetFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}

    /**
     * The name of the filter whose details you want to get.
     */
    inline GetFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
