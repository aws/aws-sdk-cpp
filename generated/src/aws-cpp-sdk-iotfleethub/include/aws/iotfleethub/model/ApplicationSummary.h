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
    AWS_IOTFLEETHUB_API ApplicationSummary() = default;
    AWS_IOTFLEETHUB_API ApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETHUB_API ApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ApplicationSummary& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ApplicationSummary& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the web application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const { return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    template<typename ApplicationDescriptionT = Aws::String>
    void SetApplicationDescription(ApplicationDescriptionT&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::forward<ApplicationDescriptionT>(value); }
    template<typename ApplicationDescriptionT = Aws::String>
    ApplicationSummary& WithApplicationDescription(ApplicationDescriptionT&& value) { SetApplicationDescription(std::forward<ApplicationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the web application.</p>
     */
    inline const Aws::String& GetApplicationUrl() const { return m_applicationUrl; }
    inline bool ApplicationUrlHasBeenSet() const { return m_applicationUrlHasBeenSet; }
    template<typename ApplicationUrlT = Aws::String>
    void SetApplicationUrl(ApplicationUrlT&& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = std::forward<ApplicationUrlT>(value); }
    template<typename ApplicationUrlT = Aws::String>
    ApplicationSummary& WithApplicationUrl(ApplicationUrlT&& value) { SetApplicationUrl(std::forward<ApplicationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the web application was created.</p>
     */
    inline long long GetApplicationCreationDate() const { return m_applicationCreationDate; }
    inline bool ApplicationCreationDateHasBeenSet() const { return m_applicationCreationDateHasBeenSet; }
    inline void SetApplicationCreationDate(long long value) { m_applicationCreationDateHasBeenSet = true; m_applicationCreationDate = value; }
    inline ApplicationSummary& WithApplicationCreationDate(long long value) { SetApplicationCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the web application was last updated.</p>
     */
    inline long long GetApplicationLastUpdateDate() const { return m_applicationLastUpdateDate; }
    inline bool ApplicationLastUpdateDateHasBeenSet() const { return m_applicationLastUpdateDateHasBeenSet; }
    inline void SetApplicationLastUpdateDate(long long value) { m_applicationLastUpdateDateHasBeenSet = true; m_applicationLastUpdateDate = value; }
    inline ApplicationSummary& WithApplicationLastUpdateDate(long long value) { SetApplicationLastUpdateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the web application.</p>
     */
    inline ApplicationState GetApplicationState() const { return m_applicationState; }
    inline bool ApplicationStateHasBeenSet() const { return m_applicationStateHasBeenSet; }
    inline void SetApplicationState(ApplicationState value) { m_applicationStateHasBeenSet = true; m_applicationState = value; }
    inline ApplicationSummary& WithApplicationState(ApplicationState value) { SetApplicationState(value); return *this;}
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

    long long m_applicationCreationDate{0};
    bool m_applicationCreationDateHasBeenSet = false;

    long long m_applicationLastUpdateDate{0};
    bool m_applicationLastUpdateDateHasBeenSet = false;

    ApplicationState m_applicationState{ApplicationState::NOT_SET};
    bool m_applicationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
