/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The static data configuration of the reference line data
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineStaticDataConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineStaticDataConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineStaticDataConfiguration();
    AWS_QUICKSIGHT_API ReferenceLineStaticDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineStaticDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The double input of the static data.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The double input of the static data.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The double input of the static data.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The double input of the static data.</p>
     */
    inline ReferenceLineStaticDataConfiguration& WithValue(double value) { SetValue(value); return *this;}

  private:

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
