/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>

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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>The length of the records in the data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/RecordLength">AWS API
   * Reference</a></p>
   */
  class RecordLength
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API RecordLength();
    AWS_MAINFRAMEMODERNIZATION_API RecordLength(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API RecordLength& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum record length. In case of fixed, both minimum and maximum are the
     * same.</p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p>The maximum record length. In case of fixed, both minimum and maximum are the
     * same.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum record length. In case of fixed, both minimum and maximum are the
     * same.</p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum record length. In case of fixed, both minimum and maximum are the
     * same.</p>
     */
    inline RecordLength& WithMax(int value) { SetMax(value); return *this;}


    /**
     * <p>The minimum record length of a record.</p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p>The minimum record length of a record.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum record length of a record.</p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum record length of a record.</p>
     */
    inline RecordLength& WithMin(int value) { SetMin(value); return *this;}

  private:

    int m_max;
    bool m_maxHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
