/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/UsageFeature.h>
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
   * <p>Contains information about the criteria used to query usage
   * statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageCriteria">AWS
   * API Reference</a></p>
   */
  class UsageCriteria
  {
  public:
    AWS_GUARDDUTY_API UsageCriteria();
    AWS_GUARDDUTY_API UsageCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The account IDs to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>The resources to aggregate usage statistics from. Only accepts exact resource
     * names.</p>
     */
    inline UsageCriteria& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline const Aws::Vector<UsageFeature>& GetFeatures() const{ return m_features; }

    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline void SetFeatures(const Aws::Vector<UsageFeature>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline void SetFeatures(Aws::Vector<UsageFeature>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithFeatures(const Aws::Vector<UsageFeature>& value) { SetFeatures(value); return *this;}

    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& WithFeatures(Aws::Vector<UsageFeature>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddFeatures(const UsageFeature& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p>The features to aggregate usage statistics from.</p>
     */
    inline UsageCriteria& AddFeatures(UsageFeature&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Vector<UsageFeature> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
