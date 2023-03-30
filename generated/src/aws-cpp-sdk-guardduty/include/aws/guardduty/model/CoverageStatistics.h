/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/guardduty/model/ResourceType.h>
#include <aws/guardduty/model/CoverageStatus.h>
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
   * <p>Information about the coverage statistics for a resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageStatistics">AWS
   * API Reference</a></p>
   */
  class CoverageStatistics
  {
  public:
    AWS_GUARDDUTY_API CoverageStatistics();
    AWS_GUARDDUTY_API CoverageStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline const Aws::Map<ResourceType, long long>& GetCountByResourceType() const{ return m_countByResourceType; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline bool CountByResourceTypeHasBeenSet() const { return m_countByResourceTypeHasBeenSet; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline void SetCountByResourceType(const Aws::Map<ResourceType, long long>& value) { m_countByResourceTypeHasBeenSet = true; m_countByResourceType = value; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline void SetCountByResourceType(Aws::Map<ResourceType, long long>&& value) { m_countByResourceTypeHasBeenSet = true; m_countByResourceType = std::move(value); }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline CoverageStatistics& WithCountByResourceType(const Aws::Map<ResourceType, long long>& value) { SetCountByResourceType(value); return *this;}

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline CoverageStatistics& WithCountByResourceType(Aws::Map<ResourceType, long long>&& value) { SetCountByResourceType(std::move(value)); return *this;}

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline CoverageStatistics& AddCountByResourceType(const ResourceType& key, long long value) { m_countByResourceTypeHasBeenSet = true; m_countByResourceType.emplace(key, value); return *this; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline CoverageStatistics& AddCountByResourceType(ResourceType&& key, long long value) { m_countByResourceTypeHasBeenSet = true; m_countByResourceType.emplace(std::move(key), value); return *this; }


    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline const Aws::Map<CoverageStatus, long long>& GetCountByCoverageStatus() const{ return m_countByCoverageStatus; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline bool CountByCoverageStatusHasBeenSet() const { return m_countByCoverageStatusHasBeenSet; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline void SetCountByCoverageStatus(const Aws::Map<CoverageStatus, long long>& value) { m_countByCoverageStatusHasBeenSet = true; m_countByCoverageStatus = value; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline void SetCountByCoverageStatus(Aws::Map<CoverageStatus, long long>&& value) { m_countByCoverageStatusHasBeenSet = true; m_countByCoverageStatus = std::move(value); }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline CoverageStatistics& WithCountByCoverageStatus(const Aws::Map<CoverageStatus, long long>& value) { SetCountByCoverageStatus(value); return *this;}

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline CoverageStatistics& WithCountByCoverageStatus(Aws::Map<CoverageStatus, long long>&& value) { SetCountByCoverageStatus(std::move(value)); return *this;}

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline CoverageStatistics& AddCountByCoverageStatus(const CoverageStatus& key, long long value) { m_countByCoverageStatusHasBeenSet = true; m_countByCoverageStatus.emplace(key, value); return *this; }

    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline CoverageStatistics& AddCountByCoverageStatus(CoverageStatus&& key, long long value) { m_countByCoverageStatusHasBeenSet = true; m_countByCoverageStatus.emplace(std::move(key), value); return *this; }

  private:

    Aws::Map<ResourceType, long long> m_countByResourceType;
    bool m_countByResourceTypeHasBeenSet = false;

    Aws::Map<CoverageStatus, long long> m_countByCoverageStatus;
    bool m_countByCoverageStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
