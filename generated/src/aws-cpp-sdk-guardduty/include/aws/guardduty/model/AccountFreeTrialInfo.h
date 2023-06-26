/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/FreeTrialFeatureConfigurationResult.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Provides details of the GuardDuty member account that uses a free trial
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountFreeTrialInfo">AWS
   * API Reference</a></p>
   */
  class AccountFreeTrialInfo
  {
  public:
    AWS_GUARDDUTY_API AccountFreeTrialInfo();
    AWS_GUARDDUTY_API AccountFreeTrialInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccountFreeTrialInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account identifier of the GuardDuty member account.</p>
     */
    inline AccountFreeTrialInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline const Aws::Vector<FreeTrialFeatureConfigurationResult>& GetFeatures() const{ return m_features; }

    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline void SetFeatures(const Aws::Vector<FreeTrialFeatureConfigurationResult>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline void SetFeatures(Aws::Vector<FreeTrialFeatureConfigurationResult>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline AccountFreeTrialInfo& WithFeatures(const Aws::Vector<FreeTrialFeatureConfigurationResult>& value) { SetFeatures(value); return *this;}

    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline AccountFreeTrialInfo& WithFeatures(Aws::Vector<FreeTrialFeatureConfigurationResult>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline AccountFreeTrialInfo& AddFeatures(const FreeTrialFeatureConfigurationResult& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p>A list of features enabled for the GuardDuty account.</p>
     */
    inline AccountFreeTrialInfo& AddFeatures(FreeTrialFeatureConfigurationResult&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<FreeTrialFeatureConfigurationResult> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
