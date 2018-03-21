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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ParameterDefinition.h>
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
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationVersionResult
  {
  public:
    CreateApplicationVersionResult();
    CreateApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateApplicationVersionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline CreateApplicationVersionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline CreateApplicationVersionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The date/time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date/time this resource was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>The date/time this resource was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date/time this resource was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>The date/time this resource was created.</p>
     */
    inline CreateApplicationVersionResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date/time this resource was created.</p>
     */
    inline CreateApplicationVersionResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date/time this resource was created.</p>
     */
    inline CreateApplicationVersionResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>Array of parameter types supported by the application.</p>
     */
    inline const Aws::Vector<ParameterDefinition>& GetParameterDefinitions() const{ return m_parameterDefinitions; }

    /**
     * <p>Array of parameter types supported by the application.</p>
     */
    inline void SetParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { m_parameterDefinitions = value; }

    /**
     * <p>Array of parameter types supported by the application.</p>
     */
    inline void SetParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { m_parameterDefinitions = std::move(value); }

    /**
     * <p>Array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& WithParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { SetParameterDefinitions(value); return *this;}

    /**
     * <p>Array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& WithParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { SetParameterDefinitions(std::move(value)); return *this;}

    /**
     * <p>Array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& AddParameterDefinitions(const ParameterDefinition& value) { m_parameterDefinitions.push_back(value); return *this; }

    /**
     * <p>Array of parameter types supported by the application.</p>
     */
    inline CreateApplicationVersionResult& AddParameterDefinitions(ParameterDefinition&& value) { m_parameterDefinitions.push_back(std::move(value)); return *this; }


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
    inline CreateApplicationVersionResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>A link to a public repository for the source code of your application.</p>
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }

    /**
     * <p>A link to a public repository for the source code of your application.</p>
     */
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrl = value; }

    /**
     * <p>A link to a public repository for the source code of your application.</p>
     */
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrl = std::move(value); }

    /**
     * <p>A link to a public repository for the source code of your application.</p>
     */
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrl.assign(value); }

    /**
     * <p>A link to a public repository for the source code of your application.</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application.</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application.</p>
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}


    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrl = value; }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrl = std::move(value); }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrl.assign(value); }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_creationTime;

    Aws::Vector<ParameterDefinition> m_parameterDefinitions;

    Aws::String m_semanticVersion;

    Aws::String m_sourceCodeUrl;

    Aws::String m_templateUrl;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
