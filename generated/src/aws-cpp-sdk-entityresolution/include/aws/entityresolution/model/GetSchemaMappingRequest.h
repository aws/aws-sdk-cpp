/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class GetSchemaMappingRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API GetSchemaMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSchemaMapping"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the schema to be retrieved.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    GetSchemaMappingRequest& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
