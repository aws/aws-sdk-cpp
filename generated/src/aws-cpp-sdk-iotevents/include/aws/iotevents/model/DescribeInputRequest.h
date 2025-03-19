/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class DescribeInputRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API DescribeInputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInput"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the input.</p>
     */
    inline const Aws::String& GetInputName() const { return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    template<typename InputNameT = Aws::String>
    void SetInputName(InputNameT&& value) { m_inputNameHasBeenSet = true; m_inputName = std::forward<InputNameT>(value); }
    template<typename InputNameT = Aws::String>
    DescribeInputRequest& WithInputName(InputNameT&& value) { SetInputName(std::forward<InputNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
