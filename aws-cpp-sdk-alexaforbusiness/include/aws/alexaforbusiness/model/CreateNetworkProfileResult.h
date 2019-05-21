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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API CreateNetworkProfileResult
  {
  public:
    CreateNetworkProfileResult();
    CreateNetworkProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateNetworkProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline const Aws::String& GetNetworkProfileArn() const{ return m_networkProfileArn; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const Aws::String& value) { m_networkProfileArn = value; }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(Aws::String&& value) { m_networkProfileArn = std::move(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline void SetNetworkProfileArn(const char* value) { m_networkProfileArn.assign(value); }

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline CreateNetworkProfileResult& WithNetworkProfileArn(const Aws::String& value) { SetNetworkProfileArn(value); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline CreateNetworkProfileResult& WithNetworkProfileArn(Aws::String&& value) { SetNetworkProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network profile associated with a device.</p>
     */
    inline CreateNetworkProfileResult& WithNetworkProfileArn(const char* value) { SetNetworkProfileArn(value); return *this;}

  private:

    Aws::String m_networkProfileArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
