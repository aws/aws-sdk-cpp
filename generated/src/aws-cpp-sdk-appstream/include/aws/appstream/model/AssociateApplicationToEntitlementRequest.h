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
  class AssociateApplicationToEntitlementRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API AssociateApplicationToEntitlementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateApplicationToEntitlement"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    AssociateApplicationToEntitlementRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entitlement.</p>
     */
    inline const Aws::String& GetEntitlementName() const { return m_entitlementName; }
    inline bool EntitlementNameHasBeenSet() const { return m_entitlementNameHasBeenSet; }
    template<typename EntitlementNameT = Aws::String>
    void SetEntitlementName(EntitlementNameT&& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = std::forward<EntitlementNameT>(value); }
    template<typename EntitlementNameT = Aws::String>
    AssociateApplicationToEntitlementRequest& WithEntitlementName(EntitlementNameT&& value) { SetEntitlementName(std::forward<EntitlementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
    template<typename ApplicationIdentifierT = Aws::String>
    void SetApplicationIdentifier(ApplicationIdentifierT&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value); }
    template<typename ApplicationIdentifierT = Aws::String>
    AssociateApplicationToEntitlementRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) { SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value)); return *this;}
    ///@}
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
