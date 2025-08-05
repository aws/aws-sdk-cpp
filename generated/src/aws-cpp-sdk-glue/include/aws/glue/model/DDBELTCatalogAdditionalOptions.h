/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies additional options for DynamoDB ELT catalog
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DDBELTCatalogAdditionalOptions">AWS
   * API Reference</a></p>
   */
  class DDBELTCatalogAdditionalOptions
  {
  public:
    AWS_GLUE_API DDBELTCatalogAdditionalOptions() = default;
    AWS_GLUE_API DDBELTCatalogAdditionalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DDBELTCatalogAdditionalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the DynamoDB export configuration for the ELT operation.</p>
     */
    inline const Aws::String& GetDynamodbExport() const { return m_dynamodbExport; }
    inline bool DynamodbExportHasBeenSet() const { return m_dynamodbExportHasBeenSet; }
    template<typename DynamodbExportT = Aws::String>
    void SetDynamodbExport(DynamodbExportT&& value) { m_dynamodbExportHasBeenSet = true; m_dynamodbExport = std::forward<DynamodbExportT>(value); }
    template<typename DynamodbExportT = Aws::String>
    DDBELTCatalogAdditionalOptions& WithDynamodbExport(DynamodbExportT&& value) { SetDynamodbExport(std::forward<DynamodbExportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to unnest DynamoDB JSON format. When set to
     * <code>true</code>, nested JSON structures in DynamoDB items are flattened.</p>
     */
    inline bool GetDynamodbUnnestDDBJson() const { return m_dynamodbUnnestDDBJson; }
    inline bool DynamodbUnnestDDBJsonHasBeenSet() const { return m_dynamodbUnnestDDBJsonHasBeenSet; }
    inline void SetDynamodbUnnestDDBJson(bool value) { m_dynamodbUnnestDDBJsonHasBeenSet = true; m_dynamodbUnnestDDBJson = value; }
    inline DDBELTCatalogAdditionalOptions& WithDynamodbUnnestDDBJson(bool value) { SetDynamodbUnnestDDBJson(value); return *this;}
    ///@}
  private:

    Aws::String m_dynamodbExport;
    bool m_dynamodbExportHasBeenSet = false;

    bool m_dynamodbUnnestDDBJson{false};
    bool m_dynamodbUnnestDDBJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
