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
   * UpdateIPSet request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSetRequest">AWS
   * API Reference</a></p>
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
     * The updated boolean value that specifies whether the IPSet is active or not.
     */
    inline bool GetActivate() const{ return m_activate; }

    /**
     * The updated boolean value that specifies whether the IPSet is active or not.
     */
    inline bool ActivateHasBeenSet() const { return m_activateHasBeenSet; }

    /**
     * The updated boolean value that specifies whether the IPSet is active or not.
     */
    inline void SetActivate(bool value) { m_activateHasBeenSet = true; m_activate = value; }

    /**
     * The updated boolean value that specifies whether the IPSet is active or not.
     */
    inline UpdateIPSetRequest& WithActivate(bool value) { SetActivate(value); return *this;}


    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline UpdateIPSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline UpdateIPSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose IPSet you want to
     * update.
     */
    inline UpdateIPSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline const Aws::String& GetIpSetId() const{ return m_ipSetId; }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline bool IpSetIdHasBeenSet() const { return m_ipSetIdHasBeenSet; }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline void SetIpSetId(const Aws::String& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = value; }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline void SetIpSetId(Aws::String&& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = std::move(value); }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline void SetIpSetId(const char* value) { m_ipSetIdHasBeenSet = true; m_ipSetId.assign(value); }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline UpdateIPSetRequest& WithIpSetId(const Aws::String& value) { SetIpSetId(value); return *this;}

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline UpdateIPSetRequest& WithIpSetId(Aws::String&& value) { SetIpSetId(std::move(value)); return *this;}

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline UpdateIPSetRequest& WithIpSetId(const char* value) { SetIpSetId(value); return *this;}


    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline UpdateIPSetRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline UpdateIPSetRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * The updated URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline UpdateIPSetRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline UpdateIPSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline UpdateIPSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The unique ID that specifies the IPSet that you want to update.
     */
    inline UpdateIPSetRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    bool m_activate;
    bool m_activateHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_ipSetId;
    bool m_ipSetIdHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
