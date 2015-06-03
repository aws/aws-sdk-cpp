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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{
  /*
    <p>The timeline of the cluster step lifecycle. </p>
  */
  class AWS_EMR_API StepTimeline
  {
  public:
    StepTimeline();
    StepTimeline(const Aws::Utils::Json::JsonValue& jsonValue);
    StepTimeline& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The date and time when the cluster step was created. </p>
    */
    inline double GetCreationDateTime() const{ return m_creationDateTime; }
    /*
     <p>The date and time when the cluster step was created. </p>
    */
    inline void SetCreationDateTime(double value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /*
     <p>The date and time when the cluster step was created. </p>
    */
    inline StepTimeline&  WithCreationDateTime(double value) { SetCreationDateTime(value); return *this;}

    /*
     <p>The date and time when the cluster step execution started. </p>
    */
    inline double GetStartDateTime() const{ return m_startDateTime; }
    /*
     <p>The date and time when the cluster step execution started. </p>
    */
    inline void SetStartDateTime(double value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /*
     <p>The date and time when the cluster step execution started. </p>
    */
    inline StepTimeline&  WithStartDateTime(double value) { SetStartDateTime(value); return *this;}

    /*
     <p>The date and time when the cluster step execution completed or failed. </p>
    */
    inline double GetEndDateTime() const{ return m_endDateTime; }
    /*
     <p>The date and time when the cluster step execution completed or failed. </p>
    */
    inline void SetEndDateTime(double value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /*
     <p>The date and time when the cluster step execution completed or failed. </p>
    */
    inline StepTimeline&  WithEndDateTime(double value) { SetEndDateTime(value); return *this;}

  private:
    double m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;
    double m_startDateTime;
    bool m_startDateTimeHasBeenSet;
    double m_endDateTime;
    bool m_endDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
