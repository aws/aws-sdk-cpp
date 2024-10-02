/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/InputConversion.h>
#include <aws/b2bi/model/Mapping.h>
#include <aws/b2bi/model/OutputConversion.h>
#include <aws/b2bi/model/SampleDocuments.h>
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

    ///@{
    /**
     * <p>Specify the <code>InputConversion</code> object, which contains the format
     * options for the inbound transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const{ return m_inputConversion; }
    inline bool InputConversionHasBeenSet() const { return m_inputConversionHasBeenSet; }
    inline void SetInputConversion(const InputConversion& value) { m_inputConversionHasBeenSet = true; m_inputConversion = value; }
    inline void SetInputConversion(InputConversion&& value) { m_inputConversionHasBeenSet = true; m_inputConversion = std::move(value); }
    inline CreateTransformerRequest& WithInputConversion(const InputConversion& value) { SetInputConversion(value); return *this;}
    inline CreateTransformerRequest& WithInputConversion(InputConversion&& value) { SetInputConversion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the structure that contains the mapping template and its language
     * (either XSLT or JSONATA).</p>
     */
    inline const Mapping& GetMapping() const{ return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    inline void SetMapping(const Mapping& value) { m_mappingHasBeenSet = true; m_mapping = value; }
    inline void SetMapping(Mapping&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }
    inline CreateTransformerRequest& WithMapping(const Mapping& value) { SetMapping(value); return *this;}
    inline CreateTransformerRequest& WithMapping(Mapping&& value) { SetMapping(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the <code>OutputConversion</code> object, which
     * contains the format options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const{ return m_outputConversion; }
    inline bool OutputConversionHasBeenSet() const { return m_outputConversionHasBeenSet; }
    inline void SetOutputConversion(const OutputConversion& value) { m_outputConversionHasBeenSet = true; m_outputConversion = value; }
    inline void SetOutputConversion(OutputConversion&& value) { m_outputConversionHasBeenSet = true; m_outputConversion = std::move(value); }
    inline CreateTransformerRequest& WithOutputConversion(const OutputConversion& value) { SetOutputConversion(value); return *this;}
    inline CreateTransformerRequest& WithOutputConversion(OutputConversion&& value) { SetOutputConversion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a structure that contains the Amazon S3 bucket and an array of the
     * corresponding keys used to identify the location for your sample documents.</p>
     */
    inline const SampleDocuments& GetSampleDocuments() const{ return m_sampleDocuments; }
    inline bool SampleDocumentsHasBeenSet() const { return m_sampleDocumentsHasBeenSet; }
    inline void SetSampleDocuments(const SampleDocuments& value) { m_sampleDocumentsHasBeenSet = true; m_sampleDocuments = value; }
    inline void SetSampleDocuments(SampleDocuments&& value) { m_sampleDocumentsHasBeenSet = true; m_sampleDocuments = std::move(value); }
    inline CreateTransformerRequest& WithSampleDocuments(const SampleDocuments& value) { SetSampleDocuments(value); return *this;}
    inline CreateTransformerRequest& WithSampleDocuments(SampleDocuments&& value) { SetSampleDocuments(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    InputConversion m_inputConversion;
    bool m_inputConversionHasBeenSet = false;

    Mapping m_mapping;
    bool m_mappingHasBeenSet = false;

    OutputConversion m_outputConversion;
    bool m_outputConversionHasBeenSet = false;

    SampleDocuments m_sampleDocuments;
    bool m_sampleDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
