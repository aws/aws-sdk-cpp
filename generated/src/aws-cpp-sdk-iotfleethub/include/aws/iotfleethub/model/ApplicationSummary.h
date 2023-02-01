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
   * <p>A summary of information about a AWS IoT Device Management web
   * application.</p>  <p>Fleet Hub for AWS IoT Device Management is in public
   * preview and is subject to change.</p> <p><h3>See Also:</h3>   <a
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


    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The name of the web application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the web application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the web application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the web application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the web application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>An optional description of the web application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}

    /**
     * <p>An optional description of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}


    /**
     * <p>The URL of the web application.</p>
     */
    inline const Aws::String& GetApplicationUrl() const{ return m_applicationUrl; }

    /**
     * <p>The URL of the web application.</p>
     */
    inline bool ApplicationUrlHasBeenSet() const { return m_applicationUrlHasBeenSet; }

    /**
     * <p>The URL of the web application.</p>
     */
    inline void SetApplicationUrl(const Aws::String& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = value; }

    /**
     * <p>The URL of the web application.</p>
     */
    inline void SetApplicationUrl(Aws::String&& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = std::move(value); }

    /**
     * <p>The URL of the web application.</p>
     */
    inline void SetApplicationUrl(const char* value) { m_applicationUrlHasBeenSet = true; m_applicationUrl.assign(value); }

    /**
     * <p>The URL of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationUrl(const Aws::String& value) { SetApplicationUrl(value); return *this;}

    /**
     * <p>The URL of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationUrl(Aws::String&& value) { SetApplicationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationUrl(const char* value) { SetApplicationUrl(value); return *this;}


    /**
     * <p>The date (in Unix epoch time) when the web application was created.</p>
     */
    inline long long GetApplicationCreationDate() const{ return m_applicationCreationDate; }

    /**
     * <p>The date (in Unix epoch time) when the web application was created.</p>
     */
    inline bool ApplicationCreationDateHasBeenSet() const { return m_applicationCreationDateHasBeenSet; }

    /**
     * <p>The date (in Unix epoch time) when the web application was created.</p>
     */
    inline void SetApplicationCreationDate(long long value) { m_applicationCreationDateHasBeenSet = true; m_applicationCreationDate = value; }

    /**
     * <p>The date (in Unix epoch time) when the web application was created.</p>
     */
    inline ApplicationSummary& WithApplicationCreationDate(long long value) { SetApplicationCreationDate(value); return *this;}


    /**
     * <p>The date (in Unix epoch time) when the web application was last updated.</p>
     */
    inline long long GetApplicationLastUpdateDate() const{ return m_applicationLastUpdateDate; }

    /**
     * <p>The date (in Unix epoch time) when the web application was last updated.</p>
     */
    inline bool ApplicationLastUpdateDateHasBeenSet() const { return m_applicationLastUpdateDateHasBeenSet; }

    /**
     * <p>The date (in Unix epoch time) when the web application was last updated.</p>
     */
    inline void SetApplicationLastUpdateDate(long long value) { m_applicationLastUpdateDateHasBeenSet = true; m_applicationLastUpdateDate = value; }

    /**
     * <p>The date (in Unix epoch time) when the web application was last updated.</p>
     */
    inline ApplicationSummary& WithApplicationLastUpdateDate(long long value) { SetApplicationLastUpdateDate(value); return *this;}


    /**
     * <p>The current state of the web application.</p>
     */
    inline const ApplicationState& GetApplicationState() const{ return m_applicationState; }

    /**
     * <p>The current state of the web application.</p>
     */
    inline bool ApplicationStateHasBeenSet() const { return m_applicationStateHasBeenSet; }

    /**
     * <p>The current state of the web application.</p>
     */
    inline void SetApplicationState(const ApplicationState& value) { m_applicationStateHasBeenSet = true; m_applicationState = value; }

    /**
     * <p>The current state of the web application.</p>
     */
    inline void SetApplicationState(ApplicationState&& value) { m_applicationStateHasBeenSet = true; m_applicationState = std::move(value); }

    /**
     * <p>The current state of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationState(const ApplicationState& value) { SetApplicationState(value); return *this;}

    /**
     * <p>The current state of the web application.</p>
     */
    inline ApplicationSummary& WithApplicationState(ApplicationState&& value) { SetApplicationState(std::move(value)); return *this;}

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
