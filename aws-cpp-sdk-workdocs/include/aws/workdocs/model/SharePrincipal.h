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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/PrincipalType.h>
#include <aws/workdocs/model/RoleType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the recipient type and ID, if available.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/SharePrincipal">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API SharePrincipal
  {
  public:
    SharePrincipal();
    SharePrincipal(Aws::Utils::Json::JsonView jsonValue);
    SharePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the recipient.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the recipient.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the recipient.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the recipient.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the recipient.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the recipient.</p>
     */
    inline SharePrincipal& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the recipient.</p>
     */
    inline SharePrincipal& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the recipient.</p>
     */
    inline SharePrincipal& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of the recipient.</p>
     */
    inline const PrincipalType& GetType() const{ return m_type; }

    /**
     * <p>The type of the recipient.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the recipient.</p>
     */
    inline void SetType(const PrincipalType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the recipient.</p>
     */
    inline void SetType(PrincipalType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the recipient.</p>
     */
    inline SharePrincipal& WithType(const PrincipalType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the recipient.</p>
     */
    inline SharePrincipal& WithType(PrincipalType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The role of the recipient.</p>
     */
    inline const RoleType& GetRole() const{ return m_role; }

    /**
     * <p>The role of the recipient.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The role of the recipient.</p>
     */
    inline void SetRole(const RoleType& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The role of the recipient.</p>
     */
    inline void SetRole(RoleType&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The role of the recipient.</p>
     */
    inline SharePrincipal& WithRole(const RoleType& value) { SetRole(value); return *this;}

    /**
     * <p>The role of the recipient.</p>
     */
    inline SharePrincipal& WithRole(RoleType&& value) { SetRole(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    PrincipalType m_type;
    bool m_typeHasBeenSet;

    RoleType m_role;
    bool m_roleHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
