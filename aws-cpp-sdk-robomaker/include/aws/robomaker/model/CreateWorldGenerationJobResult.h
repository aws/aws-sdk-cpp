/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldGenerationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/WorldGenerationJobErrorCode.h>
#include <aws/robomaker/model/WorldCount.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace RoboMaker
{
namespace Model
{
  class CreateWorldGenerationJobResult
  {
  public:
    AWS_ROBOMAKER_API CreateWorldGenerationJobResult();
    AWS_ROBOMAKER_API CreateWorldGenerationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API CreateWorldGenerationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline CreateWorldGenerationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline CreateWorldGenerationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world generator job.</p>
     */
    inline CreateWorldGenerationJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the world generator job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world generator job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world generator job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * generator job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world generator
     * job failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>PartialFailed</dt> <dd> <p>Some worlds did not generate.</p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world generator job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world generator job is being cancelled.</p> </dd>
     * </dl>
     */
    inline const WorldGenerationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the world generator job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world generator job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world generator job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * generator job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world generator
     * job failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>PartialFailed</dt> <dd> <p>Some worlds did not generate.</p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world generator job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world generator job is being cancelled.</p> </dd>
     * </dl>
     */
    inline void SetStatus(const WorldGenerationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the world generator job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world generator job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world generator job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * generator job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world generator
     * job failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>PartialFailed</dt> <dd> <p>Some worlds did not generate.</p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world generator job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world generator job is being cancelled.</p> </dd>
     * </dl>
     */
    inline void SetStatus(WorldGenerationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the world generator job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world generator job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world generator job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * generator job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world generator
     * job failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>PartialFailed</dt> <dd> <p>Some worlds did not generate.</p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world generator job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world generator job is being cancelled.</p> </dd>
     * </dl>
     */
    inline CreateWorldGenerationJobResult& WithStatus(const WorldGenerationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the world generator job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world generator job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world generator job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * generator job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world generator
     * job failed. See <code>failureCode</code> for more information. </p> </dd>
     * <dt>PartialFailed</dt> <dd> <p>Some worlds did not generate.</p> </dd>
     * <dt>Canceled</dt> <dd> <p>The world generator job was cancelled.</p> </dd>
     * <dt>Canceling</dt> <dd> <p>The world generator job is being cancelled.</p> </dd>
     * </dl>
     */
    inline CreateWorldGenerationJobResult& WithStatus(WorldGenerationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the world generator job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world generator job was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world generator job was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the world generator job was
     * created.</p>
     */
    inline CreateWorldGenerationJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the world generator job was
     * created.</p>
     */
    inline CreateWorldGenerationJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The failure code of the world generator job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline const WorldGenerationJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code of the world generator job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline void SetFailureCode(const WorldGenerationJobErrorCode& value) { m_failureCode = value; }

    /**
     * <p>The failure code of the world generator job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline void SetFailureCode(WorldGenerationJobErrorCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code of the world generator job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline CreateWorldGenerationJobResult& WithFailureCode(const WorldGenerationJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code of the world generator job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline CreateWorldGenerationJobResult& WithFailureCode(WorldGenerationJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldGenerationJobResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldGenerationJobResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldGenerationJobResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_template = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_template = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline void SetTemplate(const char* value) { m_template.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline CreateWorldGenerationJobResult& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline CreateWorldGenerationJobResult& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template.</p>
     */
    inline CreateWorldGenerationJobResult& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>Information about the world count. </p>
     */
    inline const WorldCount& GetWorldCount() const{ return m_worldCount; }

    /**
     * <p>Information about the world count. </p>
     */
    inline void SetWorldCount(const WorldCount& value) { m_worldCount = value; }

    /**
     * <p>Information about the world count. </p>
     */
    inline void SetWorldCount(WorldCount&& value) { m_worldCount = std::move(value); }

    /**
     * <p>Information about the world count. </p>
     */
    inline CreateWorldGenerationJobResult& WithWorldCount(const WorldCount& value) { SetWorldCount(value); return *this;}

    /**
     * <p>Information about the world count. </p>
     */
    inline CreateWorldGenerationJobResult& WithWorldCount(WorldCount&& value) { SetWorldCount(std::move(value)); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWorldTags() const{ return m_worldTags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline void SetWorldTags(const Aws::Map<Aws::String, Aws::String>& value) { m_worldTags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline void SetWorldTags(Aws::Map<Aws::String, Aws::String>&& value) { m_worldTags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& WithWorldTags(const Aws::Map<Aws::String, Aws::String>& value) { SetWorldTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& WithWorldTags(Aws::Map<Aws::String, Aws::String>&& value) { SetWorldTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& AddWorldTags(const Aws::String& key, const Aws::String& value) { m_worldTags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& AddWorldTags(Aws::String&& key, const Aws::String& value) { m_worldTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& AddWorldTags(const Aws::String& key, Aws::String&& value) { m_worldTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& AddWorldTags(Aws::String&& key, Aws::String&& value) { m_worldTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& AddWorldTags(const char* key, Aws::String&& value) { m_worldTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& AddWorldTags(Aws::String&& key, const char* value) { m_worldTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobResult& AddWorldTags(const char* key, const char* value) { m_worldTags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    WorldGenerationJobStatus m_status;

    Aws::Utils::DateTime m_createdAt;

    WorldGenerationJobErrorCode m_failureCode;

    Aws::String m_clientRequestToken;

    Aws::String m_template;

    WorldCount m_worldCount;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Map<Aws::String, Aws::String> m_worldTags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
