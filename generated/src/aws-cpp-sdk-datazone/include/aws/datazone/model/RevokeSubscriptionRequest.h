/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class RevokeSubscriptionRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API RevokeSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeSubscription"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline RevokeSubscriptionRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline RevokeSubscriptionRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain where you want to revoke a
     * subscription.</p>
     */
    inline RevokeSubscriptionRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline RevokeSubscriptionRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline RevokeSubscriptionRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the revoked subscription.</p>
     */
    inline RevokeSubscriptionRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Specifies whether permissions are retained when the subscription is
     * revoked.</p>
     */
    inline bool GetRetainPermissions() const{ return m_retainPermissions; }

    /**
     * <p>Specifies whether permissions are retained when the subscription is
     * revoked.</p>
     */
    inline bool RetainPermissionsHasBeenSet() const { return m_retainPermissionsHasBeenSet; }

    /**
     * <p>Specifies whether permissions are retained when the subscription is
     * revoked.</p>
     */
    inline void SetRetainPermissions(bool value) { m_retainPermissionsHasBeenSet = true; m_retainPermissions = value; }

    /**
     * <p>Specifies whether permissions are retained when the subscription is
     * revoked.</p>
     */
    inline RevokeSubscriptionRequest& WithRetainPermissions(bool value) { SetRetainPermissions(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    bool m_retainPermissions;
    bool m_retainPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
