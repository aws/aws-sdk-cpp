/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/BulkDeploymentMetrics.h>
#include <aws/greengrass/model/BulkDeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrass/model/ErrorDetail.h>
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
namespace Greengrass
{
namespace Model
{
  class AWS_GREENGRASS_API GetBulkDeploymentStatusResult
  {
  public:
    GetBulkDeploymentStatusResult();
    GetBulkDeploymentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBulkDeploymentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Relevant metrics on input records processed during bulk deployment.
     */
    inline const BulkDeploymentMetrics& GetBulkDeploymentMetrics() const{ return m_bulkDeploymentMetrics; }

    /**
     * Relevant metrics on input records processed during bulk deployment.
     */
    inline void SetBulkDeploymentMetrics(const BulkDeploymentMetrics& value) { m_bulkDeploymentMetrics = value; }

    /**
     * Relevant metrics on input records processed during bulk deployment.
     */
    inline void SetBulkDeploymentMetrics(BulkDeploymentMetrics&& value) { m_bulkDeploymentMetrics = std::move(value); }

    /**
     * Relevant metrics on input records processed during bulk deployment.
     */
    inline GetBulkDeploymentStatusResult& WithBulkDeploymentMetrics(const BulkDeploymentMetrics& value) { SetBulkDeploymentMetrics(value); return *this;}

    /**
     * Relevant metrics on input records processed during bulk deployment.
     */
    inline GetBulkDeploymentStatusResult& WithBulkDeploymentMetrics(BulkDeploymentMetrics&& value) { SetBulkDeploymentMetrics(std::move(value)); return *this;}


    /**
     * The status of the bulk deployment.
     */
    inline const BulkDeploymentStatus& GetBulkDeploymentStatus() const{ return m_bulkDeploymentStatus; }

    /**
     * The status of the bulk deployment.
     */
    inline void SetBulkDeploymentStatus(const BulkDeploymentStatus& value) { m_bulkDeploymentStatus = value; }

    /**
     * The status of the bulk deployment.
     */
    inline void SetBulkDeploymentStatus(BulkDeploymentStatus&& value) { m_bulkDeploymentStatus = std::move(value); }

    /**
     * The status of the bulk deployment.
     */
    inline GetBulkDeploymentStatusResult& WithBulkDeploymentStatus(const BulkDeploymentStatus& value) { SetBulkDeploymentStatus(value); return *this;}

    /**
     * The status of the bulk deployment.
     */
    inline GetBulkDeploymentStatusResult& WithBulkDeploymentStatus(BulkDeploymentStatus&& value) { SetBulkDeploymentStatus(std::move(value)); return *this;}


    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline GetBulkDeploymentStatusResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline GetBulkDeploymentStatusResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * The time, in ISO format, when the deployment was created.
     */
    inline GetBulkDeploymentStatusResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * Error details
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * Error details
     */
    inline void SetErrorDetails(const Aws::Vector<ErrorDetail>& value) { m_errorDetails = value; }

    /**
     * Error details
     */
    inline void SetErrorDetails(Aws::Vector<ErrorDetail>&& value) { m_errorDetails = std::move(value); }

    /**
     * Error details
     */
    inline GetBulkDeploymentStatusResult& WithErrorDetails(const Aws::Vector<ErrorDetail>& value) { SetErrorDetails(value); return *this;}

    /**
     * Error details
     */
    inline GetBulkDeploymentStatusResult& WithErrorDetails(Aws::Vector<ErrorDetail>&& value) { SetErrorDetails(std::move(value)); return *this;}

    /**
     * Error details
     */
    inline GetBulkDeploymentStatusResult& AddErrorDetails(const ErrorDetail& value) { m_errorDetails.push_back(value); return *this; }

    /**
     * Error details
     */
    inline GetBulkDeploymentStatusResult& AddErrorDetails(ErrorDetail&& value) { m_errorDetails.push_back(std::move(value)); return *this; }


    /**
     * Error message
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * Error message
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * Error message
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * Error message
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * Error message
     */
    inline GetBulkDeploymentStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * Error message
     */
    inline GetBulkDeploymentStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * Error message
     */
    inline GetBulkDeploymentStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * The tags for the definition.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The tags for the definition.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * The tags for the definition.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags for the definition.
     */
    inline GetBulkDeploymentStatusResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    BulkDeploymentMetrics m_bulkDeploymentMetrics;

    BulkDeploymentStatus m_bulkDeploymentStatus;

    Aws::String m_createdAt;

    Aws::Vector<ErrorDetail> m_errorDetails;

    Aws::String m_errorMessage;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
