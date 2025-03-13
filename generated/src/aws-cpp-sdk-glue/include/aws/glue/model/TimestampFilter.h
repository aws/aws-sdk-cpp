/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A timestamp filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TimestampFilter">AWS
   * API Reference</a></p>
   */
  class TimestampFilter
  {
  public:
    AWS_GLUE_API TimestampFilter() = default;
    AWS_GLUE_API TimestampFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TimestampFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp before which statistics should be included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetRecordedBefore() const { return m_recordedBefore; }
    inline bool RecordedBeforeHasBeenSet() const { return m_recordedBeforeHasBeenSet; }
    template<typename RecordedBeforeT = Aws::Utils::DateTime>
    void SetRecordedBefore(RecordedBeforeT&& value) { m_recordedBeforeHasBeenSet = true; m_recordedBefore = std::forward<RecordedBeforeT>(value); }
    template<typename RecordedBeforeT = Aws::Utils::DateTime>
    TimestampFilter& WithRecordedBefore(RecordedBeforeT&& value) { SetRecordedBefore(std::forward<RecordedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp after which statistics should be included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetRecordedAfter() const { return m_recordedAfter; }
    inline bool RecordedAfterHasBeenSet() const { return m_recordedAfterHasBeenSet; }
    template<typename RecordedAfterT = Aws::Utils::DateTime>
    void SetRecordedAfter(RecordedAfterT&& value) { m_recordedAfterHasBeenSet = true; m_recordedAfter = std::forward<RecordedAfterT>(value); }
    template<typename RecordedAfterT = Aws::Utils::DateTime>
    TimestampFilter& WithRecordedAfter(RecordedAfterT&& value) { SetRecordedAfter(std::forward<RecordedAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_recordedBefore{};
    bool m_recordedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_recordedAfter{};
    bool m_recordedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
