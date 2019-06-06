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
  class AWS_ORGANIZATIONS_API CreateOrganizationalUnitRequest : public OrganizationsRequest
  {
  public:
    CreateOrganizationalUnitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOrganizationalUnit"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline CreateOrganizationalUnitRequest& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline CreateOrganizationalUnitRequest& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p>Root: a string that begins with "r-" followed by from 4 to 32 lower-case
     * letters or digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that the OU is in) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline CreateOrganizationalUnitRequest& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline CreateOrganizationalUnitRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline CreateOrganizationalUnitRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline CreateOrganizationalUnitRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
