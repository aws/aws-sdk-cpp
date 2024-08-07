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
    AWS_GLUE_API TimestampFilter();
    AWS_GLUE_API TimestampFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TimestampFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp before which statistics should be included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetRecordedBefore() const{ return m_recordedBefore; }
    inline bool RecordedBeforeHasBeenSet() const { return m_recordedBeforeHasBeenSet; }
    inline void SetRecordedBefore(const Aws::Utils::DateTime& value) { m_recordedBeforeHasBeenSet = true; m_recordedBefore = value; }
    inline void SetRecordedBefore(Aws::Utils::DateTime&& value) { m_recordedBeforeHasBeenSet = true; m_recordedBefore = std::move(value); }
    inline TimestampFilter& WithRecordedBefore(const Aws::Utils::DateTime& value) { SetRecordedBefore(value); return *this;}
    inline TimestampFilter& WithRecordedBefore(Aws::Utils::DateTime&& value) { SetRecordedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp after which statistics should be included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetRecordedAfter() const{ return m_recordedAfter; }
    inline bool RecordedAfterHasBeenSet() const { return m_recordedAfterHasBeenSet; }
    inline void SetRecordedAfter(const Aws::Utils::DateTime& value) { m_recordedAfterHasBeenSet = true; m_recordedAfter = value; }
    inline void SetRecordedAfter(Aws::Utils::DateTime&& value) { m_recordedAfterHasBeenSet = true; m_recordedAfter = std::move(value); }
    inline TimestampFilter& WithRecordedAfter(const Aws::Utils::DateTime& value) { SetRecordedAfter(value); return *this;}
    inline TimestampFilter& WithRecordedAfter(Aws::Utils::DateTime&& value) { SetRecordedAfter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_recordedBefore;
    bool m_recordedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_recordedAfter;
    bool m_recordedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
