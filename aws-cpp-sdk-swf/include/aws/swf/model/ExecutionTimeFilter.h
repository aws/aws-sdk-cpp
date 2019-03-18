/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter the workflow executions in visibility APIs by various
   * time-based rules. Each parameter, if specified, defines a rule that must be
   * satisfied by each returned query result. The parameter values are in the <a
   * href="https://en.wikipedia.org/wiki/Unix_time">Unix Time format</a>. For
   * example: <code>"oldestDate": 1325376070.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ExecutionTimeFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ExecutionTimeFilter
  {
  public:
    ExecutionTimeFilter();
    ExecutionTimeFilter(Aws::Utils::Json::JsonView jsonValue);
    ExecutionTimeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the oldest start or close date and time to return.</p>
     */
    inline const Aws::Utils::DateTime& GetOldestDate() const{ return m_oldestDate; }

    /**
     * <p>Specifies the oldest start or close date and time to return.</p>
     */
    inline bool OldestDateHasBeenSet() const { return m_oldestDateHasBeenSet; }

    /**
     * <p>Specifies the oldest start or close date and time to return.</p>
     */
    inline void SetOldestDate(const Aws::Utils::DateTime& value) { m_oldestDateHasBeenSet = true; m_oldestDate = value; }

    /**
     * <p>Specifies the oldest start or close date and time to return.</p>
     */
    inline void SetOldestDate(Aws::Utils::DateTime&& value) { m_oldestDateHasBeenSet = true; m_oldestDate = std::move(value); }

    /**
     * <p>Specifies the oldest start or close date and time to return.</p>
     */
    inline ExecutionTimeFilter& WithOldestDate(const Aws::Utils::DateTime& value) { SetOldestDate(value); return *this;}

    /**
     * <p>Specifies the oldest start or close date and time to return.</p>
     */
    inline ExecutionTimeFilter& WithOldestDate(Aws::Utils::DateTime&& value) { SetOldestDate(std::move(value)); return *this;}


    /**
     * <p>Specifies the latest start or close date and time to return.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestDate() const{ return m_latestDate; }

    /**
     * <p>Specifies the latest start or close date and time to return.</p>
     */
    inline bool LatestDateHasBeenSet() const { return m_latestDateHasBeenSet; }

    /**
     * <p>Specifies the latest start or close date and time to return.</p>
     */
    inline void SetLatestDate(const Aws::Utils::DateTime& value) { m_latestDateHasBeenSet = true; m_latestDate = value; }

    /**
     * <p>Specifies the latest start or close date and time to return.</p>
     */
    inline void SetLatestDate(Aws::Utils::DateTime&& value) { m_latestDateHasBeenSet = true; m_latestDate = std::move(value); }

    /**
     * <p>Specifies the latest start or close date and time to return.</p>
     */
    inline ExecutionTimeFilter& WithLatestDate(const Aws::Utils::DateTime& value) { SetLatestDate(value); return *this;}

    /**
     * <p>Specifies the latest start or close date and time to return.</p>
     */
    inline ExecutionTimeFilter& WithLatestDate(Aws::Utils::DateTime&& value) { SetLatestDate(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_oldestDate;
    bool m_oldestDateHasBeenSet;

    Aws::Utils::DateTime m_latestDate;
    bool m_latestDateHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
