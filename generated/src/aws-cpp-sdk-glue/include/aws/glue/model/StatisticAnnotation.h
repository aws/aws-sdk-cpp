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
    AWS_GLUE_API StatisticAnnotation() = default;
    AWS_GLUE_API StatisticAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatisticAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Profile ID.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    StatisticAnnotation& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const { return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    template<typename StatisticIdT = Aws::String>
    void SetStatisticId(StatisticIdT&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::forward<StatisticIdT>(value); }
    template<typename StatisticIdT = Aws::String>
    StatisticAnnotation& WithStatisticId(StatisticIdT&& value) { SetStatisticId(std::forward<StatisticIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the annotated statistic was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetStatisticRecordedOn() const { return m_statisticRecordedOn; }
    inline bool StatisticRecordedOnHasBeenSet() const { return m_statisticRecordedOnHasBeenSet; }
    template<typename StatisticRecordedOnT = Aws::Utils::DateTime>
    void SetStatisticRecordedOn(StatisticRecordedOnT&& value) { m_statisticRecordedOnHasBeenSet = true; m_statisticRecordedOn = std::forward<StatisticRecordedOnT>(value); }
    template<typename StatisticRecordedOnT = Aws::Utils::DateTime>
    StatisticAnnotation& WithStatisticRecordedOn(StatisticRecordedOnT&& value) { SetStatisticRecordedOn(std::forward<StatisticRecordedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusion annotation applied to the statistic.</p>
     */
    inline const TimestampedInclusionAnnotation& GetInclusionAnnotation() const { return m_inclusionAnnotation; }
    inline bool InclusionAnnotationHasBeenSet() const { return m_inclusionAnnotationHasBeenSet; }
    template<typename InclusionAnnotationT = TimestampedInclusionAnnotation>
    void SetInclusionAnnotation(InclusionAnnotationT&& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = std::forward<InclusionAnnotationT>(value); }
    template<typename InclusionAnnotationT = TimestampedInclusionAnnotation>
    StatisticAnnotation& WithInclusionAnnotation(InclusionAnnotationT&& value) { SetInclusionAnnotation(std::forward<InclusionAnnotationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    Aws::Utils::DateTime m_statisticRecordedOn{};
    bool m_statisticRecordedOnHasBeenSet = false;

    TimestampedInclusionAnnotation m_inclusionAnnotation;
    bool m_inclusionAnnotationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
