/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailActionType.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailActionIncludeResources.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains selection criteria for the lifecycle policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyDetailAction">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetailAction
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailAction() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the lifecycle action to take.</p>
     */
    inline LifecyclePolicyDetailActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LifecyclePolicyDetailActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LifecyclePolicyDetailAction& WithType(LifecyclePolicyDetailActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyDetailActionIncludeResources& GetIncludeResources() const { return m_includeResources; }
    inline bool IncludeResourcesHasBeenSet() const { return m_includeResourcesHasBeenSet; }
    template<typename IncludeResourcesT = LifecyclePolicyDetailActionIncludeResources>
    void SetIncludeResources(IncludeResourcesT&& value) { m_includeResourcesHasBeenSet = true; m_includeResources = std::forward<IncludeResourcesT>(value); }
    template<typename IncludeResourcesT = LifecyclePolicyDetailActionIncludeResources>
    LifecyclePolicyDetailAction& WithIncludeResources(IncludeResourcesT&& value) { SetIncludeResources(std::forward<IncludeResourcesT>(value)); return *this;}
    ///@}
  private:

    LifecyclePolicyDetailActionType m_type{LifecyclePolicyDetailActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    LifecyclePolicyDetailActionIncludeResources m_includeResources;
    bool m_includeResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
