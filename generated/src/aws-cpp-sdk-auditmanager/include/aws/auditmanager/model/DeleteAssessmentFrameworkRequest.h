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
  class DeleteAssessmentFrameworkRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API DeleteAssessmentFrameworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssessmentFramework"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline const Aws::String& GetFrameworkId() const{ return m_frameworkId; }

    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }

    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline void SetFrameworkId(const Aws::String& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = value; }

    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline void SetFrameworkId(Aws::String&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::move(value); }

    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline void SetFrameworkId(const char* value) { m_frameworkIdHasBeenSet = true; m_frameworkId.assign(value); }

    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline DeleteAssessmentFrameworkRequest& WithFrameworkId(const Aws::String& value) { SetFrameworkId(value); return *this;}

    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline DeleteAssessmentFrameworkRequest& WithFrameworkId(Aws::String&& value) { SetFrameworkId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the custom framework. </p>
     */
    inline DeleteAssessmentFrameworkRequest& WithFrameworkId(const char* value) { SetFrameworkId(value); return *this;}

  private:

    Aws::String m_frameworkId;
    bool m_frameworkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
