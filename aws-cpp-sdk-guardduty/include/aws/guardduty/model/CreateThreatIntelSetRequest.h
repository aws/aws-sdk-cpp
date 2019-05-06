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
#include <aws/guardduty/model/ThreatIntelSetFormat.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * CreateThreatIntelSet request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API CreateThreatIntelSetRequest : public GuardDutyRequest
  {
  public:
    CreateThreatIntelSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThreatIntelSet"; }

    Aws::String SerializePayload() const override;


    /**
     * A boolean value that indicates whether GuardDuty is to start using the uploaded
     * ThreatIntelSet.
     */
    inline bool GetActivate() const{ return m_activate; }

    /**
     * A boolean value that indicates whether GuardDuty is to start using the uploaded
     * ThreatIntelSet.
     */
    inline bool ActivateHasBeenSet() const { return m_activateHasBeenSet; }

    /**
     * A boolean value that indicates whether GuardDuty is to start using the uploaded
     * ThreatIntelSet.
     */
    inline void SetActivate(bool value) { m_activateHasBeenSet = true; m_activate = value; }

    /**
     * A boolean value that indicates whether GuardDuty is to start using the uploaded
     * ThreatIntelSet.
     */
    inline CreateThreatIntelSetRequest& WithActivate(bool value) { SetActivate(value); return *this;}


    /**
     * The idempotency token for the create request.
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * The idempotency token for the create request.
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * The idempotency token for the create request.
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * The idempotency token for the create request.
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * The idempotency token for the create request.
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * The idempotency token for the create request.
     */
    inline CreateThreatIntelSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * The idempotency token for the create request.
     */
    inline CreateThreatIntelSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * The idempotency token for the create request.
     */
    inline CreateThreatIntelSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * The unique ID of the detector that you want to update.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline CreateThreatIntelSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector that you want to update.
     */
    inline CreateThreatIntelSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector that you want to update.
     */
    inline CreateThreatIntelSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * The format of the file that contains the ThreatIntelSet.
     */
    inline const ThreatIntelSetFormat& GetFormat() const{ return m_format; }

    /**
     * The format of the file that contains the ThreatIntelSet.
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * The format of the file that contains the ThreatIntelSet.
     */
    inline void SetFormat(const ThreatIntelSetFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * The format of the file that contains the ThreatIntelSet.
     */
    inline void SetFormat(ThreatIntelSetFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * The format of the file that contains the ThreatIntelSet.
     */
    inline CreateThreatIntelSetRequest& WithFormat(const ThreatIntelSetFormat& value) { SetFormat(value); return *this;}

    /**
     * The format of the file that contains the ThreatIntelSet.
     */
    inline CreateThreatIntelSetRequest& WithFormat(ThreatIntelSetFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline CreateThreatIntelSetRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline CreateThreatIntelSetRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * The URI of the file that contains the ThreatIntelSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key).
     */
    inline CreateThreatIntelSetRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline CreateThreatIntelSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline CreateThreatIntelSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A user-friendly ThreatIntelSet name that is displayed in all finding generated
     * by activity that involves IP addresses included in this ThreatIntelSet.
     */
    inline CreateThreatIntelSetRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    bool m_activate;
    bool m_activateHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    ThreatIntelSetFormat m_format;
    bool m_formatHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
