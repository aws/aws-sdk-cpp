/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class CreateCommandResult
  {
  public:
    AWS_IOT_API CreateCommandResult() = default;
    AWS_IOT_API CreateCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the command.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    CreateCommandResult& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. For example,
     * <code>arn:aws:iot:&lt;region&gt;:&lt;accountid&gt;:command/&lt;commandId&gt;</code>
     * </p>
     */
    inline const Aws::String& GetCommandArn() const { return m_commandArn; }
    template<typename CommandArnT = Aws::String>
    void SetCommandArn(CommandArnT&& value) { m_commandArnHasBeenSet = true; m_commandArn = std::forward<CommandArnT>(value); }
    template<typename CommandArnT = Aws::String>
    CreateCommandResult& WithCommandArn(CommandArnT&& value) { SetCommandArn(std::forward<CommandArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCommandResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_commandArn;
    bool m_commandArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
