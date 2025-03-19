/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>An auto detection source config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AutoDetectionS3SourceConfig">AWS
   * API Reference</a></p>
   */
  class AutoDetectionS3SourceConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API AutoDetectionS3SourceConfig() = default;
    AWS_LOOKOUTMETRICS_API AutoDetectionS3SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AutoDetectionS3SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The config's templated path list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTemplatedPathList() const { return m_templatedPathList; }
    inline bool TemplatedPathListHasBeenSet() const { return m_templatedPathListHasBeenSet; }
    template<typename TemplatedPathListT = Aws::Vector<Aws::String>>
    void SetTemplatedPathList(TemplatedPathListT&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = std::forward<TemplatedPathListT>(value); }
    template<typename TemplatedPathListT = Aws::Vector<Aws::String>>
    AutoDetectionS3SourceConfig& WithTemplatedPathList(TemplatedPathListT&& value) { SetTemplatedPathList(std::forward<TemplatedPathListT>(value)); return *this;}
    template<typename TemplatedPathListT = Aws::String>
    AutoDetectionS3SourceConfig& AddTemplatedPathList(TemplatedPathListT&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.emplace_back(std::forward<TemplatedPathListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The config's historical data path list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHistoricalDataPathList() const { return m_historicalDataPathList; }
    inline bool HistoricalDataPathListHasBeenSet() const { return m_historicalDataPathListHasBeenSet; }
    template<typename HistoricalDataPathListT = Aws::Vector<Aws::String>>
    void SetHistoricalDataPathList(HistoricalDataPathListT&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = std::forward<HistoricalDataPathListT>(value); }
    template<typename HistoricalDataPathListT = Aws::Vector<Aws::String>>
    AutoDetectionS3SourceConfig& WithHistoricalDataPathList(HistoricalDataPathListT&& value) { SetHistoricalDataPathList(std::forward<HistoricalDataPathListT>(value)); return *this;}
    template<typename HistoricalDataPathListT = Aws::String>
    AutoDetectionS3SourceConfig& AddHistoricalDataPathList(HistoricalDataPathListT&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.emplace_back(std::forward<HistoricalDataPathListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_templatedPathList;
    bool m_templatedPathListHasBeenSet = false;

    Aws::Vector<Aws::String> m_historicalDataPathList;
    bool m_historicalDataPathListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
