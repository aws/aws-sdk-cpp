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
    AWS_LOOKOUTEQUIPMENT_API DatasetSchema();
    AWS_LOOKOUTEQUIPMENT_API DatasetSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DatasetSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> </p>
     */
    inline const Aws::String& GetInlineDataSchema() const{ return m_inlineDataSchema; }

    /**
     * <p> </p>
     */
    inline bool InlineDataSchemaHasBeenSet() const { return m_inlineDataSchemaHasBeenSet; }

    /**
     * <p> </p>
     */
    inline void SetInlineDataSchema(const Aws::String& value) { m_inlineDataSchemaHasBeenSet = true; m_inlineDataSchema = value; }

    /**
     * <p> </p>
     */
    inline void SetInlineDataSchema(Aws::String&& value) { m_inlineDataSchemaHasBeenSet = true; m_inlineDataSchema = std::move(value); }

    /**
     * <p> </p>
     */
    inline void SetInlineDataSchema(const char* value) { m_inlineDataSchemaHasBeenSet = true; m_inlineDataSchema.assign(value); }

    /**
     * <p> </p>
     */
    inline DatasetSchema& WithInlineDataSchema(const Aws::String& value) { SetInlineDataSchema(value); return *this;}

    /**
     * <p> </p>
     */
    inline DatasetSchema& WithInlineDataSchema(Aws::String&& value) { SetInlineDataSchema(std::move(value)); return *this;}

    /**
     * <p> </p>
     */
    inline DatasetSchema& WithInlineDataSchema(const char* value) { SetInlineDataSchema(value); return *this;}

  private:

    Aws::String m_inlineDataSchema;
    bool m_inlineDataSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
