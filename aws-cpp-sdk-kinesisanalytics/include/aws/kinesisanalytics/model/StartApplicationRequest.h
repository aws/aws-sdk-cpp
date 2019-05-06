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
  class AWS_KINESISANALYTICS_API StartApplicationRequest : public KinesisAnalyticsRequest
  {
  public:
    StartApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartApplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>Name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Name of the application.</p>
     */
    inline StartApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Name of the application.</p>
     */
    inline StartApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Name of the application.</p>
     */
    inline StartApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline const Aws::Vector<InputConfiguration>& GetInputConfigurations() const{ return m_inputConfigurations; }

    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline bool InputConfigurationsHasBeenSet() const { return m_inputConfigurationsHasBeenSet; }

    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline void SetInputConfigurations(const Aws::Vector<InputConfiguration>& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = value; }

    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline void SetInputConfigurations(Aws::Vector<InputConfiguration>&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = std::move(value); }

    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline StartApplicationRequest& WithInputConfigurations(const Aws::Vector<InputConfiguration>& value) { SetInputConfigurations(value); return *this;}

    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline StartApplicationRequest& WithInputConfigurations(Aws::Vector<InputConfiguration>&& value) { SetInputConfigurations(std::move(value)); return *this;}

    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline StartApplicationRequest& AddInputConfigurations(const InputConfiguration& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.push_back(value); return *this; }

    /**
     * <p>Identifies the specific input, by ID, that the application starts consuming.
     * Amazon Kinesis Analytics starts reading the streaming source associated with the
     * input. You can also specify where in the streaming source you want Amazon
     * Kinesis Analytics to start reading.</p>
     */
    inline StartApplicationRequest& AddInputConfigurations(InputConfiguration&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::Vector<InputConfiguration> m_inputConfigurations;
    bool m_inputConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
