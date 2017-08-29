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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/StaticIp.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetStaticIpResult
  {
  public:
    GetStaticIpResult();
    GetStaticIpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetStaticIpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline const StaticIp& GetStaticIp() const{ return m_staticIp; }

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline void SetStaticIp(const StaticIp& value) { m_staticIp = value; }

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline void SetStaticIp(StaticIp&& value) { m_staticIp = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline GetStaticIpResult& WithStaticIp(const StaticIp& value) { SetStaticIp(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the requested static
     * IP.</p>
     */
    inline GetStaticIpResult& WithStaticIp(StaticIp&& value) { SetStaticIp(std::move(value)); return *this;}

  private:

    StaticIp m_staticIp;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
