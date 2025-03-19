/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The request object for the <code>DeleteConfigurationRecorder</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationRecorderRequest">AWS
   * API Reference</a></p>
   */
  class DeleteConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteConfigurationRecorderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfigurationRecorder"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the customer managed configuration recorder that you want to
     * delete. You can retrieve the name of your configuration recorders by using the
     * <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_DescribeConfigurationRecorders.html">DescribeConfigurationRecorders</a>
     * operation.</p>
     */
    inline const Aws::String& GetConfigurationRecorderName() const { return m_configurationRecorderName; }
    inline bool ConfigurationRecorderNameHasBeenSet() const { return m_configurationRecorderNameHasBeenSet; }
    template<typename ConfigurationRecorderNameT = Aws::String>
    void SetConfigurationRecorderName(ConfigurationRecorderNameT&& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = std::forward<ConfigurationRecorderNameT>(value); }
    template<typename ConfigurationRecorderNameT = Aws::String>
    DeleteConfigurationRecorderRequest& WithConfigurationRecorderName(ConfigurationRecorderNameT&& value) { SetConfigurationRecorderName(std::forward<ConfigurationRecorderNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationRecorderName;
    bool m_configurationRecorderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
