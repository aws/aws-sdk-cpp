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
    AWS_IOT_API CreateCommandResult();
    AWS_IOT_API CreateCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the command.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline void SetCommandId(const Aws::String& value) { m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandId.assign(value); }
    inline CreateCommandResult& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline CreateCommandResult& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline CreateCommandResult& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. For example,
     * <code>arn:aws:iot:&lt;region&gt;:&lt;accountid&gt;:command/&lt;commandId&gt;</code>
     * </p>
     */
    inline const Aws::String& GetCommandArn() const{ return m_commandArn; }
    inline void SetCommandArn(const Aws::String& value) { m_commandArn = value; }
    inline void SetCommandArn(Aws::String&& value) { m_commandArn = std::move(value); }
    inline void SetCommandArn(const char* value) { m_commandArn.assign(value); }
    inline CreateCommandResult& WithCommandArn(const Aws::String& value) { SetCommandArn(value); return *this;}
    inline CreateCommandResult& WithCommandArn(Aws::String&& value) { SetCommandArn(std::move(value)); return *this;}
    inline CreateCommandResult& WithCommandArn(const char* value) { SetCommandArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCommandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCommandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCommandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commandId;

    Aws::String m_commandArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
