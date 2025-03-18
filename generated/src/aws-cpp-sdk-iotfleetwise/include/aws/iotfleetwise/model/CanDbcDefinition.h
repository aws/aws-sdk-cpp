/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Array.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Configurations used to create a decoder manifest.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CanDbcDefinition">AWS
   * API Reference</a></p>
   */
  class CanDbcDefinition
  {
  public:
    AWS_IOTFLEETWISE_API CanDbcDefinition() = default;
    AWS_IOTFLEETWISE_API CanDbcDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CanDbcDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about a network interface.</p>
     */
    inline const Aws::String& GetNetworkInterface() const { return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    template<typename NetworkInterfaceT = Aws::String>
    void SetNetworkInterface(NetworkInterfaceT&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::forward<NetworkInterfaceT>(value); }
    template<typename NetworkInterfaceT = Aws::String>
    CanDbcDefinition& WithNetworkInterface(NetworkInterfaceT&& value) { SetNetworkInterface(std::forward<NetworkInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DBC files. You can upload only one DBC file for each network
     * interface and specify up to five (inclusive) files in the list. The DBC file can
     * be a maximum size of 200 MB.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetCanDbcFiles() const { return m_canDbcFiles; }
    inline bool CanDbcFilesHasBeenSet() const { return m_canDbcFilesHasBeenSet; }
    template<typename CanDbcFilesT = Aws::Vector<Aws::Utils::ByteBuffer>>
    void SetCanDbcFiles(CanDbcFilesT&& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles = std::forward<CanDbcFilesT>(value); }
    template<typename CanDbcFilesT = Aws::Vector<Aws::Utils::ByteBuffer>>
    CanDbcDefinition& WithCanDbcFiles(CanDbcFilesT&& value) { SetCanDbcFiles(std::forward<CanDbcFilesT>(value)); return *this;}
    template<typename CanDbcFilesT = Aws::Utils::ByteBuffer>
    CanDbcDefinition& AddCanDbcFiles(CanDbcFilesT&& value) { m_canDbcFilesHasBeenSet = true; m_canDbcFiles.emplace_back(std::forward<CanDbcFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pairs every signal specified in your vehicle model with a signal decoder.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSignalsMap() const { return m_signalsMap; }
    inline bool SignalsMapHasBeenSet() const { return m_signalsMapHasBeenSet; }
    template<typename SignalsMapT = Aws::Map<Aws::String, Aws::String>>
    void SetSignalsMap(SignalsMapT&& value) { m_signalsMapHasBeenSet = true; m_signalsMap = std::forward<SignalsMapT>(value); }
    template<typename SignalsMapT = Aws::Map<Aws::String, Aws::String>>
    CanDbcDefinition& WithSignalsMap(SignalsMapT&& value) { SetSignalsMap(std::forward<SignalsMapT>(value)); return *this;}
    template<typename SignalsMapKeyT = Aws::String, typename SignalsMapValueT = Aws::String>
    CanDbcDefinition& AddSignalsMap(SignalsMapKeyT&& key, SignalsMapValueT&& value) {
      m_signalsMapHasBeenSet = true; m_signalsMap.emplace(std::forward<SignalsMapKeyT>(key), std::forward<SignalsMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_networkInterface;
    bool m_networkInterfaceHasBeenSet = false;

    Aws::Vector<Aws::Utils::ByteBuffer> m_canDbcFiles;
    bool m_canDbcFilesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_signalsMap;
    bool m_signalsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
