﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>The properties of a table. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/TableMember">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFTDATAAPISERVICE_API TableMember
  {
  public:
    TableMember();
    TableMember(Aws::Utils::Json::JsonView jsonValue);
    TableMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the table. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the table. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the table. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the table. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the table. </p>
     */
    inline TableMember& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the table. </p>
     */
    inline TableMember& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the table. </p>
     */
    inline TableMember& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The schema containing the table. </p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema containing the table. </p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema containing the table. </p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema containing the table. </p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema containing the table. </p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The schema containing the table. </p>
     */
    inline TableMember& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema containing the table. </p>
     */
    inline TableMember& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema containing the table. </p>
     */
    inline TableMember& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline TableMember& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline TableMember& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the table. Possible values include TABLE, VIEW, SYSTEM TABLE,
     * GLOBAL TEMPORARY, LOCAL TEMPORARY, ALIAS, and SYNONYM. </p>
     */
    inline TableMember& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_schema;
    bool m_schemaHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
