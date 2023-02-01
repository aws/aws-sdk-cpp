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
  class SetDefaultAuthorizerResult
  {
  public:
    AWS_IOT_API SetDefaultAuthorizerResult();
    AWS_IOT_API SetDefaultAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API SetDefaultAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerName = value; }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerName = std::move(value); }

    /**
     * <p>The authorizer name.</p>
     */
    inline void SetAuthorizerName(const char* value) { m_authorizerName.assign(value); }

    /**
     * <p>The authorizer name.</p>
     */
    inline SetDefaultAuthorizerResult& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}

    /**
     * <p>The authorizer name.</p>
     */
    inline SetDefaultAuthorizerResult& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}

    /**
     * <p>The authorizer name.</p>
     */
    inline SetDefaultAuthorizerResult& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}


    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const{ return m_authorizerArn; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(const Aws::String& value) { m_authorizerArn = value; }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(Aws::String&& value) { m_authorizerArn = std::move(value); }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline void SetAuthorizerArn(const char* value) { m_authorizerArn.assign(value); }

    /**
     * <p>The authorizer ARN.</p>
     */
    inline SetDefaultAuthorizerResult& WithAuthorizerArn(const Aws::String& value) { SetAuthorizerArn(value); return *this;}

    /**
     * <p>The authorizer ARN.</p>
     */
    inline SetDefaultAuthorizerResult& WithAuthorizerArn(Aws::String&& value) { SetAuthorizerArn(std::move(value)); return *this;}

    /**
     * <p>The authorizer ARN.</p>
     */
    inline SetDefaultAuthorizerResult& WithAuthorizerArn(const char* value) { SetAuthorizerArn(value); return *this;}

  private:

    Aws::String m_authorizerName;

    Aws::String m_authorizerArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
