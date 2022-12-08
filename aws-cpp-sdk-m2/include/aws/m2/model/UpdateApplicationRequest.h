/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/Definition.h>
#include <utility>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application you want to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The current version of the application to update.</p>
     */
    inline int GetCurrentApplicationVersion() const{ return m_currentApplicationVersion; }

    /**
     * <p>The current version of the application to update.</p>
     */
    inline bool CurrentApplicationVersionHasBeenSet() const { return m_currentApplicationVersionHasBeenSet; }

    /**
     * <p>The current version of the application to update.</p>
     */
    inline void SetCurrentApplicationVersion(int value) { m_currentApplicationVersionHasBeenSet = true; m_currentApplicationVersion = value; }

    /**
     * <p>The current version of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithCurrentApplicationVersion(int value) { SetCurrentApplicationVersion(value); return *this;}


    /**
     * <p>The application definition for this application. You can specify either
     * inline JSON or an S3 bucket location.</p>
     */
    inline const Definition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The application definition for this application. You can specify either
     * inline JSON or an S3 bucket location.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The application definition for this application. You can specify either
     * inline JSON or an S3 bucket location.</p>
     */
    inline void SetDefinition(const Definition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The application definition for this application. You can specify either
     * inline JSON or an S3 bucket location.</p>
     */
    inline void SetDefinition(Definition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The application definition for this application. You can specify either
     * inline JSON or an S3 bucket location.</p>
     */
    inline UpdateApplicationRequest& WithDefinition(const Definition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The application definition for this application. You can specify either
     * inline JSON or an S3 bucket location.</p>
     */
    inline UpdateApplicationRequest& WithDefinition(Definition&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The description of the application to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    int m_currentApplicationVersion;
    bool m_currentApplicationVersionHasBeenSet = false;

    Definition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
