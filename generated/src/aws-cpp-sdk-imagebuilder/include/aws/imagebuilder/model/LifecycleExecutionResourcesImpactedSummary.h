/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains details for an image resource that was identified for a lifecycle
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecycleExecutionResourcesImpactedSummary">AWS
   * API Reference</a></p>
   */
  class LifecycleExecutionResourcesImpactedSummary
  {
  public:
    AWS_IMAGEBUILDER_API LifecycleExecutionResourcesImpactedSummary() = default;
    AWS_IMAGEBUILDER_API LifecycleExecutionResourcesImpactedSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionResourcesImpactedSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether an image resource that was identified for a lifecycle
     * action has associated resources that are also impacted.</p>
     */
    inline bool GetHasImpactedResources() const { return m_hasImpactedResources; }
    inline bool HasImpactedResourcesHasBeenSet() const { return m_hasImpactedResourcesHasBeenSet; }
    inline void SetHasImpactedResources(bool value) { m_hasImpactedResourcesHasBeenSet = true; m_hasImpactedResources = value; }
    inline LifecycleExecutionResourcesImpactedSummary& WithHasImpactedResources(bool value) { SetHasImpactedResources(value); return *this;}
    ///@}
  private:

    bool m_hasImpactedResources{false};
    bool m_hasImpactedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
