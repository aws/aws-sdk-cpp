/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/SplitDocument.h>
#include <aws/textract/model/DetectedSignature.h>
#include <aws/textract/model/UndetectedSignature.h>
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
   * <p>Summary information about documents grouped by the same document
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DocumentGroup">AWS
   * API Reference</a></p>
   */
  class DocumentGroup
  {
  public:
    AWS_TEXTRACT_API DocumentGroup();
    AWS_TEXTRACT_API DocumentGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API DocumentGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline DocumentGroup& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline DocumentGroup& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of document that Amazon Textract has detected. See LINK for a list
     * of all types returned by Textract.</p>
     */
    inline DocumentGroup& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline const Aws::Vector<SplitDocument>& GetSplitDocuments() const{ return m_splitDocuments; }

    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline bool SplitDocumentsHasBeenSet() const { return m_splitDocumentsHasBeenSet; }

    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline void SetSplitDocuments(const Aws::Vector<SplitDocument>& value) { m_splitDocumentsHasBeenSet = true; m_splitDocuments = value; }

    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline void SetSplitDocuments(Aws::Vector<SplitDocument>&& value) { m_splitDocumentsHasBeenSet = true; m_splitDocuments = std::move(value); }

    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline DocumentGroup& WithSplitDocuments(const Aws::Vector<SplitDocument>& value) { SetSplitDocuments(value); return *this;}

    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline DocumentGroup& WithSplitDocuments(Aws::Vector<SplitDocument>&& value) { SetSplitDocuments(std::move(value)); return *this;}

    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline DocumentGroup& AddSplitDocuments(const SplitDocument& value) { m_splitDocumentsHasBeenSet = true; m_splitDocuments.push_back(value); return *this; }

    /**
     * <p>An array that contains information about the pages of a document, defined by
     * logical boundary.</p>
     */
    inline DocumentGroup& AddSplitDocuments(SplitDocument&& value) { m_splitDocumentsHasBeenSet = true; m_splitDocuments.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline const Aws::Vector<DetectedSignature>& GetDetectedSignatures() const{ return m_detectedSignatures; }

    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline bool DetectedSignaturesHasBeenSet() const { return m_detectedSignaturesHasBeenSet; }

    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline void SetDetectedSignatures(const Aws::Vector<DetectedSignature>& value) { m_detectedSignaturesHasBeenSet = true; m_detectedSignatures = value; }

    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline void SetDetectedSignatures(Aws::Vector<DetectedSignature>&& value) { m_detectedSignaturesHasBeenSet = true; m_detectedSignatures = std::move(value); }

    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline DocumentGroup& WithDetectedSignatures(const Aws::Vector<DetectedSignature>& value) { SetDetectedSignatures(value); return *this;}

    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline DocumentGroup& WithDetectedSignatures(Aws::Vector<DetectedSignature>&& value) { SetDetectedSignatures(std::move(value)); return *this;}

    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline DocumentGroup& AddDetectedSignatures(const DetectedSignature& value) { m_detectedSignaturesHasBeenSet = true; m_detectedSignatures.push_back(value); return *this; }

    /**
     * <p>A list of the detected signatures found in a document group.</p>
     */
    inline DocumentGroup& AddDetectedSignatures(DetectedSignature&& value) { m_detectedSignaturesHasBeenSet = true; m_detectedSignatures.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline const Aws::Vector<UndetectedSignature>& GetUndetectedSignatures() const{ return m_undetectedSignatures; }

    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline bool UndetectedSignaturesHasBeenSet() const { return m_undetectedSignaturesHasBeenSet; }

    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline void SetUndetectedSignatures(const Aws::Vector<UndetectedSignature>& value) { m_undetectedSignaturesHasBeenSet = true; m_undetectedSignatures = value; }

    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline void SetUndetectedSignatures(Aws::Vector<UndetectedSignature>&& value) { m_undetectedSignaturesHasBeenSet = true; m_undetectedSignatures = std::move(value); }

    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline DocumentGroup& WithUndetectedSignatures(const Aws::Vector<UndetectedSignature>& value) { SetUndetectedSignatures(value); return *this;}

    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline DocumentGroup& WithUndetectedSignatures(Aws::Vector<UndetectedSignature>&& value) { SetUndetectedSignatures(std::move(value)); return *this;}

    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline DocumentGroup& AddUndetectedSignatures(const UndetectedSignature& value) { m_undetectedSignaturesHasBeenSet = true; m_undetectedSignatures.push_back(value); return *this; }

    /**
     * <p>A list of any expected signatures not found in a document group.</p>
     */
    inline DocumentGroup& AddUndetectedSignatures(UndetectedSignature&& value) { m_undetectedSignaturesHasBeenSet = true; m_undetectedSignatures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<SplitDocument> m_splitDocuments;
    bool m_splitDocumentsHasBeenSet = false;

    Aws::Vector<DetectedSignature> m_detectedSignatures;
    bool m_detectedSignaturesHasBeenSet = false;

    Aws::Vector<UndetectedSignature> m_undetectedSignatures;
    bool m_undetectedSignaturesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
