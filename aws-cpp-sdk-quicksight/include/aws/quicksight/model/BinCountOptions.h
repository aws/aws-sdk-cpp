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
   * <p>The options that determine the bin count of a histogram.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BinCountOptions">AWS
   * API Reference</a></p>
   */
  class BinCountOptions
  {
  public:
    AWS_QUICKSIGHT_API BinCountOptions();
    AWS_QUICKSIGHT_API BinCountOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BinCountOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the bin count value.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The options that determine the bin count value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The options that determine the bin count value.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The options that determine the bin count value.</p>
     */
    inline BinCountOptions& WithValue(int value) { SetValue(value); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
