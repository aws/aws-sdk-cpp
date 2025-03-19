/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair() = default;
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StructuredMessageFieldNameAndDataTypePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name of the structured message. It determines how a data value is
     * referenced in the target language. </p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    StructuredMessageFieldNameAndDataTypePair& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type. </p>
     */
    inline const StructuredMessage& GetDataType() const{
      return *m_dataType;
    }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = StructuredMessage>
    void SetDataType(DataTypeT&& value) {
      m_dataTypeHasBeenSet = true; 
      m_dataType = Aws::MakeShared<StructuredMessage>("StructuredMessageFieldNameAndDataTypePair", std::forward<DataTypeT>(value));
    }
    template<typename DataTypeT = StructuredMessage>
    StructuredMessageFieldNameAndDataTypePair& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    std::shared_ptr<StructuredMessage> m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
