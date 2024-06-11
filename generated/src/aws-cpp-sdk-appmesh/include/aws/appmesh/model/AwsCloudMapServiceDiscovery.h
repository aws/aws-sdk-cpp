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
    AWS_APPMESH_API AwsCloudMapServiceDiscovery();
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
    inline const Aws::Vector<AwsCloudMapInstanceAttribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<AwsCloudMapInstanceAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<AwsCloudMapInstanceAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline AwsCloudMapServiceDiscovery& WithAttributes(const Aws::Vector<AwsCloudMapInstanceAttribute>& value) { SetAttributes(value); return *this;}
    inline AwsCloudMapServiceDiscovery& WithAttributes(Aws::Vector<AwsCloudMapInstanceAttribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline AwsCloudMapServiceDiscovery& AddAttributes(const AwsCloudMapInstanceAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline AwsCloudMapServiceDiscovery& AddAttributes(AwsCloudMapInstanceAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline const IpPreference& GetIpPreference() const{ return m_ipPreference; }
    inline bool IpPreferenceHasBeenSet() const { return m_ipPreferenceHasBeenSet; }
    inline void SetIpPreference(const IpPreference& value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = value; }
    inline void SetIpPreference(IpPreference&& value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = std::move(value); }
    inline AwsCloudMapServiceDiscovery& WithIpPreference(const IpPreference& value) { SetIpPreference(value); return *this;}
    inline AwsCloudMapServiceDiscovery& WithIpPreference(IpPreference&& value) { SetIpPreference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Cloud Map namespace to use.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline AwsCloudMapServiceDiscovery& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline AwsCloudMapServiceDiscovery& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline AwsCloudMapServiceDiscovery& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Cloud Map service to use.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline AwsCloudMapServiceDiscovery& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline AwsCloudMapServiceDiscovery& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline AwsCloudMapServiceDiscovery& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}
  private:

    Aws::Vector<AwsCloudMapInstanceAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    IpPreference m_ipPreference;
    bool m_ipPreferenceHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
