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
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationVersionRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    CreateApplicationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline CreateApplicationVersionRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline CreateApplicationVersionRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline CreateApplicationVersionRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The semantic version of the new version.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the new version.</p>
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of the new version.</p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of the new version.</p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the new version.</p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the new version.</p>
     */
    inline CreateApplicationVersionRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the new version.</p>
     */
    inline CreateApplicationVersionRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the new version.</p>
     */
    inline CreateApplicationVersionRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline const Aws::String& GetSourceCodeArchiveUrl() const{ return m_sourceCodeArchiveUrl; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline bool SourceCodeArchiveUrlHasBeenSet() const { return m_sourceCodeArchiveUrlHasBeenSet; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(const Aws::String& value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl = value; }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(Aws::String&& value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl = std::move(value); }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline void SetSourceCodeArchiveUrl(const char* value) { m_sourceCodeArchiveUrlHasBeenSet = true; m_sourceCodeArchiveUrl.assign(value); }

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationVersionRequest& WithSourceCodeArchiveUrl(const Aws::String& value) { SetSourceCodeArchiveUrl(value); return *this;}

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationVersionRequest& WithSourceCodeArchiveUrl(Aws::String&& value) { SetSourceCodeArchiveUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the S3 object that contains the ZIP archive of the source code for
     * this version of your application.</p><p>Maximum size 50 MB</p>
     */
    inline CreateApplicationVersionRequest& WithSourceCodeArchiveUrl(const char* value) { SetSourceCodeArchiveUrl(value); return *this;}


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
    inline CreateApplicationVersionRequest& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationVersionRequest& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to a public repository for the source code of your application, for
     * example the URL of a specific GitHub commit.</p>
     */
    inline CreateApplicationVersionRequest& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}


    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The raw packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline bool TemplateUrlHasBeenSet() const { return m_templateUrlHasBeenSet; }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrlHasBeenSet = true; m_templateUrl = value; }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::move(value); }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrlHasBeenSet = true; m_templateUrl.assign(value); }

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionRequest& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionRequest& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the packaged AWS SAM template of your application.</p>
     */
    inline CreateApplicationVersionRequest& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet;

    Aws::String m_sourceCodeArchiveUrl;
    bool m_sourceCodeArchiveUrlHasBeenSet;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
