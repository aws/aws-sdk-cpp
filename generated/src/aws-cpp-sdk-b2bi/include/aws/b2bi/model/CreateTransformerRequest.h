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


    ///@{
    /**
     * <p>Specifies the name of the transformer, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTransformerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTransformerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTransformerRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(const FileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline void SetFileFormat(FileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }
    inline CreateTransformerRequest& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}
    inline CreateTransformerRequest& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mapping template for the transformer. This template is used to
     * map the parsed EDI file using JSONata or XSLT.</p>
     */
    inline const Aws::String& GetMappingTemplate() const{ return m_mappingTemplate; }
    inline bool MappingTemplateHasBeenSet() const { return m_mappingTemplateHasBeenSet; }
    inline void SetMappingTemplate(const Aws::String& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = value; }
    inline void SetMappingTemplate(Aws::String&& value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate = std::move(value); }
    inline void SetMappingTemplate(const char* value) { m_mappingTemplateHasBeenSet = true; m_mappingTemplate.assign(value); }
    inline CreateTransformerRequest& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}
    inline CreateTransformerRequest& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}
    inline CreateTransformerRequest& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const EdiType& GetEdiType() const{ return m_ediType; }
    inline bool EdiTypeHasBeenSet() const { return m_ediTypeHasBeenSet; }
    inline void SetEdiType(const EdiType& value) { m_ediTypeHasBeenSet = true; m_ediType = value; }
    inline void SetEdiType(EdiType&& value) { m_ediTypeHasBeenSet = true; m_ediType = std::move(value); }
    inline CreateTransformerRequest& WithEdiType(const EdiType& value) { SetEdiType(value); return *this;}
    inline CreateTransformerRequest& WithEdiType(EdiType&& value) { SetEdiType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline const Aws::String& GetSampleDocument() const{ return m_sampleDocument; }
    inline bool SampleDocumentHasBeenSet() const { return m_sampleDocumentHasBeenSet; }
    inline void SetSampleDocument(const Aws::String& value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument = value; }
    inline void SetSampleDocument(Aws::String&& value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument = std::move(value); }
    inline void SetSampleDocument(const char* value) { m_sampleDocumentHasBeenSet = true; m_sampleDocument.assign(value); }
    inline CreateTransformerRequest& WithSampleDocument(const Aws::String& value) { SetSampleDocument(value); return *this;}
    inline CreateTransformerRequest& WithSampleDocument(Aws::String&& value) { SetSampleDocument(std::move(value)); return *this;}
    inline CreateTransformerRequest& WithSampleDocument(const char* value) { SetSampleDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTransformerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTransformerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTransformerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTransformerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTransformerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTransformerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTransformerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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
