/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>

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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ViewSunAzimuthInput">AWS
   * API Reference</a></p>
   */
  class ViewSunAzimuthInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunAzimuthInput();
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunAzimuthInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ViewSunAzimuthInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline double GetLowerBound() const{ return m_lowerBound; }

    /**
     * <p/>
     */
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLowerBound(double value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }

    /**
     * <p/>
     */
    inline ViewSunAzimuthInput& WithLowerBound(double value) { SetLowerBound(value); return *this;}


    /**
     * <p/>
     */
    inline double GetUpperBound() const{ return m_upperBound; }

    /**
     * <p/>
     */
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetUpperBound(double value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }

    /**
     * <p/>
     */
    inline ViewSunAzimuthInput& WithUpperBound(double value) { SetUpperBound(value); return *this;}

  private:

    double m_lowerBound;
    bool m_lowerBoundHasBeenSet = false;

    double m_upperBound;
    bool m_upperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
