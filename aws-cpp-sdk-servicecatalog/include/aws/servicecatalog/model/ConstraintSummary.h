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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An administrator-specified constraint to apply when provisioning a
   * product.</p>
   */
  class AWS_SERVICECATALOG_API ConstraintSummary
  {
  public:
    ConstraintSummary();
    ConstraintSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    ConstraintSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of the constraint. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the constraint. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the constraint. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the constraint. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the constraint. </p>
     */
    inline ConstraintSummary& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the constraint. </p>
     */
    inline ConstraintSummary& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The type of the constraint. </p>
     */
    inline ConstraintSummary& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>The text description of the constraint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description of the constraint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the constraint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the constraint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description of the constraint.</p>
     */
    inline ConstraintSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the constraint.</p>
     */
    inline ConstraintSummary& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the constraint.</p>
     */
    inline ConstraintSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_type;
    bool m_typeHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
