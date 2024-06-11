﻿/**
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
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }
    inline void SetFileFormat(const FileFormat& value) { m_fileFormat = value; }
    inline void SetFileFormat(FileFormat&& value) { m_fileFormat = std::move(value); }
    inline GetTransformerResult& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}
    inline GetTransformerResult& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the mapping template for the transformer. This template is used to
     * map the parsed EDI file using JSONata or XSLT.</p>
     */
    inline const Aws::String& GetMappingTemplate() const{ return m_mappingTemplate; }
    inline void SetMappingTemplate(const Aws::String& value) { m_mappingTemplate = value; }
    inline void SetMappingTemplate(Aws::String&& value) { m_mappingTemplate = std::move(value); }
    inline void SetMappingTemplate(const char* value) { m_mappingTemplate.assign(value); }
    inline GetTransformerResult& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}
    inline GetTransformerResult& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}
    inline GetTransformerResult& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}
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
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const EdiType& GetEdiType() const{ return m_ediType; }
    inline void SetEdiType(const EdiType& value) { m_ediType = value; }
    inline void SetEdiType(EdiType&& value) { m_ediType = std::move(value); }
    inline GetTransformerResult& WithEdiType(const EdiType& value) { SetEdiType(value); return *this;}
    inline GetTransformerResult& WithEdiType(EdiType&& value) { SetEdiType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline const Aws::String& GetSampleDocument() const{ return m_sampleDocument; }
    inline void SetSampleDocument(const Aws::String& value) { m_sampleDocument = value; }
    inline void SetSampleDocument(Aws::String&& value) { m_sampleDocument = std::move(value); }
    inline void SetSampleDocument(const char* value) { m_sampleDocument.assign(value); }
    inline GetTransformerResult& WithSampleDocument(const Aws::String& value) { SetSampleDocument(value); return *this;}
    inline GetTransformerResult& WithSampleDocument(Aws::String&& value) { SetSampleDocument(std::move(value)); return *this;}
    inline GetTransformerResult& WithSampleDocument(const char* value) { SetSampleDocument(value); return *this;}
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

    FileFormat m_fileFormat;

    Aws::String m_mappingTemplate;

    TransformerStatus m_status;

    EdiType m_ediType;

    Aws::String m_sampleDocument;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
