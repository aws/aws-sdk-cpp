/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/InputConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StartApplicationRequest">AWS
   * API Reference</a></p>
   */
  class StartApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API StartApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartApplication"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    StartApplicationRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline const Aws::Vector<InputConfiguration>& GetInputConfigurations() const { return m_inputConfigurations; }
    inline bool InputConfigurationsHasBeenSet() const { return m_inputConfigurationsHasBeenSet; }
    template<typename InputConfigurationsT = Aws::Vector<InputConfiguration>>
    void SetInputConfigurations(InputConfigurationsT&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = std::forward<InputConfigurationsT>(value); }
    template<typename InputConfigurationsT = Aws::Vector<InputConfiguration>>
    StartApplicationRequest& WithInputConfigurations(InputConfigurationsT&& value) { SetInputConfigurations(std::forward<InputConfigurationsT>(value)); return *this;}
    template<typename InputConfigurationsT = InputConfiguration>
    StartApplicationRequest& AddInputConfigurations(InputConfigurationsT&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.emplace_back(std::forward<InputConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::Vector<InputConfiguration> m_inputConfigurations;
    bool m_inputConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
