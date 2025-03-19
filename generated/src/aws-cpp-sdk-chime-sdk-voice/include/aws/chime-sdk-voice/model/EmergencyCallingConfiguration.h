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

  /**
   * <p>The emergency calling configuration details associated with an Amazon Chime
   * SDK Voice Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/EmergencyCallingConfiguration">AWS
   * API Reference</a></p>
   */
  class EmergencyCallingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API EmergencyCallingConfiguration() = default;
    AWS_CHIMESDKVOICE_API EmergencyCallingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API EmergencyCallingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline const Aws::Vector<DNISEmergencyCallingConfiguration>& GetDNIS() const { return m_dNIS; }
    inline bool DNISHasBeenSet() const { return m_dNISHasBeenSet; }
    template<typename DNIST = Aws::Vector<DNISEmergencyCallingConfiguration>>
    void SetDNIS(DNIST&& value) { m_dNISHasBeenSet = true; m_dNIS = std::forward<DNIST>(value); }
    template<typename DNIST = Aws::Vector<DNISEmergencyCallingConfiguration>>
    EmergencyCallingConfiguration& WithDNIS(DNIST&& value) { SetDNIS(std::forward<DNIST>(value)); return *this;}
    template<typename DNIST = DNISEmergencyCallingConfiguration>
    EmergencyCallingConfiguration& AddDNIS(DNIST&& value) { m_dNISHasBeenSet = true; m_dNIS.emplace_back(std::forward<DNIST>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DNISEmergencyCallingConfiguration> m_dNIS;
    bool m_dNISHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
