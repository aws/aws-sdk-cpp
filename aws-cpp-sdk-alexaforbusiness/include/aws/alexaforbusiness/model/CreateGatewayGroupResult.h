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
  class AWS_ALEXAFORBUSINESS_API CreateGatewayGroupResult
  {
  public:
    CreateGatewayGroupResult();
    CreateGatewayGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGatewayGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline const Aws::String& GetGatewayGroupArn() const{ return m_gatewayGroupArn; }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline void SetGatewayGroupArn(const Aws::String& value) { m_gatewayGroupArn = value; }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline void SetGatewayGroupArn(Aws::String&& value) { m_gatewayGroupArn = std::move(value); }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline void SetGatewayGroupArn(const char* value) { m_gatewayGroupArn.assign(value); }

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline CreateGatewayGroupResult& WithGatewayGroupArn(const Aws::String& value) { SetGatewayGroupArn(value); return *this;}

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline CreateGatewayGroupResult& WithGatewayGroupArn(Aws::String&& value) { SetGatewayGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the created gateway group.</p>
     */
    inline CreateGatewayGroupResult& WithGatewayGroupArn(const char* value) { SetGatewayGroupArn(value); return *this;}

  private:

    Aws::String m_gatewayGroupArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
