/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/LendingDetection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Holds the normalized key-value pairs returned by AnalyzeDocument, including
   * the document type, detected text, and geometry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingField">AWS
   * API Reference</a></p>
   */
  class LendingField
  {
  public:
    AWS_TEXTRACT_API LendingField();
    AWS_TEXTRACT_API LendingField(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the lending document.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the lending document.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the lending document.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the lending document.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the lending document.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the lending document.</p>
     */
    inline LendingField& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the lending document.</p>
     */
    inline LendingField& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the lending document.</p>
     */
    inline LendingField& WithType(const char* value) { SetType(value); return *this;}


    
    inline const LendingDetection& GetKeyDetection() const{ return m_keyDetection; }

    
    inline bool KeyDetectionHasBeenSet() const { return m_keyDetectionHasBeenSet; }

    
    inline void SetKeyDetection(const LendingDetection& value) { m_keyDetectionHasBeenSet = true; m_keyDetection = value; }

    
    inline void SetKeyDetection(LendingDetection&& value) { m_keyDetectionHasBeenSet = true; m_keyDetection = std::move(value); }

    
    inline LendingField& WithKeyDetection(const LendingDetection& value) { SetKeyDetection(value); return *this;}

    
    inline LendingField& WithKeyDetection(LendingDetection&& value) { SetKeyDetection(std::move(value)); return *this;}


    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline const Aws::Vector<LendingDetection>& GetValueDetections() const{ return m_valueDetections; }

    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline bool ValueDetectionsHasBeenSet() const { return m_valueDetectionsHasBeenSet; }

    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline void SetValueDetections(const Aws::Vector<LendingDetection>& value) { m_valueDetectionsHasBeenSet = true; m_valueDetections = value; }

    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline void SetValueDetections(Aws::Vector<LendingDetection>&& value) { m_valueDetectionsHasBeenSet = true; m_valueDetections = std::move(value); }

    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline LendingField& WithValueDetections(const Aws::Vector<LendingDetection>& value) { SetValueDetections(value); return *this;}

    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline LendingField& WithValueDetections(Aws::Vector<LendingDetection>&& value) { SetValueDetections(std::move(value)); return *this;}

    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline LendingField& AddValueDetections(const LendingDetection& value) { m_valueDetectionsHasBeenSet = true; m_valueDetections.push_back(value); return *this; }

    /**
     * <p>An array of LendingDetection objects.</p>
     */
    inline LendingField& AddValueDetections(LendingDetection&& value) { m_valueDetectionsHasBeenSet = true; m_valueDetections.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    LendingDetection m_keyDetection;
    bool m_keyDetectionHasBeenSet = false;

    Aws::Vector<LendingDetection> m_valueDetections;
    bool m_valueDetectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
