/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/RunIdentifier.h>
#include <aws/glue/model/StatisticEvaluationLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Summary information about a statistic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StatisticSummary">AWS
   * API Reference</a></p>
   */
  class StatisticSummary
  {
  public:
    AWS_GLUE_API StatisticSummary() = default;
    AWS_GLUE_API StatisticSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatisticSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const { return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    template<typename StatisticIdT = Aws::String>
    void SetStatisticId(StatisticIdT&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::forward<StatisticIdT>(value); }
    template<typename StatisticIdT = Aws::String>
    StatisticSummary& WithStatisticId(StatisticIdT&& value) { SetStatisticId(std::forward<StatisticIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Profile ID.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    StatisticSummary& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Run Identifier</p>
     */
    inline const RunIdentifier& GetRunIdentifier() const { return m_runIdentifier; }
    inline bool RunIdentifierHasBeenSet() const { return m_runIdentifierHasBeenSet; }
    template<typename RunIdentifierT = RunIdentifier>
    void SetRunIdentifier(RunIdentifierT&& value) { m_runIdentifierHasBeenSet = true; m_runIdentifier = std::forward<RunIdentifierT>(value); }
    template<typename RunIdentifierT = RunIdentifier>
    StatisticSummary& WithRunIdentifier(RunIdentifierT&& value) { SetRunIdentifier(std::forward<RunIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the statistic.</p>
     */
    inline const Aws::String& GetStatisticName() const { return m_statisticName; }
    inline bool StatisticNameHasBeenSet() const { return m_statisticNameHasBeenSet; }
    template<typename StatisticNameT = Aws::String>
    void SetStatisticName(StatisticNameT&& value) { m_statisticNameHasBeenSet = true; m_statisticName = std::forward<StatisticNameT>(value); }
    template<typename StatisticNameT = Aws::String>
    StatisticSummary& WithStatisticName(StatisticNameT&& value) { SetStatisticName(std::forward<StatisticNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the statistic.</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline StatisticSummary& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation level of the statistic. Possible values: <code>Dataset</code>,
     * <code>Column</code>, <code>Multicolumn</code>.</p>
     */
    inline StatisticEvaluationLevel GetEvaluationLevel() const { return m_evaluationLevel; }
    inline bool EvaluationLevelHasBeenSet() const { return m_evaluationLevelHasBeenSet; }
    inline void SetEvaluationLevel(StatisticEvaluationLevel value) { m_evaluationLevelHasBeenSet = true; m_evaluationLevel = value; }
    inline StatisticSummary& WithEvaluationLevel(StatisticEvaluationLevel value) { SetEvaluationLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of columns referenced by the statistic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnsReferenced() const { return m_columnsReferenced; }
    inline bool ColumnsReferencedHasBeenSet() const { return m_columnsReferencedHasBeenSet; }
    template<typename ColumnsReferencedT = Aws::Vector<Aws::String>>
    void SetColumnsReferenced(ColumnsReferencedT&& value) { m_columnsReferencedHasBeenSet = true; m_columnsReferenced = std::forward<ColumnsReferencedT>(value); }
    template<typename ColumnsReferencedT = Aws::Vector<Aws::String>>
    StatisticSummary& WithColumnsReferenced(ColumnsReferencedT&& value) { SetColumnsReferenced(std::forward<ColumnsReferencedT>(value)); return *this;}
    template<typename ColumnsReferencedT = Aws::String>
    StatisticSummary& AddColumnsReferenced(ColumnsReferencedT&& value) { m_columnsReferencedHasBeenSet = true; m_columnsReferenced.emplace_back(std::forward<ColumnsReferencedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of datasets referenced by the statistic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferencedDatasets() const { return m_referencedDatasets; }
    inline bool ReferencedDatasetsHasBeenSet() const { return m_referencedDatasetsHasBeenSet; }
    template<typename ReferencedDatasetsT = Aws::Vector<Aws::String>>
    void SetReferencedDatasets(ReferencedDatasetsT&& value) { m_referencedDatasetsHasBeenSet = true; m_referencedDatasets = std::forward<ReferencedDatasetsT>(value); }
    template<typename ReferencedDatasetsT = Aws::Vector<Aws::String>>
    StatisticSummary& WithReferencedDatasets(ReferencedDatasetsT&& value) { SetReferencedDatasets(std::forward<ReferencedDatasetsT>(value)); return *this;}
    template<typename ReferencedDatasetsT = Aws::String>
    StatisticSummary& AddReferencedDatasets(ReferencedDatasetsT&& value) { m_referencedDatasetsHasBeenSet = true; m_referencedDatasets.emplace_back(std::forward<ReferencedDatasetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>StatisticPropertiesMap</code>, which contains a
     * <code>NameString</code> and <code>DescriptionString</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatisticProperties() const { return m_statisticProperties; }
    inline bool StatisticPropertiesHasBeenSet() const { return m_statisticPropertiesHasBeenSet; }
    template<typename StatisticPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetStatisticProperties(StatisticPropertiesT&& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties = std::forward<StatisticPropertiesT>(value); }
    template<typename StatisticPropertiesT = Aws::Map<Aws::String, Aws::String>>
    StatisticSummary& WithStatisticProperties(StatisticPropertiesT&& value) { SetStatisticProperties(std::forward<StatisticPropertiesT>(value)); return *this;}
    template<typename StatisticPropertiesKeyT = Aws::String, typename StatisticPropertiesValueT = Aws::String>
    StatisticSummary& AddStatisticProperties(StatisticPropertiesKeyT&& key, StatisticPropertiesValueT&& value) {
      m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(std::forward<StatisticPropertiesKeyT>(key), std::forward<StatisticPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the statistic was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetRecordedOn() const { return m_recordedOn; }
    inline bool RecordedOnHasBeenSet() const { return m_recordedOnHasBeenSet; }
    template<typename RecordedOnT = Aws::Utils::DateTime>
    void SetRecordedOn(RecordedOnT&& value) { m_recordedOnHasBeenSet = true; m_recordedOn = std::forward<RecordedOnT>(value); }
    template<typename RecordedOnT = Aws::Utils::DateTime>
    StatisticSummary& WithRecordedOn(RecordedOnT&& value) { SetRecordedOn(std::forward<RecordedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusion annotation for the statistic.</p>
     */
    inline const TimestampedInclusionAnnotation& GetInclusionAnnotation() const { return m_inclusionAnnotation; }
    inline bool InclusionAnnotationHasBeenSet() const { return m_inclusionAnnotationHasBeenSet; }
    template<typename InclusionAnnotationT = TimestampedInclusionAnnotation>
    void SetInclusionAnnotation(InclusionAnnotationT&& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = std::forward<InclusionAnnotationT>(value); }
    template<typename InclusionAnnotationT = TimestampedInclusionAnnotation>
    StatisticSummary& WithInclusionAnnotation(InclusionAnnotationT&& value) { SetInclusionAnnotation(std::forward<InclusionAnnotationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    RunIdentifier m_runIdentifier;
    bool m_runIdentifierHasBeenSet = false;

    Aws::String m_statisticName;
    bool m_statisticNameHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    StatisticEvaluationLevel m_evaluationLevel{StatisticEvaluationLevel::NOT_SET};
    bool m_evaluationLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnsReferenced;
    bool m_columnsReferencedHasBeenSet = false;

    Aws::Vector<Aws::String> m_referencedDatasets;
    bool m_referencedDatasetsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statisticProperties;
    bool m_statisticPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_recordedOn{};
    bool m_recordedOnHasBeenSet = false;

    TimestampedInclusionAnnotation m_inclusionAnnotation;
    bool m_inclusionAnnotationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
