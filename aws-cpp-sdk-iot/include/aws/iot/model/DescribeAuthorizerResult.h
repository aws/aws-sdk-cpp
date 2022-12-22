/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAuthorizerResult
  {
  public:
    AWS_IOT_API DescribeAuthorizerResult();
    AWS_IOT_API DescribeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
