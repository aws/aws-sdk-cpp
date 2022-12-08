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
    AWS_IOTFLEETWISE_API InvalidSignalsException();
    AWS_IOTFLEETWISE_API InvalidSignalsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidSignalsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidSignalsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidSignalsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidSignalsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The signals which caused the exception.</p>
     */
    inline const Aws::Vector<InvalidSignal>& GetInvalidSignals() const{ return m_invalidSignals; }

    /**
     * <p>The signals which caused the exception.</p>
     */
    inline bool InvalidSignalsHasBeenSet() const { return m_invalidSignalsHasBeenSet; }

    /**
     * <p>The signals which caused the exception.</p>
     */
    inline void SetInvalidSignals(const Aws::Vector<InvalidSignal>& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals = value; }

    /**
     * <p>The signals which caused the exception.</p>
     */
    inline void SetInvalidSignals(Aws::Vector<InvalidSignal>&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals = std::move(value); }

    /**
     * <p>The signals which caused the exception.</p>
     */
    inline InvalidSignalsException& WithInvalidSignals(const Aws::Vector<InvalidSignal>& value) { SetInvalidSignals(value); return *this;}

    /**
     * <p>The signals which caused the exception.</p>
     */
    inline InvalidSignalsException& WithInvalidSignals(Aws::Vector<InvalidSignal>&& value) { SetInvalidSignals(std::move(value)); return *this;}

    /**
     * <p>The signals which caused the exception.</p>
     */
    inline InvalidSignalsException& AddInvalidSignals(const InvalidSignal& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals.push_back(value); return *this; }

    /**
     * <p>The signals which caused the exception.</p>
     */
    inline InvalidSignalsException& AddInvalidSignals(InvalidSignal&& value) { m_invalidSignalsHasBeenSet = true; m_invalidSignals.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<InvalidSignal> m_invalidSignals;
    bool m_invalidSignalsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
