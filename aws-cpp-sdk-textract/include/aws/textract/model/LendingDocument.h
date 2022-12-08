/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/LendingField.h>
#include <aws/textract/model/SignatureDetection.h>
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
   * <p>Holds the structured data returned by AnalyzeDocument for lending
   * documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingDocument">AWS
   * API Reference</a></p>
   */
  class LendingDocument
  {
  public:
    AWS_TEXTRACT_API LendingDocument();
    AWS_TEXTRACT_API LendingDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of LendingField objects.</p>
     */
    inline const Aws::Vector<LendingField>& GetLendingFields() const{ return m_lendingFields; }

    /**
     * <p>An array of LendingField objects.</p>
     */
    inline bool LendingFieldsHasBeenSet() const { return m_lendingFieldsHasBeenSet; }

    /**
     * <p>An array of LendingField objects.</p>
     */
    inline void SetLendingFields(const Aws::Vector<LendingField>& value) { m_lendingFieldsHasBeenSet = true; m_lendingFields = value; }

    /**
     * <p>An array of LendingField objects.</p>
     */
    inline void SetLendingFields(Aws::Vector<LendingField>&& value) { m_lendingFieldsHasBeenSet = true; m_lendingFields = std::move(value); }

    /**
     * <p>An array of LendingField objects.</p>
     */
    inline LendingDocument& WithLendingFields(const Aws::Vector<LendingField>& value) { SetLendingFields(value); return *this;}

    /**
     * <p>An array of LendingField objects.</p>
     */
    inline LendingDocument& WithLendingFields(Aws::Vector<LendingField>&& value) { SetLendingFields(std::move(value)); return *this;}

    /**
     * <p>An array of LendingField objects.</p>
     */
    inline LendingDocument& AddLendingFields(const LendingField& value) { m_lendingFieldsHasBeenSet = true; m_lendingFields.push_back(value); return *this; }

    /**
     * <p>An array of LendingField objects.</p>
     */
    inline LendingDocument& AddLendingFields(LendingField&& value) { m_lendingFieldsHasBeenSet = true; m_lendingFields.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline const Aws::Vector<SignatureDetection>& GetSignatureDetections() const{ return m_signatureDetections; }

    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline bool SignatureDetectionsHasBeenSet() const { return m_signatureDetectionsHasBeenSet; }

    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline void SetSignatureDetections(const Aws::Vector<SignatureDetection>& value) { m_signatureDetectionsHasBeenSet = true; m_signatureDetections = value; }

    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline void SetSignatureDetections(Aws::Vector<SignatureDetection>&& value) { m_signatureDetectionsHasBeenSet = true; m_signatureDetections = std::move(value); }

    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline LendingDocument& WithSignatureDetections(const Aws::Vector<SignatureDetection>& value) { SetSignatureDetections(value); return *this;}

    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline LendingDocument& WithSignatureDetections(Aws::Vector<SignatureDetection>&& value) { SetSignatureDetections(std::move(value)); return *this;}

    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline LendingDocument& AddSignatureDetections(const SignatureDetection& value) { m_signatureDetectionsHasBeenSet = true; m_signatureDetections.push_back(value); return *this; }

    /**
     * <p>A list of signatures detected in a lending document.</p>
     */
    inline LendingDocument& AddSignatureDetections(SignatureDetection&& value) { m_signatureDetectionsHasBeenSet = true; m_signatureDetections.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LendingField> m_lendingFields;
    bool m_lendingFieldsHasBeenSet = false;

    Aws::Vector<SignatureDetection> m_signatureDetections;
    bool m_signatureDetectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
