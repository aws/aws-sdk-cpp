/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ScheduleConfiguration.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class CreateDataIntegrationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationResult();
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN)</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN)</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN)</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN)</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN)</p>
     */
    inline CreateDataIntegrationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN)</p>
     */
    inline CreateDataIntegrationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN)</p>
     */
    inline CreateDataIntegrationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>A unique identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>A unique identifier.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>A unique identifier.</p>
     */
    inline CreateDataIntegrationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier.</p>
     */
    inline CreateDataIntegrationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier.</p>
     */
    inline CreateDataIntegrationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKey = value; }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKey = std::move(value); }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKey.assign(value); }

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>The KMS key for the DataIntegration.</p>
     */
    inline CreateDataIntegrationResult& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p>The URI of the data source.</p>
     */
    inline const Aws::String& GetSourceURI() const{ return m_sourceURI; }

    /**
     * <p>The URI of the data source.</p>
     */
    inline void SetSourceURI(const Aws::String& value) { m_sourceURI = value; }

    /**
     * <p>The URI of the data source.</p>
     */
    inline void SetSourceURI(Aws::String&& value) { m_sourceURI = std::move(value); }

    /**
     * <p>The URI of the data source.</p>
     */
    inline void SetSourceURI(const char* value) { m_sourceURI.assign(value); }

    /**
     * <p>The URI of the data source.</p>
     */
    inline CreateDataIntegrationResult& WithSourceURI(const Aws::String& value) { SetSourceURI(value); return *this;}

    /**
     * <p>The URI of the data source.</p>
     */
    inline CreateDataIntegrationResult& WithSourceURI(Aws::String&& value) { SetSourceURI(std::move(value)); return *this;}

    /**
     * <p>The URI of the data source.</p>
     */
    inline CreateDataIntegrationResult& WithSourceURI(const char* value) { SetSourceURI(value); return *this;}


    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfiguration = value; }

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfiguration = std::move(value); }

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline CreateDataIntegrationResult& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}

    /**
     * <p>The name of the data and how often it should be pulled from the source.</p>
     */
    inline CreateDataIntegrationResult& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateDataIntegrationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDataIntegrationResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDataIntegrationResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateDataIntegrationResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_kmsKey;

    Aws::String m_sourceURI;

    ScheduleConfiguration m_scheduleConfiguration;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_clientToken;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
