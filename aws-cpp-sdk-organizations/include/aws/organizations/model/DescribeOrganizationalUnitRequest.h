/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lower-case letters or digits (the ID of the root that contains the OU)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lower-case letters or digits (the ID of the root that contains the OU)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p>
     */
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lower-case letters or digits (the ID of the root that contains the OU)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p>
     */
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lower-case letters or digits (the ID of the root that contains the OU)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p>
     */
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lower-case letters or digits (the ID of the root that contains the OU)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p>
     */
    inline DescribeOrganizationalUnitRequest& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lower-case letters or digits (the ID of the root that contains the OU)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p>
     */
    inline DescribeOrganizationalUnitRequest& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the organizational unit that you want details
     * about. You can get the ID from the <a>ListOrganizationalUnitsForParent</a>
     * operation.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an organizational unit ID string requires "ou-" followed by from
     * 4 to 32 lower-case letters or digits (the ID of the root that contains the OU)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p>
     */
    inline DescribeOrganizationalUnitRequest& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}

  private:
    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
