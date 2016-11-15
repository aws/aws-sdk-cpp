/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/TimestampRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used as the request parameter in the <a>ListRuns</a>
   * action.</p>
   */
  class AWS_INSPECTOR_API RunsFilter
  {
  public:
    RunsFilter();
    RunsFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    RunsFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRunNamePatterns() const{ return m_runNamePatterns; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline void SetRunNamePatterns(const Aws::Vector<Aws::String>& value) { m_runNamePatternsHasBeenSet = true; m_runNamePatterns = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline void SetRunNamePatterns(Aws::Vector<Aws::String>&& value) { m_runNamePatternsHasBeenSet = true; m_runNamePatterns = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline RunsFilter& WithRunNamePatterns(const Aws::Vector<Aws::String>& value) { SetRunNamePatterns(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline RunsFilter& WithRunNamePatterns(Aws::Vector<Aws::String>&& value) { SetRunNamePatterns(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRunNamePatterns(const Aws::String& value) { m_runNamePatternsHasBeenSet = true; m_runNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRunNamePatterns(Aws::String&& value) { m_runNamePatternsHasBeenSet = true; m_runNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>runName</b> property of the <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRunNamePatterns(const char* value) { m_runNamePatternsHasBeenSet = true; m_runNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRunStates() const{ return m_runStates; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline void SetRunStates(const Aws::Vector<Aws::String>& value) { m_runStatesHasBeenSet = true; m_runStates = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline void SetRunStates(Aws::Vector<Aws::String>&& value) { m_runStatesHasBeenSet = true; m_runStates = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline RunsFilter& WithRunStates(const Aws::Vector<Aws::String>& value) { SetRunStates(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline RunsFilter& WithRunStates(Aws::Vector<Aws::String>&& value) { SetRunStates(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRunStates(const Aws::String& value) { m_runStatesHasBeenSet = true; m_runStates.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRunStates(Aws::String&& value) { m_runStatesHasBeenSet = true; m_runStates.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>runState</b> property of
     * the <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRunStates(const char* value) { m_runStatesHasBeenSet = true; m_runStates.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackages() const{ return m_rulesPackages; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline void SetRulesPackages(const Aws::Vector<Aws::String>& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline void SetRulesPackages(Aws::Vector<Aws::String>&& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline RunsFilter& WithRulesPackages(const Aws::Vector<Aws::String>& value) { SetRulesPackages(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline RunsFilter& WithRulesPackages(Aws::Vector<Aws::String>&& value) { SetRulesPackages(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRulesPackages(const Aws::String& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRulesPackages(Aws::String&& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must match a list of values of the <b>rulesPackages</b> property of the
     * <a>Run</a> data type.</p>
     */
    inline RunsFilter& AddRulesPackages(const char* value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>creationTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline const TimestampRange& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>creationTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline void SetCreationTime(const TimestampRange& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>creationTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline void SetCreationTime(TimestampRange&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>creationTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline RunsFilter& WithCreationTime(const TimestampRange& value) { SetCreationTime(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>creationTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline RunsFilter& WithCreationTime(TimestampRange&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completionTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline const TimestampRange& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completionTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline void SetCompletionTime(const TimestampRange& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completionTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline void SetCompletionTime(TimestampRange&& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completionTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline RunsFilter& WithCompletionTime(const TimestampRange& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completionTime</b> property of the <a>Run</a> data
     * type.</p>
     */
    inline RunsFilter& WithCompletionTime(TimestampRange&& value) { SetCompletionTime(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_runNamePatterns;
    bool m_runNamePatternsHasBeenSet;
    Aws::Vector<Aws::String> m_runStates;
    bool m_runStatesHasBeenSet;
    Aws::Vector<Aws::String> m_rulesPackages;
    bool m_rulesPackagesHasBeenSet;
    TimestampRange m_creationTime;
    bool m_creationTimeHasBeenSet;
    TimestampRange m_completionTime;
    bool m_completionTimeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
