/**
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
  class VirtualServiceSpec
  {
  public:
    AWS_APPMESH_API VirtualServiceSpec() = default;
    AWS_APPMESH_API VirtualServiceSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualServiceSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The App Mesh object that is acting as the provider for a virtual service. You
     * can specify a single virtual node or virtual router.</p>
     */
    inline const VirtualServiceProvider& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = VirtualServiceProvider>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = VirtualServiceProvider>
    VirtualServiceSpec& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}
  private:

    VirtualServiceProvider m_provider;
    bool m_providerHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
