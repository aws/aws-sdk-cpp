/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/InterpolationType.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that specifies how to interpolate data in a list.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/InterpolationParameters">AWS
   * API Reference</a></p>
   */
  class InterpolationParameters
  {
  public:
    AWS_IOTTWINMAKER_API InterpolationParameters();
    AWS_IOTTWINMAKER_API InterpolationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API InterpolationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The interpolation type.</p>
     */
    inline const InterpolationType& GetInterpolationType() const{ return m_interpolationType; }

    /**
     * <p>The interpolation type.</p>
     */
    inline bool InterpolationTypeHasBeenSet() const { return m_interpolationTypeHasBeenSet; }

    /**
     * <p>The interpolation type.</p>
     */
    inline void SetInterpolationType(const InterpolationType& value) { m_interpolationTypeHasBeenSet = true; m_interpolationType = value; }

    /**
     * <p>The interpolation type.</p>
     */
    inline void SetInterpolationType(InterpolationType&& value) { m_interpolationTypeHasBeenSet = true; m_interpolationType = std::move(value); }

    /**
     * <p>The interpolation type.</p>
     */
    inline InterpolationParameters& WithInterpolationType(const InterpolationType& value) { SetInterpolationType(value); return *this;}

    /**
     * <p>The interpolation type.</p>
     */
    inline InterpolationParameters& WithInterpolationType(InterpolationType&& value) { SetInterpolationType(std::move(value)); return *this;}


    /**
     * <p>The interpolation time interval in seconds.</p>
     */
    inline long long GetIntervalInSeconds() const{ return m_intervalInSeconds; }

    /**
     * <p>The interpolation time interval in seconds.</p>
     */
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }

    /**
     * <p>The interpolation time interval in seconds.</p>
     */
    inline void SetIntervalInSeconds(long long value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }

    /**
     * <p>The interpolation time interval in seconds.</p>
     */
    inline InterpolationParameters& WithIntervalInSeconds(long long value) { SetIntervalInSeconds(value); return *this;}

  private:

    InterpolationType m_interpolationType;
    bool m_interpolationTypeHasBeenSet = false;

    long long m_intervalInSeconds;
    bool m_intervalInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
