/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/FileFormat.h>
#include <aws/b2bi/model/EdiType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class CreateTransformerRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API CreateTransformerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransformer"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline CreateTransformerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline CreateTransformerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline CreateTransformerRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateTransformerRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline CreateTransformerRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


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
    inline CreateTransformerRequest& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline CreateTransformerRequest& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline CreateTransformerRequest& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}


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
    inline CreateTransformerRequest& WithEdiType(const EdiType& value) { SetEdiType(value); return *this;}

    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline CreateTransformerRequest& WithEdiType(EdiType&& value) { SetEdiType(std::move(value)); return *this;}


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
    inline CreateTransformerRequest& WithSampleDocument(const Aws::String& value) { SetSampleDocument(value); return *this;}

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline CreateTransformerRequest& WithSampleDocument(Aws::String&& value) { SetSampleDocument(std::move(value)); return *this;}

    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline CreateTransformerRequest& WithSampleDocument(const char* value) { SetSampleDocument(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateTransformerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateTransformerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateTransformerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateTransformerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateTransformerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateTransformerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateTransformerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    Aws::String m_mappingTemplate;
    bool m_mappingTemplateHasBeenSet = false;

    EdiType m_ediType;
    bool m_ediTypeHasBeenSet = false;

    Aws::String m_sampleDocument;
    bool m_sampleDocumentHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
