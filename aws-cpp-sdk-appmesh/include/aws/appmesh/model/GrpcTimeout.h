/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/Duration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents types of timeouts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcTimeout">AWS
   * API Reference</a></p>
   */
  class GrpcTimeout
  {
  public:
    AWS_APPMESH_API GrpcTimeout();
    AWS_APPMESH_API GrpcTimeout(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline const Duration& GetIdle() const{ return m_idle; }

    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }

    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline void SetIdle(const Duration& value) { m_idleHasBeenSet = true; m_idle = value; }

    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline void SetIdle(Duration&& value) { m_idleHasBeenSet = true; m_idle = std::move(value); }

    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline GrpcTimeout& WithIdle(const Duration& value) { SetIdle(value); return *this;}

    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline GrpcTimeout& WithIdle(Duration&& value) { SetIdle(std::move(value)); return *this;}


    /**
     * <p>An object that represents a per request timeout. The default value is 15
     * seconds. If you set a higher timeout, then make sure that the higher value is
     * set for each App Mesh resource in a conversation. For example, if a virtual node
     * backend uses a virtual router provider to route to another virtual node, then
     * the timeout should be greater than 15 seconds for the source and destination
     * virtual node and the route.</p>
     */
    inline const Duration& GetPerRequest() const{ return m_perRequest; }

    /**
     * <p>An object that represents a per request timeout. The default value is 15
     * seconds. If you set a higher timeout, then make sure that the higher value is
     * set for each App Mesh resource in a conversation. For example, if a virtual node
     * backend uses a virtual router provider to route to another virtual node, then
     * the timeout should be greater than 15 seconds for the source and destination
     * virtual node and the route.</p>
     */
    inline bool PerRequestHasBeenSet() const { return m_perRequestHasBeenSet; }

    /**
     * <p>An object that represents a per request timeout. The default value is 15
     * seconds. If you set a higher timeout, then make sure that the higher value is
     * set for each App Mesh resource in a conversation. For example, if a virtual node
     * backend uses a virtual router provider to route to another virtual node, then
     * the timeout should be greater than 15 seconds for the source and destination
     * virtual node and the route.</p>
     */
    inline void SetPerRequest(const Duration& value) { m_perRequestHasBeenSet = true; m_perRequest = value; }

    /**
     * <p>An object that represents a per request timeout. The default value is 15
     * seconds. If you set a higher timeout, then make sure that the higher value is
     * set for each App Mesh resource in a conversation. For example, if a virtual node
     * backend uses a virtual router provider to route to another virtual node, then
     * the timeout should be greater than 15 seconds for the source and destination
     * virtual node and the route.</p>
     */
    inline void SetPerRequest(Duration&& value) { m_perRequestHasBeenSet = true; m_perRequest = std::move(value); }

    /**
     * <p>An object that represents a per request timeout. The default value is 15
     * seconds. If you set a higher timeout, then make sure that the higher value is
     * set for each App Mesh resource in a conversation. For example, if a virtual node
     * backend uses a virtual router provider to route to another virtual node, then
     * the timeout should be greater than 15 seconds for the source and destination
     * virtual node and the route.</p>
     */
    inline GrpcTimeout& WithPerRequest(const Duration& value) { SetPerRequest(value); return *this;}

    /**
     * <p>An object that represents a per request timeout. The default value is 15
     * seconds. If you set a higher timeout, then make sure that the higher value is
     * set for each App Mesh resource in a conversation. For example, if a virtual node
     * backend uses a virtual router provider to route to another virtual node, then
     * the timeout should be greater than 15 seconds for the source and destination
     * virtual node and the route.</p>
     */
    inline GrpcTimeout& WithPerRequest(Duration&& value) { SetPerRequest(std::move(value)); return *this;}

  private:

    Duration m_idle;
    bool m_idleHasBeenSet = false;

    Duration m_perRequest;
    bool m_perRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
