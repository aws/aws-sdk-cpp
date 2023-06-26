/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DisassociateApplicationFromEntitlementRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DisassociateApplicationFromEntitlementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateApplicationFromEntitlement"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The name of the entitlement.</p>
     */
    inline const Aws::String& GetEntitlementName() const{ return m_entitlementName; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline bool EntitlementNameHasBeenSet() const { return m_entitlementNameHasBeenSet; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetEntitlementName(const Aws::String& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = value; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetEntitlementName(Aws::String&& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = std::move(value); }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetEntitlementName(const char* value) { m_entitlementNameHasBeenSet = true; m_entitlementName.assign(value); }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithEntitlementName(const Aws::String& value) { SetEntitlementName(value); return *this;}

    /**
     * <p>The name of the entitlement.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithEntitlementName(Aws::String&& value) { SetEntitlementName(std::move(value)); return *this;}

    /**
     * <p>The name of the entitlement.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithEntitlementName(const char* value) { SetEntitlementName(value); return *this;}


    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }

    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }

    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }

    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }

    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}

    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application to remove from the entitlement.</p>
     */
    inline DisassociateApplicationFromEntitlementRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_entitlementName;
    bool m_entitlementNameHasBeenSet = false;

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
