﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/ConnectionState.h>

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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>The response received when ConfirmConnection is called.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ConfirmConnectionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API ConfirmConnectionResult
  {
  public:
    ConfirmConnectionResult();
    ConfirmConnectionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ConfirmConnectionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }

    
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = value; }

    
    inline ConfirmConnectionResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    
    inline ConfirmConnectionResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(value); return *this;}

  private:
    ConnectionState m_connectionState;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
