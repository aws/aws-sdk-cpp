/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class GetAssessmentFrameworkRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetAssessmentFrameworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssessmentFramework"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier for the framework. </p>
     */
    inline const Aws::String& GetFrameworkId() const { return m_frameworkId; }
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }
    template<typename FrameworkIdT = Aws::String>
    void SetFrameworkId(FrameworkIdT&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::forward<FrameworkIdT>(value); }
    template<typename FrameworkIdT = Aws::String>
    GetAssessmentFrameworkRequest& WithFrameworkId(FrameworkIdT&& value) { SetFrameworkId(std::forward<FrameworkIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_frameworkId;
    bool m_frameworkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
