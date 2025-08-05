/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PiiType.h>
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
   * <p>Specifies a transform that identifies, removes or masks PII
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PIIDetection">AWS
   * API Reference</a></p>
   */
  class PIIDetection
  {
  public:
    AWS_GLUE_API PIIDetection() = default;
    AWS_GLUE_API PIIDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PIIDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PIIDetection& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    PIIDetection& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    PIIDetection& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the type of PIIDetection transform. </p>
     */
    inline PiiType GetPiiType() const { return m_piiType; }
    inline bool PiiTypeHasBeenSet() const { return m_piiTypeHasBeenSet; }
    inline void SetPiiType(PiiType value) { m_piiTypeHasBeenSet = true; m_piiType = value; }
    inline PIIDetection& WithPiiType(PiiType value) { SetPiiType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the types of entities the PIIDetection transform will identify as
     * PII data. </p> <p> PII type entities include: PERSON_NAME, DATE, USA_SNN, EMAIL,
     * USA_ITIN, USA_PASSPORT_NUMBER, PHONE_NUMBER, BANK_ACCOUNT, IP_ADDRESS,
     * MAC_ADDRESS, USA_CPT_CODE, USA_HCPCS_CODE, USA_NATIONAL_DRUG_CODE,
     * USA_MEDICARE_BENEFICIARY_IDENTIFIER,
     * USA_HEALTH_INSURANCE_CLAIM_NUMBER,CREDIT_CARD,USA_NATIONAL_PROVIDER_IDENTIFIER,USA_DEA_NUMBER,USA_DRIVING_LICENSE
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityTypesToDetect() const { return m_entityTypesToDetect; }
    inline bool EntityTypesToDetectHasBeenSet() const { return m_entityTypesToDetectHasBeenSet; }
    template<typename EntityTypesToDetectT = Aws::Vector<Aws::String>>
    void SetEntityTypesToDetect(EntityTypesToDetectT&& value) { m_entityTypesToDetectHasBeenSet = true; m_entityTypesToDetect = std::forward<EntityTypesToDetectT>(value); }
    template<typename EntityTypesToDetectT = Aws::Vector<Aws::String>>
    PIIDetection& WithEntityTypesToDetect(EntityTypesToDetectT&& value) { SetEntityTypesToDetect(std::forward<EntityTypesToDetectT>(value)); return *this;}
    template<typename EntityTypesToDetectT = Aws::String>
    PIIDetection& AddEntityTypesToDetect(EntityTypesToDetectT&& value) { m_entityTypesToDetectHasBeenSet = true; m_entityTypesToDetect.emplace_back(std::forward<EntityTypesToDetectT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the output column name that will contain any entity type detected
     * in that row. </p>
     */
    inline const Aws::String& GetOutputColumnName() const { return m_outputColumnName; }
    inline bool OutputColumnNameHasBeenSet() const { return m_outputColumnNameHasBeenSet; }
    template<typename OutputColumnNameT = Aws::String>
    void SetOutputColumnName(OutputColumnNameT&& value) { m_outputColumnNameHasBeenSet = true; m_outputColumnName = std::forward<OutputColumnNameT>(value); }
    template<typename OutputColumnNameT = Aws::String>
    PIIDetection& WithOutputColumnName(OutputColumnNameT&& value) { SetOutputColumnName(std::forward<OutputColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the fraction of the data to sample when scanning for PII entities.
     * </p>
     */
    inline double GetSampleFraction() const { return m_sampleFraction; }
    inline bool SampleFractionHasBeenSet() const { return m_sampleFractionHasBeenSet; }
    inline void SetSampleFraction(double value) { m_sampleFractionHasBeenSet = true; m_sampleFraction = value; }
    inline PIIDetection& WithSampleFraction(double value) { SetSampleFraction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the fraction of the data that must be met in order for a column to
     * be identified as PII data. </p>
     */
    inline double GetThresholdFraction() const { return m_thresholdFraction; }
    inline bool ThresholdFractionHasBeenSet() const { return m_thresholdFractionHasBeenSet; }
    inline void SetThresholdFraction(double value) { m_thresholdFractionHasBeenSet = true; m_thresholdFraction = value; }
    inline PIIDetection& WithThresholdFraction(double value) { SetThresholdFraction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the value that will replace the detected entity. </p>
     */
    inline const Aws::String& GetMaskValue() const { return m_maskValue; }
    inline bool MaskValueHasBeenSet() const { return m_maskValueHasBeenSet; }
    template<typename MaskValueT = Aws::String>
    void SetMaskValue(MaskValueT&& value) { m_maskValueHasBeenSet = true; m_maskValue = std::forward<MaskValueT>(value); }
    template<typename MaskValueT = Aws::String>
    PIIDetection& WithMaskValue(MaskValueT&& value) { SetMaskValue(std::forward<MaskValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to redact the detected PII text. When set to
     * <code>true</code>, PII content is replaced with redaction characters.</p>
     */
    inline const Aws::String& GetRedactText() const { return m_redactText; }
    inline bool RedactTextHasBeenSet() const { return m_redactTextHasBeenSet; }
    template<typename RedactTextT = Aws::String>
    void SetRedactText(RedactTextT&& value) { m_redactTextHasBeenSet = true; m_redactText = std::forward<RedactTextT>(value); }
    template<typename RedactTextT = Aws::String>
    PIIDetection& WithRedactText(RedactTextT&& value) { SetRedactText(std::forward<RedactTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character used to replace detected PII content when redaction is enabled.
     * The default redaction character is <code>*</code>.</p>
     */
    inline const Aws::String& GetRedactChar() const { return m_redactChar; }
    inline bool RedactCharHasBeenSet() const { return m_redactCharHasBeenSet; }
    template<typename RedactCharT = Aws::String>
    void SetRedactChar(RedactCharT&& value) { m_redactCharHasBeenSet = true; m_redactChar = std::forward<RedactCharT>(value); }
    template<typename RedactCharT = Aws::String>
    PIIDetection& WithRedactChar(RedactCharT&& value) { SetRedactChar(std::forward<RedactCharT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression pattern used to identify additional PII content beyond
     * the standard detection algorithms.</p>
     */
    inline const Aws::String& GetMatchPattern() const { return m_matchPattern; }
    inline bool MatchPatternHasBeenSet() const { return m_matchPatternHasBeenSet; }
    template<typename MatchPatternT = Aws::String>
    void SetMatchPattern(MatchPatternT&& value) { m_matchPatternHasBeenSet = true; m_matchPattern = std::forward<MatchPatternT>(value); }
    template<typename MatchPatternT = Aws::String>
    PIIDetection& WithMatchPattern(MatchPatternT&& value) { SetMatchPattern(std::forward<MatchPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of characters to exclude from redaction on the left side of
     * detected PII content. This allows preserving context around the sensitive
     * data.</p>
     */
    inline int GetNumLeftCharsToExclude() const { return m_numLeftCharsToExclude; }
    inline bool NumLeftCharsToExcludeHasBeenSet() const { return m_numLeftCharsToExcludeHasBeenSet; }
    inline void SetNumLeftCharsToExclude(int value) { m_numLeftCharsToExcludeHasBeenSet = true; m_numLeftCharsToExclude = value; }
    inline PIIDetection& WithNumLeftCharsToExclude(int value) { SetNumLeftCharsToExclude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of characters to exclude from redaction on the right side of
     * detected PII content. This allows preserving context around the sensitive
     * data.</p>
     */
    inline int GetNumRightCharsToExclude() const { return m_numRightCharsToExclude; }
    inline bool NumRightCharsToExcludeHasBeenSet() const { return m_numRightCharsToExcludeHasBeenSet; }
    inline void SetNumRightCharsToExclude(int value) { m_numRightCharsToExcludeHasBeenSet = true; m_numRightCharsToExclude = value; }
    inline PIIDetection& WithNumRightCharsToExclude(int value) { SetNumRightCharsToExclude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameters for configuring PII detection behavior and sensitivity
     * settings.</p>
     */
    inline const Aws::String& GetDetectionParameters() const { return m_detectionParameters; }
    inline bool DetectionParametersHasBeenSet() const { return m_detectionParametersHasBeenSet; }
    template<typename DetectionParametersT = Aws::String>
    void SetDetectionParameters(DetectionParametersT&& value) { m_detectionParametersHasBeenSet = true; m_detectionParameters = std::forward<DetectionParametersT>(value); }
    template<typename DetectionParametersT = Aws::String>
    PIIDetection& WithDetectionParameters(DetectionParametersT&& value) { SetDetectionParameters(std::forward<DetectionParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitivity level for PII detection. Higher sensitivity levels detect
     * more potential PII but may result in more false positives.</p>
     */
    inline const Aws::String& GetDetectionSensitivity() const { return m_detectionSensitivity; }
    inline bool DetectionSensitivityHasBeenSet() const { return m_detectionSensitivityHasBeenSet; }
    template<typename DetectionSensitivityT = Aws::String>
    void SetDetectionSensitivity(DetectionSensitivityT&& value) { m_detectionSensitivityHasBeenSet = true; m_detectionSensitivity = std::forward<DetectionSensitivityT>(value); }
    template<typename DetectionSensitivityT = Aws::String>
    PIIDetection& WithDetectionSensitivity(DetectionSensitivityT&& value) { SetDetectionSensitivity(std::forward<DetectionSensitivityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    PiiType m_piiType{PiiType::NOT_SET};
    bool m_piiTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityTypesToDetect;
    bool m_entityTypesToDetectHasBeenSet = false;

    Aws::String m_outputColumnName;
    bool m_outputColumnNameHasBeenSet = false;

    double m_sampleFraction{0.0};
    bool m_sampleFractionHasBeenSet = false;

    double m_thresholdFraction{0.0};
    bool m_thresholdFractionHasBeenSet = false;

    Aws::String m_maskValue;
    bool m_maskValueHasBeenSet = false;

    Aws::String m_redactText;
    bool m_redactTextHasBeenSet = false;

    Aws::String m_redactChar;
    bool m_redactCharHasBeenSet = false;

    Aws::String m_matchPattern;
    bool m_matchPatternHasBeenSet = false;

    int m_numLeftCharsToExclude{0};
    bool m_numLeftCharsToExcludeHasBeenSet = false;

    int m_numRightCharsToExclude{0};
    bool m_numRightCharsToExcludeHasBeenSet = false;

    Aws::String m_detectionParameters;
    bool m_detectionParametersHasBeenSet = false;

    Aws::String m_detectionSensitivity;
    bool m_detectionSensitivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
