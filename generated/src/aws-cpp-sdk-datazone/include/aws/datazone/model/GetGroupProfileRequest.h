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
  class GetGroupProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API GetGroupProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroupProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline GetGroupProfileRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline GetGroupProfileRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the group profile
     * exists.</p>
     */
    inline GetGroupProfileRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the group profile.</p>
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline GetGroupProfileRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline GetGroupProfileRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group profile.</p>
     */
    inline GetGroupProfileRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
