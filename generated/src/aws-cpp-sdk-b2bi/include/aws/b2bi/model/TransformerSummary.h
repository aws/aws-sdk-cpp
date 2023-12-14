/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/FileFormat.h>
#include <aws/b2bi/model/TransformerStatus.h>
#include <aws/b2bi/model/EdiType.h>
#include <aws/core/utils/DateTime.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Contains the details for a transformer object. A transformer describes how to
   * process the incoming EDI documents and extract the necessary information to the
   * output file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/TransformerSummary">AWS
   * API Reference</a></p>
   */
  class TransformerSummary
  {
  public:
    AWS_B2BI_API TransformerSummary();
    AWS_B2BI_API TransformerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API TransformerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline TransformerSummary& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline TransformerSummary& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline TransformerSummary& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}


    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline TransformerSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline TransformerSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline TransformerSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(const FileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(FileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline TransformerSummary& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline TransformerSummary& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline const Aws::String& GetMappingTemplate() const{ return m_mappingTemplate; }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline bool MappingTemplateHasBeenSet() const { return m_mappingTemplateHasBeenSet; }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const Aws::String& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = value; }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(Aws::String&& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = std::move(value); }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const char* value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate.assign(value); }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline TransformerSummary& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline TransformerSummary& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline TransformerSummary& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}


    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline const TransformerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline void SetStatus(const TransformerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline void SetStatus(TransformerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline TransformerSummary& WithStatus(const TransformerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline TransformerSummary& WithStatus(TransformerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const EdiType& GetEdiType() const{ return m_ediType; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline bool EdiTypeHasBeenSet() const { return m_ediTypeHasBeenSet; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(const EdiType& value) { m_ediTypeHasBeenSet = true; m_ediType = value; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(EdiType&& value) { m_ediTypeHasBeenSet = true; m_ediType = std::move(value); }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline TransformerSummary& WithEdiType(const EdiType& value) { SetEdiType(value); return *this;}

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline TransformerSummary& WithEdiType(EdiType&& value) { SetEdiType(std::move(value)); return *this;}


    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline const Aws::String& GetSampleDocument() const{ return m_sampleDocument; }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline bool SampleDocumentHasBeenSet() const { return m_sampleDocumentHasBeenSet; }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(const Aws::String& value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument = value; }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(Aws::String&& value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument = std::move(value); }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(const char* value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument.assign(value); }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline TransformerSummary& WithSampleDocument(const Aws::String& value) { SetSampleDocument(value); return *this;}

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline TransformerSummary& WithSampleDocument(Aws::String&& value) { SetSampleDocument(std::move(value)); return *this;}

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline TransformerSummary& WithSampleDocument(const char* value) { SetSampleDocument(value); return *this;}


    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline TransformerSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline TransformerSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline TransformerSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline TransformerSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}

  private:

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    Aws::String m_mappingTemplate;
    bool m_mappingTemplateHasBeenSet = false;

    TransformerStatus m_status;
    bool m_statusHasBeenSet = false;

    EdiType m_ediType;
    bool m_ediTypeHasBeenSet = false;

    Aws::String m_sampleDocument;
    bool m_sampleDocumentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
