﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class AWS_CUSTOMERPROFILES_API GetWorkflowRequest : public CustomerProfilesRequest
  {
  public:
    GetWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflow"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetWorkflowRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetWorkflowRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetWorkflowRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
