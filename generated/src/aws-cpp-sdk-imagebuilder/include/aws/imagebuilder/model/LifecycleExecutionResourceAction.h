/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecycleExecutionResourceActionName.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The lifecycle policy action that was identified for the impacted
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecycleExecutionResourceAction">AWS
   * API Reference</a></p>
   */
  class LifecycleExecutionResourceAction
  {
  public:
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceAction() = default;
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource that was identified for a lifecycle policy
     * action.</p>
     */
    inline LifecycleExecutionResourceActionName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(LifecycleExecutionResourceActionName value) { m_nameHasBeenSet = true; m_name = value; }
    inline LifecycleExecutionResourceAction& WithName(LifecycleExecutionResourceActionName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    LifecycleExecutionResourceAction& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    LifecycleExecutionResourceActionName m_name{LifecycleExecutionResourceActionName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
