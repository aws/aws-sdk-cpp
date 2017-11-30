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
     * The application Amazon Resource Name (ARN).
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateApplicationVersionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateApplicationVersionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateApplicationVersionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The date/time this resource was created.
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * The date/time this resource was created.
     */
    inline CreateApplicationVersionResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline CreateApplicationVersionResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline CreateApplicationVersionResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * Array of parameter types supported by the application.
     */
    inline const Aws::Vector<ParameterDefinition>& GetParameterDefinitions() const{ return m_parameterDefinitions; }

    /**
     * Array of parameter types supported by the application.
     */
    inline void SetParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { m_parameterDefinitions = value; }

    /**
     * Array of parameter types supported by the application.
     */
    inline void SetParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { m_parameterDefinitions = std::move(value); }

    /**
     * Array of parameter types supported by the application.
     */
    inline CreateApplicationVersionResult& WithParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { SetParameterDefinitions(value); return *this;}

    /**
     * Array of parameter types supported by the application.
     */
    inline CreateApplicationVersionResult& WithParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { SetParameterDefinitions(std::move(value)); return *this;}

    /**
     * Array of parameter types supported by the application.
     */
    inline CreateApplicationVersionResult& AddParameterDefinitions(const ParameterDefinition& value) { m_parameterDefinitions.push_back(value); return *this; }

    /**
     * Array of parameter types supported by the application.
     */
    inline CreateApplicationVersionResult& AddParameterDefinitions(ParameterDefinition&& value) { m_parameterDefinitions.push_back(std::move(value)); return *this; }


    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersion = value; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersion = std::move(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersion.assign(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateApplicationVersionResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * A link to a public repository for the source code of your application.
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrl = value; }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrl = std::move(value); }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrl.assign(value); }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * A link to a public repository for the source code of your application.
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * A link to a public repository for the source code of your application.
     */
    inline CreateApplicationVersionResult& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}


    /**
     * A link to the packaged SAM template of your application.
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrl = value; }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrl = std::move(value); }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrl.assign(value); }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * A link to the packaged SAM template of your application.
     */
    inline CreateApplicationVersionResult& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * A link to the packaged SAM template of your application.
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
