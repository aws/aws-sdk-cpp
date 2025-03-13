/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Configuration of statistics that are allowed to be run on columns that
   * contain detected entities. When undefined, no statistics will be computed on
   * columns that contain detected entities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/AllowedStatistics">AWS
   * API Reference</a></p>
   */
  class AllowedStatistics
  {
  public:
    AWS_GLUEDATABREW_API AllowedStatistics() = default;
    AWS_GLUEDATABREW_API AllowedStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API AllowedStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<Aws::String>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<Aws::String>>
    AllowedStatistics& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    template<typename StatisticsT = Aws::String>
    AllowedStatistics& AddStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics.emplace_back(std::forward<StatisticsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
