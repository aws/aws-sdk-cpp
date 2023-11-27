/**
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
  class UpdateTransformerResult
  {
  public:
    AWS_B2BI_API UpdateTransformerResult();
    AWS_B2BI_API UpdateTransformerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API UpdateTransformerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const Aws::String& value) { m_transformerId = value; }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(Aws::String&& value) { m_transformerId = std::move(value); }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline void SetTransformerId(const char* value) { m_transformerId.assign(value); }

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline UpdateTransformerResult& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline UpdateTransformerResult& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}

    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline UpdateTransformerResult& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}


    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline const Aws::String& GetTransformerArn() const{ return m_transformerArn; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetTransformerArn(const Aws::String& value) { m_transformerArn = value; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetTransformerArn(Aws::String&& value) { m_transformerArn = std::move(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline void SetTransformerArn(const char* value) { m_transformerArn.assign(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline UpdateTransformerResult& WithTransformerArn(const Aws::String& value) { SetTransformerArn(value); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline UpdateTransformerResult& WithTransformerArn(Aws::String&& value) { SetTransformerArn(std::move(value)); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for a specific Amazon Web Services
     * resource, such as a capability, partnership, profile, or transformer.</p>
     */
    inline UpdateTransformerResult& WithTransformerArn(const char* value) { SetTransformerArn(value); return *this;}


    /**
     * <p>Returns the name of the transformer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Returns the name of the transformer.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Returns the name of the transformer.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Returns the name of the transformer.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Returns the name of the transformer.</p>
     */
    inline UpdateTransformerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Returns the name of the transformer.</p>
     */
    inline UpdateTransformerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the transformer.</p>
     */
    inline UpdateTransformerResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline const FileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(const FileFormat& value) { m_fileFormat = value; }

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline void SetFileFormat(FileFormat&& value) { m_fileFormat = std::move(value); }

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline UpdateTransformerResult& WithFileFormat(const FileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>Returns that the currently supported file formats for EDI transformations are
     * <code>JSON</code> and <code>XML</code>.</p>
     */
    inline UpdateTransformerResult& WithFileFormat(FileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline const Aws::String& GetMappingTemplate() const{ return m_mappingTemplate; }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const Aws::String& value) { m_mappingTemplate = value; }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(Aws::String&& value) { m_mappingTemplate = std::move(value); }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline void SetMappingTemplate(const char* value) { m_mappingTemplate.assign(value); }

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline UpdateTransformerResult& WithMappingTemplate(const Aws::String& value) { SetMappingTemplate(value); return *this;}

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline UpdateTransformerResult& WithMappingTemplate(Aws::String&& value) { SetMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the mapping template for the transformer. This template
     * is used to convert the input document into the correct set of objects.</p>
     */
    inline UpdateTransformerResult& WithMappingTemplate(const char* value) { SetMappingTemplate(value); return *this;}


    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline const TransformerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline void SetStatus(const TransformerStatus& value) { m_status = value; }

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline void SetStatus(TransformerStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline UpdateTransformerResult& WithStatus(const TransformerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline UpdateTransformerResult& WithStatus(TransformerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const EdiType& GetEdiType() const{ return m_ediType; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(const EdiType& value) { m_ediType = value; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetEdiType(EdiType&& value) { m_ediType = std::move(value); }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline UpdateTransformerResult& WithEdiType(const EdiType& value) { SetEdiType(value); return *this;}

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline UpdateTransformerResult& WithEdiType(EdiType&& value) { SetEdiType(std::move(value)); return *this;}


    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline const Aws::String& GetSampleDocument() const{ return m_sampleDocument; }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(const Aws::String& value) { m_sampleDocument = value; }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(Aws::String&& value) { m_sampleDocument = std::move(value); }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline void SetSampleDocument(const char* value) { m_sampleDocument.assign(value); }

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline UpdateTransformerResult& WithSampleDocument(const Aws::String& value) { SetSampleDocument(value); return *this;}

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline UpdateTransformerResult& WithSampleDocument(Aws::String&& value) { SetSampleDocument(std::move(value)); return *this;}

    /**
     * <p>Returns a sample EDI document that is used by a transformer as a guide for
     * processing the EDI data.</p>
     */
    inline UpdateTransformerResult& WithSampleDocument(const char* value) { SetSampleDocument(value); return *this;}


    /**
     * <p>Returns a timestamp for creation date and time of the transformer.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Returns a timestamp for creation date and time of the transformer.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Returns a timestamp for creation date and time of the transformer.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Returns a timestamp for creation date and time of the transformer.</p>
     */
    inline UpdateTransformerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Returns a timestamp for creation date and time of the transformer.</p>
     */
    inline UpdateTransformerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Returns a timestamp for last time the transformer was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>Returns a timestamp for last time the transformer was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>Returns a timestamp for last time the transformer was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>Returns a timestamp for last time the transformer was modified.</p>
     */
    inline UpdateTransformerResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>Returns a timestamp for last time the transformer was modified.</p>
     */
    inline UpdateTransformerResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTransformerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTransformerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTransformerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
