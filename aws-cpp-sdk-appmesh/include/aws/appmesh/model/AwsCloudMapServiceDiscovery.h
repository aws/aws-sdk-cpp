/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object representing the AWS Cloud Map service discovery information for
   * your virtual
         node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/AwsCloudMapServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API AwsCloudMapServiceDiscovery
  {
  public:
    AwsCloudMapServiceDiscovery();
    AwsCloudMapServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    AwsCloudMapServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline const Aws::Vector<AwsCloudMapInstanceAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline void SetAttributes(const Aws::Vector<AwsCloudMapInstanceAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline void SetAttributes(Aws::Vector<AwsCloudMapInstanceAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithAttributes(const Aws::Vector<AwsCloudMapInstanceAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithAttributes(Aws::Vector<AwsCloudMapInstanceAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline AwsCloudMapServiceDiscovery& AddAttributes(const AwsCloudMapInstanceAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances
         by any custom attribute that you specified when you
     * registered the instance. Only instances
         that match all of the specified
     * key/value pairs will be returned.</p>
     */
    inline AwsCloudMapServiceDiscovery& AddAttributes(AwsCloudMapInstanceAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Cloud Map namespace to use.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Cloud Map service to use.</p>
     */
    inline AwsCloudMapServiceDiscovery& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::Vector<AwsCloudMapInstanceAttribute> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
