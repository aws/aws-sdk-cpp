/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that represents the criteria for determining a request
   * match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcGatewayRouteMatch">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API GrpcGatewayRouteMatch
  {
  public:
    GrpcGatewayRouteMatch();
    GrpcGatewayRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    GrpcGatewayRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline GrpcGatewayRouteMatch& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline GrpcGatewayRouteMatch& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline GrpcGatewayRouteMatch& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
