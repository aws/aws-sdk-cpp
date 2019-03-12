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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/serverlessrepo/model/Status.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetCloudFormationTemplateResult
  {
  public:
    GetCloudFormationTemplateResult();
    GetCloudFormationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCloudFormationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline GetCloudFormationTemplateResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline GetCloudFormationTemplateResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline GetCloudFormationTemplateResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline GetCloudFormationTemplateResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline GetCloudFormationTemplateResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline GetCloudFormationTemplateResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline const Aws::String& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline void SetExpirationTime(const Aws::String& value) { m_expirationTime = value; }

    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline void SetExpirationTime(Aws::String&& value) { m_expirationTime = std::move(value); }

    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline void SetExpirationTime(const char* value) { m_expirationTime.assign(value); }

    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline GetCloudFormationTemplateResult& WithExpirationTime(const Aws::String& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline GetCloudFormationTemplateResult& WithExpirationTime(Aws::String&& value) { SetExpirationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this template expires. Templates
 expire 1 hour after
     * creation.</p>
     */
    inline GetCloudFormationTemplateResult& WithExpirationTime(const char* value) { SetExpirationTime(value); return *this;}


    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersion = value; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline GetCloudFormationTemplateResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline GetCloudFormationTemplateResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline GetCloudFormationTemplateResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>Status of the template creation workflow.</p><p>Possible values: PREPARING |
     * ACTIVE | EXPIRED
 </p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the template creation workflow.</p><p>Possible values: PREPARING |
     * ACTIVE | EXPIRED
 </p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>Status of the template creation workflow.</p><p>Possible values: PREPARING |
     * ACTIVE | EXPIRED
 </p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>Status of the template creation workflow.</p><p>Possible values: PREPARING |
     * ACTIVE | EXPIRED
 </p>
     */
    inline GetCloudFormationTemplateResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the template creation workflow.</p><p>Possible values: PREPARING |
     * ACTIVE | EXPIRED
 </p>
     */
    inline GetCloudFormationTemplateResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }

    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }

    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }

    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline GetCloudFormationTemplateResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline GetCloudFormationTemplateResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The UUID returned by CreateCloudFormationTemplate.</p><p>Pattern:
     * [0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}</p>
     */
    inline GetCloudFormationTemplateResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrl = value; }

    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrl = std::move(value); }

    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrl.assign(value); }

    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline GetCloudFormationTemplateResult& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline GetCloudFormationTemplateResult& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the template that can be used to deploy the application using
 AWS
     * CloudFormation.</p>
     */
    inline GetCloudFormationTemplateResult& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_creationTime;

    Aws::String m_expirationTime;

    Aws::String m_semanticVersion;

    Status m_status;

    Aws::String m_templateId;

    Aws::String m_templateUrl;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
