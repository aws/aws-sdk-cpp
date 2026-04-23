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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/ChildType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains a list of child entities, either OUs or accounts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Child">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API Child
  {
  public:
    Child();
    Child(Aws::Utils::Json::JsonView jsonValue);
    Child& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline Child& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline Child& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p>Account: a string that consists
     * of exactly 12 digits.</p> </li> <li> <p>Organizational unit (OU): a string that
     * begins with "ou-" followed by from 4 to 32 lower-case letters or digits (the ID
     * of the root that contains the OU) followed by a second "-" dash and from 8 to 32
     * additional lower-case letters or digits.</p> </li> </ul>
     */
    inline Child& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of this child entity.</p>
     */
    inline const ChildType& GetType() const{ return m_type; }

    /**
     * <p>The type of this child entity.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of this child entity.</p>
     */
    inline void SetType(const ChildType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of this child entity.</p>
     */
    inline void SetType(ChildType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of this child entity.</p>
     */
    inline Child& WithType(const ChildType& value) { SetType(value); return *this;}

    /**
     * <p>The type of this child entity.</p>
     */
    inline Child& WithType(ChildType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    ChildType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
