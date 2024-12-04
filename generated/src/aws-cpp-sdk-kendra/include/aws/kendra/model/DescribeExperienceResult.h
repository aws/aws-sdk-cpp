/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ExperienceConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/ExperienceStatus.h>
#include <aws/kendra/model/ExperienceEndpoint.h>
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
namespace kendra
{
namespace Model
{
  class DescribeExperienceResult
  {
  public:
    AWS_KENDRA_API DescribeExperienceResult();
    AWS_KENDRA_API DescribeExperienceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeExperienceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows the identifier of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribeExperienceResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeExperienceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeExperienceResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the identifier of the index for your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }
    inline DescribeExperienceResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline DescribeExperienceResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline DescribeExperienceResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the name of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeExperienceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeExperienceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeExperienceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the endpoint URLs for your Amazon Kendra experiences. The URLs are
     * unique and fully hosted by Amazon Web Services.</p>
     */
    inline const Aws::Vector<ExperienceEndpoint>& GetEndpoints() const{ return m_endpoints; }
    inline void SetEndpoints(const Aws::Vector<ExperienceEndpoint>& value) { m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<ExperienceEndpoint>&& value) { m_endpoints = std::move(value); }
    inline DescribeExperienceResult& WithEndpoints(const Aws::Vector<ExperienceEndpoint>& value) { SetEndpoints(value); return *this;}
    inline DescribeExperienceResult& WithEndpoints(Aws::Vector<ExperienceEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline DescribeExperienceResult& AddEndpoints(const ExperienceEndpoint& value) { m_endpoints.push_back(value); return *this; }
    inline DescribeExperienceResult& AddEndpoints(ExperienceEndpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Shows the configuration information for your Amazon Kendra experience. This
     * includes <code>ContentSourceConfiguration</code>, which specifies the data
     * source IDs and/or FAQ IDs, and <code>UserIdentityConfiguration</code>, which
     * specifies the user or group information to grant access to your Amazon Kendra
     * experience.</p>
     */
    inline const ExperienceConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const ExperienceConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(ExperienceConfiguration&& value) { m_configuration = std::move(value); }
    inline DescribeExperienceResult& WithConfiguration(const ExperienceConfiguration& value) { SetConfiguration(value); return *this;}
    inline DescribeExperienceResult& WithConfiguration(ExperienceConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when your Amazon Kendra experience was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeExperienceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeExperienceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when your Amazon Kendra experience was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline DescribeExperienceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DescribeExperienceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the description for your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeExperienceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeExperienceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeExperienceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current processing status of your Amazon Kendra experience. When the
     * status is <code>ACTIVE</code>, your Amazon Kendra experience is ready to use.
     * When the status is <code>FAILED</code>, the <code>ErrorMessage</code> field
     * contains the reason that this failed.</p>
     */
    inline const ExperienceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExperienceStatus& value) { m_status = value; }
    inline void SetStatus(ExperienceStatus&& value) { m_status = std::move(value); }
    inline DescribeExperienceResult& WithStatus(const ExperienceStatus& value) { SetStatus(value); return *this;}
    inline DescribeExperienceResult& WithStatus(ExperienceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permission to access the
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and IAM Identity Center that stores your users
     * and groups information.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeExperienceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeExperienceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeExperienceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason your Amazon Kendra experience could not properly process.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeExperienceResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeExperienceResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeExperienceResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeExperienceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeExperienceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeExperienceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_indexId;

    Aws::String m_name;

    Aws::Vector<ExperienceEndpoint> m_endpoints;

    ExperienceConfiguration m_configuration;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_description;

    ExperienceStatus m_status;

    Aws::String m_roleArn;

    Aws::String m_errorMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
