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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/PointInTimeRecoveryStatus.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>The description of the point in time settings applied to the
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PointInTimeRecoveryDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API PointInTimeRecoveryDescription
  {
  public:
    PointInTimeRecoveryDescription();
    PointInTimeRecoveryDescription(Aws::Utils::Json::JsonView jsonValue);
    PointInTimeRecoveryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of point in time recovery:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Point in time recovery is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Point in time recovery is enabled.</p> </li> <li> <p>
     * <code>DISABLED</code> - Point in time recovery is disabled.</p> </li> </ul>
     */
    inline const PointInTimeRecoveryStatus& GetPointInTimeRecoveryStatus() const{ return m_pointInTimeRecoveryStatus; }

    /**
     * <p>The current state of point in time recovery:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Point in time recovery is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Point in time recovery is enabled.</p> </li> <li> <p>
     * <code>DISABLED</code> - Point in time recovery is disabled.</p> </li> </ul>
     */
    inline bool PointInTimeRecoveryStatusHasBeenSet() const { return m_pointInTimeRecoveryStatusHasBeenSet; }

    /**
     * <p>The current state of point in time recovery:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Point in time recovery is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Point in time recovery is enabled.</p> </li> <li> <p>
     * <code>DISABLED</code> - Point in time recovery is disabled.</p> </li> </ul>
     */
    inline void SetPointInTimeRecoveryStatus(const PointInTimeRecoveryStatus& value) { m_pointInTimeRecoveryStatusHasBeenSet = true; m_pointInTimeRecoveryStatus = value; }

    /**
     * <p>The current state of point in time recovery:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Point in time recovery is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Point in time recovery is enabled.</p> </li> <li> <p>
     * <code>DISABLED</code> - Point in time recovery is disabled.</p> </li> </ul>
     */
    inline void SetPointInTimeRecoveryStatus(PointInTimeRecoveryStatus&& value) { m_pointInTimeRecoveryStatusHasBeenSet = true; m_pointInTimeRecoveryStatus = std::move(value); }

    /**
     * <p>The current state of point in time recovery:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Point in time recovery is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Point in time recovery is enabled.</p> </li> <li> <p>
     * <code>DISABLED</code> - Point in time recovery is disabled.</p> </li> </ul>
     */
    inline PointInTimeRecoveryDescription& WithPointInTimeRecoveryStatus(const PointInTimeRecoveryStatus& value) { SetPointInTimeRecoveryStatus(value); return *this;}

    /**
     * <p>The current state of point in time recovery:</p> <ul> <li> <p>
     * <code>ENABLING</code> - Point in time recovery is being enabled.</p> </li> <li>
     * <p> <code>ENABLED</code> - Point in time recovery is enabled.</p> </li> <li> <p>
     * <code>DISABLED</code> - Point in time recovery is disabled.</p> </li> </ul>
     */
    inline PointInTimeRecoveryDescription& WithPointInTimeRecoveryStatus(PointInTimeRecoveryStatus&& value) { SetPointInTimeRecoveryStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the earliest point in time you can restore your table to. It You
     * can restore your table to any point in time during the last 35 days. </p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableDateTime() const{ return m_earliestRestorableDateTime; }

    /**
     * <p>Specifies the earliest point in time you can restore your table to. It You
     * can restore your table to any point in time during the last 35 days. </p>
     */
    inline bool EarliestRestorableDateTimeHasBeenSet() const { return m_earliestRestorableDateTimeHasBeenSet; }

    /**
     * <p>Specifies the earliest point in time you can restore your table to. It You
     * can restore your table to any point in time during the last 35 days. </p>
     */
    inline void SetEarliestRestorableDateTime(const Aws::Utils::DateTime& value) { m_earliestRestorableDateTimeHasBeenSet = true; m_earliestRestorableDateTime = value; }

    /**
     * <p>Specifies the earliest point in time you can restore your table to. It You
     * can restore your table to any point in time during the last 35 days. </p>
     */
    inline void SetEarliestRestorableDateTime(Aws::Utils::DateTime&& value) { m_earliestRestorableDateTimeHasBeenSet = true; m_earliestRestorableDateTime = std::move(value); }

    /**
     * <p>Specifies the earliest point in time you can restore your table to. It You
     * can restore your table to any point in time during the last 35 days. </p>
     */
    inline PointInTimeRecoveryDescription& WithEarliestRestorableDateTime(const Aws::Utils::DateTime& value) { SetEarliestRestorableDateTime(value); return *this;}

    /**
     * <p>Specifies the earliest point in time you can restore your table to. It You
     * can restore your table to any point in time during the last 35 days. </p>
     */
    inline PointInTimeRecoveryDescription& WithEarliestRestorableDateTime(Aws::Utils::DateTime&& value) { SetEarliestRestorableDateTime(std::move(value)); return *this;}


    /**
     * <p> <code>LatestRestorableDateTime</code> is typically 5 minutes before the
     * current time. </p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableDateTime() const{ return m_latestRestorableDateTime; }

    /**
     * <p> <code>LatestRestorableDateTime</code> is typically 5 minutes before the
     * current time. </p>
     */
    inline bool LatestRestorableDateTimeHasBeenSet() const { return m_latestRestorableDateTimeHasBeenSet; }

    /**
     * <p> <code>LatestRestorableDateTime</code> is typically 5 minutes before the
     * current time. </p>
     */
    inline void SetLatestRestorableDateTime(const Aws::Utils::DateTime& value) { m_latestRestorableDateTimeHasBeenSet = true; m_latestRestorableDateTime = value; }

    /**
     * <p> <code>LatestRestorableDateTime</code> is typically 5 minutes before the
     * current time. </p>
     */
    inline void SetLatestRestorableDateTime(Aws::Utils::DateTime&& value) { m_latestRestorableDateTimeHasBeenSet = true; m_latestRestorableDateTime = std::move(value); }

    /**
     * <p> <code>LatestRestorableDateTime</code> is typically 5 minutes before the
     * current time. </p>
     */
    inline PointInTimeRecoveryDescription& WithLatestRestorableDateTime(const Aws::Utils::DateTime& value) { SetLatestRestorableDateTime(value); return *this;}

    /**
     * <p> <code>LatestRestorableDateTime</code> is typically 5 minutes before the
     * current time. </p>
     */
    inline PointInTimeRecoveryDescription& WithLatestRestorableDateTime(Aws::Utils::DateTime&& value) { SetLatestRestorableDateTime(std::move(value)); return *this;}

  private:

    PointInTimeRecoveryStatus m_pointInTimeRecoveryStatus;
    bool m_pointInTimeRecoveryStatusHasBeenSet;

    Aws::Utils::DateTime m_earliestRestorableDateTime;
    bool m_earliestRestorableDateTimeHasBeenSet;

    Aws::Utils::DateTime m_latestRestorableDateTime;
    bool m_latestRestorableDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
