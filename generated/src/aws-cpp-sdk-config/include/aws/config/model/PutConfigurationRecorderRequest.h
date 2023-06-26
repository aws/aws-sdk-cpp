/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ConfigurationRecorder.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>PutConfigurationRecorder</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationRecorderRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutConfigurationRecorderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationRecorder"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An object for the configuration recorder to record configuration changes for
     * specified resource types.</p>
     */
    inline const ConfigurationRecorder& GetConfigurationRecorder() const{ return m_configurationRecorder; }

    /**
     * <p>An object for the configuration recorder to record configuration changes for
     * specified resource types.</p>
     */
    inline bool ConfigurationRecorderHasBeenSet() const { return m_configurationRecorderHasBeenSet; }

    /**
     * <p>An object for the configuration recorder to record configuration changes for
     * specified resource types.</p>
     */
    inline void SetConfigurationRecorder(const ConfigurationRecorder& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = value; }

    /**
     * <p>An object for the configuration recorder to record configuration changes for
     * specified resource types.</p>
     */
    inline void SetConfigurationRecorder(ConfigurationRecorder&& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = std::move(value); }

    /**
     * <p>An object for the configuration recorder to record configuration changes for
     * specified resource types.</p>
     */
    inline PutConfigurationRecorderRequest& WithConfigurationRecorder(const ConfigurationRecorder& value) { SetConfigurationRecorder(value); return *this;}

    /**
     * <p>An object for the configuration recorder to record configuration changes for
     * specified resource types.</p>
     */
    inline PutConfigurationRecorderRequest& WithConfigurationRecorder(ConfigurationRecorder&& value) { SetConfigurationRecorder(std::move(value)); return *this;}

  private:

    ConfigurationRecorder m_configurationRecorder;
    bool m_configurationRecorderHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
