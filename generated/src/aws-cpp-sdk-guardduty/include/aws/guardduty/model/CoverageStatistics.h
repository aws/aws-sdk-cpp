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
    AWS_GUARDDUTY_API CoverageStatistics() = default;
    AWS_GUARDDUTY_API CoverageStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by resource
     * type.</p>
     */
    inline const Aws::Map<ResourceType, long long>& GetCountByResourceType() const { return m_countByResourceType; }
    inline bool CountByResourceTypeHasBeenSet() const { return m_countByResourceTypeHasBeenSet; }
    template<typename CountByResourceTypeT = Aws::Map<ResourceType, long long>>
    void SetCountByResourceType(CountByResourceTypeT&& value) { m_countByResourceTypeHasBeenSet = true; m_countByResourceType = std::forward<CountByResourceTypeT>(value); }
    template<typename CountByResourceTypeT = Aws::Map<ResourceType, long long>>
    CoverageStatistics& WithCountByResourceType(CountByResourceTypeT&& value) { SetCountByResourceType(std::forward<CountByResourceTypeT>(value)); return *this;}
    inline CoverageStatistics& AddCountByResourceType(ResourceType key, long long value) {
      m_countByResourceTypeHasBeenSet = true; m_countByResourceType.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents coverage statistics for EKS clusters aggregated by coverage
     * status.</p>
     */
    inline const Aws::Map<CoverageStatus, long long>& GetCountByCoverageStatus() const { return m_countByCoverageStatus; }
    inline bool CountByCoverageStatusHasBeenSet() const { return m_countByCoverageStatusHasBeenSet; }
    template<typename CountByCoverageStatusT = Aws::Map<CoverageStatus, long long>>
    void SetCountByCoverageStatus(CountByCoverageStatusT&& value) { m_countByCoverageStatusHasBeenSet = true; m_countByCoverageStatus = std::forward<CountByCoverageStatusT>(value); }
    template<typename CountByCoverageStatusT = Aws::Map<CoverageStatus, long long>>
    CoverageStatistics& WithCountByCoverageStatus(CountByCoverageStatusT&& value) { SetCountByCoverageStatus(std::forward<CountByCoverageStatusT>(value)); return *this;}
    inline CoverageStatistics& AddCountByCoverageStatus(CoverageStatus key, long long value) {
      m_countByCoverageStatusHasBeenSet = true; m_countByCoverageStatus.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Map<ResourceType, long long> m_countByResourceType;
    bool m_countByResourceTypeHasBeenSet = false;

    Aws::Map<CoverageStatus, long long> m_countByCoverageStatus;
    bool m_countByCoverageStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
