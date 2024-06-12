/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CloudFormation.h>
#include <aws/apptest/model/M2ManagedApplication.h>
#include <aws/apptest/model/M2NonManagedApplication.h>
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
   * <p>Specifies the resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/ResourceType">AWS
   * API Reference</a></p>
   */
  class ResourceType
  {
  public:
    AWS_APPTEST_API ResourceType();
    AWS_APPTEST_API ResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API ResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CloudFormation template of the resource type.</p>
     */
    inline const CloudFormation& GetCloudFormation() const{ return m_cloudFormation; }
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }
    inline void SetCloudFormation(const CloudFormation& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }
    inline void SetCloudFormation(CloudFormation&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }
    inline ResourceType& WithCloudFormation(const CloudFormation& value) { SetCloudFormation(value); return *this;}
    inline ResourceType& WithCloudFormation(CloudFormation&& value) { SetCloudFormation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Mainframe Modernization managed application of the resource type.</p>
     */
    inline const M2ManagedApplication& GetM2ManagedApplication() const{ return m_m2ManagedApplication; }
    inline bool M2ManagedApplicationHasBeenSet() const { return m_m2ManagedApplicationHasBeenSet; }
    inline void SetM2ManagedApplication(const M2ManagedApplication& value) { m_m2ManagedApplicationHasBeenSet = true; m_m2ManagedApplication = value; }
    inline void SetM2ManagedApplication(M2ManagedApplication&& value) { m_m2ManagedApplicationHasBeenSet = true; m_m2ManagedApplication = std::move(value); }
    inline ResourceType& WithM2ManagedApplication(const M2ManagedApplication& value) { SetM2ManagedApplication(value); return *this;}
    inline ResourceType& WithM2ManagedApplication(M2ManagedApplication&& value) { SetM2ManagedApplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Mainframe Modernization non-managed application of the resource
     * type.</p>
     */
    inline const M2NonManagedApplication& GetM2NonManagedApplication() const{ return m_m2NonManagedApplication; }
    inline bool M2NonManagedApplicationHasBeenSet() const { return m_m2NonManagedApplicationHasBeenSet; }
    inline void SetM2NonManagedApplication(const M2NonManagedApplication& value) { m_m2NonManagedApplicationHasBeenSet = true; m_m2NonManagedApplication = value; }
    inline void SetM2NonManagedApplication(M2NonManagedApplication&& value) { m_m2NonManagedApplicationHasBeenSet = true; m_m2NonManagedApplication = std::move(value); }
    inline ResourceType& WithM2NonManagedApplication(const M2NonManagedApplication& value) { SetM2NonManagedApplication(value); return *this;}
    inline ResourceType& WithM2NonManagedApplication(M2NonManagedApplication&& value) { SetM2NonManagedApplication(std::move(value)); return *this;}
    ///@}
  private:

    CloudFormation m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;

    M2ManagedApplication m_m2ManagedApplication;
    bool m_m2ManagedApplicationHasBeenSet = false;

    M2NonManagedApplication m_m2NonManagedApplication;
    bool m_m2NonManagedApplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
