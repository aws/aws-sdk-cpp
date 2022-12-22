/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/FailureSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about worlds that finished.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/FinishedWorldsSummary">AWS
   * API Reference</a></p>
   */
  class FinishedWorldsSummary
  {
  public:
    AWS_ROBOMAKER_API FinishedWorldsSummary();
    AWS_ROBOMAKER_API FinishedWorldsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API FinishedWorldsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of finished worlds.</p>
     */
    inline int GetFinishedCount() const{ return m_finishedCount; }

    /**
     * <p>The total number of finished worlds.</p>
     */
    inline bool FinishedCountHasBeenSet() const { return m_finishedCountHasBeenSet; }

    /**
     * <p>The total number of finished worlds.</p>
     */
    inline void SetFinishedCount(int value) { m_finishedCountHasBeenSet = true; m_finishedCount = value; }

    /**
     * <p>The total number of finished worlds.</p>
     */
    inline FinishedWorldsSummary& WithFinishedCount(int value) { SetFinishedCount(value); return *this;}


    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceededWorlds() const{ return m_succeededWorlds; }

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline bool SucceededWorldsHasBeenSet() const { return m_succeededWorldsHasBeenSet; }

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline void SetSucceededWorlds(const Aws::Vector<Aws::String>& value) { m_succeededWorldsHasBeenSet = true; m_succeededWorlds = value; }

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline void SetSucceededWorlds(Aws::Vector<Aws::String>&& value) { m_succeededWorldsHasBeenSet = true; m_succeededWorlds = std::move(value); }

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline FinishedWorldsSummary& WithSucceededWorlds(const Aws::Vector<Aws::String>& value) { SetSucceededWorlds(value); return *this;}

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline FinishedWorldsSummary& WithSucceededWorlds(Aws::Vector<Aws::String>&& value) { SetSucceededWorlds(std::move(value)); return *this;}

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline FinishedWorldsSummary& AddSucceededWorlds(const Aws::String& value) { m_succeededWorldsHasBeenSet = true; m_succeededWorlds.push_back(value); return *this; }

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline FinishedWorldsSummary& AddSucceededWorlds(Aws::String&& value) { m_succeededWorldsHasBeenSet = true; m_succeededWorlds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of worlds that succeeded.</p>
     */
    inline FinishedWorldsSummary& AddSucceededWorlds(const char* value) { m_succeededWorldsHasBeenSet = true; m_succeededWorlds.push_back(value); return *this; }


    /**
     * <p>Information about worlds that failed.</p>
     */
    inline const FailureSummary& GetFailureSummary() const{ return m_failureSummary; }

    /**
     * <p>Information about worlds that failed.</p>
     */
    inline bool FailureSummaryHasBeenSet() const { return m_failureSummaryHasBeenSet; }

    /**
     * <p>Information about worlds that failed.</p>
     */
    inline void SetFailureSummary(const FailureSummary& value) { m_failureSummaryHasBeenSet = true; m_failureSummary = value; }

    /**
     * <p>Information about worlds that failed.</p>
     */
    inline void SetFailureSummary(FailureSummary&& value) { m_failureSummaryHasBeenSet = true; m_failureSummary = std::move(value); }

    /**
     * <p>Information about worlds that failed.</p>
     */
    inline FinishedWorldsSummary& WithFailureSummary(const FailureSummary& value) { SetFailureSummary(value); return *this;}

    /**
     * <p>Information about worlds that failed.</p>
     */
    inline FinishedWorldsSummary& WithFailureSummary(FailureSummary&& value) { SetFailureSummary(std::move(value)); return *this;}

  private:

    int m_finishedCount;
    bool m_finishedCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_succeededWorlds;
    bool m_succeededWorldsHasBeenSet = false;

    FailureSummary m_failureSummary;
    bool m_failureSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
