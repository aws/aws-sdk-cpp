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
    AWS_GLUE_API GetSchemaVersionsDiffRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchemaVersionsDiff"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This is a wrapper structure to contain schema identity fields. The structure
     * contains:</p> <ul> <li> <p>SchemaId$SchemaArn: The Amazon Resource Name (ARN) of
     * the schema. One of <code>SchemaArn</code> or <code>SchemaName</code> has to be
     * provided.</p> </li> <li> <p>SchemaId$SchemaName: The name of the schema. One of
     * <code>SchemaArn</code> or <code>SchemaName</code> has to be provided.</p> </li>
     * </ul>
     */
    inline const SchemaId& GetSchemaId() const { return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    template<typename SchemaIdT = SchemaId>
    void SetSchemaId(SchemaIdT&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::forward<SchemaIdT>(value); }
    template<typename SchemaIdT = SchemaId>
    GetSchemaVersionsDiffRequest& WithSchemaId(SchemaIdT&& value) { SetSchemaId(std::forward<SchemaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first of the two schema versions to be compared.</p>
     */
    inline const SchemaVersionNumber& GetFirstSchemaVersionNumber() const { return m_firstSchemaVersionNumber; }
    inline bool FirstSchemaVersionNumberHasBeenSet() const { return m_firstSchemaVersionNumberHasBeenSet; }
    template<typename FirstSchemaVersionNumberT = SchemaVersionNumber>
    void SetFirstSchemaVersionNumber(FirstSchemaVersionNumberT&& value) { m_firstSchemaVersionNumberHasBeenSet = true; m_firstSchemaVersionNumber = std::forward<FirstSchemaVersionNumberT>(value); }
    template<typename FirstSchemaVersionNumberT = SchemaVersionNumber>
    GetSchemaVersionsDiffRequest& WithFirstSchemaVersionNumber(FirstSchemaVersionNumberT&& value) { SetFirstSchemaVersionNumber(std::forward<FirstSchemaVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second of the two schema versions to be compared.</p>
     */
    inline const SchemaVersionNumber& GetSecondSchemaVersionNumber() const { return m_secondSchemaVersionNumber; }
    inline bool SecondSchemaVersionNumberHasBeenSet() const { return m_secondSchemaVersionNumberHasBeenSet; }
    template<typename SecondSchemaVersionNumberT = SchemaVersionNumber>
    void SetSecondSchemaVersionNumber(SecondSchemaVersionNumberT&& value) { m_secondSchemaVersionNumberHasBeenSet = true; m_secondSchemaVersionNumber = std::forward<SecondSchemaVersionNumberT>(value); }
    template<typename SecondSchemaVersionNumberT = SchemaVersionNumber>
    GetSchemaVersionsDiffRequest& WithSecondSchemaVersionNumber(SecondSchemaVersionNumberT&& value) { SetSecondSchemaVersionNumber(std::forward<SecondSchemaVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to <code>SYNTAX_DIFF</code>, which is the currently supported diff
     * type.</p>
     */
    inline SchemaDiffType GetSchemaDiffType() const { return m_schemaDiffType; }
    inline bool SchemaDiffTypeHasBeenSet() const { return m_schemaDiffTypeHasBeenSet; }
    inline void SetSchemaDiffType(SchemaDiffType value) { m_schemaDiffTypeHasBeenSet = true; m_schemaDiffType = value; }
    inline GetSchemaVersionsDiffRequest& WithSchemaDiffType(SchemaDiffType value) { SetSchemaDiffType(value); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionNumber m_firstSchemaVersionNumber;
    bool m_firstSchemaVersionNumberHasBeenSet = false;

    SchemaVersionNumber m_secondSchemaVersionNumber;
    bool m_secondSchemaVersionNumberHasBeenSet = false;

    SchemaDiffType m_schemaDiffType{SchemaDiffType::NOT_SET};
    bool m_schemaDiffTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
