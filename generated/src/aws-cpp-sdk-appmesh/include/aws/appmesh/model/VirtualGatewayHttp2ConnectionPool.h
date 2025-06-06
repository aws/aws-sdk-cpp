﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>

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
   * <p>An object that represents a type of connection pool.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayHttp2ConnectionPool">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayHttp2ConnectionPool
  {
  public:
    AWS_APPMESH_API VirtualGatewayHttp2ConnectionPool() = default;
    AWS_APPMESH_API VirtualGatewayHttp2ConnectionPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayHttp2ConnectionPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum number of inflight requests Envoy can concurrently support across
     * hosts in upstream cluster.</p>
     */
    inline int GetMaxRequests() const { return m_maxRequests; }
    inline bool MaxRequestsHasBeenSet() const { return m_maxRequestsHasBeenSet; }
    inline void SetMaxRequests(int value) { m_maxRequestsHasBeenSet = true; m_maxRequests = value; }
    inline VirtualGatewayHttp2ConnectionPool& WithMaxRequests(int value) { SetMaxRequests(value); return *this;}
    ///@}
  private:

    int m_maxRequests{0};
    bool m_maxRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
