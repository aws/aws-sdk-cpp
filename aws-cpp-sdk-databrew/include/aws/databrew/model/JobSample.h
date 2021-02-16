/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/SampleMode.h>
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
   * <p>Sample configuration for Profile Jobs only. Determines the number of rows on
   * which the Profile job will be executed. If a JobSample value is not provided for
   * profile jobs, the default value will be used. The default value is CUSTOM_ROWS
   * for the mode parameter and 20000 for the size parameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/JobSample">AWS
   * API Reference</a></p>
   */
  class AWS_GLUEDATABREW_API JobSample
  {
  public:
    JobSample();
    JobSample(Aws::Utils::Json::JsonView jsonValue);
    JobSample& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether the profile job will be executed on the entire dataset or
     * on a specified number of rows. Must be one of the following:</p> <ul> <li>
     * <p>FULL_DATASET: Profile job will be executed on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS: Profile job will be executed on the number of rows
     * specified in the Size parameter.</p> </li> </ul>
     */
    inline const SampleMode& GetMode() const{ return m_mode; }

    /**
     * <p>Determines whether the profile job will be executed on the entire dataset or
     * on a specified number of rows. Must be one of the following:</p> <ul> <li>
     * <p>FULL_DATASET: Profile job will be executed on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS: Profile job will be executed on the number of rows
     * specified in the Size parameter.</p> </li> </ul>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Determines whether the profile job will be executed on the entire dataset or
     * on a specified number of rows. Must be one of the following:</p> <ul> <li>
     * <p>FULL_DATASET: Profile job will be executed on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS: Profile job will be executed on the number of rows
     * specified in the Size parameter.</p> </li> </ul>
     */
    inline void SetMode(const SampleMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Determines whether the profile job will be executed on the entire dataset or
     * on a specified number of rows. Must be one of the following:</p> <ul> <li>
     * <p>FULL_DATASET: Profile job will be executed on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS: Profile job will be executed on the number of rows
     * specified in the Size parameter.</p> </li> </ul>
     */
    inline void SetMode(SampleMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Determines whether the profile job will be executed on the entire dataset or
     * on a specified number of rows. Must be one of the following:</p> <ul> <li>
     * <p>FULL_DATASET: Profile job will be executed on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS: Profile job will be executed on the number of rows
     * specified in the Size parameter.</p> </li> </ul>
     */
    inline JobSample& WithMode(const SampleMode& value) { SetMode(value); return *this;}

    /**
     * <p>Determines whether the profile job will be executed on the entire dataset or
     * on a specified number of rows. Must be one of the following:</p> <ul> <li>
     * <p>FULL_DATASET: Profile job will be executed on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS: Profile job will be executed on the number of rows
     * specified in the Size parameter.</p> </li> </ul>
     */
    inline JobSample& WithMode(SampleMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>Size parameter is only required when the mode is CUSTOM_ROWS. Profile job
     * will be executed on the the specified number of rows. The maximum value for size
     * is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE = 9223372036854775807</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>Size parameter is only required when the mode is CUSTOM_ROWS. Profile job
     * will be executed on the the specified number of rows. The maximum value for size
     * is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE = 9223372036854775807</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>Size parameter is only required when the mode is CUSTOM_ROWS. Profile job
     * will be executed on the the specified number of rows. The maximum value for size
     * is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE = 9223372036854775807</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>Size parameter is only required when the mode is CUSTOM_ROWS. Profile job
     * will be executed on the the specified number of rows. The maximum value for size
     * is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE = 9223372036854775807</p>
     */
    inline JobSample& WithSize(long long value) { SetSize(value); return *this;}

  private:

    SampleMode m_mode;
    bool m_modeHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
