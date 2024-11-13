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
    AWS_B2BI_API UpdateTransformerRequest();

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
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }
    inline UpdateTransformerRequest& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}
    inline UpdateTransformerRequest& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}
    inline UpdateTransformerRequest& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a new name for the transformer, if you want to update it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateTransformerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateTransformerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateTransformerRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the transformer's status. You can update the state of the
     * transformer from <code>inactive</code> to <code>active</code>.</p>
     */
    inline const TransformerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TransformerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TransformerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateTransformerRequest& WithStatus(const TransformerStatus& value) { SetStatus(value); return *this;}
    inline UpdateTransformerRequest& WithStatus(TransformerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update, specify the <code>InputConversion</code> object, which contains
     * the format options for the inbound transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const{ return m_inputConversion; }
    inline bool InputConversionHasBeenSet() const { return m_inputConversionHasBeenSet; }
    inline void SetInputConversion(const InputConversion& value) { m_inputConversionHasBeenSet = true; m_inputConversion = value; }
    inline void SetInputConversion(InputConversion&& value) { m_inputConversionHasBeenSet = true; m_inputConversion = std::move(value); }
    inline UpdateTransformerRequest& WithInputConversion(const InputConversion& value) { SetInputConversion(value); return *this;}
    inline UpdateTransformerRequest& WithInputConversion(InputConversion&& value) { SetInputConversion(std::move(value)); return *this;}
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
    inline UpdateTransformerRequest& WithMapping(const Mapping& value) { SetMapping(value); return *this;}
    inline UpdateTransformerRequest& WithMapping(Mapping&& value) { SetMapping(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update, specify the <code>OutputConversion</code> object, which contains
     * the format options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const{ return m_outputConversion; }
    inline bool OutputConversionHasBeenSet() const { return m_outputConversionHasBeenSet; }
    inline void SetOutputConversion(const OutputConversion& value) { m_outputConversionHasBeenSet = true; m_outputConversion = value; }
    inline void SetOutputConversion(OutputConversion&& value) { m_outputConversionHasBeenSet = true; m_outputConversion = std::move(value); }
    inline UpdateTransformerRequest& WithOutputConversion(const OutputConversion& value) { SetOutputConversion(value); return *this;}
    inline UpdateTransformerRequest& WithOutputConversion(OutputConversion&& value) { SetOutputConversion(std::move(value)); return *this;}
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
    inline UpdateTransformerRequest& WithSampleDocuments(const SampleDocuments& value) { SetSampleDocuments(value); return *this;}
    inline UpdateTransformerRequest& WithSampleDocuments(SampleDocuments&& value) { SetSampleDocuments(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TransformerStatus m_status;
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
