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
   * <p>The DNS service discovery information for your virtual node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DnsServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API DnsServiceDiscovery
  {
  public:
    DnsServiceDiscovery();
    DnsServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    DnsServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS service name for your virtual node.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The DNS service name for your virtual node.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The DNS service name for your virtual node.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The DNS service name for your virtual node.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The DNS service name for your virtual node.</p>
     */
    inline DnsServiceDiscovery& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The DNS service name for your virtual node.</p>
     */
    inline DnsServiceDiscovery& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The DNS service name for your virtual node.</p>
     */
    inline DnsServiceDiscovery& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
