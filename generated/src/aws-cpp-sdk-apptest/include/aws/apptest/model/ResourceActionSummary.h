/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CloudFormationStepSummary.h>
#include <aws/apptest/model/M2ManagedApplicationStepSummary.h>
#include <aws/apptest/model/M2NonManagedApplicationStepSummary.h>
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
   * <p>Specifies the resource action summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ResourceActionSummary">AWS
   * API Reference</a></p>
   */
  class ResourceActionSummary
  {
  public:
    AWS_APPTEST_API ResourceActionSummary() = default;
    AWS_APPTEST_API ResourceActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API ResourceActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CloudFormation template of the resource action summary.</p>
     */
    inline const CloudFormationStepSummary& GetCloudFormation() const { return m_cloudFormation; }
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }
    template<typename CloudFormationT = CloudFormationStepSummary>
    void SetCloudFormation(CloudFormationT&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::forward<CloudFormationT>(value); }
    template<typename CloudFormationT = CloudFormationStepSummary>
    ResourceActionSummary& WithCloudFormation(CloudFormationT&& value) { SetCloudFormation(std::forward<CloudFormationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Mainframe Modernization managed application of the resource action
     * summary.</p>
     */
    inline const M2ManagedApplicationStepSummary& GetM2ManagedApplication() const { return m_m2ManagedApplication; }
    inline bool M2ManagedApplicationHasBeenSet() const { return m_m2ManagedApplicationHasBeenSet; }
    template<typename M2ManagedApplicationT = M2ManagedApplicationStepSummary>
    void SetM2ManagedApplication(M2ManagedApplicationT&& value) { m_m2ManagedApplicationHasBeenSet = true; m_m2ManagedApplication = std::forward<M2ManagedApplicationT>(value); }
    template<typename M2ManagedApplicationT = M2ManagedApplicationStepSummary>
    ResourceActionSummary& WithM2ManagedApplication(M2ManagedApplicationT&& value) { SetM2ManagedApplication(std::forward<M2ManagedApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Mainframe Modernization non-managed application of the resource
     * action summary.</p>
     */
    inline const M2NonManagedApplicationStepSummary& GetM2NonManagedApplication() const { return m_m2NonManagedApplication; }
    inline bool M2NonManagedApplicationHasBeenSet() const { return m_m2NonManagedApplicationHasBeenSet; }
    template<typename M2NonManagedApplicationT = M2NonManagedApplicationStepSummary>
    void SetM2NonManagedApplication(M2NonManagedApplicationT&& value) { m_m2NonManagedApplicationHasBeenSet = true; m_m2NonManagedApplication = std::forward<M2NonManagedApplicationT>(value); }
    template<typename M2NonManagedApplicationT = M2NonManagedApplicationStepSummary>
    ResourceActionSummary& WithM2NonManagedApplication(M2NonManagedApplicationT&& value) { SetM2NonManagedApplication(std::forward<M2NonManagedApplicationT>(value)); return *this;}
    ///@}
  private:

    CloudFormationStepSummary m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;

    M2ManagedApplicationStepSummary m_m2ManagedApplication;
    bool m_m2ManagedApplicationHasBeenSet = false;

    M2NonManagedApplicationStepSummary m_m2NonManagedApplication;
    bool m_m2NonManagedApplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
