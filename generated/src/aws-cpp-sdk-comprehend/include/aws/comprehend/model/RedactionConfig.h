/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/PiiEntitiesDetectionMaskMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/PiiEntityType.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides configuration parameters for PII entity redaction.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/RedactionConfig">AWS
   * API Reference</a></p>
   */
  class RedactionConfig
  {
  public:
    AWS_COMPREHEND_API RedactionConfig() = default;
    AWS_COMPREHEND_API RedactionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API RedactionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline const Aws::Vector<PiiEntityType>& GetPiiEntityTypes() const { return m_piiEntityTypes; }
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
    template<typename PiiEntityTypesT = Aws::Vector<PiiEntityType>>
    void SetPiiEntityTypes(PiiEntityTypesT&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::forward<PiiEntityTypesT>(value); }
    template<typename PiiEntityTypesT = Aws::Vector<PiiEntityType>>
    RedactionConfig& WithPiiEntityTypes(PiiEntityTypesT&& value) { SetPiiEntityTypes(std::forward<PiiEntityTypesT>(value)); return *this;}
    inline RedactionConfig& AddPiiEntityTypes(PiiEntityType value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the PII entity is redacted with the mask character or the
     * entity type.</p>
     */
    inline PiiEntitiesDetectionMaskMode GetMaskMode() const { return m_maskMode; }
    inline bool MaskModeHasBeenSet() const { return m_maskModeHasBeenSet; }
    inline void SetMaskMode(PiiEntitiesDetectionMaskMode value) { m_maskModeHasBeenSet = true; m_maskMode = value; }
    inline RedactionConfig& WithMaskMode(PiiEntitiesDetectionMaskMode value) { SetMaskMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline const Aws::String& GetMaskCharacter() const { return m_maskCharacter; }
    inline bool MaskCharacterHasBeenSet() const { return m_maskCharacterHasBeenSet; }
    template<typename MaskCharacterT = Aws::String>
    void SetMaskCharacter(MaskCharacterT&& value) { m_maskCharacterHasBeenSet = true; m_maskCharacter = std::forward<MaskCharacterT>(value); }
    template<typename MaskCharacterT = Aws::String>
    RedactionConfig& WithMaskCharacter(MaskCharacterT&& value) { SetMaskCharacter(std::forward<MaskCharacterT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PiiEntityType> m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    PiiEntitiesDetectionMaskMode m_maskMode{PiiEntitiesDetectionMaskMode::NOT_SET};
    bool m_maskModeHasBeenSet = false;

    Aws::String m_maskCharacter;
    bool m_maskCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
