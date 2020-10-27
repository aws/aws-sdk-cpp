/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
   * <p>Defines column statistics supported for Boolean data columns.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BooleanColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API BooleanColumnStatisticsData
  {
  public:
    BooleanColumnStatisticsData();
    BooleanColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    BooleanColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of true values in the column.</p>
     */
    inline long long GetNumberOfTrues() const{ return m_numberOfTrues; }

    /**
     * <p>The number of true values in the column.</p>
     */
    inline bool NumberOfTruesHasBeenSet() const { return m_numberOfTruesHasBeenSet; }

    /**
     * <p>The number of true values in the column.</p>
     */
    inline void SetNumberOfTrues(long long value) { m_numberOfTruesHasBeenSet = true; m_numberOfTrues = value; }

    /**
     * <p>The number of true values in the column.</p>
     */
    inline BooleanColumnStatisticsData& WithNumberOfTrues(long long value) { SetNumberOfTrues(value); return *this;}


    /**
     * <p>The number of false values in the column.</p>
     */
    inline long long GetNumberOfFalses() const{ return m_numberOfFalses; }

    /**
     * <p>The number of false values in the column.</p>
     */
    inline bool NumberOfFalsesHasBeenSet() const { return m_numberOfFalsesHasBeenSet; }

    /**
     * <p>The number of false values in the column.</p>
     */
    inline void SetNumberOfFalses(long long value) { m_numberOfFalsesHasBeenSet = true; m_numberOfFalses = value; }

    /**
     * <p>The number of false values in the column.</p>
     */
    inline BooleanColumnStatisticsData& WithNumberOfFalses(long long value) { SetNumberOfFalses(value); return *this;}


    /**
     * <p>The number of null values in the column.</p>
     */
    inline long long GetNumberOfNulls() const{ return m_numberOfNulls; }

    /**
     * <p>The number of null values in the column.</p>
     */
    inline bool NumberOfNullsHasBeenSet() const { return m_numberOfNullsHasBeenSet; }

    /**
     * <p>The number of null values in the column.</p>
     */
    inline void SetNumberOfNulls(long long value) { m_numberOfNullsHasBeenSet = true; m_numberOfNulls = value; }

    /**
     * <p>The number of null values in the column.</p>
     */
    inline BooleanColumnStatisticsData& WithNumberOfNulls(long long value) { SetNumberOfNulls(value); return *this;}

  private:

    long long m_numberOfTrues;
    bool m_numberOfTruesHasBeenSet;

    long long m_numberOfFalses;
    bool m_numberOfFalsesHasBeenSet;

    long long m_numberOfNulls;
    bool m_numberOfNullsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
