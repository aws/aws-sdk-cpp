/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <aws/glue/model/SchemaVersionNumber.h>
#include <aws/glue/model/SchemaDiffType.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetSchemaVersionsDiffRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetSchemaVersionsDiffRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchemaVersionsDiff"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline const SchemaId& GetSchemaId() const{ return m_schemaId; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline void SetSchemaId(const SchemaId& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline void SetSchemaId(SchemaId&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline GetSchemaVersionsDiffRequest& WithSchemaId(const SchemaId& value) { SetSchemaId(value); return *this;}

    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline GetSchemaVersionsDiffRequest& WithSchemaId(SchemaId&& value) { SetSchemaId(std::move(value)); return *this;}


    /**
     * <p>The first of the two schema versions to be compared.</p>
     */
    inline const SchemaVersionNumber& GetFirstSchemaVersionNumber() const{ return m_firstSchemaVersionNumber; }

    /**
     * <p>The first of the two schema versions to be compared.</p>
     */
    inline bool FirstSchemaVersionNumberHasBeenSet() const { return m_firstSchemaVersionNumberHasBeenSet; }

    /**
     * <p>The first of the two schema versions to be compared.</p>
     */
    inline void SetFirstSchemaVersionNumber(const SchemaVersionNumber& value) { m_firstSchemaVersionNumberHasBeenSet = true; m_firstSchemaVersionNumber = value; }

    /**
     * <p>The first of the two schema versions to be compared.</p>
     */
    inline void SetFirstSchemaVersionNumber(SchemaVersionNumber&& value) { m_firstSchemaVersionNumberHasBeenSet = true; m_firstSchemaVersionNumber = std::move(value); }

    /**
     * <p>The first of the two schema versions to be compared.</p>
     */
    inline GetSchemaVersionsDiffRequest& WithFirstSchemaVersionNumber(const SchemaVersionNumber& value) { SetFirstSchemaVersionNumber(value); return *this;}

    /**
     * <p>The first of the two schema versions to be compared.</p>
     */
    inline GetSchemaVersionsDiffRequest& WithFirstSchemaVersionNumber(SchemaVersionNumber&& value) { SetFirstSchemaVersionNumber(std::move(value)); return *this;}


    /**
     * <p>The second of the two schema versions to be compared.</p>
     */
    inline const SchemaVersionNumber& GetSecondSchemaVersionNumber() const{ return m_secondSchemaVersionNumber; }

    /**
     * <p>The second of the two schema versions to be compared.</p>
     */
    inline bool SecondSchemaVersionNumberHasBeenSet() const { return m_secondSchemaVersionNumberHasBeenSet; }

    /**
     * <p>The second of the two schema versions to be compared.</p>
     */
    inline void SetSecondSchemaVersionNumber(const SchemaVersionNumber& value) { m_secondSchemaVersionNumberHasBeenSet = true; m_secondSchemaVersionNumber = value; }

    /**
     * <p>The second of the two schema versions to be compared.</p>
     */
    inline void SetSecondSchemaVersionNumber(SchemaVersionNumber&& value) { m_secondSchemaVersionNumberHasBeenSet = true; m_secondSchemaVersionNumber = std::move(value); }

    /**
     * <p>The second of the two schema versions to be compared.</p>
     */
    inline GetSchemaVersionsDiffRequest& WithSecondSchemaVersionNumber(const SchemaVersionNumber& value) { SetSecondSchemaVersionNumber(value); return *this;}

    /**
     * <p>The second of the two schema versions to be compared.</p>
     */
    inline GetSchemaVersionsDiffRequest& WithSecondSchemaVersionNumber(SchemaVersionNumber&& value) { SetSecondSchemaVersionNumber(std::move(value)); return *this;}


    /**
     * <p>Refers to <code>SYNTAX_DIFF</code>, which is the currently supported diff
     * type.</p>
     */
    inline const SchemaDiffType& GetSchemaDiffType() const{ return m_schemaDiffType; }

    /**
     * <p>Refers to <code>SYNTAX_DIFF</code>, which is the currently supported diff
     * type.</p>
     */
    inline bool SchemaDiffTypeHasBeenSet() const { return m_schemaDiffTypeHasBeenSet; }

    /**
     * <p>Refers to <code>SYNTAX_DIFF</code>, which is the currently supported diff
     * type.</p>
     */
    inline void SetSchemaDiffType(const SchemaDiffType& value) { m_schemaDiffTypeHasBeenSet = true; m_schemaDiffType = value; }

    /**
     * <p>Refers to <code>SYNTAX_DIFF</code>, which is the currently supported diff
     * type.</p>
     */
    inline void SetSchemaDiffType(SchemaDiffType&& value) { m_schemaDiffTypeHasBeenSet = true; m_schemaDiffType = std::move(value); }

    /**
     * <p>Refers to <code>SYNTAX_DIFF</code>, which is the currently supported diff
     * type.</p>
     */
    inline GetSchemaVersionsDiffRequest& WithSchemaDiffType(const SchemaDiffType& value) { SetSchemaDiffType(value); return *this;}

    /**
     * <p>Refers to <code>SYNTAX_DIFF</code>, which is the currently supported diff
     * type.</p>
     */
    inline GetSchemaVersionsDiffRequest& WithSchemaDiffType(SchemaDiffType&& value) { SetSchemaDiffType(std::move(value)); return *this;}

  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionNumber m_firstSchemaVersionNumber;
    bool m_firstSchemaVersionNumberHasBeenSet = false;

    SchemaVersionNumber m_secondSchemaVersionNumber;
    bool m_secondSchemaVersionNumberHasBeenSet = false;

    SchemaDiffType m_schemaDiffType;
    bool m_schemaDiffTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
