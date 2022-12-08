/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Summary information about a constraint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ConstraintSummary">AWS
   * API Reference</a></p>
   */
  class ConstraintSummary
  {
  public:
    AWS_SERVICECATALOG_API ConstraintSummary();
    AWS_SERVICECATALOG_API ConstraintSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ConstraintSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ConstraintSummary& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline ConstraintSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of constraint.</p> <ul> <li> <p> <code>LAUNCH</code> </p> </li> <li>
     * <p> <code>NOTIFICATION</code> </p> </li> <li> <p>STACKSET</p> </li> <li> <p>
     * <code>TEMPLATE</code> </p> </li> </ul>
     */
    inline ConstraintSummary& WithType(const char* value) { SetType(value); return *this;}


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
    inline ConstraintSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the constraint.</p>
     */
    inline ConstraintSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the constraint.</p>
     */
    inline ConstraintSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
