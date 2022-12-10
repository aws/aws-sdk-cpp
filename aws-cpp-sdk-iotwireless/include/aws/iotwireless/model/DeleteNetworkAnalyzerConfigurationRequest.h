/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class DeleteNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API DeleteNetworkAnalyzerConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNetworkAnalyzerConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    
    inline DeleteNetworkAnalyzerConfigurationRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    
    inline DeleteNetworkAnalyzerConfigurationRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    
    inline DeleteNetworkAnalyzerConfigurationRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}

  private:

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
