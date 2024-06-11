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
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailAction();
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the lifecycle action to take.</p>
     */
    inline const LifecyclePolicyDetailActionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LifecyclePolicyDetailActionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LifecyclePolicyDetailActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline LifecyclePolicyDetailAction& WithType(const LifecyclePolicyDetailActionType& value) { SetType(value); return *this;}
    inline LifecyclePolicyDetailAction& WithType(LifecyclePolicyDetailActionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyDetailActionIncludeResources& GetIncludeResources() const{ return m_includeResources; }
    inline bool IncludeResourcesHasBeenSet() const { return m_includeResourcesHasBeenSet; }
    inline void SetIncludeResources(const LifecyclePolicyDetailActionIncludeResources& value) { m_includeResourcesHasBeenSet = true; m_includeResources = value; }
    inline void SetIncludeResources(LifecyclePolicyDetailActionIncludeResources&& value) { m_includeResourcesHasBeenSet = true; m_includeResources = std::move(value); }
    inline LifecyclePolicyDetailAction& WithIncludeResources(const LifecyclePolicyDetailActionIncludeResources& value) { SetIncludeResources(value); return *this;}
    inline LifecyclePolicyDetailAction& WithIncludeResources(LifecyclePolicyDetailActionIncludeResources&& value) { SetIncludeResources(std::move(value)); return *this;}
    ///@}
  private:

    LifecyclePolicyDetailActionType m_type;
    bool m_typeHasBeenSet = false;

    LifecyclePolicyDetailActionIncludeResources m_includeResources;
    bool m_includeResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
