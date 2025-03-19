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
    AWS_APPTEST_API MainframeResourceSummary() = default;
    AWS_APPTEST_API MainframeResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API MainframeResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS Mainframe Modernization managed application in the mainframe resource
     * summary.</p>
     */
    inline const M2ManagedApplicationSummary& GetM2ManagedApplication() const { return m_m2ManagedApplication; }
    inline bool M2ManagedApplicationHasBeenSet() const { return m_m2ManagedApplicationHasBeenSet; }
    template<typename M2ManagedApplicationT = M2ManagedApplicationSummary>
    void SetM2ManagedApplication(M2ManagedApplicationT&& value) { m_m2ManagedApplicationHasBeenSet = true; m_m2ManagedApplication = std::forward<M2ManagedApplicationT>(value); }
    template<typename M2ManagedApplicationT = M2ManagedApplicationSummary>
    MainframeResourceSummary& WithM2ManagedApplication(M2ManagedApplicationT&& value) { SetM2ManagedApplication(std::forward<M2ManagedApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Mainframe Modernization non-managed application in the mainframe
     * resource summary.</p>
     */
    inline const M2NonManagedApplicationSummary& GetM2NonManagedApplication() const { return m_m2NonManagedApplication; }
    inline bool M2NonManagedApplicationHasBeenSet() const { return m_m2NonManagedApplicationHasBeenSet; }
    template<typename M2NonManagedApplicationT = M2NonManagedApplicationSummary>
    void SetM2NonManagedApplication(M2NonManagedApplicationT&& value) { m_m2NonManagedApplicationHasBeenSet = true; m_m2NonManagedApplication = std::forward<M2NonManagedApplicationT>(value); }
    template<typename M2NonManagedApplicationT = M2NonManagedApplicationSummary>
    MainframeResourceSummary& WithM2NonManagedApplication(M2NonManagedApplicationT&& value) { SetM2NonManagedApplication(std::forward<M2NonManagedApplicationT>(value)); return *this;}
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
