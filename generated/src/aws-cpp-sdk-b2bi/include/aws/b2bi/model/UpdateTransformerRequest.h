/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/TransformerStatus.h>
#include <aws/b2bi/model/InputConversion.h>
#include <aws/b2bi/model/Mapping.h>
#include <aws/b2bi/model/OutputConversion.h>
#include <aws/b2bi/model/SampleDocuments.h>
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
    AWS_B2BI_API UpdateTransformerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTransformer"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const { return m_transformerId; }
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }
    template<typename TransformerIdT = Aws::String>
    void SetTransformerId(TransformerIdT&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::forward<TransformerIdT>(value); }
    template<typename TransformerIdT = Aws::String>
    UpdateTransformerRequest& WithTransformerId(TransformerIdT&& value) { SetTransformerId(std::forward<TransformerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTransformerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer from <code>inactive</code> to <code>active</code>.</p>
     */
    inline TransformerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TransformerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateTransformerRequest& WithStatus(TransformerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update, specify the <code>InputConversion</code> object, which contains
     * the format options for the inbound transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const { return m_inputConversion; }
    inline bool InputConversionHasBeenSet() const { return m_inputConversionHasBeenSet; }
    template<typename InputConversionT = InputConversion>
    void SetInputConversion(InputConversionT&& value) { m_inputConversionHasBeenSet = true; m_inputConversion = std::forward<InputConversionT>(value); }
    template<typename InputConversionT = InputConversion>
    UpdateTransformerRequest& WithInputConversion(InputConversionT&& value) { SetInputConversion(std::forward<InputConversionT>(value)); return *this;}
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
    UpdateTransformerRequest& WithMapping(MappingT&& value) { SetMapping(std::forward<MappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update, specify the <code>OutputConversion</code> object, which contains
     * the format options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const { return m_outputConversion; }
    inline bool OutputConversionHasBeenSet() const { return m_outputConversionHasBeenSet; }
    template<typename OutputConversionT = OutputConversion>
    void SetOutputConversion(OutputConversionT&& value) { m_outputConversionHasBeenSet = true; m_outputConversion = std::forward<OutputConversionT>(value); }
    template<typename OutputConversionT = OutputConversion>
    UpdateTransformerRequest& WithOutputConversion(OutputConversionT&& value) { SetOutputConversion(std::forward<OutputConversionT>(value)); return *this;}
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
    UpdateTransformerRequest& WithSampleDocuments(SampleDocumentsT&& value) { SetSampleDocuments(std::forward<SampleDocumentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TransformerStatus m_status{TransformerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

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
