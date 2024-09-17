/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/CloudFormationActionType.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the CloudFormation action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CloudFormationAction">AWS
   * API Reference</a></p>
   */
  class CloudFormationAction
  {
  public:
    AWS_APPTEST_API CloudFormationAction();
    AWS_APPTEST_API CloudFormationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CloudFormationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource of the CloudFormation action.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline CloudFormationAction& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline CloudFormationAction& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline CloudFormationAction& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the CloudFormation action.</p>
     */
    inline const CloudFormationActionType& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const CloudFormationActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(CloudFormationActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline CloudFormationAction& WithActionType(const CloudFormationActionType& value) { SetActionType(value); return *this;}
    inline CloudFormationAction& WithActionType(CloudFormationActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    CloudFormationActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
