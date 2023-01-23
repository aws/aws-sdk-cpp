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
   * <p>Provides historical timestamps for the instance fleet, including the time of
   * creation, the time it became ready to run jobs, and the time of termination.</p>
   *  <p>The instance fleet configuration is available only in Amazon EMR
   * versions 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetTimeline">AWS
   * API Reference</a></p>
   */
  class InstanceFleetTimeline
  {
  public:
    AWS_EMR_API InstanceFleetTimeline();
    AWS_EMR_API InstanceFleetTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time and date the instance fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The time and date the instance fleet was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The time and date the instance fleet was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The time and date the instance fleet was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The time and date the instance fleet was created.</p>
     */
    inline InstanceFleetTimeline& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The time and date the instance fleet was created.</p>
     */
    inline InstanceFleetTimeline& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The time and date the instance fleet was ready to run jobs.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const{ return m_readyDateTime; }

    /**
     * <p>The time and date the instance fleet was ready to run jobs.</p>
     */
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }

    /**
     * <p>The time and date the instance fleet was ready to run jobs.</p>
     */
    inline void SetReadyDateTime(const Aws::Utils::DateTime& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = value; }

    /**
     * <p>The time and date the instance fleet was ready to run jobs.</p>
     */
    inline void SetReadyDateTime(Aws::Utils::DateTime&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::move(value); }

    /**
     * <p>The time and date the instance fleet was ready to run jobs.</p>
     */
    inline InstanceFleetTimeline& WithReadyDateTime(const Aws::Utils::DateTime& value) { SetReadyDateTime(value); return *this;}

    /**
     * <p>The time and date the instance fleet was ready to run jobs.</p>
     */
    inline InstanceFleetTimeline& WithReadyDateTime(Aws::Utils::DateTime&& value) { SetReadyDateTime(std::move(value)); return *this;}


    /**
     * <p>The time and date the instance fleet terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The time and date the instance fleet terminated.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The time and date the instance fleet terminated.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The time and date the instance fleet terminated.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The time and date the instance fleet terminated.</p>
     */
    inline InstanceFleetTimeline& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The time and date the instance fleet terminated.</p>
     */
    inline InstanceFleetTimeline& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}

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
