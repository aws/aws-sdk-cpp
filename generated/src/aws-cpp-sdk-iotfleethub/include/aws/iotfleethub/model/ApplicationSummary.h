/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleethub/model/ApplicationState.h>
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
namespace IoTFleetHub
{
namespace Model
{

  /**
   * <p>A summary of information about a Fleet Hub for IoT Device Management web
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleethub-2020-11-03/ApplicationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationSummary
  {
  public:
    AWS_IOTFLEETHUB_API ApplicationSummary();
    AWS_IOTFLEETHUB_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETHUB_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ApplicationSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ApplicationSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ApplicationSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline ApplicationSummary& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline ApplicationSummary& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline ApplicationSummary& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the web application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }
    inline ApplicationSummary& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}
    inline ApplicationSummary& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}
    inline ApplicationSummary& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the web application.</p>
     */
    inline const Aws::String& GetApplicationUrl() const{ return m_applicationUrl; }
    inline bool ApplicationUrlHasBeenSet() const { return m_applicationUrlHasBeenSet; }
    inline void SetApplicationUrl(const Aws::String& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = value; }
    inline void SetApplicationUrl(Aws::String&& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = std::move(value); }
    inline void SetApplicationUrl(const char* value) { m_applicationUrlHasBeenSet = true; m_applicationUrl.assign(value); }
    inline ApplicationSummary& WithApplicationUrl(const Aws::String& value) { SetApplicationUrl(value); return *this;}
    inline ApplicationSummary& WithApplicationUrl(Aws::String&& value) { SetApplicationUrl(std::move(value)); return *this;}
    inline ApplicationSummary& WithApplicationUrl(const char* value) { SetApplicationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the web application was created.</p>
     */
    inline long long GetApplicationCreationDate() const{ return m_applicationCreationDate; }
    inline bool ApplicationCreationDateHasBeenSet() const { return m_applicationCreationDateHasBeenSet; }
    inline void SetApplicationCreationDate(long long value) { m_applicationCreationDateHasBeenSet = true; m_applicationCreationDate = value; }
    inline ApplicationSummary& WithApplicationCreationDate(long long value) { SetApplicationCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the web application was last updated.</p>
     */
    inline long long GetApplicationLastUpdateDate() const{ return m_applicationLastUpdateDate; }
    inline bool ApplicationLastUpdateDateHasBeenSet() const { return m_applicationLastUpdateDateHasBeenSet; }
    inline void SetApplicationLastUpdateDate(long long value) { m_applicationLastUpdateDateHasBeenSet = true; m_applicationLastUpdateDate = value; }
    inline ApplicationSummary& WithApplicationLastUpdateDate(long long value) { SetApplicationLastUpdateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the web application.</p>
     */
    inline const ApplicationState& GetApplicationState() const{ return m_applicationState; }
    inline bool ApplicationStateHasBeenSet() const { return m_applicationStateHasBeenSet; }
    inline void SetApplicationState(const ApplicationState& value) { m_applicationStateHasBeenSet = true; m_applicationState = value; }
    inline void SetApplicationState(ApplicationState&& value) { m_applicationStateHasBeenSet = true; m_applicationState = std::move(value); }
    inline ApplicationSummary& WithApplicationState(const ApplicationState& value) { SetApplicationState(value); return *this;}
    inline ApplicationSummary& WithApplicationState(ApplicationState&& value) { SetApplicationState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::String m_applicationUrl;
    bool m_applicationUrlHasBeenSet = false;

    long long m_applicationCreationDate;
    bool m_applicationCreationDateHasBeenSet = false;

    long long m_applicationLastUpdateDate;
    bool m_applicationLastUpdateDateHasBeenSet = false;

    ApplicationState m_applicationState;
    bool m_applicationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
