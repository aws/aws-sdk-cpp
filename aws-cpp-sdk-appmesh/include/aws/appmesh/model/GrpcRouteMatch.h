/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/GrpcRouteMetadata.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcRouteMatch">AWS
   * API Reference</a></p>
   */
  class GrpcRouteMatch
  {
  public:
    AWS_APPMESH_API GrpcRouteMatch();
    AWS_APPMESH_API GrpcRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline const Aws::Vector<GrpcRouteMetadata>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline void SetMetadata(const Aws::Vector<GrpcRouteMetadata>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline void SetMetadata(Aws::Vector<GrpcRouteMetadata>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline GrpcRouteMatch& WithMetadata(const Aws::Vector<GrpcRouteMetadata>& value) { SetMetadata(value); return *this;}

    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline GrpcRouteMatch& WithMetadata(Aws::Vector<GrpcRouteMetadata>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline GrpcRouteMatch& AddMetadata(const GrpcRouteMetadata& value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }

    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline GrpcRouteMatch& AddMetadata(GrpcRouteMetadata&& value) { m_metadataHasBeenSet = true; m_metadata.push_back(std::move(value)); return *this; }


    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline const Aws::String& GetMethodName() const{ return m_methodName; }

    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline bool MethodNameHasBeenSet() const { return m_methodNameHasBeenSet; }

    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline void SetMethodName(const Aws::String& value) { m_methodNameHasBeenSet = true; m_methodName = value; }

    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline void SetMethodName(Aws::String&& value) { m_methodNameHasBeenSet = true; m_methodName = std::move(value); }

    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline void SetMethodName(const char* value) { m_methodNameHasBeenSet = true; m_methodName.assign(value); }

    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline GrpcRouteMatch& WithMethodName(const Aws::String& value) { SetMethodName(value); return *this;}

    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline GrpcRouteMatch& WithMethodName(Aws::String&& value) { SetMethodName(std::move(value)); return *this;}

    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline GrpcRouteMatch& WithMethodName(const char* value) { SetMethodName(value); return *this;}


    /**
     * <p>The port number to match on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number to match on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number to match on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number to match on.</p>
     */
    inline GrpcRouteMatch& WithPort(int value) { SetPort(value); return *this;}


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
    inline GrpcRouteMatch& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline GrpcRouteMatch& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline GrpcRouteMatch& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::Vector<GrpcRouteMetadata> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_methodName;
    bool m_methodNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
