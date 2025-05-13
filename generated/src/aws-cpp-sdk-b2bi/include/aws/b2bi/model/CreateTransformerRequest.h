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
    AWS_B2BI_API CreateTransformerRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTransformerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTransformerRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTransformerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTransformerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the <code>InputConversion</code> object, which contains the format
     * options for the inbound transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const { return m_inputConversion; }
    inline bool InputConversionHasBeenSet() const { return m_inputConversionHasBeenSet; }
    template<typename InputConversionT = InputConversion>
    void SetInputConversion(InputConversionT&& value) { m_inputConversionHasBeenSet = true; m_inputConversion = std::forward<InputConversionT>(value); }
    template<typename InputConversionT = InputConversion>
    CreateTransformerRequest& WithInputConversion(InputConversionT&& value) { SetInputConversion(std::forward<InputConversionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the structure that contains the mapping template and its language
     * (either XSLT or JSONATA).</p>
     */
    inline const Mapping& GetMapping() const { return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    template<typename MappingT = Mapping>
    void SetMapping(MappingT&& value) { m_mappingHasBeenSet = true; m_mapping = std::forward<MappingT>(value); }
    template<typename MappingT = Mapping>
    CreateTransformerRequest& WithMapping(MappingT&& value) { SetMapping(std::forward<MappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the <code>OutputConversion</code> object, which
     * contains the format options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const { return m_outputConversion; }
    inline bool OutputConversionHasBeenSet() const { return m_outputConversionHasBeenSet; }
    template<typename OutputConversionT = OutputConversion>
    void SetOutputConversion(OutputConversionT&& value) { m_outputConversionHasBeenSet = true; m_outputConversion = std::forward<OutputConversionT>(value); }
    template<typename OutputConversionT = OutputConversion>
    CreateTransformerRequest& WithOutputConversion(OutputConversionT&& value) { SetOutputConversion(std::forward<OutputConversionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a structure that contains the Amazon S3 bucket and an array of the
     * corresponding keys used to identify the location for your sample documents.</p>
     */
    inline const SampleDocuments& GetSampleDocuments() const { return m_sampleDocuments; }
    inline bool SampleDocumentsHasBeenSet() const { return m_sampleDocumentsHasBeenSet; }
    template<typename SampleDocumentsT = SampleDocuments>
    void SetSampleDocuments(SampleDocumentsT&& value) { m_sampleDocumentsHasBeenSet = true; m_sampleDocuments = std::forward<SampleDocumentsT>(value); }
    template<typename SampleDocumentsT = SampleDocuments>
    CreateTransformerRequest& WithSampleDocuments(SampleDocumentsT&& value) { SetSampleDocuments(std::forward<SampleDocumentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
