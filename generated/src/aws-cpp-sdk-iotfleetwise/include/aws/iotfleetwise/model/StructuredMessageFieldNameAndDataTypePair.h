/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
namespace IoTFleetWise
{
namespace Model
{
  class StructuredMessage;

  /**
   * <p>Represents a <code>StructureMessageName</code> to <code>DataType</code> map
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StructuredMessageFieldNameAndDataTypePair">AWS
   * API Reference</a></p>
   */
  class StructuredMessageFieldNameAndDataTypePair
  {
  public:
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair();
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline StructuredMessageFieldNameAndDataTypePair& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline StructuredMessageFieldNameAndDataTypePair& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline StructuredMessageFieldNameAndDataTypePair& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The data type. </p>
     */
    AWS_IOTFLEETWISE_API const StructuredMessage& GetDataType() const;

    /**
     * <p>The data type. </p>
     */
    AWS_IOTFLEETWISE_API bool DataTypeHasBeenSet() const;

    /**
     * <p>The data type. </p>
     */
    AWS_IOTFLEETWISE_API void SetDataType(const StructuredMessage& value);

    /**
     * <p>The data type. </p>
     */
    AWS_IOTFLEETWISE_API void SetDataType(StructuredMessage&& value);

    /**
     * <p>The data type. </p>
     */
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair& WithDataType(const StructuredMessage& value);

    /**
     * <p>The data type. </p>
     */
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair& WithDataType(StructuredMessage&& value);

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    std::shared_ptr<StructuredMessage> m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
