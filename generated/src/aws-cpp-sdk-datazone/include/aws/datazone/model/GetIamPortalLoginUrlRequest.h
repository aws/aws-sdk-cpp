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
  class GetIamPortalLoginUrlRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API GetIamPortalLoginUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIamPortalLoginUrl"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline GetIamPortalLoginUrlRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline GetIamPortalLoginUrlRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline GetIamPortalLoginUrlRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
