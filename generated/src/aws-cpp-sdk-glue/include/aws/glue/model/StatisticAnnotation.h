/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/TimestampedInclusionAnnotation.h>
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
   * <p>A Statistic Annotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StatisticAnnotation">AWS
   * API Reference</a></p>
   */
  class StatisticAnnotation
  {
  public:
    AWS_GLUE_API StatisticAnnotation();
    AWS_GLUE_API StatisticAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatisticAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Profile ID.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline StatisticAnnotation& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline StatisticAnnotation& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline StatisticAnnotation& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const{ return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    inline void SetStatisticId(const Aws::String& value) { m_statisticIdHasBeenSet = true; m_statisticId = value; }
    inline void SetStatisticId(Aws::String&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::move(value); }
    inline void SetStatisticId(const char* value) { m_statisticIdHasBeenSet = true; m_statisticId.assign(value); }
    inline StatisticAnnotation& WithStatisticId(const Aws::String& value) { SetStatisticId(value); return *this;}
    inline StatisticAnnotation& WithStatisticId(Aws::String&& value) { SetStatisticId(std::move(value)); return *this;}
    inline StatisticAnnotation& WithStatisticId(const char* value) { SetStatisticId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the annotated statistic was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetStatisticRecordedOn() const{ return m_statisticRecordedOn; }
    inline bool StatisticRecordedOnHasBeenSet() const { return m_statisticRecordedOnHasBeenSet; }
    inline void SetStatisticRecordedOn(const Aws::Utils::DateTime& value) { m_statisticRecordedOnHasBeenSet = true; m_statisticRecordedOn = value; }
    inline void SetStatisticRecordedOn(Aws::Utils::DateTime&& value) { m_statisticRecordedOnHasBeenSet = true; m_statisticRecordedOn = std::move(value); }
    inline StatisticAnnotation& WithStatisticRecordedOn(const Aws::Utils::DateTime& value) { SetStatisticRecordedOn(value); return *this;}
    inline StatisticAnnotation& WithStatisticRecordedOn(Aws::Utils::DateTime&& value) { SetStatisticRecordedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusion annotation applied to the statistic.</p>
     */
    inline const TimestampedInclusionAnnotation& GetInclusionAnnotation() const{ return m_inclusionAnnotation; }
    inline bool InclusionAnnotationHasBeenSet() const { return m_inclusionAnnotationHasBeenSet; }
    inline void SetInclusionAnnotation(const TimestampedInclusionAnnotation& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = value; }
    inline void SetInclusionAnnotation(TimestampedInclusionAnnotation&& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = std::move(value); }
    inline StatisticAnnotation& WithInclusionAnnotation(const TimestampedInclusionAnnotation& value) { SetInclusionAnnotation(value); return *this;}
    inline StatisticAnnotation& WithInclusionAnnotation(TimestampedInclusionAnnotation&& value) { SetInclusionAnnotation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    Aws::Utils::DateTime m_statisticRecordedOn;
    bool m_statisticRecordedOnHasBeenSet = false;

    TimestampedInclusionAnnotation m_inclusionAnnotation;
    bool m_inclusionAnnotationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
