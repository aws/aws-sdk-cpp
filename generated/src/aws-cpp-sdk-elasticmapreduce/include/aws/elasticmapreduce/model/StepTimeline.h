/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The timeline of the cluster step lifecycle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepTimeline">AWS
   * API Reference</a></p>
   */
  class StepTimeline
  {
  public:
    AWS_EMR_API StepTimeline();
    AWS_EMR_API StepTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the cluster step was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the cluster step was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the cluster step was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time when the cluster step was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the cluster step was created.</p>
     */
    inline StepTimeline& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the cluster step was created.</p>
     */
    inline StepTimeline& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the cluster step execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time when the cluster step execution started.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the cluster step execution started.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time when the cluster step execution started.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time when the cluster step execution started.</p>
     */
    inline StepTimeline& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time when the cluster step execution started.</p>
     */
    inline StepTimeline& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the cluster step execution completed or failed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time when the cluster step execution completed or failed.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the cluster step execution completed or failed.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time when the cluster step execution completed or failed.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time when the cluster step execution completed or failed.</p>
     */
    inline StepTimeline& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time when the cluster step execution completed or failed.</p>
     */
    inline StepTimeline& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
