/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> The time range during which an Amazon Web Services event occurred. Amazon
   * Web Services resource events and metrics are analyzed by DevOps Guru to find
   * anomalous behavior and provide recommendations to improve your operational
   * solutions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/EventTimeRange">AWS
   * API Reference</a></p>
   */
  class EventTimeRange
  {
  public:
    AWS_DEVOPSGURU_API EventTimeRange();
    AWS_DEVOPSGURU_API EventTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API EventTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The time when the event started. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const{ return m_fromTime; }

    /**
     * <p> The time when the event started. </p>
     */
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }

    /**
     * <p> The time when the event started. </p>
     */
    inline void SetFromTime(const Aws::Utils::DateTime& value) { m_fromTimeHasBeenSet = true; m_fromTime = value; }

    /**
     * <p> The time when the event started. </p>
     */
    inline void SetFromTime(Aws::Utils::DateTime&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::move(value); }

    /**
     * <p> The time when the event started. </p>
     */
    inline EventTimeRange& WithFromTime(const Aws::Utils::DateTime& value) { SetFromTime(value); return *this;}

    /**
     * <p> The time when the event started. </p>
     */
    inline EventTimeRange& WithFromTime(Aws::Utils::DateTime&& value) { SetFromTime(std::move(value)); return *this;}


    /**
     * <p> The time when the event ended. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const{ return m_toTime; }

    /**
     * <p> The time when the event ended. </p>
     */
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }

    /**
     * <p> The time when the event ended. </p>
     */
    inline void SetToTime(const Aws::Utils::DateTime& value) { m_toTimeHasBeenSet = true; m_toTime = value; }

    /**
     * <p> The time when the event ended. </p>
     */
    inline void SetToTime(Aws::Utils::DateTime&& value) { m_toTimeHasBeenSet = true; m_toTime = std::move(value); }

    /**
     * <p> The time when the event ended. </p>
     */
    inline EventTimeRange& WithToTime(const Aws::Utils::DateTime& value) { SetToTime(value); return *this;}

    /**
     * <p> The time when the event ended. </p>
     */
    inline EventTimeRange& WithToTime(Aws::Utils::DateTime&& value) { SetToTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_fromTime;
    bool m_fromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_toTime;
    bool m_toTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
