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
    AWS_GLUEDATABREW_API AllowedStatistics();
    AWS_GLUEDATABREW_API AllowedStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API AllowedStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline void SetStatistics(const Aws::Vector<Aws::String>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline void SetStatistics(Aws::Vector<Aws::String>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline AllowedStatistics& WithStatistics(const Aws::Vector<Aws::String>& value) { SetStatistics(value); return *this;}

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline AllowedStatistics& WithStatistics(Aws::Vector<Aws::String>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline AllowedStatistics& AddStatistics(const Aws::String& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline AllowedStatistics& AddStatistics(Aws::String&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more column statistics to allow for columns that contain detected
     * entities.</p>
     */
    inline AllowedStatistics& AddStatistics(const char* value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
