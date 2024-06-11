﻿/**
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
  class DeleteInputRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API DeleteInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInput"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the input to delete.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }
    inline DeleteInputRequest& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}
    inline DeleteInputRequest& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}
    inline DeleteInputRequest& WithInputName(const char* value) { SetInputName(value); return *this;}
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
