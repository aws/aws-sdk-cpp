/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{
  /*
    <p>Used to filter the workflow executions in visibility APIs by various time-based rules. Each parameter, if specified, defines a rule that must be satisfied by each returned query result. The parameter values are in the <a href="https://en.wikipedia.org/wiki/Unix_time">Unix Time format</a>. For example: <code>"oldestDate": 1325376070.</code></p>
  */
  class AWS_SWF_API ExecutionTimeFilter
  {
  public:
    ExecutionTimeFilter();
    ExecutionTimeFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    ExecutionTimeFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>Specifies the oldest start or close date and time to return.</p>
    */
    inline double GetOldestDate() const{ return m_oldestDate; }

    /*
     <p>Specifies the oldest start or close date and time to return.</p>
    */
    inline void SetOldestDate(double value) { m_oldestDateHasBeenSet = true; m_oldestDate = value; }

    /*
     <p>Specifies the oldest start or close date and time to return.</p>
    */
    inline ExecutionTimeFilter& WithOldestDate(double value) { SetOldestDate(value); return *this;}

    /*
     <p>Specifies the latest start or close date and time to return.</p>
    */
    inline double GetLatestDate() const{ return m_latestDate; }

    /*
     <p>Specifies the latest start or close date and time to return.</p>
    */
    inline void SetLatestDate(double value) { m_latestDateHasBeenSet = true; m_latestDate = value; }

    /*
     <p>Specifies the latest start or close date and time to return.</p>
    */
    inline ExecutionTimeFilter& WithLatestDate(double value) { SetLatestDate(value); return *this;}

  private:
    double m_oldestDate;
    bool m_oldestDateHasBeenSet;
    double m_latestDate;
    bool m_latestDateHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
