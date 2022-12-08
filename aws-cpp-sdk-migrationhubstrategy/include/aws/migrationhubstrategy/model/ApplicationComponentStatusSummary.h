/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/SrcCodeOrDbAnalysisStatus.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Summary of the analysis status of the application component.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ApplicationComponentStatusSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationComponentStatusSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentStatusSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ApplicationComponentStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of application components successfully analyzed, partially
     * successful or failed analysis.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of application components successfully analyzed, partially
     * successful or failed analysis.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of application components successfully analyzed, partially
     * successful or failed analysis.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of application components successfully analyzed, partially
     * successful or failed analysis.</p>
     */
    inline ApplicationComponentStatusSummary& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The status of database analysis.</p>
     */
    inline const SrcCodeOrDbAnalysisStatus& GetSrcCodeOrDbAnalysisStatus() const{ return m_srcCodeOrDbAnalysisStatus; }

    /**
     * <p>The status of database analysis.</p>
     */
    inline bool SrcCodeOrDbAnalysisStatusHasBeenSet() const { return m_srcCodeOrDbAnalysisStatusHasBeenSet; }

    /**
     * <p>The status of database analysis.</p>
     */
    inline void SetSrcCodeOrDbAnalysisStatus(const SrcCodeOrDbAnalysisStatus& value) { m_srcCodeOrDbAnalysisStatusHasBeenSet = true; m_srcCodeOrDbAnalysisStatus = value; }

    /**
     * <p>The status of database analysis.</p>
     */
    inline void SetSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus&& value) { m_srcCodeOrDbAnalysisStatusHasBeenSet = true; m_srcCodeOrDbAnalysisStatus = std::move(value); }

    /**
     * <p>The status of database analysis.</p>
     */
    inline ApplicationComponentStatusSummary& WithSrcCodeOrDbAnalysisStatus(const SrcCodeOrDbAnalysisStatus& value) { SetSrcCodeOrDbAnalysisStatus(value); return *this;}

    /**
     * <p>The status of database analysis.</p>
     */
    inline ApplicationComponentStatusSummary& WithSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus&& value) { SetSrcCodeOrDbAnalysisStatus(std::move(value)); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    SrcCodeOrDbAnalysisStatus m_srcCodeOrDbAnalysisStatus;
    bool m_srcCodeOrDbAnalysisStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
