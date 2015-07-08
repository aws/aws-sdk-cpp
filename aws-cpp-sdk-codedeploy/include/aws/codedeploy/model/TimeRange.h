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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{
  /*
    <p>Information about a time range.</p>
  */
  class AWS_CODEDEPLOY_API TimeRange
  {
  public:
    TimeRange();
    TimeRange(const Aws::Utils::Json::JsonValue& jsonValue);
    TimeRange& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The time range's start time.</p> <note>Specify null to leave the time range's start time open-ended.</note>
    */
    inline double GetStart() const{ return m_start; }
    /*
     <p>The time range's start time.</p> <note>Specify null to leave the time range's start time open-ended.</note>
    */
    inline void SetStart(double value) { m_startHasBeenSet = true; m_start = value; }

    /*
     <p>The time range's start time.</p> <note>Specify null to leave the time range's start time open-ended.</note>
    */
    inline TimeRange&  WithStart(double value) { SetStart(value); return *this;}

    /*
     <p>The time range's end time.</p> <note>Specify null to leave the time range's end time open-ended.</note>
    */
    inline double GetEnd() const{ return m_end; }
    /*
     <p>The time range's end time.</p> <note>Specify null to leave the time range's end time open-ended.</note>
    */
    inline void SetEnd(double value) { m_endHasBeenSet = true; m_end = value; }

    /*
     <p>The time range's end time.</p> <note>Specify null to leave the time range's end time open-ended.</note>
    */
    inline TimeRange&  WithEnd(double value) { SetEnd(value); return *this;}

  private:
    double m_start;
    bool m_startHasBeenSet;
    double m_end;
    bool m_endHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
