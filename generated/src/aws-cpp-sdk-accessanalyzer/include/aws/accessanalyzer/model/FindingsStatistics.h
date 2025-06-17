/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ExternalAccessFindingsStatistics.h>
#include <aws/accessanalyzer/model/InternalAccessFindingsStatistics.h>
#include <aws/accessanalyzer/model/UnusedAccessFindingsStatistics.h>
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
   * <p>Contains information about the aggregate statistics for an external or unused
   * access analyzer. Only one parameter can be used in a
   * <code>FindingsStatistics</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingsStatistics">AWS
   * API Reference</a></p>
   */
  class FindingsStatistics
  {
  public:
    AWS_ACCESSANALYZER_API FindingsStatistics() = default;
    AWS_ACCESSANALYZER_API FindingsStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingsStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregate statistics for an external access analyzer.</p>
     */
    inline const ExternalAccessFindingsStatistics& GetExternalAccessFindingsStatistics() const { return m_externalAccessFindingsStatistics; }
    inline bool ExternalAccessFindingsStatisticsHasBeenSet() const { return m_externalAccessFindingsStatisticsHasBeenSet; }
    template<typename ExternalAccessFindingsStatisticsT = ExternalAccessFindingsStatistics>
    void SetExternalAccessFindingsStatistics(ExternalAccessFindingsStatisticsT&& value) { m_externalAccessFindingsStatisticsHasBeenSet = true; m_externalAccessFindingsStatistics = std::forward<ExternalAccessFindingsStatisticsT>(value); }
    template<typename ExternalAccessFindingsStatisticsT = ExternalAccessFindingsStatistics>
    FindingsStatistics& WithExternalAccessFindingsStatistics(ExternalAccessFindingsStatisticsT&& value) { SetExternalAccessFindingsStatistics(std::forward<ExternalAccessFindingsStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate statistics for an internal access analyzer. This includes
     * information about active, archived, and resolved findings related to internal
     * access within your Amazon Web Services organization or account.</p>
     */
    inline const InternalAccessFindingsStatistics& GetInternalAccessFindingsStatistics() const { return m_internalAccessFindingsStatistics; }
    inline bool InternalAccessFindingsStatisticsHasBeenSet() const { return m_internalAccessFindingsStatisticsHasBeenSet; }
    template<typename InternalAccessFindingsStatisticsT = InternalAccessFindingsStatistics>
    void SetInternalAccessFindingsStatistics(InternalAccessFindingsStatisticsT&& value) { m_internalAccessFindingsStatisticsHasBeenSet = true; m_internalAccessFindingsStatistics = std::forward<InternalAccessFindingsStatisticsT>(value); }
    template<typename InternalAccessFindingsStatisticsT = InternalAccessFindingsStatistics>
    FindingsStatistics& WithInternalAccessFindingsStatistics(InternalAccessFindingsStatisticsT&& value) { SetInternalAccessFindingsStatistics(std::forward<InternalAccessFindingsStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate statistics for an unused access analyzer.</p>
     */
    inline const UnusedAccessFindingsStatistics& GetUnusedAccessFindingsStatistics() const { return m_unusedAccessFindingsStatistics; }
    inline bool UnusedAccessFindingsStatisticsHasBeenSet() const { return m_unusedAccessFindingsStatisticsHasBeenSet; }
    template<typename UnusedAccessFindingsStatisticsT = UnusedAccessFindingsStatistics>
    void SetUnusedAccessFindingsStatistics(UnusedAccessFindingsStatisticsT&& value) { m_unusedAccessFindingsStatisticsHasBeenSet = true; m_unusedAccessFindingsStatistics = std::forward<UnusedAccessFindingsStatisticsT>(value); }
    template<typename UnusedAccessFindingsStatisticsT = UnusedAccessFindingsStatistics>
    FindingsStatistics& WithUnusedAccessFindingsStatistics(UnusedAccessFindingsStatisticsT&& value) { SetUnusedAccessFindingsStatistics(std::forward<UnusedAccessFindingsStatisticsT>(value)); return *this;}
    ///@}
  private:

    ExternalAccessFindingsStatistics m_externalAccessFindingsStatistics;
    bool m_externalAccessFindingsStatisticsHasBeenSet = false;

    InternalAccessFindingsStatistics m_internalAccessFindingsStatistics;
    bool m_internalAccessFindingsStatisticsHasBeenSet = false;

    UnusedAccessFindingsStatistics m_unusedAccessFindingsStatistics;
    bool m_unusedAccessFindingsStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
