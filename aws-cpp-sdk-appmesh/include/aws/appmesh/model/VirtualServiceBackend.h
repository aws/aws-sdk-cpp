/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ClientPolicy.h>
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
   * <p>An object that represents a virtual service backend for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualServiceBackend">AWS
   * API Reference</a></p>
   */
  class VirtualServiceBackend
  {
  public:
    AWS_APPMESH_API VirtualServiceBackend();
    AWS_APPMESH_API VirtualServiceBackend(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualServiceBackend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents the client policy for a backend.</p>
     */
    inline const ClientPolicy& GetClientPolicy() const{ return m_clientPolicy; }

    /**
     * <p>A reference to an object that represents the client policy for a backend.</p>
     */
    inline bool ClientPolicyHasBeenSet() const { return m_clientPolicyHasBeenSet; }

    /**
     * <p>A reference to an object that represents the client policy for a backend.</p>
     */
    inline void SetClientPolicy(const ClientPolicy& value) { m_clientPolicyHasBeenSet = true; m_clientPolicy = value; }

    /**
     * <p>A reference to an object that represents the client policy for a backend.</p>
     */
    inline void SetClientPolicy(ClientPolicy&& value) { m_clientPolicyHasBeenSet = true; m_clientPolicy = std::move(value); }

    /**
     * <p>A reference to an object that represents the client policy for a backend.</p>
     */
    inline VirtualServiceBackend& WithClientPolicy(const ClientPolicy& value) { SetClientPolicy(value); return *this;}

    /**
     * <p>A reference to an object that represents the client policy for a backend.</p>
     */
    inline VirtualServiceBackend& WithClientPolicy(ClientPolicy&& value) { SetClientPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline const Aws::String& GetVirtualServiceName() const{ return m_virtualServiceName; }

    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline bool VirtualServiceNameHasBeenSet() const { return m_virtualServiceNameHasBeenSet; }

    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline void SetVirtualServiceName(const Aws::String& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = value; }

    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline void SetVirtualServiceName(Aws::String&& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = std::move(value); }

    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline void SetVirtualServiceName(const char* value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName.assign(value); }

    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline VirtualServiceBackend& WithVirtualServiceName(const Aws::String& value) { SetVirtualServiceName(value); return *this;}

    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline VirtualServiceBackend& WithVirtualServiceName(Aws::String&& value) { SetVirtualServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline VirtualServiceBackend& WithVirtualServiceName(const char* value) { SetVirtualServiceName(value); return *this;}

  private:

    ClientPolicy m_clientPolicy;
    bool m_clientPolicyHasBeenSet = false;

    Aws::String m_virtualServiceName;
    bool m_virtualServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
