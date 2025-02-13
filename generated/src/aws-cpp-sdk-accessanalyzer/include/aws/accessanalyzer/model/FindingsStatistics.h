/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ExternalAccessFindingsStatistics.h>
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
    AWS_ACCESSANALYZER_API FindingsStatistics();
    AWS_ACCESSANALYZER_API FindingsStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingsStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregate statistics for an external access analyzer.</p>
     */
    inline const ExternalAccessFindingsStatistics& GetExternalAccessFindingsStatistics() const{ return m_externalAccessFindingsStatistics; }
    inline bool ExternalAccessFindingsStatisticsHasBeenSet() const { return m_externalAccessFindingsStatisticsHasBeenSet; }
    inline void SetExternalAccessFindingsStatistics(const ExternalAccessFindingsStatistics& value) { m_externalAccessFindingsStatisticsHasBeenSet = true; m_externalAccessFindingsStatistics = value; }
    inline void SetExternalAccessFindingsStatistics(ExternalAccessFindingsStatistics&& value) { m_externalAccessFindingsStatisticsHasBeenSet = true; m_externalAccessFindingsStatistics = std::move(value); }
    inline FindingsStatistics& WithExternalAccessFindingsStatistics(const ExternalAccessFindingsStatistics& value) { SetExternalAccessFindingsStatistics(value); return *this;}
    inline FindingsStatistics& WithExternalAccessFindingsStatistics(ExternalAccessFindingsStatistics&& value) { SetExternalAccessFindingsStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate statistics for an unused access analyzer.</p>
     */
    inline const UnusedAccessFindingsStatistics& GetUnusedAccessFindingsStatistics() const{ return m_unusedAccessFindingsStatistics; }
    inline bool UnusedAccessFindingsStatisticsHasBeenSet() const { return m_unusedAccessFindingsStatisticsHasBeenSet; }
    inline void SetUnusedAccessFindingsStatistics(const UnusedAccessFindingsStatistics& value) { m_unusedAccessFindingsStatisticsHasBeenSet = true; m_unusedAccessFindingsStatistics = value; }
    inline void SetUnusedAccessFindingsStatistics(UnusedAccessFindingsStatistics&& value) { m_unusedAccessFindingsStatisticsHasBeenSet = true; m_unusedAccessFindingsStatistics = std::move(value); }
    inline FindingsStatistics& WithUnusedAccessFindingsStatistics(const UnusedAccessFindingsStatistics& value) { SetUnusedAccessFindingsStatistics(value); return *this;}
    inline FindingsStatistics& WithUnusedAccessFindingsStatistics(UnusedAccessFindingsStatistics&& value) { SetUnusedAccessFindingsStatistics(std::move(value)); return *this;}
    ///@}
  private:

    ExternalAccessFindingsStatistics m_externalAccessFindingsStatistics;
    bool m_externalAccessFindingsStatisticsHasBeenSet = false;

    UnusedAccessFindingsStatistics m_unusedAccessFindingsStatistics;
    bool m_unusedAccessFindingsStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
