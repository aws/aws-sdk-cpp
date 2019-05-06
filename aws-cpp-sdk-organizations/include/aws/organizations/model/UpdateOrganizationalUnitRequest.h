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
  class AWS_ORGANIZATIONS_API UpdateOrganizationalUnitRequest : public OrganizationsRequest
  {
  public:
    UpdateOrganizationalUnitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationalUnit"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }

    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline UpdateOrganizationalUnitRequest& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline UpdateOrganizationalUnitRequest& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the OU that you want to rename. You can get the
     * ID from the <a>ListOrganizationalUnitsForParent</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lower-case letters or
     * digits (the ID of the root that contains the OU) followed by a second "-" dash
     * and from 8 to 32 additional lower-case letters or digits.</p>
     */
    inline UpdateOrganizationalUnitRequest& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}


    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline UpdateOrganizationalUnitRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline UpdateOrganizationalUnitRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name that you want to assign to the OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline UpdateOrganizationalUnitRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
