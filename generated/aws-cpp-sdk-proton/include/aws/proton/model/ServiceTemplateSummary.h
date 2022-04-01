﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/Provisioning.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>The service template summary data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceTemplateSummary">AWS
   * API Reference</a></p>
   */
  class AWS_PROTON_API ServiceTemplateSummary
  {
  public:
    ServiceTemplateSummary();
    ServiceTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    ServiceTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline ServiceTemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline ServiceTemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service template.</p>
     */
    inline ServiceTemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time when the service template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the service template was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the service template was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the service template was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the service template was created.</p>
     */
    inline ServiceTemplateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the service template was created.</p>
     */
    inline ServiceTemplateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of the service template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the service template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the service template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the service template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the service template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the service template.</p>
     */
    inline ServiceTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the service template.</p>
     */
    inline ServiceTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the service template.</p>
     */
    inline ServiceTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline ServiceTemplateSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline ServiceTemplateSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The service template name as displayed in the developer interface.</p>
     */
    inline ServiceTemplateSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The time when the service template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The time when the service template was last modified.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The time when the service template was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The time when the service template was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The time when the service template was last modified.</p>
     */
    inline ServiceTemplateSummary& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The time when the service template was last modified.</p>
     */
    inline ServiceTemplateSummary& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service template.</p>
     */
    inline ServiceTemplateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline ServiceTemplateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template.</p>
     */
    inline ServiceTemplateSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If <code>pipelineProvisioning</code> is <code>true</code>, a service pipeline
     * is included in the service template, otherwise a service pipeline <i>isn't</i>
     * included in the service template.</p>
     */
    inline const Provisioning& GetPipelineProvisioning() const{ return m_pipelineProvisioning; }

    /**
     * <p>If <code>pipelineProvisioning</code> is <code>true</code>, a service pipeline
     * is included in the service template, otherwise a service pipeline <i>isn't</i>
     * included in the service template.</p>
     */
    inline bool PipelineProvisioningHasBeenSet() const { return m_pipelineProvisioningHasBeenSet; }

    /**
     * <p>If <code>pipelineProvisioning</code> is <code>true</code>, a service pipeline
     * is included in the service template, otherwise a service pipeline <i>isn't</i>
     * included in the service template.</p>
     */
    inline void SetPipelineProvisioning(const Provisioning& value) { m_pipelineProvisioningHasBeenSet = true; m_pipelineProvisioning = value; }

    /**
     * <p>If <code>pipelineProvisioning</code> is <code>true</code>, a service pipeline
     * is included in the service template, otherwise a service pipeline <i>isn't</i>
     * included in the service template.</p>
     */
    inline void SetPipelineProvisioning(Provisioning&& value) { m_pipelineProvisioningHasBeenSet = true; m_pipelineProvisioning = std::move(value); }

    /**
     * <p>If <code>pipelineProvisioning</code> is <code>true</code>, a service pipeline
     * is included in the service template, otherwise a service pipeline <i>isn't</i>
     * included in the service template.</p>
     */
    inline ServiceTemplateSummary& WithPipelineProvisioning(const Provisioning& value) { SetPipelineProvisioning(value); return *this;}

    /**
     * <p>If <code>pipelineProvisioning</code> is <code>true</code>, a service pipeline
     * is included in the service template, otherwise a service pipeline <i>isn't</i>
     * included in the service template.</p>
     */
    inline ServiceTemplateSummary& WithPipelineProvisioning(Provisioning&& value) { SetPipelineProvisioning(std::move(value)); return *this;}


    /**
     * <p>The recommended version of the service template.</p>
     */
    inline const Aws::String& GetRecommendedVersion() const{ return m_recommendedVersion; }

    /**
     * <p>The recommended version of the service template.</p>
     */
    inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }

    /**
     * <p>The recommended version of the service template.</p>
     */
    inline void SetRecommendedVersion(const Aws::String& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = value; }

    /**
     * <p>The recommended version of the service template.</p>
     */
    inline void SetRecommendedVersion(Aws::String&& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = std::move(value); }

    /**
     * <p>The recommended version of the service template.</p>
     */
    inline void SetRecommendedVersion(const char* value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion.assign(value); }

    /**
     * <p>The recommended version of the service template.</p>
     */
    inline ServiceTemplateSummary& WithRecommendedVersion(const Aws::String& value) { SetRecommendedVersion(value); return *this;}

    /**
     * <p>The recommended version of the service template.</p>
     */
    inline ServiceTemplateSummary& WithRecommendedVersion(Aws::String&& value) { SetRecommendedVersion(std::move(value)); return *this;}

    /**
     * <p>The recommended version of the service template.</p>
     */
    inline ServiceTemplateSummary& WithRecommendedVersion(const char* value) { SetRecommendedVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Provisioning m_pipelineProvisioning;
    bool m_pipelineProvisioningHasBeenSet;

    Aws::String m_recommendedVersion;
    bool m_recommendedVersionHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
