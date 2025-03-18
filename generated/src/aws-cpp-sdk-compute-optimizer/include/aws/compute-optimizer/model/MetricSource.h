/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/MetricSourceProvider.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> The list of metric sources required to generate recommendations for
   * commercial software licenses. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/MetricSource">AWS
   * API Reference</a></p>
   */
  class MetricSource
  {
  public:
    AWS_COMPUTEOPTIMIZER_API MetricSource() = default;
    AWS_COMPUTEOPTIMIZER_API MetricSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API MetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the metric source provider. </p>
     */
    inline MetricSourceProvider GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(MetricSourceProvider value) { m_providerHasBeenSet = true; m_provider = value; }
    inline MetricSource& WithProvider(MetricSourceProvider value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the metric source provider. </p>
     */
    inline const Aws::String& GetProviderArn() const { return m_providerArn; }
    inline bool ProviderArnHasBeenSet() const { return m_providerArnHasBeenSet; }
    template<typename ProviderArnT = Aws::String>
    void SetProviderArn(ProviderArnT&& value) { m_providerArnHasBeenSet = true; m_providerArn = std::forward<ProviderArnT>(value); }
    template<typename ProviderArnT = Aws::String>
    MetricSource& WithProviderArn(ProviderArnT&& value) { SetProviderArn(std::forward<ProviderArnT>(value)); return *this;}
    ///@}
  private:

    MetricSourceProvider m_provider{MetricSourceProvider::NOT_SET};
    bool m_providerHasBeenSet = false;

    Aws::String m_providerArn;
    bool m_providerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
