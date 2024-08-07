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
    AWS_GLUE_API StatisticSummary();
    AWS_GLUE_API StatisticSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatisticSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const{ return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    inline void SetStatisticId(const Aws::String& value) { m_statisticIdHasBeenSet = true; m_statisticId = value; }
    inline void SetStatisticId(Aws::String&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::move(value); }
    inline void SetStatisticId(const char* value) { m_statisticIdHasBeenSet = true; m_statisticId.assign(value); }
    inline StatisticSummary& WithStatisticId(const Aws::String& value) { SetStatisticId(value); return *this;}
    inline StatisticSummary& WithStatisticId(Aws::String&& value) { SetStatisticId(std::move(value)); return *this;}
    inline StatisticSummary& WithStatisticId(const char* value) { SetStatisticId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Profile ID.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline StatisticSummary& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline StatisticSummary& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline StatisticSummary& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Run Identifier</p>
     */
    inline const RunIdentifier& GetRunIdentifier() const{ return m_runIdentifier; }
    inline bool RunIdentifierHasBeenSet() const { return m_runIdentifierHasBeenSet; }
    inline void SetRunIdentifier(const RunIdentifier& value) { m_runIdentifierHasBeenSet = true; m_runIdentifier = value; }
    inline void SetRunIdentifier(RunIdentifier&& value) { m_runIdentifierHasBeenSet = true; m_runIdentifier = std::move(value); }
    inline StatisticSummary& WithRunIdentifier(const RunIdentifier& value) { SetRunIdentifier(value); return *this;}
    inline StatisticSummary& WithRunIdentifier(RunIdentifier&& value) { SetRunIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the statistic.</p>
     */
    inline const Aws::String& GetStatisticName() const{ return m_statisticName; }
    inline bool StatisticNameHasBeenSet() const { return m_statisticNameHasBeenSet; }
    inline void SetStatisticName(const Aws::String& value) { m_statisticNameHasBeenSet = true; m_statisticName = value; }
    inline void SetStatisticName(Aws::String&& value) { m_statisticNameHasBeenSet = true; m_statisticName = std::move(value); }
    inline void SetStatisticName(const char* value) { m_statisticNameHasBeenSet = true; m_statisticName.assign(value); }
    inline StatisticSummary& WithStatisticName(const Aws::String& value) { SetStatisticName(value); return *this;}
    inline StatisticSummary& WithStatisticName(Aws::String&& value) { SetStatisticName(std::move(value)); return *this;}
    inline StatisticSummary& WithStatisticName(const char* value) { SetStatisticName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the statistic.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline StatisticSummary& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation level of the statistic. Possible values: <code>Dataset</code>,
     * <code>Column</code>, <code>Multicolumn</code>.</p>
     */
    inline const StatisticEvaluationLevel& GetEvaluationLevel() const{ return m_evaluationLevel; }
    inline bool EvaluationLevelHasBeenSet() const { return m_evaluationLevelHasBeenSet; }
    inline void SetEvaluationLevel(const StatisticEvaluationLevel& value) { m_evaluationLevelHasBeenSet = true; m_evaluationLevel = value; }
    inline void SetEvaluationLevel(StatisticEvaluationLevel&& value) { m_evaluationLevelHasBeenSet = true; m_evaluationLevel = std::move(value); }
    inline StatisticSummary& WithEvaluationLevel(const StatisticEvaluationLevel& value) { SetEvaluationLevel(value); return *this;}
    inline StatisticSummary& WithEvaluationLevel(StatisticEvaluationLevel&& value) { SetEvaluationLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of columns referenced by the statistic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnsReferenced() const{ return m_columnsReferenced; }
    inline bool ColumnsReferencedHasBeenSet() const { return m_columnsReferencedHasBeenSet; }
    inline void SetColumnsReferenced(const Aws::Vector<Aws::String>& value) { m_columnsReferencedHasBeenSet = true; m_columnsReferenced = value; }
    inline void SetColumnsReferenced(Aws::Vector<Aws::String>&& value) { m_columnsReferencedHasBeenSet = true; m_columnsReferenced = std::move(value); }
    inline StatisticSummary& WithColumnsReferenced(const Aws::Vector<Aws::String>& value) { SetColumnsReferenced(value); return *this;}
    inline StatisticSummary& WithColumnsReferenced(Aws::Vector<Aws::String>&& value) { SetColumnsReferenced(std::move(value)); return *this;}
    inline StatisticSummary& AddColumnsReferenced(const Aws::String& value) { m_columnsReferencedHasBeenSet = true; m_columnsReferenced.push_back(value); return *this; }
    inline StatisticSummary& AddColumnsReferenced(Aws::String&& value) { m_columnsReferencedHasBeenSet = true; m_columnsReferenced.push_back(std::move(value)); return *this; }
    inline StatisticSummary& AddColumnsReferenced(const char* value) { m_columnsReferencedHasBeenSet = true; m_columnsReferenced.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of datasets referenced by the statistic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferencedDatasets() const{ return m_referencedDatasets; }
    inline bool ReferencedDatasetsHasBeenSet() const { return m_referencedDatasetsHasBeenSet; }
    inline void SetReferencedDatasets(const Aws::Vector<Aws::String>& value) { m_referencedDatasetsHasBeenSet = true; m_referencedDatasets = value; }
    inline void SetReferencedDatasets(Aws::Vector<Aws::String>&& value) { m_referencedDatasetsHasBeenSet = true; m_referencedDatasets = std::move(value); }
    inline StatisticSummary& WithReferencedDatasets(const Aws::Vector<Aws::String>& value) { SetReferencedDatasets(value); return *this;}
    inline StatisticSummary& WithReferencedDatasets(Aws::Vector<Aws::String>&& value) { SetReferencedDatasets(std::move(value)); return *this;}
    inline StatisticSummary& AddReferencedDatasets(const Aws::String& value) { m_referencedDatasetsHasBeenSet = true; m_referencedDatasets.push_back(value); return *this; }
    inline StatisticSummary& AddReferencedDatasets(Aws::String&& value) { m_referencedDatasetsHasBeenSet = true; m_referencedDatasets.push_back(std::move(value)); return *this; }
    inline StatisticSummary& AddReferencedDatasets(const char* value) { m_referencedDatasetsHasBeenSet = true; m_referencedDatasets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>StatisticPropertiesMap</code>, which contains a
     * <code>NameString</code> and <code>DescriptionString</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatisticProperties() const{ return m_statisticProperties; }
    inline bool StatisticPropertiesHasBeenSet() const { return m_statisticPropertiesHasBeenSet; }
    inline void SetStatisticProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties = value; }
    inline void SetStatisticProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties = std::move(value); }
    inline StatisticSummary& WithStatisticProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetStatisticProperties(value); return *this;}
    inline StatisticSummary& WithStatisticProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetStatisticProperties(std::move(value)); return *this;}
    inline StatisticSummary& AddStatisticProperties(const Aws::String& key, const Aws::String& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(key, value); return *this; }
    inline StatisticSummary& AddStatisticProperties(Aws::String&& key, const Aws::String& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(std::move(key), value); return *this; }
    inline StatisticSummary& AddStatisticProperties(const Aws::String& key, Aws::String&& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(key, std::move(value)); return *this; }
    inline StatisticSummary& AddStatisticProperties(Aws::String&& key, Aws::String&& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline StatisticSummary& AddStatisticProperties(const char* key, Aws::String&& value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(key, std::move(value)); return *this; }
    inline StatisticSummary& AddStatisticProperties(Aws::String&& key, const char* value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(std::move(key), value); return *this; }
    inline StatisticSummary& AddStatisticProperties(const char* key, const char* value) { m_statisticPropertiesHasBeenSet = true; m_statisticProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the statistic was recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetRecordedOn() const{ return m_recordedOn; }
    inline bool RecordedOnHasBeenSet() const { return m_recordedOnHasBeenSet; }
    inline void SetRecordedOn(const Aws::Utils::DateTime& value) { m_recordedOnHasBeenSet = true; m_recordedOn = value; }
    inline void SetRecordedOn(Aws::Utils::DateTime&& value) { m_recordedOnHasBeenSet = true; m_recordedOn = std::move(value); }
    inline StatisticSummary& WithRecordedOn(const Aws::Utils::DateTime& value) { SetRecordedOn(value); return *this;}
    inline StatisticSummary& WithRecordedOn(Aws::Utils::DateTime&& value) { SetRecordedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusion annotation for the statistic.</p>
     */
    inline const TimestampedInclusionAnnotation& GetInclusionAnnotation() const{ return m_inclusionAnnotation; }
    inline bool InclusionAnnotationHasBeenSet() const { return m_inclusionAnnotationHasBeenSet; }
    inline void SetInclusionAnnotation(const TimestampedInclusionAnnotation& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = value; }
    inline void SetInclusionAnnotation(TimestampedInclusionAnnotation&& value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = std::move(value); }
    inline StatisticSummary& WithInclusionAnnotation(const TimestampedInclusionAnnotation& value) { SetInclusionAnnotation(value); return *this;}
    inline StatisticSummary& WithInclusionAnnotation(TimestampedInclusionAnnotation&& value) { SetInclusionAnnotation(std::move(value)); return *this;}
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

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    StatisticEvaluationLevel m_evaluationLevel;
    bool m_evaluationLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnsReferenced;
    bool m_columnsReferencedHasBeenSet = false;

    Aws::Vector<Aws::String> m_referencedDatasets;
    bool m_referencedDatasetsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statisticProperties;
    bool m_statisticPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_recordedOn;
    bool m_recordedOnHasBeenSet = false;

    TimestampedInclusionAnnotation m_inclusionAnnotation;
    bool m_inclusionAnnotationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
