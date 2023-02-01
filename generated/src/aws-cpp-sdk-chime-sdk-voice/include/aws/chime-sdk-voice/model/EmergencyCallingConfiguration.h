/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/DNISEmergencyCallingConfiguration.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class EmergencyCallingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API EmergencyCallingConfiguration();
    AWS_CHIMESDKVOICE_API EmergencyCallingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API EmergencyCallingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<DNISEmergencyCallingConfiguration>& GetDNIS() const{ return m_dNIS; }

    
    inline bool DNISHasBeenSet() const { return m_dNISHasBeenSet; }

    
    inline void SetDNIS(const Aws::Vector<DNISEmergencyCallingConfiguration>& value) { m_dNISHasBeenSet = true; m_dNIS = value; }

    
    inline void SetDNIS(Aws::Vector<DNISEmergencyCallingConfiguration>&& value) { m_dNISHasBeenSet = true; m_dNIS = std::move(value); }

    
    inline EmergencyCallingConfiguration& WithDNIS(const Aws::Vector<DNISEmergencyCallingConfiguration>& value) { SetDNIS(value); return *this;}

    
    inline EmergencyCallingConfiguration& WithDNIS(Aws::Vector<DNISEmergencyCallingConfiguration>&& value) { SetDNIS(std::move(value)); return *this;}

    
    inline EmergencyCallingConfiguration& AddDNIS(const DNISEmergencyCallingConfiguration& value) { m_dNISHasBeenSet = true; m_dNIS.push_back(value); return *this; }

    
    inline EmergencyCallingConfiguration& AddDNIS(DNISEmergencyCallingConfiguration&& value) { m_dNISHasBeenSet = true; m_dNIS.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DNISEmergencyCallingConfiguration> m_dNIS;
    bool m_dNISHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
