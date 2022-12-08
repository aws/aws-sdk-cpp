/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The options that determine how a date axis is displayed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateAxisOptions">AWS
   * API Reference</a></p>
   */
  class DateAxisOptions
  {
  public:
    AWS_QUICKSIGHT_API DateAxisOptions();
    AWS_QUICKSIGHT_API DateAxisOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateAxisOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether or not missing dates are displayed.</p>
     */
    inline const Visibility& GetMissingDateVisibility() const{ return m_missingDateVisibility; }

    /**
     * <p>Determines whether or not missing dates are displayed.</p>
     */
    inline bool MissingDateVisibilityHasBeenSet() const { return m_missingDateVisibilityHasBeenSet; }

    /**
     * <p>Determines whether or not missing dates are displayed.</p>
     */
    inline void SetMissingDateVisibility(const Visibility& value) { m_missingDateVisibilityHasBeenSet = true; m_missingDateVisibility = value; }

    /**
     * <p>Determines whether or not missing dates are displayed.</p>
     */
    inline void SetMissingDateVisibility(Visibility&& value) { m_missingDateVisibilityHasBeenSet = true; m_missingDateVisibility = std::move(value); }

    /**
     * <p>Determines whether or not missing dates are displayed.</p>
     */
    inline DateAxisOptions& WithMissingDateVisibility(const Visibility& value) { SetMissingDateVisibility(value); return *this;}

    /**
     * <p>Determines whether or not missing dates are displayed.</p>
     */
    inline DateAxisOptions& WithMissingDateVisibility(Visibility&& value) { SetMissingDateVisibility(std::move(value)); return *this;}

  private:

    Visibility m_missingDateVisibility;
    bool m_missingDateVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
