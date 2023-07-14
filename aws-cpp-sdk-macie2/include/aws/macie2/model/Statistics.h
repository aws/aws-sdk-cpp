/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides processing statistics for a classification job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Statistics">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API Statistics
  {
  public:
    Statistics();
    Statistics(Aws::Utils::Json::JsonView jsonValue);
    Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The approximate number of objects that the job has yet to process during its
     * current run.</p>
     */
    inline double GetApproximateNumberOfObjectsToProcess() const{ return m_approximateNumberOfObjectsToProcess; }

    /**
     * <p>The approximate number of objects that the job has yet to process during its
     * current run.</p>
     */
    inline bool ApproximateNumberOfObjectsToProcessHasBeenSet() const { return m_approximateNumberOfObjectsToProcessHasBeenSet; }

    /**
     * <p>The approximate number of objects that the job has yet to process during its
     * current run.</p>
     */
    inline void SetApproximateNumberOfObjectsToProcess(double value) { m_approximateNumberOfObjectsToProcessHasBeenSet = true; m_approximateNumberOfObjectsToProcess = value; }

    /**
     * <p>The approximate number of objects that the job has yet to process during its
     * current run.</p>
     */
    inline Statistics& WithApproximateNumberOfObjectsToProcess(double value) { SetApproximateNumberOfObjectsToProcess(value); return *this;}


    /**
     * <p>The number of times that the job has run.</p>
     */
    inline double GetNumberOfRuns() const{ return m_numberOfRuns; }

    /**
     * <p>The number of times that the job has run.</p>
     */
    inline bool NumberOfRunsHasBeenSet() const { return m_numberOfRunsHasBeenSet; }

    /**
     * <p>The number of times that the job has run.</p>
     */
    inline void SetNumberOfRuns(double value) { m_numberOfRunsHasBeenSet = true; m_numberOfRuns = value; }

    /**
     * <p>The number of times that the job has run.</p>
     */
    inline Statistics& WithNumberOfRuns(double value) { SetNumberOfRuns(value); return *this;}

  private:

    double m_approximateNumberOfObjectsToProcess;
    bool m_approximateNumberOfObjectsToProcessHasBeenSet;

    double m_numberOfRuns;
    bool m_numberOfRunsHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
