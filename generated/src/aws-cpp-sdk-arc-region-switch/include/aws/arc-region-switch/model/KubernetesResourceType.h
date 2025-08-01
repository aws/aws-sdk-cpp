/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Defines the type of Kubernetes resource to scale in an Amazon EKS
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/KubernetesResourceType">AWS
   * API Reference</a></p>
   */
  class KubernetesResourceType
  {
  public:
    AWS_ARCREGIONSWITCH_API KubernetesResourceType() = default;
    AWS_ARCREGIONSWITCH_API KubernetesResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API KubernetesResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API version type for the Kubernetes resource.</p>
     */
    inline const Aws::String& GetApiVersion() const { return m_apiVersion; }
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }
    template<typename ApiVersionT = Aws::String>
    void SetApiVersion(ApiVersionT&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::forward<ApiVersionT>(value); }
    template<typename ApiVersionT = Aws::String>
    KubernetesResourceType& WithApiVersion(ApiVersionT&& value) { SetApiVersion(std::forward<ApiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kind for the Kubernetes resource.</p>
     */
    inline const Aws::String& GetKind() const { return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    template<typename KindT = Aws::String>
    void SetKind(KindT&& value) { m_kindHasBeenSet = true; m_kind = std::forward<KindT>(value); }
    template<typename KindT = Aws::String>
    KubernetesResourceType& WithKind(KindT&& value) { SetKind(std::forward<KindT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiVersion;
    bool m_apiVersionHasBeenSet = false;

    Aws::String m_kind;
    bool m_kindHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
