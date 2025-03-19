/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/NodeDataType.h>
#include <aws/iotfleetwise/model/NodeDataEncoding.h>
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

  /**
   * <p>Represents a member of the complex data structure. The data type of the
   * property can be either primitive or another <code>struct</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CustomProperty">AWS
   * API Reference</a></p>
   */
  class CustomProperty
  {
  public:
    AWS_IOTFLEETWISE_API CustomProperty() = default;
    AWS_IOTFLEETWISE_API CustomProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CustomProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const { return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    template<typename FullyQualifiedNameT = Aws::String>
    void SetFullyQualifiedName(FullyQualifiedNameT&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::forward<FullyQualifiedNameT>(value); }
    template<typename FullyQualifiedNameT = Aws::String>
    CustomProperty& WithFullyQualifiedName(FullyQualifiedNameT&& value) { SetFullyQualifiedName(std::forward<FullyQualifiedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type for the custom property. </p>
     */
    inline NodeDataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(NodeDataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline CustomProperty& WithDataType(NodeDataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline NodeDataEncoding GetDataEncoding() const { return m_dataEncoding; }
    inline bool DataEncodingHasBeenSet() const { return m_dataEncodingHasBeenSet; }
    inline void SetDataEncoding(NodeDataEncoding value) { m_dataEncodingHasBeenSet = true; m_dataEncoding = value; }
    inline CustomProperty& WithDataEncoding(NodeDataEncoding value) { SetDataEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the custom property.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CustomProperty& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline const Aws::String& GetDeprecationMessage() const { return m_deprecationMessage; }
    inline bool DeprecationMessageHasBeenSet() const { return m_deprecationMessageHasBeenSet; }
    template<typename DeprecationMessageT = Aws::String>
    void SetDeprecationMessage(DeprecationMessageT&& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = std::forward<DeprecationMessageT>(value); }
    template<typename DeprecationMessageT = Aws::String>
    CustomProperty& WithDeprecationMessage(DeprecationMessageT&& value) { SetDeprecationMessage(std::forward<DeprecationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment in addition to the description.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CustomProperty& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline const Aws::String& GetStructFullyQualifiedName() const { return m_structFullyQualifiedName; }
    inline bool StructFullyQualifiedNameHasBeenSet() const { return m_structFullyQualifiedNameHasBeenSet; }
    template<typename StructFullyQualifiedNameT = Aws::String>
    void SetStructFullyQualifiedName(StructFullyQualifiedNameT&& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = std::forward<StructFullyQualifiedNameT>(value); }
    template<typename StructFullyQualifiedNameT = Aws::String>
    CustomProperty& WithStructFullyQualifiedName(StructFullyQualifiedNameT&& value) { SetStructFullyQualifiedName(std::forward<StructFullyQualifiedNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    NodeDataType m_dataType{NodeDataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    NodeDataEncoding m_dataEncoding{NodeDataEncoding::NOT_SET};
    bool m_dataEncodingHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deprecationMessage;
    bool m_deprecationMessageHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_structFullyQualifiedName;
    bool m_structFullyQualifiedNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
