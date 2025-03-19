/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/TransformerStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/b2bi/model/InputConversion.h>
#include <aws/b2bi/model/Mapping.h>
#include <aws/b2bi/model/OutputConversion.h>
#include <aws/b2bi/model/SampleDocuments.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace B2BI
{
namespace Model
{
  class GetTransformerResult
  {
  public:
    AWS_B2BI_API GetTransformerResult() = default;
    AWS_B2BI_API GetTransformerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API GetTransformerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const { return m_transformerId; }
    template<typename TransformerIdT = Aws::String>
    void SetTransformerId(TransformerIdT&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::forward<TransformerIdT>(value); }
    template<typename TransformerIdT = Aws::String>
    GetTransformerResult& WithTransformerId(TransformerIdT&& value) { SetTransformerId(std::forward<TransformerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetTransformerArn() const { return m_transformerArn; }
    template<typename TransformerArnT = Aws::String>
    void SetTransformerArn(TransformerArnT&& value) { m_transformerArnHasBeenSet = true; m_transformerArn = std::forward<TransformerArnT>(value); }
    template<typename TransformerArnT = Aws::String>
    GetTransformerResult& WithTransformerArn(TransformerArnT&& value) { SetTransformerArn(std::forward<TransformerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the transformer, used to identify it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetTransformerResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline TransformerStatus GetStatus() const { return m_status; }
    inline void SetStatus(TransformerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTransformerResult& WithStatus(TransformerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for creation date and time of the transformer.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetTransformerResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for last time the transformer was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    GetTransformerResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>InputConversion</code> object, which contains the format
     * options for the inbound transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const { return m_inputConversion; }
    template<typename InputConversionT = InputConversion>
    void SetInputConversion(InputConversionT&& value) { m_inputConversionHasBeenSet = true; m_inputConversion = std::forward<InputConversionT>(value); }
    template<typename InputConversionT = InputConversion>
    GetTransformerResult& WithInputConversion(InputConversionT&& value) { SetInputConversion(std::forward<InputConversionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the structure that contains the mapping template and its language
     * (either XSLT or JSONATA).</p>
     */
    inline const Mapping& GetMapping() const { return m_mapping; }
    template<typename MappingT = Mapping>
    void SetMapping(MappingT&& value) { m_mappingHasBeenSet = true; m_mapping = std::forward<MappingT>(value); }
    template<typename MappingT = Mapping>
    GetTransformerResult& WithMapping(MappingT&& value) { SetMapping(std::forward<MappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>OutputConversion</code> object, which contains the format
     * options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const { return m_outputConversion; }
    template<typename OutputConversionT = OutputConversion>
    void SetOutputConversion(OutputConversionT&& value) { m_outputConversionHasBeenSet = true; m_outputConversion = std::forward<OutputConversionT>(value); }
    template<typename OutputConversionT = OutputConversion>
    GetTransformerResult& WithOutputConversion(OutputConversionT&& value) { SetOutputConversion(std::forward<OutputConversionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a structure that contains the Amazon S3 bucket and an array of the
     * corresponding keys used to identify the location for your sample documents.</p>
     */
    inline const SampleDocuments& GetSampleDocuments() const { return m_sampleDocuments; }
    template<typename SampleDocumentsT = SampleDocuments>
    void SetSampleDocuments(SampleDocumentsT&& value) { m_sampleDocumentsHasBeenSet = true; m_sampleDocuments = std::forward<SampleDocumentsT>(value); }
    template<typename SampleDocumentsT = SampleDocuments>
    GetTransformerResult& WithSampleDocuments(SampleDocumentsT&& value) { SetSampleDocuments(std::forward<SampleDocumentsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTransformerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_transformerArn;
    bool m_transformerArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TransformerStatus m_status{TransformerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    InputConversion m_inputConversion;
    bool m_inputConversionHasBeenSet = false;

    Mapping m_mapping;
    bool m_mappingHasBeenSet = false;

    OutputConversion m_outputConversion;
    bool m_outputConversionHasBeenSet = false;

    SampleDocuments m_sampleDocuments;
    bool m_sampleDocumentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
