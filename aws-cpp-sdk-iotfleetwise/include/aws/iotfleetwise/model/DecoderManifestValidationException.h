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
    AWS_IOTFLEETWISE_API DecoderManifestValidationException();
    AWS_IOTFLEETWISE_API DecoderManifestValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DecoderManifestValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline const Aws::Vector<InvalidSignalDecoder>& GetInvalidSignals() const{ return m_invalidSignals; }

    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline bool InvalidSignalsHasBeenSet() const { return m_invalidSignalsHasBeenSet; }

    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline void SetInvalidSignals(const Aws::Vector<InvalidSignalDecoder>& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals = value; }

    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline void SetInvalidSignals(Aws::Vector<InvalidSignalDecoder>&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals = std::move(value); }

    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline DecoderManifestValidationException& WithInvalidSignals(const Aws::Vector<InvalidSignalDecoder>& value) { SetInvalidSignals(value); return *this;}

    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline DecoderManifestValidationException& WithInvalidSignals(Aws::Vector<InvalidSignalDecoder>&& value) { SetInvalidSignals(std::move(value)); return *this;}

    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline DecoderManifestValidationException& AddInvalidSignals(const InvalidSignalDecoder& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals.push_back(value); return *this; }

    /**
     * <p>The request couldn't be completed because of invalid signals in the
     * request.</p>
     */
    inline DecoderManifestValidationException& AddInvalidSignals(InvalidSignalDecoder&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals.push_back(std::move(value)); return *this; }


    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline const Aws::Vector<InvalidNetworkInterface>& GetInvalidNetworkInterfaces() const{ return m_invalidNetworkInterfaces; }

    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline bool InvalidNetworkInterfacesHasBeenSet() const { return m_invalidNetworkInterfacesHasBeenSet; }

    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline void SetInvalidNetworkInterfaces(const Aws::Vector<InvalidNetworkInterface>& value) { m_invalidNetworkInterfacesHasBeenSet = true; m_invalidNetworkInterfaces = value; }

    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline void SetInvalidNetworkInterfaces(Aws::Vector<InvalidNetworkInterface>&& value) { m_invalidNetworkInterfacesHasBeenSet = true; m_invalidNetworkInterfaces = std::move(value); }

    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline DecoderManifestValidationException& WithInvalidNetworkInterfaces(const Aws::Vector<InvalidNetworkInterface>& value) { SetInvalidNetworkInterfaces(value); return *this;}

    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline DecoderManifestValidationException& WithInvalidNetworkInterfaces(Aws::Vector<InvalidNetworkInterface>&& value) { SetInvalidNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline DecoderManifestValidationException& AddInvalidNetworkInterfaces(const InvalidNetworkInterface& value) { m_invalidNetworkInterfacesHasBeenSet = true; m_invalidNetworkInterfaces.push_back(value); return *this; }

    /**
     * <p>The request couldn't be completed because of invalid network interfaces in
     * the request.</p>
     */
    inline DecoderManifestValidationException& AddInvalidNetworkInterfaces(InvalidNetworkInterface&& value) { m_invalidNetworkInterfacesHasBeenSet = true; m_invalidNetworkInterfaces.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DecoderManifestValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DecoderManifestValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DecoderManifestValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}

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
