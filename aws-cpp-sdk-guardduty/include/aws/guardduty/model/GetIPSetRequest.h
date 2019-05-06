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
  class AWS_GUARDDUTY_API GetIPSetRequest : public GuardDutyRequest
  {
  public:
    GetIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIPSet"; }

    Aws::String SerializePayload() const override;


    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline GetIPSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline GetIPSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * retrieve.
     */
    inline GetIPSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline const Aws::String& GetIpSetId() const{ return m_ipSetId; }

    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline bool IpSetIdHasBeenSet() const { return m_ipSetIdHasBeenSet; }

    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline void SetIpSetId(const Aws::String& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = value; }

    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline void SetIpSetId(Aws::String&& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = std::move(value); }

    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline void SetIpSetId(const char* value) { m_ipSetIdHasBeenSet = true; m_ipSetId.assign(value); }

    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline GetIPSetRequest& WithIpSetId(const Aws::String& value) { SetIpSetId(value); return *this;}

    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline GetIPSetRequest& WithIpSetId(Aws::String&& value) { SetIpSetId(std::move(value)); return *this;}

    /**
     * The unique ID that specifies the IPSet that you want to describe.
     */
    inline GetIPSetRequest& WithIpSetId(const char* value) { SetIpSetId(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_ipSetId;
    bool m_ipSetIdHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
