/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The status counts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/StatusCounts">AWS
   * API Reference</a></p>
   */
  class StatusCounts
  {
  public:
    AWS_INSPECTOR2_API StatusCounts();
    AWS_INSPECTOR2_API StatusCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API StatusCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of checks that failed.</p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p>The number of checks that failed.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>The number of checks that failed.</p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The number of checks that failed.</p>
     */
    inline StatusCounts& WithFailed(int value) { SetFailed(value); return *this;}


    /**
     * <p>The number of checks that passed.</p>
     */
    inline int GetPassed() const{ return m_passed; }

    /**
     * <p>The number of checks that passed.</p>
     */
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }

    /**
     * <p>The number of checks that passed.</p>
     */
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }

    /**
     * <p>The number of checks that passed.</p>
     */
    inline StatusCounts& WithPassed(int value) { SetPassed(value); return *this;}


    /**
     * <p>The number of checks that were skipped.</p>
     */
    inline int GetSkipped() const{ return m_skipped; }

    /**
     * <p>The number of checks that were skipped.</p>
     */
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }

    /**
     * <p>The number of checks that were skipped.</p>
     */
    inline void SetSkipped(int value) { m_skippedHasBeenSet = true; m_skipped = value; }

    /**
     * <p>The number of checks that were skipped.</p>
     */
    inline StatusCounts& WithSkipped(int value) { SetSkipped(value); return *this;}

  private:

    int m_failed;
    bool m_failedHasBeenSet = false;

    int m_passed;
    bool m_passedHasBeenSet = false;

    int m_skipped;
    bool m_skippedHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
