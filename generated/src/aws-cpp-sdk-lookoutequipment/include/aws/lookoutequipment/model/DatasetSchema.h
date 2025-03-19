/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Provides information about the data schema used with the given dataset.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DatasetSchema">AWS
   * API Reference</a></p>
   */
  class DatasetSchema
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DatasetSchema() = default;
    AWS_LOOKOUTEQUIPMENT_API DatasetSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DatasetSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data schema used within the given dataset.</p>
     */
    inline const Aws::String& GetInlineDataSchema() const { return m_inlineDataSchema; }
    inline bool InlineDataSchemaHasBeenSet() const { return m_inlineDataSchemaHasBeenSet; }
    template<typename InlineDataSchemaT = Aws::String>
    void SetInlineDataSchema(InlineDataSchemaT&& value) { m_inlineDataSchemaHasBeenSet = true; m_inlineDataSchema = std::forward<InlineDataSchemaT>(value); }
    template<typename InlineDataSchemaT = Aws::String>
    DatasetSchema& WithInlineDataSchema(InlineDataSchemaT&& value) { SetInlineDataSchema(std::forward<InlineDataSchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inlineDataSchema;
    bool m_inlineDataSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
