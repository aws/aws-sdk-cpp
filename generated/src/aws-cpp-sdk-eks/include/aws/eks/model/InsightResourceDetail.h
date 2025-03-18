/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/InsightStatus.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Returns information about the resource being evaluated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InsightResourceDetail">AWS
   * API Reference</a></p>
   */
  class InsightResourceDetail
  {
  public:
    AWS_EKS_API InsightResourceDetail() = default;
    AWS_EKS_API InsightResourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightResourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing more detail on the status of the insight resource.</p>
     */
    inline const InsightStatus& GetInsightStatus() const { return m_insightStatus; }
    inline bool InsightStatusHasBeenSet() const { return m_insightStatusHasBeenSet; }
    template<typename InsightStatusT = InsightStatus>
    void SetInsightStatus(InsightStatusT&& value) { m_insightStatusHasBeenSet = true; m_insightStatus = std::forward<InsightStatusT>(value); }
    template<typename InsightStatusT = InsightStatus>
    InsightResourceDetail& WithInsightStatus(InsightStatusT&& value) { SetInsightStatus(std::forward<InsightStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes resource URI if applicable.</p>
     */
    inline const Aws::String& GetKubernetesResourceUri() const { return m_kubernetesResourceUri; }
    inline bool KubernetesResourceUriHasBeenSet() const { return m_kubernetesResourceUriHasBeenSet; }
    template<typename KubernetesResourceUriT = Aws::String>
    void SetKubernetesResourceUri(KubernetesResourceUriT&& value) { m_kubernetesResourceUriHasBeenSet = true; m_kubernetesResourceUri = std::forward<KubernetesResourceUriT>(value); }
    template<typename KubernetesResourceUriT = Aws::String>
    InsightResourceDetail& WithKubernetesResourceUri(KubernetesResourceUriT&& value) { SetKubernetesResourceUri(std::forward<KubernetesResourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) if applicable.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    InsightResourceDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    InsightStatus m_insightStatus;
    bool m_insightStatusHasBeenSet = false;

    Aws::String m_kubernetesResourceUri;
    bool m_kubernetesResourceUriHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
