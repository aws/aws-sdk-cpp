/*
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
#include <aws/directconnect/model/InterconnectState.h>

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
   * <p>The response received when DeleteInterconnect is called.</p>
   */
  class AWS_DIRECTCONNECT_API DeleteInterconnectResult
  {
  public:
    DeleteInterconnectResult();
    DeleteInterconnectResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteInterconnectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const InterconnectState& GetInterconnectState() const{ return m_interconnectState; }

    
    inline void SetInterconnectState(const InterconnectState& value) { m_interconnectState = value; }

    
    inline void SetInterconnectState(InterconnectState&& value) { m_interconnectState = value; }

    
    inline DeleteInterconnectResult& WithInterconnectState(const InterconnectState& value) { SetInterconnectState(value); return *this;}

    
    inline DeleteInterconnectResult& WithInterconnectState(InterconnectState&& value) { SetInterconnectState(value); return *this;}

  private:
    InterconnectState m_interconnectState;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
