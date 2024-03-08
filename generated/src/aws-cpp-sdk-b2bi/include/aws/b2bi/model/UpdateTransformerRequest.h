/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/FileFormat.h>
#include <aws/b2bi/model/TransformerStatus.h>
#include <aws/b2bi/model/EdiType.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class UpdateTransformerRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API UpdateTransformerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTransformer"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline UpdateTransformerRequest& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline UpdateTransformerRequest& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}

    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline UpdateTransformerRequest& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}


    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline UpdateTransformerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline UpdateTransformerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline UpdateTransformerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(const FileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(FileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline UpdateTransformerRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline UpdateTransformerRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline const Aws::String& GetMappingTemplate() const{ return m_mappingTemplate; }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline bool MappingTemplateHasBeenSet() const { return m_mappingTemplateHasBeenSet; }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const Aws::String& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = value; }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(Aws::String&& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = std::move(value); }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const char* value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate.assign(value); }

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline UpdateTransformerRequest& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline UpdateTransformerRequest& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline UpdateTransformerRequest& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}


    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer, from <code>active</code> to <code>inactive</code>, or
     * <code>inactive</code> to <code>active</code>.</p>
     */
    inline const TransformerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer, from <code>active</code> to <code>inactive</code>, or
     * <code>inactive</code> to <code>active</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer, from <code>active</code> to <code>inactive</code>, or
     * <code>inactive</code> to <code>active</code>.</p>
     */
    inline void SetStatus(const TransformerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer, from <code>active</code> to <code>inactive</code>, or
     * <code>inactive</code> to <code>active</code>.</p>
     */
    inline void SetStatus(TransformerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer, from <code>active</code> to <code>inactive</code>, or
     * <code>inactive</code> to <code>active</code>.</p>
     */
    inline UpdateTransformerRequest& WithStatus(const TransformerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer, from <code>active</code> to <code>inactive</code>, or
     * <code>inactive</code> to <code>active</code>.</p>
     */
    inline UpdateTransformerRequest& WithStatus(TransformerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const EdiType& GetEdiType() const{ return m_ediType; }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline bool EdiTypeHasBeenSet() const { return m_ediTypeHasBeenSet; }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(const EdiType& value) { m_ediTypeHasBeenSet = true; m_ediType = value; }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(EdiType&& value) { m_ediTypeHasBeenSet = true; m_ediType = std::move(value); }

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline UpdateTransformerRequest& WithEdiType(const EdiType& value) { SetEdiType(value); return *this;}

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline UpdateTransformerRequest& WithEdiType(EdiType&& value) { SetEdiType(std::move(value)); return *this;}


    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline const Aws::String& GetSampleDocument() const{ return m_sampleDocument; }

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline bool SampleDocumentHasBeenSet() const { return m_sampleDocumentHasBeenSet; }

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(const Aws::String& value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument = value; }

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(Aws::String&& value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument = std::move(value); }

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(const char* value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument.assign(value); }

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline UpdateTransformerRequest& WithSampleDocument(const Aws::String& value) { SetSampleDocument(value); return *this;}

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline UpdateTransformerRequest& WithSampleDocument(Aws::String&& value) { SetSampleDocument(std::move(value)); return *this;}

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline UpdateTransformerRequest& WithSampleDocument(const char* value) { SetSampleDocument(value); return *this;}

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
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
