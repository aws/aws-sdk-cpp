/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/MetadataTransferJobStatus.h>
#include <aws/iottwinmaker/model/MetadataTransferJobProgress.h>
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
  class CancelMetadataTransferJobResult
  {
  public:
    AWS_IOTTWINMAKER_API CancelMetadataTransferJobResult();
    AWS_IOTTWINMAKER_API CancelMetadataTransferJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API CancelMetadataTransferJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CancelMetadataTransferJobResult& WithMetadataTransferJobId(const Aws::String& value) { SetMetadataTransferJobId(value); return *this;}

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CancelMetadataTransferJobResult& WithMetadataTransferJobId(Aws::String&& value) { SetMetadataTransferJobId(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job Id.</p>
     */
    inline CancelMetadataTransferJobResult& WithMetadataTransferJobId(const char* value) { SetMetadataTransferJobId(value); return *this;}


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
    inline CancelMetadataTransferJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline CancelMetadataTransferJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job ARN.</p>
     */
    inline CancelMetadataTransferJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Used to update the DateTime property.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>Used to update the DateTime property.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>Used to update the DateTime property.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>Used to update the DateTime property.</p>
     */
    inline CancelMetadataTransferJobResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>Used to update the DateTime property.</p>
     */
    inline CancelMetadataTransferJobResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The metadata transfer job's status.</p>
     */
    inline const MetadataTransferJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The metadata transfer job's status.</p>
     */
    inline void SetStatus(const MetadataTransferJobStatus& value) { m_status = value; }

    /**
     * <p>The metadata transfer job's status.</p>
     */
    inline void SetStatus(MetadataTransferJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The metadata transfer job's status.</p>
     */
    inline CancelMetadataTransferJobResult& WithStatus(const MetadataTransferJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The metadata transfer job's status.</p>
     */
    inline CancelMetadataTransferJobResult& WithStatus(MetadataTransferJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The metadata transfer job's progress.</p>
     */
    inline const MetadataTransferJobProgress& GetProgress() const{ return m_progress; }

    /**
     * <p>The metadata transfer job's progress.</p>
     */
    inline void SetProgress(const MetadataTransferJobProgress& value) { m_progress = value; }

    /**
     * <p>The metadata transfer job's progress.</p>
     */
    inline void SetProgress(MetadataTransferJobProgress&& value) { m_progress = std::move(value); }

    /**
     * <p>The metadata transfer job's progress.</p>
     */
    inline CancelMetadataTransferJobResult& WithProgress(const MetadataTransferJobProgress& value) { SetProgress(value); return *this;}

    /**
     * <p>The metadata transfer job's progress.</p>
     */
    inline CancelMetadataTransferJobResult& WithProgress(MetadataTransferJobProgress&& value) { SetProgress(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelMetadataTransferJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelMetadataTransferJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelMetadataTransferJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_metadataTransferJobId;

    Aws::String m_arn;

    Aws::Utils::DateTime m_updateDateTime;

    MetadataTransferJobStatus m_status;

    MetadataTransferJobProgress m_progress;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
