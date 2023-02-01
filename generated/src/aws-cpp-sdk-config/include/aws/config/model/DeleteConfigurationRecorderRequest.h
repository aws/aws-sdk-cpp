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
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationRecorderRequest">AWS
   * API Reference</a></p>
   */
  class DeleteConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteConfigurationRecorderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfigurationRecorder"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline const Aws::String& GetConfigurationRecorderName() const{ return m_configurationRecorderName; }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline bool ConfigurationRecorderNameHasBeenSet() const { return m_configurationRecorderNameHasBeenSet; }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline void SetConfigurationRecorderName(const Aws::String& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = value; }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline void SetConfigurationRecorderName(Aws::String&& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = std::move(value); }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline void SetConfigurationRecorderName(const char* value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName.assign(value); }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline DeleteConfigurationRecorderRequest& WithConfigurationRecorderName(const Aws::String& value) { SetConfigurationRecorderName(value); return *this;}

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline DeleteConfigurationRecorderRequest& WithConfigurationRecorderName(Aws::String&& value) { SetConfigurationRecorderName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline DeleteConfigurationRecorderRequest& WithConfigurationRecorderName(const char* value) { SetConfigurationRecorderName(value); return *this;}

  private:

    Aws::String m_configurationRecorderName;
    bool m_configurationRecorderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
