/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/ApplicationDeploymentLifecycle.h>
#include <aws/m2/model/EngineType.h>
#include <aws/m2/model/ApplicationLifecycle.h>
#include <aws/m2/model/ApplicationVersionLifecycle.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A subset of the possible application attributes. Used in the application
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ApplicationSummary();
    AWS_MAINFRAMEMODERNIZATION_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationSummary& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationSummary& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline ApplicationSummary& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline ApplicationSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline ApplicationSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline ApplicationSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The version of the application.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The version of the application.</p>
     */
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetApplicationVersion(int value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline ApplicationSummary& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}


    /**
     * <p>The timestamp when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the application was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp when the application was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp when the application was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the application was created.</p>
     */
    inline ApplicationSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the application was created.</p>
     */
    inline ApplicationSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Indicates either an ongoing deployment or if the application has ever
     * deployed successfully.</p>
     */
    inline const ApplicationDeploymentLifecycle& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>Indicates either an ongoing deployment or if the application has ever
     * deployed successfully.</p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>Indicates either an ongoing deployment or if the application has ever
     * deployed successfully.</p>
     */
    inline void SetDeploymentStatus(const ApplicationDeploymentLifecycle& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>Indicates either an ongoing deployment or if the application has ever
     * deployed successfully.</p>
     */
    inline void SetDeploymentStatus(ApplicationDeploymentLifecycle&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>Indicates either an ongoing deployment or if the application has ever
     * deployed successfully.</p>
     */
    inline ApplicationSummary& WithDeploymentStatus(const ApplicationDeploymentLifecycle& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>Indicates either an ongoing deployment or if the application has ever
     * deployed successfully.</p>
     */
    inline ApplicationSummary& WithDeploymentStatus(ApplicationDeploymentLifecycle&& value) { SetDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline ApplicationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline ApplicationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline ApplicationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the target platform for this application.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>The type of the target platform for this application.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>The type of the target platform for this application.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>The type of the target platform for this application.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>The type of the target platform for this application.</p>
     */
    inline ApplicationSummary& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>The type of the target platform for this application.</p>
     */
    inline ApplicationSummary& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline ApplicationSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline ApplicationSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the runtime environment that hosts this
     * application.</p>
     */
    inline ApplicationSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }

    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline bool LastStartTimeHasBeenSet() const { return m_lastStartTimeHasBeenSet; }

    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = value; }

    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = std::move(value); }

    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline ApplicationSummary& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}

    /**
     * <p>The timestamp when you last started the application. Null until the
     * application runs for the first time.</p>
     */
    inline ApplicationSummary& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the application.</p>
     */
    inline const ApplicationLifecycle& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(const ApplicationLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(ApplicationLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationSummary& WithStatus(const ApplicationLifecycle& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationSummary& WithStatus(ApplicationLifecycle&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of the latest version of the application.</p>
     */
    inline const ApplicationVersionLifecycle& GetVersionStatus() const{ return m_versionStatus; }

    /**
     * <p>Indicates the status of the latest version of the application.</p>
     */
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }

    /**
     * <p>Indicates the status of the latest version of the application.</p>
     */
    inline void SetVersionStatus(const ApplicationVersionLifecycle& value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }

    /**
     * <p>Indicates the status of the latest version of the application.</p>
     */
    inline void SetVersionStatus(ApplicationVersionLifecycle&& value) { m_versionStatusHasBeenSet = true; m_versionStatus = std::move(value); }

    /**
     * <p>Indicates the status of the latest version of the application.</p>
     */
    inline ApplicationSummary& WithVersionStatus(const ApplicationVersionLifecycle& value) { SetVersionStatus(value); return *this;}

    /**
     * <p>Indicates the status of the latest version of the application.</p>
     */
    inline ApplicationSummary& WithVersionStatus(ApplicationVersionLifecycle&& value) { SetVersionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    int m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ApplicationDeploymentLifecycle m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastStartTime;
    bool m_lastStartTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ApplicationLifecycle m_status;
    bool m_statusHasBeenSet = false;

    ApplicationVersionLifecycle m_versionStatus;
    bool m_versionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
