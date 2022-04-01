﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualServiceProvider.h>
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
   * <p>An object that represents the specification of a virtual
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualServiceSpec">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualServiceSpec
  {
  public:
    VirtualServiceSpec();
    VirtualServiceSpec(Aws::Utils::Json::JsonView jsonValue);
    VirtualServiceSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The App Mesh object that is acting as the provider for a virtual service. You
     * can specify a single virtual node or virtual router.</p>
     */
    inline const VirtualServiceProvider& GetProvider() const{ return m_provider; }

    /**
     * <p>The App Mesh object that is acting as the provider for a virtual service. You
     * can specify a single virtual node or virtual router.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The App Mesh object that is acting as the provider for a virtual service. You
     * can specify a single virtual node or virtual router.</p>
     */
    inline void SetProvider(const VirtualServiceProvider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The App Mesh object that is acting as the provider for a virtual service. You
     * can specify a single virtual node or virtual router.</p>
     */
    inline void SetProvider(VirtualServiceProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The App Mesh object that is acting as the provider for a virtual service. You
     * can specify a single virtual node or virtual router.</p>
     */
    inline VirtualServiceSpec& WithProvider(const VirtualServiceProvider& value) { SetProvider(value); return *this;}

    /**
     * <p>The App Mesh object that is acting as the provider for a virtual service. You
     * can specify a single virtual node or virtual router.</p>
     */
    inline VirtualServiceSpec& WithProvider(VirtualServiceProvider&& value) { SetProvider(std::move(value)); return *this;}

  private:

    VirtualServiceProvider m_provider;
    bool m_providerHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
