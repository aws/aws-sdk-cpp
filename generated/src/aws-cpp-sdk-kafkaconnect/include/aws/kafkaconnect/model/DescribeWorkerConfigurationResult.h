/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/WorkerConfigurationRevisionDescription.h>
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
namespace KafkaConnect
{
namespace Model
{
  class DescribeWorkerConfigurationResult
  {
  public:
    AWS_KAFKACONNECT_API DescribeWorkerConfigurationResult();
    AWS_KAFKACONNECT_API DescribeWorkerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DescribeWorkerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline DescribeWorkerConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the worker configuration was created.</p>
     */
    inline DescribeWorkerConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of the worker configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the worker configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the worker configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the worker configuration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the worker configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the worker configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the worker configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The latest revision of the custom configuration.</p>
     */
    inline const WorkerConfigurationRevisionDescription& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * <p>The latest revision of the custom configuration.</p>
     */
    inline void SetLatestRevision(const WorkerConfigurationRevisionDescription& value) { m_latestRevision = value; }

    /**
     * <p>The latest revision of the custom configuration.</p>
     */
    inline void SetLatestRevision(WorkerConfigurationRevisionDescription&& value) { m_latestRevision = std::move(value); }

    /**
     * <p>The latest revision of the custom configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithLatestRevision(const WorkerConfigurationRevisionDescription& value) { SetLatestRevision(value); return *this;}

    /**
     * <p>The latest revision of the custom configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithLatestRevision(WorkerConfigurationRevisionDescription&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * <p>The name of the worker configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the custom configuration.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const{ return m_workerConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom configuration.</p>
     */
    inline void SetWorkerConfigurationArn(const Aws::String& value) { m_workerConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom configuration.</p>
     */
    inline void SetWorkerConfigurationArn(Aws::String&& value) { m_workerConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom configuration.</p>
     */
    inline void SetWorkerConfigurationArn(const char* value) { m_workerConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithWorkerConfigurationArn(const Aws::String& value) { SetWorkerConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithWorkerConfigurationArn(Aws::String&& value) { SetWorkerConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom configuration.</p>
     */
    inline DescribeWorkerConfigurationResult& WithWorkerConfigurationArn(const char* value) { SetWorkerConfigurationArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    WorkerConfigurationRevisionDescription m_latestRevision;

    Aws::String m_name;

    Aws::String m_workerConfigurationArn;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
