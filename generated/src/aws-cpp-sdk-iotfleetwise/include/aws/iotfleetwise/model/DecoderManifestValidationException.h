/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/InvalidSignalDecoder.h>
#include <aws/iotfleetwise/model/InvalidNetworkInterface.h>
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
   * <p>The request couldn't be completed because it contains signal decoders with
   * one or more validation errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DecoderManifestValidationException">AWS
   * API Reference</a></p>
   */
  class DecoderManifestValidationException
  {
  public:
    AWS_IOTFLEETWISE_API DecoderManifestValidationException() = default;
    AWS_IOTFLEETWISE_API DecoderManifestValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DecoderManifestValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline const Aws::Vector<InvalidSignalDecoder>& GetInvalidSignals() const { return m_invalidSignals; }
    inline bool InvalidSignalsHasBeenSet() const { return m_invalidSignalsHasBeenSet; }
    template<typename InvalidSignalsT = Aws::Vector<InvalidSignalDecoder>>
    void SetInvalidSignals(InvalidSignalsT&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals = std::forward<InvalidSignalsT>(value); }
    template<typename InvalidSignalsT = Aws::Vector<InvalidSignalDecoder>>
    DecoderManifestValidationException& WithInvalidSignals(InvalidSignalsT&& value) { SetInvalidSignals(std::forward<InvalidSignalsT>(value)); return *this;}
    template<typename InvalidSignalsT = InvalidSignalDecoder>
    DecoderManifestValidationException& AddInvalidSignals(InvalidSignalsT&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals.emplace_back(std::forward<InvalidSignalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline const Aws::Vector<InvalidNetworkInterface>& GetInvalidNetworkInterfaces() const { return m_invalidNetworkInterfaces; }
    inline bool InvalidNetworkInterfacesHasBeenSet() const { return m_invalidNetworkInterfacesHasBeenSet; }
    template<typename InvalidNetworkInterfacesT = Aws::Vector<InvalidNetworkInterface>>
    void SetInvalidNetworkInterfaces(InvalidNetworkInterfacesT&& value) { m_invalidNetworkInterfacesHasBeenSet = true; m_invalidNetworkInterfaces = std::forward<InvalidNetworkInterfacesT>(value); }
    template<typename InvalidNetworkInterfacesT = Aws::Vector<InvalidNetworkInterface>>
    DecoderManifestValidationException& WithInvalidNetworkInterfaces(InvalidNetworkInterfacesT&& value) { SetInvalidNetworkInterfaces(std::forward<InvalidNetworkInterfacesT>(value)); return *this;}
    template<typename InvalidNetworkInterfacesT = InvalidNetworkInterface>
    DecoderManifestValidationException& AddInvalidNetworkInterfaces(InvalidNetworkInterfacesT&& value) { m_invalidNetworkInterfacesHasBeenSet = true; m_invalidNetworkInterfaces.emplace_back(std::forward<InvalidNetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DecoderManifestValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InvalidSignalDecoder> m_invalidSignals;
    bool m_invalidSignalsHasBeenSet = false;

    Aws::Vector<InvalidNetworkInterface> m_invalidNetworkInterfaces;
    bool m_invalidNetworkInterfacesHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
