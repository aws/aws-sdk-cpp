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
   * <p>The timeline of the instance group lifecycle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceGroupTimeline">AWS
   * API Reference</a></p>
   */
  class InstanceGroupTimeline
  {
  public:
    AWS_EMR_API InstanceGroupTimeline();
    AWS_EMR_API InstanceGroupTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The creation date and time of the instance group.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline InstanceGroupTimeline& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline InstanceGroupTimeline& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the instance group became ready to perform tasks.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const{ return m_readyDateTime; }
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }
    inline void SetReadyDateTime(const Aws::Utils::DateTime& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = value; }
    inline void SetReadyDateTime(Aws::Utils::DateTime&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::move(value); }
    inline InstanceGroupTimeline& WithReadyDateTime(const Aws::Utils::DateTime& value) { SetReadyDateTime(value); return *this;}
    inline InstanceGroupTimeline& WithReadyDateTime(Aws::Utils::DateTime&& value) { SetReadyDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the instance group terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }
    inline InstanceGroupTimeline& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}
    inline InstanceGroupTimeline& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}
    ///@}
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
