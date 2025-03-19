/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/M2ManagedApplicationAction.h>
#include <aws/apptest/model/M2NonManagedApplicationAction.h>
#include <aws/apptest/model/CloudFormationAction.h>
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
   * <p>Specifies a resource action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ResourceAction">AWS
   * API Reference</a></p>
   */
  class ResourceAction
  {
  public:
    AWS_APPTEST_API ResourceAction() = default;
    AWS_APPTEST_API ResourceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API ResourceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS Mainframe Modernization managed application action of the resource
     * action.</p>
     */
    inline const M2ManagedApplicationAction& GetM2ManagedApplicationAction() const { return m_m2ManagedApplicationAction; }
    inline bool M2ManagedApplicationActionHasBeenSet() const { return m_m2ManagedApplicationActionHasBeenSet; }
    template<typename M2ManagedApplicationActionT = M2ManagedApplicationAction>
    void SetM2ManagedApplicationAction(M2ManagedApplicationActionT&& value) { m_m2ManagedApplicationActionHasBeenSet = true; m_m2ManagedApplicationAction = std::forward<M2ManagedApplicationActionT>(value); }
    template<typename M2ManagedApplicationActionT = M2ManagedApplicationAction>
    ResourceAction& WithM2ManagedApplicationAction(M2ManagedApplicationActionT&& value) { SetM2ManagedApplicationAction(std::forward<M2ManagedApplicationActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Mainframe Modernization non-managed application action of the
     * resource action.</p>
     */
    inline const M2NonManagedApplicationAction& GetM2NonManagedApplicationAction() const { return m_m2NonManagedApplicationAction; }
    inline bool M2NonManagedApplicationActionHasBeenSet() const { return m_m2NonManagedApplicationActionHasBeenSet; }
    template<typename M2NonManagedApplicationActionT = M2NonManagedApplicationAction>
    void SetM2NonManagedApplicationAction(M2NonManagedApplicationActionT&& value) { m_m2NonManagedApplicationActionHasBeenSet = true; m_m2NonManagedApplicationAction = std::forward<M2NonManagedApplicationActionT>(value); }
    template<typename M2NonManagedApplicationActionT = M2NonManagedApplicationAction>
    ResourceAction& WithM2NonManagedApplicationAction(M2NonManagedApplicationActionT&& value) { SetM2NonManagedApplicationAction(std::forward<M2NonManagedApplicationActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudFormation action of the resource action.</p>
     */
    inline const CloudFormationAction& GetCloudFormationAction() const { return m_cloudFormationAction; }
    inline bool CloudFormationActionHasBeenSet() const { return m_cloudFormationActionHasBeenSet; }
    template<typename CloudFormationActionT = CloudFormationAction>
    void SetCloudFormationAction(CloudFormationActionT&& value) { m_cloudFormationActionHasBeenSet = true; m_cloudFormationAction = std::forward<CloudFormationActionT>(value); }
    template<typename CloudFormationActionT = CloudFormationAction>
    ResourceAction& WithCloudFormationAction(CloudFormationActionT&& value) { SetCloudFormationAction(std::forward<CloudFormationActionT>(value)); return *this;}
    ///@}
  private:

    M2ManagedApplicationAction m_m2ManagedApplicationAction;
    bool m_m2ManagedApplicationActionHasBeenSet = false;

    M2NonManagedApplicationAction m_m2NonManagedApplicationAction;
    bool m_m2NonManagedApplicationActionHasBeenSet = false;

    CloudFormationAction m_cloudFormationAction;
    bool m_cloudFormationActionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
