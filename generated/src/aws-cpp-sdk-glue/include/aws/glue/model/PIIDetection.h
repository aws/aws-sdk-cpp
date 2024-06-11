﻿/**
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
    AWS_GLUE_API PIIDetection();
    AWS_GLUE_API PIIDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PIIDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PIIDetection& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PIIDetection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PIIDetection& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline PIIDetection& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline PIIDetection& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline PIIDetection& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline PIIDetection& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline PIIDetection& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the type of PIIDetection transform. </p>
     */
    inline const PiiType& GetPiiType() const{ return m_piiType; }
    inline bool PiiTypeHasBeenSet() const { return m_piiTypeHasBeenSet; }
    inline void SetPiiType(const PiiType& value) { m_piiTypeHasBeenSet = true; m_piiType = value; }
    inline void SetPiiType(PiiType&& value) { m_piiTypeHasBeenSet = true; m_piiType = std::move(value); }
    inline PIIDetection& WithPiiType(const PiiType& value) { SetPiiType(value); return *this;}
    inline PIIDetection& WithPiiType(PiiType&& value) { SetPiiType(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetEntityTypesToDetect() const{ return m_entityTypesToDetect; }
    inline bool EntityTypesToDetectHasBeenSet() const { return m_entityTypesToDetectHasBeenSet; }
    inline void SetEntityTypesToDetect(const Aws::Vector<Aws::String>& value) { m_entityTypesToDetectHasBeenSet = true; m_entityTypesToDetect = value; }
    inline void SetEntityTypesToDetect(Aws::Vector<Aws::String>&& value) { m_entityTypesToDetectHasBeenSet = true; m_entityTypesToDetect = std::move(value); }
    inline PIIDetection& WithEntityTypesToDetect(const Aws::Vector<Aws::String>& value) { SetEntityTypesToDetect(value); return *this;}
    inline PIIDetection& WithEntityTypesToDetect(Aws::Vector<Aws::String>&& value) { SetEntityTypesToDetect(std::move(value)); return *this;}
    inline PIIDetection& AddEntityTypesToDetect(const Aws::String& value) { m_entityTypesToDetectHasBeenSet = true; m_entityTypesToDetect.push_back(value); return *this; }
    inline PIIDetection& AddEntityTypesToDetect(Aws::String&& value) { m_entityTypesToDetectHasBeenSet = true; m_entityTypesToDetect.push_back(std::move(value)); return *this; }
    inline PIIDetection& AddEntityTypesToDetect(const char* value) { m_entityTypesToDetectHasBeenSet = true; m_entityTypesToDetect.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the output column name that will contain any entity type detected
     * in that row. </p>
     */
    inline const Aws::String& GetOutputColumnName() const{ return m_outputColumnName; }
    inline bool OutputColumnNameHasBeenSet() const { return m_outputColumnNameHasBeenSet; }
    inline void SetOutputColumnName(const Aws::String& value) { m_outputColumnNameHasBeenSet = true; m_outputColumnName = value; }
    inline void SetOutputColumnName(Aws::String&& value) { m_outputColumnNameHasBeenSet = true; m_outputColumnName = std::move(value); }
    inline void SetOutputColumnName(const char* value) { m_outputColumnNameHasBeenSet = true; m_outputColumnName.assign(value); }
    inline PIIDetection& WithOutputColumnName(const Aws::String& value) { SetOutputColumnName(value); return *this;}
    inline PIIDetection& WithOutputColumnName(Aws::String&& value) { SetOutputColumnName(std::move(value)); return *this;}
    inline PIIDetection& WithOutputColumnName(const char* value) { SetOutputColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the fraction of the data to sample when scanning for PII entities.
     * </p>
     */
    inline double GetSampleFraction() const{ return m_sampleFraction; }
    inline bool SampleFractionHasBeenSet() const { return m_sampleFractionHasBeenSet; }
    inline void SetSampleFraction(double value) { m_sampleFractionHasBeenSet = true; m_sampleFraction = value; }
    inline PIIDetection& WithSampleFraction(double value) { SetSampleFraction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the fraction of the data that must be met in order for a column to
     * be identified as PII data. </p>
     */
    inline double GetThresholdFraction() const{ return m_thresholdFraction; }
    inline bool ThresholdFractionHasBeenSet() const { return m_thresholdFractionHasBeenSet; }
    inline void SetThresholdFraction(double value) { m_thresholdFractionHasBeenSet = true; m_thresholdFraction = value; }
    inline PIIDetection& WithThresholdFraction(double value) { SetThresholdFraction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the value that will replace the detected entity. </p>
     */
    inline const Aws::String& GetMaskValue() const{ return m_maskValue; }
    inline bool MaskValueHasBeenSet() const { return m_maskValueHasBeenSet; }
    inline void SetMaskValue(const Aws::String& value) { m_maskValueHasBeenSet = true; m_maskValue = value; }
    inline void SetMaskValue(Aws::String&& value) { m_maskValueHasBeenSet = true; m_maskValue = std::move(value); }
    inline void SetMaskValue(const char* value) { m_maskValueHasBeenSet = true; m_maskValue.assign(value); }
    inline PIIDetection& WithMaskValue(const Aws::String& value) { SetMaskValue(value); return *this;}
    inline PIIDetection& WithMaskValue(Aws::String&& value) { SetMaskValue(std::move(value)); return *this;}
    inline PIIDetection& WithMaskValue(const char* value) { SetMaskValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    PiiType m_piiType;
    bool m_piiTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityTypesToDetect;
    bool m_entityTypesToDetectHasBeenSet = false;

    Aws::String m_outputColumnName;
    bool m_outputColumnNameHasBeenSet = false;

    double m_sampleFraction;
    bool m_sampleFractionHasBeenSet = false;

    double m_thresholdFraction;
    bool m_thresholdFractionHasBeenSet = false;

    Aws::String m_maskValue;
    bool m_maskValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
