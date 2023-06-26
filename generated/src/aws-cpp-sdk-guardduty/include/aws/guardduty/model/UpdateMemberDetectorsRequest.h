/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/MemberFeaturesConfiguration.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class UpdateMemberDetectorsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateMemberDetectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMemberDetectors"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID of the administrator account.</p>
     */
    inline UpdateMemberDetectorsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of member account IDs to be updated.</p>
     */
    inline UpdateMemberDetectorsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline const Aws::Vector<MemberFeaturesConfiguration>& GetFeatures() const{ return m_features; }

    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline void SetFeatures(const Aws::Vector<MemberFeaturesConfiguration>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline void SetFeatures(Aws::Vector<MemberFeaturesConfiguration>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline UpdateMemberDetectorsRequest& WithFeatures(const Aws::Vector<MemberFeaturesConfiguration>& value) { SetFeatures(value); return *this;}

    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline UpdateMemberDetectorsRequest& WithFeatures(Aws::Vector<MemberFeaturesConfiguration>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline UpdateMemberDetectorsRequest& AddFeatures(const MemberFeaturesConfiguration& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p>A list of features that will be updated for the specified member
     * accounts.</p>
     */
    inline UpdateMemberDetectorsRequest& AddFeatures(MemberFeaturesConfiguration&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<MemberFeaturesConfiguration> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
