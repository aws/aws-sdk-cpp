﻿/**
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
  class AWS_ORGANIZATIONS_API DescribeOrganizationalUnitRequest : public OrganizationsRequest
  {
  public:
    DescribeOrganizationalUnitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationalUnit"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline DescribeOrganizationalUnitRequest& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline DescribeOrganizationalUnitRequest& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lowercase letters or digits (the ID of the root that contains the OU).
     * This string is followed by a second "-" dash and from 8 to 32 additional
     * lowercase letters or digits.</p>
     */
    inline DescribeOrganizationalUnitRequest& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}

  private:

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
