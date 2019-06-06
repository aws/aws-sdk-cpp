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
  class AWS_GUARDDUTY_API UpdateIPSetRequest : public GuardDutyRequest
  {
  public:
    UpdateIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIPSet"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline UpdateIPSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline UpdateIPSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.</p>
     */
    inline UpdateIPSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline const Aws::String& GetIpSetId() const{ return m_ipSetId; }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline bool IpSetIdHasBeenSet() const { return m_ipSetIdHasBeenSet; }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline void SetIpSetId(const Aws::String& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = value; }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline void SetIpSetId(Aws::String&& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = std::move(value); }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline void SetIpSetId(const char* value) { m_ipSetIdHasBeenSet = true; m_ipSetId.assign(value); }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline UpdateIPSetRequest& WithIpSetId(const Aws::String& value) { SetIpSetId(value); return *this;}

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline UpdateIPSetRequest& WithIpSetId(Aws::String&& value) { SetIpSetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline UpdateIPSetRequest& WithIpSetId(const char* value) { SetIpSetId(value); return *this;}


    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline UpdateIPSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline UpdateIPSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique ID that specifies the IPSet that you want to update.</p>
     */
    inline UpdateIPSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline UpdateIPSetRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline UpdateIPSetRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).</p>
     */
    inline UpdateIPSetRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The updated boolean value that specifies whether the IPSet is active or
     * not.</p>
     */
    inline bool GetActivate() const{ return m_activate; }

    /**
     * <p>The updated boolean value that specifies whether the IPSet is active or
     * not.</p>
     */
    inline bool ActivateHasBeenSet() const { return m_activateHasBeenSet; }

    /**
     * <p>The updated boolean value that specifies whether the IPSet is active or
     * not.</p>
     */
    inline void SetActivate(bool value) { m_activateHasBeenSet = true; m_activate = value; }

    /**
     * <p>The updated boolean value that specifies whether the IPSet is active or
     * not.</p>
     */
    inline UpdateIPSetRequest& WithActivate(bool value) { SetActivate(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_ipSetId;
    bool m_ipSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    bool m_activate;
    bool m_activateHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
