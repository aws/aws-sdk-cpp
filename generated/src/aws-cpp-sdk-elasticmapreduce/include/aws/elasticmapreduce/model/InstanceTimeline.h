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
   * <p>The timeline of the instance lifecycle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceTimeline">AWS
   * API Reference</a></p>
   */
  class InstanceTimeline
  {
  public:
    AWS_EMR_API InstanceTimeline();
    AWS_EMR_API InstanceTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation date and time of the instance.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time of the instance.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time of the instance.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the instance.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time of the instance.</p>
     */
    inline InstanceTimeline& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time of the instance.</p>
     */
    inline InstanceTimeline& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the instance was ready to perform tasks.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const{ return m_readyDateTime; }

    /**
     * <p>The date and time when the instance was ready to perform tasks.</p>
     */
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the instance was ready to perform tasks.</p>
     */
    inline void SetReadyDateTime(const Aws::Utils::DateTime& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = value; }

    /**
     * <p>The date and time when the instance was ready to perform tasks.</p>
     */
    inline void SetReadyDateTime(Aws::Utils::DateTime&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::move(value); }

    /**
     * <p>The date and time when the instance was ready to perform tasks.</p>
     */
    inline InstanceTimeline& WithReadyDateTime(const Aws::Utils::DateTime& value) { SetReadyDateTime(value); return *this;}

    /**
     * <p>The date and time when the instance was ready to perform tasks.</p>
     */
    inline InstanceTimeline& WithReadyDateTime(Aws::Utils::DateTime&& value) { SetReadyDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the instance was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time when the instance was terminated.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the instance was terminated.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time when the instance was terminated.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time when the instance was terminated.</p>
     */
    inline InstanceTimeline& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time when the instance was terminated.</p>
     */
    inline InstanceTimeline& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readyDateTime;
    bool m_readyDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
