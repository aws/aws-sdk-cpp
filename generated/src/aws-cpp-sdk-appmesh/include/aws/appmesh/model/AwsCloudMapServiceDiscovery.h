/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/IpPreference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/AwsCloudMapInstanceAttribute.h>
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
   * <p>An object that represents the Cloud Map service discovery information for
   * your virtual node.</p>  <p>Cloud Map is not available in the eu-south-1
   * Region.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/AwsCloudMapServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class AwsCloudMapServiceDiscovery
  {
  public:
    AWS_APPMESH_API AwsCloudMapServiceDiscovery() = default;
    AWS_APPMESH_API AwsCloudMapServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API AwsCloudMapServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all of the specified key/value pairs will be
     * returned.</p>
     */
    inline const Aws::Vector<AwsCloudMapInstanceAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<AwsCloudMapInstanceAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<AwsCloudMapInstanceAttribute>>
    AwsCloudMapServiceDiscovery& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = AwsCloudMapInstanceAttribute>
    AwsCloudMapServiceDiscovery& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline IpPreference GetIpPreference() const { return m_ipPreference; }
    inline bool IpPreferenceHasBeenSet() const { return m_ipPreferenceHasBeenSet; }
    inline void SetIpPreference(IpPreference value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = value; }
    inline AwsCloudMapServiceDiscovery& WithIpPreference(IpPreference value) { SetIpPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Cloud Map namespace to use.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    AwsCloudMapServiceDiscovery& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Cloud Map service to use.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    AwsCloudMapServiceDiscovery& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AwsCloudMapInstanceAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    IpPreference m_ipPreference{IpPreference::NOT_SET};
    bool m_ipPreferenceHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
