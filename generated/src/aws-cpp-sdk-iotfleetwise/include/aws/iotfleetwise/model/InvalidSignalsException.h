/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/InvalidSignal.h>
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
   * <p>The request couldn't be completed because it contains signals that aren't
   * valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/InvalidSignalsException">AWS
   * API Reference</a></p>
   */
  class InvalidSignalsException
  {
  public:
    AWS_IOTFLEETWISE_API InvalidSignalsException() = default;
    AWS_IOTFLEETWISE_API InvalidSignalsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidSignalsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidSignalsException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signals which caused the exception.</p>
     */
    inline const Aws::Vector<InvalidSignal>& GetInvalidSignals() const { return m_invalidSignals; }
    inline bool InvalidSignalsHasBeenSet() const { return m_invalidSignalsHasBeenSet; }
    template<typename InvalidSignalsT = Aws::Vector<InvalidSignal>>
    void SetInvalidSignals(InvalidSignalsT&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals = std::forward<InvalidSignalsT>(value); }
    template<typename InvalidSignalsT = Aws::Vector<InvalidSignal>>
    InvalidSignalsException& WithInvalidSignals(InvalidSignalsT&& value) { SetInvalidSignals(std::forward<InvalidSignalsT>(value)); return *this;}
    template<typename InvalidSignalsT = InvalidSignal>
    InvalidSignalsException& AddInvalidSignals(InvalidSignalsT&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals.emplace_back(std::forward<InvalidSignalsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<InvalidSignal> m_invalidSignals;
    bool m_invalidSignalsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
