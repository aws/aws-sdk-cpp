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
    AWS_B2BI_API GetTransformerResult();
    AWS_B2BI_API GetTransformerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API GetTransformerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }
    inline void SetTransformerId(const Aws::String& value) { m_transformerId = value; }
    inline void SetTransformerId(Aws::String&& value) { m_transformerId = std::move(value); }
    inline void SetTransformerId(const char* value) { m_transformerId.assign(value); }
    inline GetTransformerResult& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}
    inline GetTransformerResult& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}
    inline GetTransformerResult& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetTransformerArn() const{ return m_transformerArn; }
    inline void SetTransformerArn(const Aws::String& value) { m_transformerArn = value; }
    inline void SetTransformerArn(Aws::String&& value) { m_transformerArn = std::move(value); }
    inline void SetTransformerArn(const char* value) { m_transformerArn.assign(value); }
    inline GetTransformerResult& WithTransformerArn(const Aws::String& value) { SetTransformerArn(value); return *this;}
    inline GetTransformerResult& WithTransformerArn(Aws::String&& value) { SetTransformerArn(std::move(value)); return *this;}
    inline GetTransformerResult& WithTransformerArn(const char* value) { SetTransformerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the transformer, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTransformerResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTransformerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTransformerResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline const TransformerStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TransformerStatus& value) { m_status = value; }
    inline void SetStatus(TransformerStatus&& value) { m_status = std::move(value); }
    inline GetTransformerResult& WithStatus(const TransformerStatus& value) { SetStatus(value); return *this;}
    inline GetTransformerResult& WithStatus(TransformerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for creation date and time of the transformer.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetTransformerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetTransformerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp for last time the transformer was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline GetTransformerResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline GetTransformerResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>InputConversion</code> object, which contains the format
     * options for the inbound transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const{ return m_inputConversion; }
    inline void SetInputConversion(const InputConversion& value) { m_inputConversion = value; }
    inline void SetInputConversion(InputConversion&& value) { m_inputConversion = std::move(value); }
    inline GetTransformerResult& WithInputConversion(const InputConversion& value) { SetInputConversion(value); return *this;}
    inline GetTransformerResult& WithInputConversion(InputConversion&& value) { SetInputConversion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the structure that contains the mapping template and its language
     * (either XSLT or JSONATA).</p>
     */
    inline const Mapping& GetMapping() const{ return m_mapping; }
    inline void SetMapping(const Mapping& value) { m_mapping = value; }
    inline void SetMapping(Mapping&& value) { m_mapping = std::move(value); }
    inline GetTransformerResult& WithMapping(const Mapping& value) { SetMapping(value); return *this;}
    inline GetTransformerResult& WithMapping(Mapping&& value) { SetMapping(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>OutputConversion</code> object, which contains the format
     * options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const{ return m_outputConversion; }
    inline void SetOutputConversion(const OutputConversion& value) { m_outputConversion = value; }
    inline void SetOutputConversion(OutputConversion&& value) { m_outputConversion = std::move(value); }
    inline GetTransformerResult& WithOutputConversion(const OutputConversion& value) { SetOutputConversion(value); return *this;}
    inline GetTransformerResult& WithOutputConversion(OutputConversion&& value) { SetOutputConversion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a structure that contains the Amazon S3 bucket and an array of the
     * corresponding keys used to identify the location for your sample documents.</p>
     */
    inline const SampleDocuments& GetSampleDocuments() const{ return m_sampleDocuments; }
    inline void SetSampleDocuments(const SampleDocuments& value) { m_sampleDocuments = value; }
    inline void SetSampleDocuments(SampleDocuments&& value) { m_sampleDocuments = std::move(value); }
    inline GetTransformerResult& WithSampleDocuments(const SampleDocuments& value) { SetSampleDocuments(value); return *this;}
    inline GetTransformerResult& WithSampleDocuments(SampleDocuments&& value) { SetSampleDocuments(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTransformerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTransformerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTransformerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_transformerId;

    Aws::String m_transformerArn;

    Aws::String m_name;

    TransformerStatus m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    InputConversion m_inputConversion;

    Mapping m_mapping;

    OutputConversion m_outputConversion;

    SampleDocuments m_sampleDocuments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
