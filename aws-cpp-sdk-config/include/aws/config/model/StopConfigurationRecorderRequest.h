﻿/**
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
   * <p>The input for the <a>StopConfigurationRecorder</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StopConfigurationRecorderRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API StopConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    StopConfigurationRecorderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopConfigurationRecorder"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline const Aws::String& GetConfigurationRecorderName() const{ return m_configurationRecorderName; }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline bool ConfigurationRecorderNameHasBeenSet() const { return m_configurationRecorderNameHasBeenSet; }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorderName(const Aws::String& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = value; }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorderName(Aws::String&& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = std::move(value); }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorderName(const char* value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName.assign(value); }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline StopConfigurationRecorderRequest& WithConfigurationRecorderName(const Aws::String& value) { SetConfigurationRecorderName(value); return *this;}

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline StopConfigurationRecorderRequest& WithConfigurationRecorderName(Aws::String&& value) { SetConfigurationRecorderName(std::move(value)); return *this;}

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline StopConfigurationRecorderRequest& WithConfigurationRecorderName(const char* value) { SetConfigurationRecorderName(value); return *this;}

  private:

    Aws::String m_configurationRecorderName;
    bool m_configurationRecorderNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
