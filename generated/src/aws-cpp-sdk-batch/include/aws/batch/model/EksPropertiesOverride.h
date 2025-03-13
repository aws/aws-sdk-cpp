/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/EksPodPropertiesOverride.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that contains overrides for the Kubernetes resources of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksPropertiesOverride">AWS
   * API Reference</a></p>
   */
  class EksPropertiesOverride
  {
  public:
    AWS_BATCH_API EksPropertiesOverride() = default;
    AWS_BATCH_API EksPropertiesOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksPropertiesOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The overrides for the Kubernetes pod resources of a job.</p>
     */
    inline const EksPodPropertiesOverride& GetPodProperties() const { return m_podProperties; }
    inline bool PodPropertiesHasBeenSet() const { return m_podPropertiesHasBeenSet; }
    template<typename PodPropertiesT = EksPodPropertiesOverride>
    void SetPodProperties(PodPropertiesT&& value) { m_podPropertiesHasBeenSet = true; m_podProperties = std::forward<PodPropertiesT>(value); }
    template<typename PodPropertiesT = EksPodPropertiesOverride>
    EksPropertiesOverride& WithPodProperties(PodPropertiesT&& value) { SetPodProperties(std::forward<PodPropertiesT>(value)); return *this;}
    ///@}
  private:

    EksPodPropertiesOverride m_podProperties;
    bool m_podPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
