/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The time range. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/TimeRange">AWS
   * API Reference</a></p>
   */
  class TimeRange
  {
  public:
    AWS_SHIELD_API TimeRange();
    AWS_SHIELD_API TimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API TimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetFromInclusive() const{ return m_fromInclusive; }

    /**
     * <p>The start time, in Unix time in seconds. </p>
     */
    inline bool FromInclusiveHasBeenSet() const { return m_fromInclusiveHasBeenSet; }

    /**
     * <p>The start time, in Unix time in seconds. </p>
     */
    inline void SetFromInclusive(const Aws::Utils::DateTime& value) { m_fromInclusiveHasBeenSet = true; m_fromInclusive = value; }

    /**
     * <p>The start time, in Unix time in seconds. </p>
     */
    inline void SetFromInclusive(Aws::Utils::DateTime&& value) { m_fromInclusiveHasBeenSet = true; m_fromInclusive = std::move(value); }

    /**
     * <p>The start time, in Unix time in seconds. </p>
     */
    inline TimeRange& WithFromInclusive(const Aws::Utils::DateTime& value) { SetFromInclusive(value); return *this;}

    /**
     * <p>The start time, in Unix time in seconds. </p>
     */
    inline TimeRange& WithFromInclusive(Aws::Utils::DateTime&& value) { SetFromInclusive(std::move(value)); return *this;}


    /**
     * <p>The end time, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetToExclusive() const{ return m_toExclusive; }

    /**
     * <p>The end time, in Unix time in seconds. </p>
     */
    inline bool ToExclusiveHasBeenSet() const { return m_toExclusiveHasBeenSet; }

    /**
     * <p>The end time, in Unix time in seconds. </p>
     */
    inline void SetToExclusive(const Aws::Utils::DateTime& value) { m_toExclusiveHasBeenSet = true; m_toExclusive = value; }

    /**
     * <p>The end time, in Unix time in seconds. </p>
     */
    inline void SetToExclusive(Aws::Utils::DateTime&& value) { m_toExclusiveHasBeenSet = true; m_toExclusive = std::move(value); }

    /**
     * <p>The end time, in Unix time in seconds. </p>
     */
    inline TimeRange& WithToExclusive(const Aws::Utils::DateTime& value) { SetToExclusive(value); return *this;}

    /**
     * <p>The end time, in Unix time in seconds. </p>
     */
    inline TimeRange& WithToExclusive(Aws::Utils::DateTime&& value) { SetToExclusive(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_fromInclusive;
    bool m_fromInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_toExclusive;
    bool m_toExclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
