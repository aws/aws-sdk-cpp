/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/MemberFeaturesConfigurationResult.h>
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
   * <p>Contains information on which data sources are enabled for a member
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MemberDataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class MemberDataSourceConfiguration
  {
  public:
    AWS_GUARDDUTY_API MemberDataSourceConfiguration();
    AWS_GUARDDUTY_API MemberDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API MemberDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID for the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the member account.</p>
     */
    inline MemberDataSourceConfiguration& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the member account.</p>
     */
    inline MemberDataSourceConfiguration& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the member account.</p>
     */
    inline MemberDataSourceConfiguration& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline const Aws::Vector<MemberFeaturesConfigurationResult>& GetFeatures() const{ return m_features; }

    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline void SetFeatures(const Aws::Vector<MemberFeaturesConfigurationResult>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline void SetFeatures(Aws::Vector<MemberFeaturesConfigurationResult>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline MemberDataSourceConfiguration& WithFeatures(const Aws::Vector<MemberFeaturesConfigurationResult>& value) { SetFeatures(value); return *this;}

    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline MemberDataSourceConfiguration& WithFeatures(Aws::Vector<MemberFeaturesConfigurationResult>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline MemberDataSourceConfiguration& AddFeatures(const MemberFeaturesConfigurationResult& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p>Contains information about the status of the features for the member
     * account.</p>
     */
    inline MemberDataSourceConfiguration& AddFeatures(MemberFeaturesConfigurationResult&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<MemberFeaturesConfigurationResult> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
