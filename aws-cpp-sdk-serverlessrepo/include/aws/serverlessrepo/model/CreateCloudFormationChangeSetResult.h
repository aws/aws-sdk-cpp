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
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateCloudFormationChangeSetResult
  {
  public:
    CreateCloudFormationChangeSetResult();
    CreateCloudFormationChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCloudFormationChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateCloudFormationChangeSetResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateCloudFormationChangeSetResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateCloudFormationChangeSetResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The ARN of the change set.\nLength Constraints: Minimum length of 1.\nPattern:
     * arn:[-a-zA-Z0-9:/]*
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * The ARN of the change set.\nLength Constraints: Minimum length of 1.\nPattern:
     * arn:[-a-zA-Z0-9:/]*
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetId = value; }

    /**
     * The ARN of the change set.\nLength Constraints: Minimum length of 1.\nPattern:
     * arn:[-a-zA-Z0-9:/]*
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetId = std::move(value); }

    /**
     * The ARN of the change set.\nLength Constraints: Minimum length of 1.\nPattern:
     * arn:[-a-zA-Z0-9:/]*
     */
    inline void SetChangeSetId(const char* value) { m_changeSetId.assign(value); }

    /**
     * The ARN of the change set.\nLength Constraints: Minimum length of 1.\nPattern:
     * arn:[-a-zA-Z0-9:/]*
     */
    inline CreateCloudFormationChangeSetResult& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * The ARN of the change set.\nLength Constraints: Minimum length of 1.\nPattern:
     * arn:[-a-zA-Z0-9:/]*
     */
    inline CreateCloudFormationChangeSetResult& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}

    /**
     * The ARN of the change set.\nLength Constraints: Minimum length of 1.\nPattern:
     * arn:[-a-zA-Z0-9:/]*
     */
    inline CreateCloudFormationChangeSetResult& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}


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
    inline CreateCloudFormationChangeSetResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateCloudFormationChangeSetResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateCloudFormationChangeSetResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * The unique ID of the stack.
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * The unique ID of the stack.
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * The unique ID of the stack.
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * The unique ID of the stack.
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * The unique ID of the stack.
     */
    inline CreateCloudFormationChangeSetResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * The unique ID of the stack.
     */
    inline CreateCloudFormationChangeSetResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * The unique ID of the stack.
     */
    inline CreateCloudFormationChangeSetResult& WithStackId(const char* value) { SetStackId(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_changeSetId;

    Aws::String m_semanticVersion;

    Aws::String m_stackId;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
