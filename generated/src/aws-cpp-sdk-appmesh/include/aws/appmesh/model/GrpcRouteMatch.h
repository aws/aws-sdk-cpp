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
    AWS_APPMESH_API GrpcRouteMatch() = default;
    AWS_APPMESH_API GrpcRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the data to match from the request.</p>
     */
    inline const Aws::Vector<GrpcRouteMetadata>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Vector<GrpcRouteMetadata>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Vector<GrpcRouteMetadata>>
    GrpcRouteMatch& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataT = GrpcRouteMetadata>
    GrpcRouteMatch& AddMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata.emplace_back(std::forward<MetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The method name to match from the request. If you specify a name, you must
     * also specify a <code>serviceName</code>.</p>
     */
    inline const Aws::String& GetMethodName() const { return m_methodName; }
    inline bool MethodNameHasBeenSet() const { return m_methodNameHasBeenSet; }
    template<typename MethodNameT = Aws::String>
    void SetMethodName(MethodNameT&& value) { m_methodNameHasBeenSet = true; m_methodName = std::forward<MethodNameT>(value); }
    template<typename MethodNameT = Aws::String>
    GrpcRouteMatch& WithMethodName(MethodNameT&& value) { SetMethodName(std::forward<MethodNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number to match on.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GrpcRouteMatch& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    GrpcRouteMatch& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GrpcRouteMetadata> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_methodName;
    bool m_methodNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
