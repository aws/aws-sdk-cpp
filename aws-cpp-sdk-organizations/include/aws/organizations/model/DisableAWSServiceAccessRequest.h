/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class DisableAWSServiceAccessRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DisableAWSServiceAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableAWSServiceAccess"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }

    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }

    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }

    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }

    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }

    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline DisableAWSServiceAccessRequest& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}

    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline DisableAWSServiceAccessRequest& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}

    /**
     * <p>The service principal name of the Amazon Web Services service for which you
     * want to disable integration with your organization. This is typically in the
     * form of a URL, such as <code>
     * <i>service-abbreviation</i>.amazonaws.com</code>.</p>
     */
    inline DisableAWSServiceAccessRequest& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}

  private:

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
