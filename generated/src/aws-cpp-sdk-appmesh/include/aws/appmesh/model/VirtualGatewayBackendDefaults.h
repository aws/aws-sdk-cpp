/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayClientPolicy.h>
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
   * <p>An object that represents the default properties for a backend.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayBackendDefaults">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayBackendDefaults
  {
  public:
    AWS_APPMESH_API VirtualGatewayBackendDefaults();
    AWS_APPMESH_API VirtualGatewayBackendDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayBackendDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a client policy.</p>
     */
    inline const VirtualGatewayClientPolicy& GetClientPolicy() const{ return m_clientPolicy; }

    /**
     * <p>A reference to an object that represents a client policy.</p>
     */
    inline bool ClientPolicyHasBeenSet() const { return m_clientPolicyHasBeenSet; }

    /**
     * <p>A reference to an object that represents a client policy.</p>
     */
    inline void SetClientPolicy(const VirtualGatewayClientPolicy& value) { m_clientPolicyHasBeenSet = true; m_clientPolicy = value; }

    /**
     * <p>A reference to an object that represents a client policy.</p>
     */
    inline void SetClientPolicy(VirtualGatewayClientPolicy&& value) { m_clientPolicyHasBeenSet = true; m_clientPolicy = std::move(value); }

    /**
     * <p>A reference to an object that represents a client policy.</p>
     */
    inline VirtualGatewayBackendDefaults& WithClientPolicy(const VirtualGatewayClientPolicy& value) { SetClientPolicy(value); return *this;}

    /**
     * <p>A reference to an object that represents a client policy.</p>
     */
    inline VirtualGatewayBackendDefaults& WithClientPolicy(VirtualGatewayClientPolicy&& value) { SetClientPolicy(std::move(value)); return *this;}

  private:

    VirtualGatewayClientPolicy m_clientPolicy;
    bool m_clientPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
