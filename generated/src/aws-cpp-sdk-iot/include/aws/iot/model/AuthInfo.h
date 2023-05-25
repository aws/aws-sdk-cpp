/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ActionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A collection of authorization information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuthInfo">AWS API
   * Reference</a></p>
   */
  class AuthInfo
  {
  public:
    AWS_IOT_API AuthInfo();
    AWS_IOT_API AuthInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of action for which the principal is being authorized.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of action for which the principal is being authorized.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of action for which the principal is being authorized.</p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of action for which the principal is being authorized.</p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of action for which the principal is being authorized.</p>
     */
    inline AuthInfo& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of action for which the principal is being authorized.</p>
     */
    inline AuthInfo& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline AuthInfo& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline AuthInfo& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline AuthInfo& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline AuthInfo& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>The resources for which the principal is being authorized to perform the
     * specified action.</p>
     */
    inline AuthInfo& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

  private:

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
