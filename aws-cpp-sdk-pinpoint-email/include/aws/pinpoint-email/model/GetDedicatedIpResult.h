/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/DedicatedIp.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about a dedicated IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDedicatedIpResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetDedicatedIpResult
  {
  public:
    GetDedicatedIpResult();
    GetDedicatedIpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDedicatedIpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about a dedicated IP address.</p>
     */
    inline const DedicatedIp& GetDedicatedIp() const{ return m_dedicatedIp; }

    /**
     * <p>An object that contains information about a dedicated IP address.</p>
     */
    inline void SetDedicatedIp(const DedicatedIp& value) { m_dedicatedIp = value; }

    /**
     * <p>An object that contains information about a dedicated IP address.</p>
     */
    inline void SetDedicatedIp(DedicatedIp&& value) { m_dedicatedIp = std::move(value); }

    /**
     * <p>An object that contains information about a dedicated IP address.</p>
     */
    inline GetDedicatedIpResult& WithDedicatedIp(const DedicatedIp& value) { SetDedicatedIp(value); return *this;}

    /**
     * <p>An object that contains information about a dedicated IP address.</p>
     */
    inline GetDedicatedIpResult& WithDedicatedIp(DedicatedIp&& value) { SetDedicatedIp(std::move(value)); return *this;}

  private:

    DedicatedIp m_dedicatedIp;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
