/**
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
    AWS_IOT_API GetCommandRequest();

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
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }
    inline GetCommandRequest& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline GetCommandRequest& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline GetCommandRequest& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
