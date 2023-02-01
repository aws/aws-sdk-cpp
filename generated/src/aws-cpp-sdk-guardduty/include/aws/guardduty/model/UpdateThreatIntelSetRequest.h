/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateThreatIntelSetRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateThreatIntelSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThreatIntelSet"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline const Aws::String& GetThreatIntelSetId() const{ return m_threatIntelSetId; }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline bool ThreatIntelSetIdHasBeenSet() const { return m_threatIntelSetIdHasBeenSet; }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline void SetThreatIntelSetId(const Aws::String& value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId = value; }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline void SetThreatIntelSetId(Aws::String&& value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId = std::move(value); }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline void SetThreatIntelSetId(const char* value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId.assign(value); }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithThreatIntelSetId(const Aws::String& value) { SetThreatIntelSetId(value); return *this;}

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithThreatIntelSetId(Aws::String&& value) { SetThreatIntelSetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithThreatIntelSetId(const char* value) { SetThreatIntelSetId(value); return *this;}


    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique ID that specifies the ThreatIntelSet that you want to update.</p>
     */
    inline UpdateThreatIntelSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline UpdateThreatIntelSetRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline UpdateThreatIntelSetRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The updated URI of the file that contains the ThreateIntelSet.</p>
     */
    inline UpdateThreatIntelSetRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The updated Boolean value that specifies whether the ThreateIntelSet is
     * active or not.</p>
     */
    inline bool GetActivate() const{ return m_activate; }

    /**
     * <p>The updated Boolean value that specifies whether the ThreateIntelSet is
     * active or not.</p>
     */
    inline bool ActivateHasBeenSet() const { return m_activateHasBeenSet; }

    /**
     * <p>The updated Boolean value that specifies whether the ThreateIntelSet is
     * active or not.</p>
     */
    inline void SetActivate(bool value) { m_activateHasBeenSet = true; m_activate = value; }

    /**
     * <p>The updated Boolean value that specifies whether the ThreateIntelSet is
     * active or not.</p>
     */
    inline UpdateThreatIntelSetRequest& WithActivate(bool value) { SetActivate(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_threatIntelSetId;
    bool m_threatIntelSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    bool m_activate;
    bool m_activateHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
