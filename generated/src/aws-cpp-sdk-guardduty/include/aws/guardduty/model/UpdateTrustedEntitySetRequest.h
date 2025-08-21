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
  class UpdateTrustedEntitySetRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateTrustedEntitySetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrustedEntitySet"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the GuardDuty detector associated with the threat entity set
     * that you want to update.</p> <p>To find the <code>detectorId</code> in the
     * current Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    UpdateTrustedEntitySetRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID returned by GuardDuty after updating the trusted entity set
     * resource.</p>
     */
    inline const Aws::String& GetTrustedEntitySetId() const { return m_trustedEntitySetId; }
    inline bool TrustedEntitySetIdHasBeenSet() const { return m_trustedEntitySetIdHasBeenSet; }
    template<typename TrustedEntitySetIdT = Aws::String>
    void SetTrustedEntitySetId(TrustedEntitySetIdT&& value) { m_trustedEntitySetIdHasBeenSet = true; m_trustedEntitySetId = std::forward<TrustedEntitySetIdT>(value); }
    template<typename TrustedEntitySetIdT = Aws::String>
    UpdateTrustedEntitySetRequest& WithTrustedEntitySetId(TrustedEntitySetIdT&& value) { SetTrustedEntitySetId(std::forward<TrustedEntitySetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name to identify the trusted entity set.</p> <p>The name of
     * your list can include lowercase letters, uppercase letters, numbers, dash (-),
     * and underscore (_).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTrustedEntitySetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the file that contains the trusted entity set.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    UpdateTrustedEntitySetRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket specified
     * in the <b>location</b> parameter.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    UpdateTrustedEntitySetRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that indicates whether GuardDuty is to start using this
     * updated trusted entity set. After you update an entity set, you will need to
     * activate it again. It might take up to 15 minutes for the updated entity set to
     * be effective.</p>
     */
    inline bool GetActivate() const { return m_activate; }
    inline bool ActivateHasBeenSet() const { return m_activateHasBeenSet; }
    inline void SetActivate(bool value) { m_activateHasBeenSet = true; m_activate = value; }
    inline UpdateTrustedEntitySetRequest& WithActivate(bool value) { SetActivate(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_trustedEntitySetId;
    bool m_trustedEntitySetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    bool m_activate{false};
    bool m_activateHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
