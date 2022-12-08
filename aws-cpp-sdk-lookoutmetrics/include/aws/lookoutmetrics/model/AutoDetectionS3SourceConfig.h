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
    AWS_LOOKOUTMETRICS_API AutoDetectionS3SourceConfig();
    AWS_LOOKOUTMETRICS_API AutoDetectionS3SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AutoDetectionS3SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The config's templated path list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTemplatedPathList() const{ return m_templatedPathList; }

    /**
     * <p>The config's templated path list.</p>
     */
    inline bool TemplatedPathListHasBeenSet() const { return m_templatedPathListHasBeenSet; }

    /**
     * <p>The config's templated path list.</p>
     */
    inline void SetTemplatedPathList(const Aws::Vector<Aws::String>& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = value; }

    /**
     * <p>The config's templated path list.</p>
     */
    inline void SetTemplatedPathList(Aws::Vector<Aws::String>&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = std::move(value); }

    /**
     * <p>The config's templated path list.</p>
     */
    inline AutoDetectionS3SourceConfig& WithTemplatedPathList(const Aws::Vector<Aws::String>& value) { SetTemplatedPathList(value); return *this;}

    /**
     * <p>The config's templated path list.</p>
     */
    inline AutoDetectionS3SourceConfig& WithTemplatedPathList(Aws::Vector<Aws::String>&& value) { SetTemplatedPathList(std::move(value)); return *this;}

    /**
     * <p>The config's templated path list.</p>
     */
    inline AutoDetectionS3SourceConfig& AddTemplatedPathList(const Aws::String& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(value); return *this; }

    /**
     * <p>The config's templated path list.</p>
     */
    inline AutoDetectionS3SourceConfig& AddTemplatedPathList(Aws::String&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(std::move(value)); return *this; }

    /**
     * <p>The config's templated path list.</p>
     */
    inline AutoDetectionS3SourceConfig& AddTemplatedPathList(const char* value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(value); return *this; }


    /**
     * <p>The config's historical data path list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHistoricalDataPathList() const{ return m_historicalDataPathList; }

    /**
     * <p>The config's historical data path list.</p>
     */
    inline bool HistoricalDataPathListHasBeenSet() const { return m_historicalDataPathListHasBeenSet; }

    /**
     * <p>The config's historical data path list.</p>
     */
    inline void SetHistoricalDataPathList(const Aws::Vector<Aws::String>& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = value; }

    /**
     * <p>The config's historical data path list.</p>
     */
    inline void SetHistoricalDataPathList(Aws::Vector<Aws::String>&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = std::move(value); }

    /**
     * <p>The config's historical data path list.</p>
     */
    inline AutoDetectionS3SourceConfig& WithHistoricalDataPathList(const Aws::Vector<Aws::String>& value) { SetHistoricalDataPathList(value); return *this;}

    /**
     * <p>The config's historical data path list.</p>
     */
    inline AutoDetectionS3SourceConfig& WithHistoricalDataPathList(Aws::Vector<Aws::String>&& value) { SetHistoricalDataPathList(std::move(value)); return *this;}

    /**
     * <p>The config's historical data path list.</p>
     */
    inline AutoDetectionS3SourceConfig& AddHistoricalDataPathList(const Aws::String& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(value); return *this; }

    /**
     * <p>The config's historical data path list.</p>
     */
    inline AutoDetectionS3SourceConfig& AddHistoricalDataPathList(Aws::String&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(std::move(value)); return *this; }

    /**
     * <p>The config's historical data path list.</p>
     */
    inline AutoDetectionS3SourceConfig& AddHistoricalDataPathList(const char* value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_templatedPathList;
    bool m_templatedPathListHasBeenSet = false;

    Aws::Vector<Aws::String> m_historicalDataPathList;
    bool m_historicalDataPathListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
