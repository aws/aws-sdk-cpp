/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/SchemaId.h>
#include <aws/glue/model/SchemaVersionNumber.h>
#include <aws/glue/model/Compatibility.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateSchemaRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateSchemaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchema"; }

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
    UpdateSchemaRequest& WithSchemaId(SchemaIdT&& value) { SetSchemaId(std::forward<SchemaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version number required for check pointing. One of <code>VersionNumber</code>
     * or <code>Compatibility</code> has to be provided.</p>
     */
    inline const SchemaVersionNumber& GetSchemaVersionNumber() const { return m_schemaVersionNumber; }
    inline bool SchemaVersionNumberHasBeenSet() const { return m_schemaVersionNumberHasBeenSet; }
    template<typename SchemaVersionNumberT = SchemaVersionNumber>
    void SetSchemaVersionNumber(SchemaVersionNumberT&& value) { m_schemaVersionNumberHasBeenSet = true; m_schemaVersionNumber = std::forward<SchemaVersionNumberT>(value); }
    template<typename SchemaVersionNumberT = SchemaVersionNumber>
    UpdateSchemaRequest& WithSchemaVersionNumber(SchemaVersionNumberT&& value) { SetSchemaVersionNumber(std::forward<SchemaVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new compatibility setting for the schema.</p>
     */
    inline Compatibility GetCompatibility() const { return m_compatibility; }
    inline bool CompatibilityHasBeenSet() const { return m_compatibilityHasBeenSet; }
    inline void SetCompatibility(Compatibility value) { m_compatibilityHasBeenSet = true; m_compatibility = value; }
    inline UpdateSchemaRequest& WithCompatibility(Compatibility value) { SetCompatibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the schema.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSchemaRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    SchemaId m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionNumber m_schemaVersionNumber;
    bool m_schemaVersionNumberHasBeenSet = false;

    Compatibility m_compatibility{Compatibility::NOT_SET};
    bool m_compatibilityHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
