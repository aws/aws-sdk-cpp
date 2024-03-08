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
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceAction();
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource that was identified for a lifecycle policy
     * action.</p>
     */
    inline const LifecycleExecutionResourceActionName& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource that was identified for a lifecycle policy
     * action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource that was identified for a lifecycle policy
     * action.</p>
     */
    inline void SetName(const LifecycleExecutionResourceActionName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource that was identified for a lifecycle policy
     * action.</p>
     */
    inline void SetName(LifecycleExecutionResourceActionName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource that was identified for a lifecycle policy
     * action.</p>
     */
    inline LifecycleExecutionResourceAction& WithName(const LifecycleExecutionResourceActionName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource that was identified for a lifecycle policy
     * action.</p>
     */
    inline LifecycleExecutionResourceAction& WithName(LifecycleExecutionResourceActionName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline LifecycleExecutionResourceAction& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline LifecycleExecutionResourceAction& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the lifecycle policy action is taken.</p>
     */
    inline LifecycleExecutionResourceAction& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    LifecycleExecutionResourceActionName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
