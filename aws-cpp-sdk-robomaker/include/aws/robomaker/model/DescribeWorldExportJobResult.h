/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldExportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/WorldExportJobErrorCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/OutputLocation.h>
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
  class DescribeWorldExportJobResult
  {
  public:
    AWS_ROBOMAKER_API DescribeWorldExportJobResult();
    AWS_ROBOMAKER_API DescribeWorldExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API DescribeWorldExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline DescribeWorldExportJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline DescribeWorldExportJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world export job.</p>
     */
    inline DescribeWorldExportJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> and <code>failureReason</code> for more
     * information. </p> </dd> <dt>Canceled</dt> <dd> <p>The world export job was
     * cancelled.</p> </dd> <dt>Canceling</dt> <dd> <p>The world export job is being
     * cancelled.</p> </dd> </dl>
     */
    inline const WorldExportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> and <code>failureReason</code> for more
     * information. </p> </dd> <dt>Canceled</dt> <dd> <p>The world export job was
     * cancelled.</p> </dd> <dt>Canceling</dt> <dd> <p>The world export job is being
     * cancelled.</p> </dd> </dl>
     */
    inline void SetStatus(const WorldExportJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> and <code>failureReason</code> for more
     * information. </p> </dd> <dt>Canceled</dt> <dd> <p>The world export job was
     * cancelled.</p> </dd> <dt>Canceling</dt> <dd> <p>The world export job is being
     * cancelled.</p> </dd> </dl>
     */
    inline void SetStatus(WorldExportJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> and <code>failureReason</code> for more
     * information. </p> </dd> <dt>Canceled</dt> <dd> <p>The world export job was
     * cancelled.</p> </dd> <dt>Canceling</dt> <dd> <p>The world export job is being
     * cancelled.</p> </dd> </dl>
     */
    inline DescribeWorldExportJobResult& WithStatus(const WorldExportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the world export job.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * world export job request is pending.</p> </dd> <dt>Running</dt> <dd> <p>The
     * world export job is running. </p> </dd> <dt>Completed</dt> <dd> <p>The world
     * export job completed. </p> </dd> <dt>Failed</dt> <dd> <p>The world export job
     * failed. See <code>failureCode</code> and <code>failureReason</code> for more
     * information. </p> </dd> <dt>Canceled</dt> <dd> <p>The world export job was
     * cancelled.</p> </dd> <dt>Canceling</dt> <dd> <p>The world export job is being
     * cancelled.</p> </dd> </dl>
     */
    inline DescribeWorldExportJobResult& WithStatus(WorldExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline DescribeWorldExportJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the world export job was
     * created.</p>
     */
    inline DescribeWorldExportJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline const WorldExportJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline void SetFailureCode(const WorldExportJobErrorCode& value) { m_failureCode = value; }

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline void SetFailureCode(WorldExportJobErrorCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline DescribeWorldExportJobResult& WithFailureCode(const WorldExportJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline DescribeWorldExportJobResult& WithFailureCode(WorldExportJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline DescribeWorldExportJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline DescribeWorldExportJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the world export job failed.</p>
     */
    inline DescribeWorldExportJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


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
    inline DescribeWorldExportJobResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeWorldExportJobResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeWorldExportJobResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorlds() const{ return m_worlds; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline void SetWorlds(const Aws::Vector<Aws::String>& value) { m_worlds = value; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline void SetWorlds(Aws::Vector<Aws::String>&& value) { m_worlds = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline DescribeWorldExportJobResult& WithWorlds(const Aws::Vector<Aws::String>& value) { SetWorlds(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline DescribeWorldExportJobResult& WithWorlds(Aws::Vector<Aws::String>&& value) { SetWorlds(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline DescribeWorldExportJobResult& AddWorlds(const Aws::String& value) { m_worlds.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline DescribeWorldExportJobResult& AddWorlds(Aws::String&& value) { m_worlds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to be
     * exported.</p>
     */
    inline DescribeWorldExportJobResult& AddWorlds(const char* value) { m_worlds.push_back(value); return *this; }


    
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocation = value; }

    
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocation = std::move(value); }

    
    inline DescribeWorldExportJobResult& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}

    
    inline DescribeWorldExportJobResult& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRole = value; }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRole = std::move(value); }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline void SetIamRole(const char* value) { m_iamRole.assign(value); }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline DescribeWorldExportJobResult& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline DescribeWorldExportJobResult& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline DescribeWorldExportJobResult& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline DescribeWorldExportJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    WorldExportJobStatus m_status;

    Aws::Utils::DateTime m_createdAt;

    WorldExportJobErrorCode m_failureCode;

    Aws::String m_failureReason;

    Aws::String m_clientRequestToken;

    Aws::Vector<Aws::String> m_worlds;

    OutputLocation m_outputLocation;

    Aws::String m_iamRole;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
