﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CrawlerLineageSettings.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies data lineage configuration settings for the crawler.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LineageConfiguration">AWS
   * API Reference</a></p>
   */
  class LineageConfiguration
  {
  public:
    AWS_GLUE_API LineageConfiguration() = default;
    AWS_GLUE_API LineageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LineageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether data lineage is enabled for the crawler. Valid values
     * are:</p> <ul> <li> <p>ENABLE: enables data lineage for the crawler</p> </li>
     * <li> <p>DISABLE: disables data lineage for the crawler</p> </li> </ul>
     */
    inline CrawlerLineageSettings GetCrawlerLineageSettings() const { return m_crawlerLineageSettings; }
    inline bool CrawlerLineageSettingsHasBeenSet() const { return m_crawlerLineageSettingsHasBeenSet; }
    inline void SetCrawlerLineageSettings(CrawlerLineageSettings value) { m_crawlerLineageSettingsHasBeenSet = true; m_crawlerLineageSettings = value; }
    inline LineageConfiguration& WithCrawlerLineageSettings(CrawlerLineageSettings value) { SetCrawlerLineageSettings(value); return *this;}
    ///@}
  private:

    CrawlerLineageSettings m_crawlerLineageSettings{CrawlerLineageSettings::NOT_SET};
    bool m_crawlerLineageSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
