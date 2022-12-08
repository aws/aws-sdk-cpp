/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for a path in a random split activity in a
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RandomSplitEntry">AWS
   * API Reference</a></p>
   */
  class RandomSplitEntry
  {
  public:
    AWS_PINPOINT_API RandomSplitEntry();
    AWS_PINPOINT_API RandomSplitEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RandomSplitEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline const Aws::String& GetNextActivity() const{ return m_nextActivity; }

    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }

    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline void SetNextActivity(const Aws::String& value) { m_nextActivityHasBeenSet = true; m_nextActivity = value; }

    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline void SetNextActivity(Aws::String&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::move(value); }

    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline void SetNextActivity(const char* value) { m_nextActivityHasBeenSet = true; m_nextActivity.assign(value); }

    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline RandomSplitEntry& WithNextActivity(const Aws::String& value) { SetNextActivity(value); return *this;}

    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline RandomSplitEntry& WithNextActivity(Aws::String&& value) { SetNextActivity(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline RandomSplitEntry& WithNextActivity(const char* value) { SetNextActivity(value); return *this;}


    /**
     * <p>The percentage of participants to send down the activity path.</p> <p>To
     * determine which participants are sent down each path, Amazon Pinpoint applies a
     * probability-based algorithm to the percentages that you specify for the paths.
     * Therefore, the actual percentage of participants who are sent down a path may
     * not be equal to the percentage that you specify.</p>
     */
    inline int GetPercentage() const{ return m_percentage; }

    /**
     * <p>The percentage of participants to send down the activity path.</p> <p>To
     * determine which participants are sent down each path, Amazon Pinpoint applies a
     * probability-based algorithm to the percentages that you specify for the paths.
     * Therefore, the actual percentage of participants who are sent down a path may
     * not be equal to the percentage that you specify.</p>
     */
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }

    /**
     * <p>The percentage of participants to send down the activity path.</p> <p>To
     * determine which participants are sent down each path, Amazon Pinpoint applies a
     * probability-based algorithm to the percentages that you specify for the paths.
     * Therefore, the actual percentage of participants who are sent down a path may
     * not be equal to the percentage that you specify.</p>
     */
    inline void SetPercentage(int value) { m_percentageHasBeenSet = true; m_percentage = value; }

    /**
     * <p>The percentage of participants to send down the activity path.</p> <p>To
     * determine which participants are sent down each path, Amazon Pinpoint applies a
     * probability-based algorithm to the percentages that you specify for the paths.
     * Therefore, the actual percentage of participants who are sent down a path may
     * not be equal to the percentage that you specify.</p>
     */
    inline RandomSplitEntry& WithPercentage(int value) { SetPercentage(value); return *this;}

  private:

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;

    int m_percentage;
    bool m_percentageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
