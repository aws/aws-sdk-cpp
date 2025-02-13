/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/ResourceType.h>
#include <aws/accessanalyzer/model/ResourceTypeDetails.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Provides aggregate statistics about the findings for the specified external
   * access analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ExternalAccessFindingsStatistics">AWS
   * API Reference</a></p>
   */
  class ExternalAccessFindingsStatistics
  {
  public:
    AWS_ACCESSANALYZER_API ExternalAccessFindingsStatistics();
    AWS_ACCESSANALYZER_API ExternalAccessFindingsStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ExternalAccessFindingsStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of active cross-account and public findings for each
     * resource type of the specified external access analyzer.</p>
     */
    inline const Aws::Map<ResourceType, ResourceTypeDetails>& GetResourceTypeStatistics() const{ return m_resourceTypeStatistics; }
    inline bool ResourceTypeStatisticsHasBeenSet() const { return m_resourceTypeStatisticsHasBeenSet; }
    inline void SetResourceTypeStatistics(const Aws::Map<ResourceType, ResourceTypeDetails>& value) { m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics = value; }
    inline void SetResourceTypeStatistics(Aws::Map<ResourceType, ResourceTypeDetails>&& value) { m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics = std::move(value); }
    inline ExternalAccessFindingsStatistics& WithResourceTypeStatistics(const Aws::Map<ResourceType, ResourceTypeDetails>& value) { SetResourceTypeStatistics(value); return *this;}
    inline ExternalAccessFindingsStatistics& WithResourceTypeStatistics(Aws::Map<ResourceType, ResourceTypeDetails>&& value) { SetResourceTypeStatistics(std::move(value)); return *this;}
    inline ExternalAccessFindingsStatistics& AddResourceTypeStatistics(const ResourceType& key, const ResourceTypeDetails& value) { m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics.emplace(key, value); return *this; }
    inline ExternalAccessFindingsStatistics& AddResourceTypeStatistics(ResourceType&& key, const ResourceTypeDetails& value) { m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics.emplace(std::move(key), value); return *this; }
    inline ExternalAccessFindingsStatistics& AddResourceTypeStatistics(const ResourceType& key, ResourceTypeDetails&& value) { m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics.emplace(key, std::move(value)); return *this; }
    inline ExternalAccessFindingsStatistics& AddResourceTypeStatistics(ResourceType&& key, ResourceTypeDetails&& value) { m_resourceTypeStatisticsHasBeenSet = true; m_resourceTypeStatistics.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of active findings for the specified external access analyzer.</p>
     */
    inline int GetTotalActiveFindings() const{ return m_totalActiveFindings; }
    inline bool TotalActiveFindingsHasBeenSet() const { return m_totalActiveFindingsHasBeenSet; }
    inline void SetTotalActiveFindings(int value) { m_totalActiveFindingsHasBeenSet = true; m_totalActiveFindings = value; }
    inline ExternalAccessFindingsStatistics& WithTotalActiveFindings(int value) { SetTotalActiveFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of archived findings for the specified external access
     * analyzer.</p>
     */
    inline int GetTotalArchivedFindings() const{ return m_totalArchivedFindings; }
    inline bool TotalArchivedFindingsHasBeenSet() const { return m_totalArchivedFindingsHasBeenSet; }
    inline void SetTotalArchivedFindings(int value) { m_totalArchivedFindingsHasBeenSet = true; m_totalArchivedFindings = value; }
    inline ExternalAccessFindingsStatistics& WithTotalArchivedFindings(int value) { SetTotalArchivedFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resolved findings for the specified external access
     * analyzer.</p>
     */
    inline int GetTotalResolvedFindings() const{ return m_totalResolvedFindings; }
    inline bool TotalResolvedFindingsHasBeenSet() const { return m_totalResolvedFindingsHasBeenSet; }
    inline void SetTotalResolvedFindings(int value) { m_totalResolvedFindingsHasBeenSet = true; m_totalResolvedFindings = value; }
    inline ExternalAccessFindingsStatistics& WithTotalResolvedFindings(int value) { SetTotalResolvedFindings(value); return *this;}
    ///@}
  private:

    Aws::Map<ResourceType, ResourceTypeDetails> m_resourceTypeStatistics;
    bool m_resourceTypeStatisticsHasBeenSet = false;

    int m_totalActiveFindings;
    bool m_totalActiveFindingsHasBeenSet = false;

    int m_totalArchivedFindings;
    bool m_totalArchivedFindingsHasBeenSet = false;

    int m_totalResolvedFindings;
    bool m_totalResolvedFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
