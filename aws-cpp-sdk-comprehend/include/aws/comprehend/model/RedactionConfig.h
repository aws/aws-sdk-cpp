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
    AWS_COMPREHEND_API RedactionConfig();
    AWS_COMPREHEND_API RedactionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API RedactionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline const Aws::Vector<PiiEntityType>& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline void SetPiiEntityTypes(const Aws::Vector<PiiEntityType>& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline void SetPiiEntityTypes(Aws::Vector<PiiEntityType>&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline RedactionConfig& WithPiiEntityTypes(const Aws::Vector<PiiEntityType>& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline RedactionConfig& WithPiiEntityTypes(Aws::Vector<PiiEntityType>&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline RedactionConfig& AddPiiEntityTypes(const PiiEntityType& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.push_back(value); return *this; }

    /**
     * <p>An array of the types of PII entities that Amazon Comprehend detects in the
     * input text for your request.</p>
     */
    inline RedactionConfig& AddPiiEntityTypes(PiiEntityType&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the PII entity is redacted with the mask character or the
     * entity type.</p>
     */
    inline const PiiEntitiesDetectionMaskMode& GetMaskMode() const{ return m_maskMode; }

    /**
     * <p>Specifies whether the PII entity is redacted with the mask character or the
     * entity type.</p>
     */
    inline bool MaskModeHasBeenSet() const { return m_maskModeHasBeenSet; }

    /**
     * <p>Specifies whether the PII entity is redacted with the mask character or the
     * entity type.</p>
     */
    inline void SetMaskMode(const PiiEntitiesDetectionMaskMode& value) { m_maskModeHasBeenSet = true; m_maskMode = value; }

    /**
     * <p>Specifies whether the PII entity is redacted with the mask character or the
     * entity type.</p>
     */
    inline void SetMaskMode(PiiEntitiesDetectionMaskMode&& value) { m_maskModeHasBeenSet = true; m_maskMode = std::move(value); }

    /**
     * <p>Specifies whether the PII entity is redacted with the mask character or the
     * entity type.</p>
     */
    inline RedactionConfig& WithMaskMode(const PiiEntitiesDetectionMaskMode& value) { SetMaskMode(value); return *this;}

    /**
     * <p>Specifies whether the PII entity is redacted with the mask character or the
     * entity type.</p>
     */
    inline RedactionConfig& WithMaskMode(PiiEntitiesDetectionMaskMode&& value) { SetMaskMode(std::move(value)); return *this;}


    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline const Aws::String& GetMaskCharacter() const{ return m_maskCharacter; }

    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline bool MaskCharacterHasBeenSet() const { return m_maskCharacterHasBeenSet; }

    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline void SetMaskCharacter(const Aws::String& value) { m_maskCharacterHasBeenSet = true; m_maskCharacter = value; }

    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline void SetMaskCharacter(Aws::String&& value) { m_maskCharacterHasBeenSet = true; m_maskCharacter = std::move(value); }

    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline void SetMaskCharacter(const char* value) { m_maskCharacterHasBeenSet = true; m_maskCharacter.assign(value); }

    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline RedactionConfig& WithMaskCharacter(const Aws::String& value) { SetMaskCharacter(value); return *this;}

    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline RedactionConfig& WithMaskCharacter(Aws::String&& value) { SetMaskCharacter(std::move(value)); return *this;}

    /**
     * <p>A character that replaces each character in the redacted PII entity.</p>
     */
    inline RedactionConfig& WithMaskCharacter(const char* value) { SetMaskCharacter(value); return *this;}

  private:

    Aws::Vector<PiiEntityType> m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    PiiEntitiesDetectionMaskMode m_maskMode;
    bool m_maskModeHasBeenSet = false;

    Aws::String m_maskCharacter;
    bool m_maskCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
