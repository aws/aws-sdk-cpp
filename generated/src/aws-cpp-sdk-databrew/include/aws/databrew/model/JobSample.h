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
   * <p>A sample configuration for profile jobs only, which determines the number of
   * rows on which the profile job is run. If a <code>JobSample</code> value isn't
   * provided, the default is used. The default value is CUSTOM_ROWS for the mode
   * parameter and 20,000 for the size parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/JobSample">AWS
   * API Reference</a></p>
   */
  class JobSample
  {
  public:
    AWS_GLUEDATABREW_API JobSample();
    AWS_GLUEDATABREW_API JobSample(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API JobSample& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that determines whether the profile job is run on the entire dataset
     * or a specified number of rows. This value must be one of the following:</p> <ul>
     * <li> <p>FULL_DATASET - The profile job is run on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS - The profile job is run on the number of rows specified in
     * the <code>Size</code> parameter.</p> </li> </ul>
     */
    inline const SampleMode& GetMode() const{ return m_mode; }

    /**
     * <p>A value that determines whether the profile job is run on the entire dataset
     * or a specified number of rows. This value must be one of the following:</p> <ul>
     * <li> <p>FULL_DATASET - The profile job is run on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS - The profile job is run on the number of rows specified in
     * the <code>Size</code> parameter.</p> </li> </ul>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>A value that determines whether the profile job is run on the entire dataset
     * or a specified number of rows. This value must be one of the following:</p> <ul>
     * <li> <p>FULL_DATASET - The profile job is run on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS - The profile job is run on the number of rows specified in
     * the <code>Size</code> parameter.</p> </li> </ul>
     */
    inline void SetMode(const SampleMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>A value that determines whether the profile job is run on the entire dataset
     * or a specified number of rows. This value must be one of the following:</p> <ul>
     * <li> <p>FULL_DATASET - The profile job is run on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS - The profile job is run on the number of rows specified in
     * the <code>Size</code> parameter.</p> </li> </ul>
     */
    inline void SetMode(SampleMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>A value that determines whether the profile job is run on the entire dataset
     * or a specified number of rows. This value must be one of the following:</p> <ul>
     * <li> <p>FULL_DATASET - The profile job is run on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS - The profile job is run on the number of rows specified in
     * the <code>Size</code> parameter.</p> </li> </ul>
     */
    inline JobSample& WithMode(const SampleMode& value) { SetMode(value); return *this;}

    /**
     * <p>A value that determines whether the profile job is run on the entire dataset
     * or a specified number of rows. This value must be one of the following:</p> <ul>
     * <li> <p>FULL_DATASET - The profile job is run on the entire dataset.</p> </li>
     * <li> <p>CUSTOM_ROWS - The profile job is run on the number of rows specified in
     * the <code>Size</code> parameter.</p> </li> </ul>
     */
    inline JobSample& WithMode(SampleMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The <code>Size</code> parameter is only required when the mode is
     * CUSTOM_ROWS. The profile job is run on the specified number of rows. The maximum
     * value for size is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE =
     * 9223372036854775807</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The <code>Size</code> parameter is only required when the mode is
     * CUSTOM_ROWS. The profile job is run on the specified number of rows. The maximum
     * value for size is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE =
     * 9223372036854775807</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The <code>Size</code> parameter is only required when the mode is
     * CUSTOM_ROWS. The profile job is run on the specified number of rows. The maximum
     * value for size is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE =
     * 9223372036854775807</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The <code>Size</code> parameter is only required when the mode is
     * CUSTOM_ROWS. The profile job is run on the specified number of rows. The maximum
     * value for size is Long.MAX_VALUE.</p> <p>Long.MAX_VALUE =
     * 9223372036854775807</p>
     */
    inline JobSample& WithSize(long long value) { SetSize(value); return *this;}

  private:

    SampleMode m_mode;
    bool m_modeHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
