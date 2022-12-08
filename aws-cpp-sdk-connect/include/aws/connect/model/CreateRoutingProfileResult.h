/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateRoutingProfileResult
  {
  public:
    AWS_CONNECT_API CreateRoutingProfileResult();
    AWS_CONNECT_API CreateRoutingProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateRoutingProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileArn() const{ return m_routingProfileArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline void SetRoutingProfileArn(const Aws::String& value) { m_routingProfileArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline void SetRoutingProfileArn(Aws::String&& value) { m_routingProfileArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline void SetRoutingProfileArn(const char* value) { m_routingProfileArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline CreateRoutingProfileResult& WithRoutingProfileArn(const Aws::String& value) { SetRoutingProfileArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline CreateRoutingProfileResult& WithRoutingProfileArn(Aws::String&& value) { SetRoutingProfileArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline CreateRoutingProfileResult& WithRoutingProfileArn(const char* value) { SetRoutingProfileArn(value); return *this;}


    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileId = value; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileId = std::move(value); }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(const char* value) { m_routingProfileId.assign(value); }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline CreateRoutingProfileResult& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline CreateRoutingProfileResult& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline CreateRoutingProfileResult& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}

  private:

    Aws::String m_routingProfileArn;

    Aws::String m_routingProfileId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
