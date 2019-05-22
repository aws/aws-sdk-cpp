/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkLink
{
namespace Model
{

  /**
   */
  class AWS_WORKLINK_API AssociateDomainRequest : public WorkLinkRequest
  {
  public:
    AssociateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDomain"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline AssociateDomainRequest& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline AssociateDomainRequest& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline AssociateDomainRequest& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline AssociateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline AssociateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN).</p>
     */
    inline AssociateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name to display.</p>
     */
    inline AssociateDomainRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline AssociateDomainRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name to display.</p>
     */
    inline AssociateDomainRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline const Aws::String& GetAcmCertificateArn() const{ return m_acmCertificateArn; }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline void SetAcmCertificateArn(const Aws::String& value) { m_acmCertificateArnHasBeenSet = true; m_acmCertificateArn = value; }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline void SetAcmCertificateArn(Aws::String&& value) { m_acmCertificateArnHasBeenSet = true; m_acmCertificateArn = std::move(value); }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline void SetAcmCertificateArn(const char* value) { m_acmCertificateArnHasBeenSet = true; m_acmCertificateArn.assign(value); }

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline AssociateDomainRequest& WithAcmCertificateArn(const Aws::String& value) { SetAcmCertificateArn(value); return *this;}

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline AssociateDomainRequest& WithAcmCertificateArn(Aws::String&& value) { SetAcmCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an issued ACM certificate that is valid for the domain being
     * associated.</p>
     */
    inline AssociateDomainRequest& WithAcmCertificateArn(const char* value) { SetAcmCertificateArn(value); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_acmCertificateArn;
    bool m_acmCertificateArnHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
