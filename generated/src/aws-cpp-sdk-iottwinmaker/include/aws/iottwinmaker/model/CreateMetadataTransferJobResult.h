/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/MetadataTransferJobStatus.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class CreateMetadataTransferJobResult
  {
  public:
    AWS_IOTTWINMAKER_API CreateMetadataTransferJobResult();
    AWS_IOTTWINMAKER_API CreateMetadataTransferJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API CreateMetadataTransferJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline const Aws::String& GetMetadataTransferJobId() const{ return m_metadataTransferJobId; }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline void SetMetadataTransferJobId(const Aws::String& value) { m_metadataTransferJobId = value; }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline void SetMetadataTransferJobId(Aws::String&& value) { m_metadataTransferJobId = std::move(value); }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline void SetMetadataTransferJobId(const char* value) { m_metadataTransferJobId.assign(value); }

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CreateMetadataTransferJobResult& WithMetadataTransferJobId(const Aws::String& value) { SetMetadataTransferJobId(value); return *this;}

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CreateMetadataTransferJobResult& WithMetadataTransferJobId(Aws::String&& value) { SetMetadataTransferJobId(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CreateMetadataTransferJobResult& WithMetadataTransferJobId(const char* value) { SetMetadataTransferJobId(value); return *this;}


    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline CreateMetadataTransferJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline CreateMetadataTransferJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline CreateMetadataTransferJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The The metadata transfer job creation DateTime property.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The The metadata transfer job creation DateTime property.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The The metadata transfer job creation DateTime property.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The The metadata transfer job creation DateTime property.</p>
     */
    inline CreateMetadataTransferJobResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The The metadata transfer job creation DateTime property.</p>
     */
    inline CreateMetadataTransferJobResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The metadata transfer job response status.</p>
     */
    inline const MetadataTransferJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The metadata transfer job response status.</p>
     */
    inline void SetStatus(const MetadataTransferJobStatus& value) { m_status = value; }

    /**
     * <p>The metadata transfer job response status.</p>
     */
    inline void SetStatus(MetadataTransferJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The metadata transfer job response status.</p>
     */
    inline CreateMetadataTransferJobResult& WithStatus(const MetadataTransferJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The metadata transfer job response status.</p>
     */
    inline CreateMetadataTransferJobResult& WithStatus(MetadataTransferJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMetadataTransferJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMetadataTransferJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMetadataTransferJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_metadataTransferJobId;

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDateTime;

    MetadataTransferJobStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
