/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> Contains the start time of a profile. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ProfileTime">AWS
   * API Reference</a></p>
   */
  class ProfileTime
  {
  public:
    AWS_CODEGURUPROFILER_API ProfileTime();
    AWS_CODEGURUPROFILER_API ProfileTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API ProfileTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of a profile. It is specified using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The start time of a profile. It is specified using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start time of a profile. It is specified using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start time of a profile. It is specified using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The start time of a profile. It is specified using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p>
     */
    inline ProfileTime& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The start time of a profile. It is specified using the ISO 8601 format. For
     * example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020
     * 1:15:02 PM UTC.</p>
     */
    inline ProfileTime& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
