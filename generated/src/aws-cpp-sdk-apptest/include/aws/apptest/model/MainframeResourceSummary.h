/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/M2ManagedApplicationSummary.h>
#include <aws/apptest/model/M2NonManagedApplicationSummary.h>
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
   * <p>Specifies the mainframe resource summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/MainframeResourceSummary">AWS
   * API Reference</a></p>
   */
  class MainframeResourceSummary
  {
  public:
    AWS_APPTEST_API MainframeResourceSummary();
    AWS_APPTEST_API MainframeResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API MainframeResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS Mainframe Modernization managed application in the mainframe resource
     * summary.</p>
     */
    inline const M2ManagedApplicationSummary& GetM2ManagedApplication() const{ return m_m2ManagedApplication; }
    inline bool M2ManagedApplicationHasBeenSet() const { return m_m2ManagedApplicationHasBeenSet; }
    inline void SetM2ManagedApplication(const M2ManagedApplicationSummary& value) { m_m2ManagedApplicationHasBeenSet = true; m_m2ManagedApplication = value; }
    inline void SetM2ManagedApplication(M2ManagedApplicationSummary&& value) { m_m2ManagedApplicationHasBeenSet = true; m_m2ManagedApplication = std::move(value); }
    inline MainframeResourceSummary& WithM2ManagedApplication(const M2ManagedApplicationSummary& value) { SetM2ManagedApplication(value); return *this;}
    inline MainframeResourceSummary& WithM2ManagedApplication(M2ManagedApplicationSummary&& value) { SetM2ManagedApplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Mainframe Modernization non-managed application in the mainframe
     * resource summary.</p>
     */
    inline const M2NonManagedApplicationSummary& GetM2NonManagedApplication() const{ return m_m2NonManagedApplication; }
    inline bool M2NonManagedApplicationHasBeenSet() const { return m_m2NonManagedApplicationHasBeenSet; }
    inline void SetM2NonManagedApplication(const M2NonManagedApplicationSummary& value) { m_m2NonManagedApplicationHasBeenSet = true; m_m2NonManagedApplication = value; }
    inline void SetM2NonManagedApplication(M2NonManagedApplicationSummary&& value) { m_m2NonManagedApplicationHasBeenSet = true; m_m2NonManagedApplication = std::move(value); }
    inline MainframeResourceSummary& WithM2NonManagedApplication(const M2NonManagedApplicationSummary& value) { SetM2NonManagedApplication(value); return *this;}
    inline MainframeResourceSummary& WithM2NonManagedApplication(M2NonManagedApplicationSummary&& value) { SetM2NonManagedApplication(std::move(value)); return *this;}
    ///@}
  private:

    M2ManagedApplicationSummary m_m2ManagedApplication;
    bool m_m2ManagedApplicationHasBeenSet = false;

    M2NonManagedApplicationSummary m_m2NonManagedApplication;
    bool m_m2NonManagedApplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
