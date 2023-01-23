/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/SyncJobState.h>
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
  class CreateSyncJobResult
  {
  public:
    AWS_IOTTWINMAKER_API CreateSyncJobResult();
    AWS_IOTTWINMAKER_API CreateSyncJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API CreateSyncJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SyncJob ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The SyncJob ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The SyncJob ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The SyncJob ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The SyncJob ARN.</p>
     */
    inline CreateSyncJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The SyncJob ARN.</p>
     */
    inline CreateSyncJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The SyncJob ARN.</p>
     */
    inline CreateSyncJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time for the SyncJob creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time for the SyncJob creation.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time for the SyncJob creation.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time for the SyncJob creation.</p>
     */
    inline CreateSyncJobResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time for the SyncJob creation.</p>
     */
    inline CreateSyncJobResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The SyncJob response state.</p>
     */
    inline const SyncJobState& GetState() const{ return m_state; }

    /**
     * <p>The SyncJob response state.</p>
     */
    inline void SetState(const SyncJobState& value) { m_state = value; }

    /**
     * <p>The SyncJob response state.</p>
     */
    inline void SetState(SyncJobState&& value) { m_state = std::move(value); }

    /**
     * <p>The SyncJob response state.</p>
     */
    inline CreateSyncJobResult& WithState(const SyncJobState& value) { SetState(value); return *this;}

    /**
     * <p>The SyncJob response state.</p>
     */
    inline CreateSyncJobResult& WithState(SyncJobState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDateTime;

    SyncJobState m_state;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
