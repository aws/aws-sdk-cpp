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
    AWS_EMR_API InstanceTimeline() = default;
    AWS_EMR_API InstanceTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The creation date and time of the instance.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    InstanceTimeline& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the instance was ready to perform tasks.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const { return m_readyDateTime; }
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }
    template<typename ReadyDateTimeT = Aws::Utils::DateTime>
    void SetReadyDateTime(ReadyDateTimeT&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::forward<ReadyDateTimeT>(value); }
    template<typename ReadyDateTimeT = Aws::Utils::DateTime>
    InstanceTimeline& WithReadyDateTime(ReadyDateTimeT&& value) { SetReadyDateTime(std::forward<ReadyDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the instance was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    InstanceTimeline& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readyDateTime{};
    bool m_readyDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
