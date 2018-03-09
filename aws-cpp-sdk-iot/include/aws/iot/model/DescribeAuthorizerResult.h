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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuthorizerDescription.h>
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
  class AWS_IOT_API DescribeAuthorizerResult
  {
  public:
    DescribeAuthorizerResult();
    DescribeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The authorizer description.</p>
     */
    inline const AuthorizerDescription& GetAuthorizerDescription() const{ return m_authorizerDescription; }

    /**
     * <p>The authorizer description.</p>
     */
    inline void SetAuthorizerDescription(const AuthorizerDescription& value) { m_authorizerDescription = value; }

    /**
     * <p>The authorizer description.</p>
     */
    inline void SetAuthorizerDescription(AuthorizerDescription&& value) { m_authorizerDescription = std::move(value); }

    /**
     * <p>The authorizer description.</p>
     */
    inline DescribeAuthorizerResult& WithAuthorizerDescription(const AuthorizerDescription& value) { SetAuthorizerDescription(value); return *this;}

    /**
     * <p>The authorizer description.</p>
     */
    inline DescribeAuthorizerResult& WithAuthorizerDescription(AuthorizerDescription&& value) { SetAuthorizerDescription(std::move(value)); return *this;}

  private:

    AuthorizerDescription m_authorizerDescription;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
