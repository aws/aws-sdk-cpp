﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class GetCommandRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetCommandRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommand"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the command for which you want to retrieve
     * information.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    GetCommandRequest& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
