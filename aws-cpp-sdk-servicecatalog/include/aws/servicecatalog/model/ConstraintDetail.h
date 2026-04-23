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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a constraint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ConstraintDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ConstraintDetail
  {
  public:
    ConstraintDetail();
    ConstraintDetail(Aws::Utils::Json::JsonView jsonValue);
    ConstraintDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the constraint.</p>
     */
    inline const Aws::String& GetConstraintId() const{ return m_constraintId; }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline bool ConstraintIdHasBeenSet() const { return m_constraintIdHasBeenSet; }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline void SetConstraintId(const Aws::String& value) { m_constraintIdHasBeenSet = true; m_constraintId = value; }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline void SetConstraintId(Aws::String&& value) { m_constraintIdHasBeenSet = true; m_constraintId = std::move(value); }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline void SetConstraintId(const char* value) { m_constraintIdHasBeenSet = true; m_constraintId.assign(value); }

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline ConstraintDetail& WithConstraintId(const Aws::String& value) { SetConstraintId(value); return *this;}

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline ConstraintDetail& WithConstraintId(Aws::String&& value) { SetConstraintId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the constraint.</p>
     */
    inline ConstraintDetail& WithConstraintId(const char* value) { SetConstraintId(value); return *this;}


    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline ConstraintDetail& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline ConstraintDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline ConstraintDetail& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The description of the constraint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the constraint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the constraint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the constraint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the constraint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the constraint.</p>
     */
    inline ConstraintDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the constraint.</p>
     */
    inline ConstraintDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the constraint.</p>
     */
    inline ConstraintDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The owner of the constraint.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the constraint.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the constraint.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the constraint.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the constraint.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the constraint.</p>
     */
    inline ConstraintDetail& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the constraint.</p>
     */
    inline ConstraintDetail& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the constraint.</p>
     */
    inline ConstraintDetail& WithOwner(const char* value) { SetOwner(value); return *this;}

  private:

    Aws::String m_constraintId;
    bool m_constraintIdHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
