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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>An application version summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/VersionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API VersionSummary
  {
  public:
    VersionSummary();
    VersionSummary(Aws::Utils::Json::JsonView jsonValue);
    VersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline VersionSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline VersionSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline VersionSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline VersionSummary& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline VersionSummary& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline VersionSummary& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


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
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline VersionSummary& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline VersionSummary& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the application:</p><p>
 <a
     * href="https://semver.org/">https://semver.org/</a>
 </p>
     */
    inline VersionSummary& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline bool SourceCodeUrlHasBeenSet() const { return m_sourceCodeUrlHasBeenSet; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = value; }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = std::move(value); }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl.assign(value); }

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline VersionSummary& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline VersionSummary& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline VersionSummary& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
