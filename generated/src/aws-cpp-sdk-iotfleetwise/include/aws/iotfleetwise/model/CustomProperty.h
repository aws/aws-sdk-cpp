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
    AWS_IOTFLEETWISE_API CustomProperty();
    AWS_IOTFLEETWISE_API CustomProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CustomProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }

    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }

    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }

    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }

    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }

    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline CustomProperty& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}

    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline CustomProperty& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline CustomProperty& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}


    /**
     * <p>The data type for the custom property. </p>
     */
    inline const NodeDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type for the custom property. </p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type for the custom property. </p>
     */
    inline void SetDataType(const NodeDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type for the custom property. </p>
     */
    inline void SetDataType(NodeDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type for the custom property. </p>
     */
    inline CustomProperty& WithDataType(const NodeDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type for the custom property. </p>
     */
    inline CustomProperty& WithDataType(NodeDataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline const NodeDataEncoding& GetDataEncoding() const{ return m_dataEncoding; }

    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline bool DataEncodingHasBeenSet() const { return m_dataEncodingHasBeenSet; }

    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline void SetDataEncoding(const NodeDataEncoding& value) { m_dataEncodingHasBeenSet = true; m_dataEncoding = value; }

    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline void SetDataEncoding(NodeDataEncoding&& value) { m_dataEncodingHasBeenSet = true; m_dataEncoding = std::move(value); }

    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline CustomProperty& WithDataEncoding(const NodeDataEncoding& value) { SetDataEncoding(value); return *this;}

    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline CustomProperty& WithDataEncoding(NodeDataEncoding&& value) { SetDataEncoding(std::move(value)); return *this;}


    /**
     * <p>A brief description of the custom property.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the custom property.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the custom property.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the custom property.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the custom property.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the custom property.</p>
     */
    inline CustomProperty& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the custom property.</p>
     */
    inline CustomProperty& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the custom property.</p>
     */
    inline CustomProperty& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline const Aws::String& GetDeprecationMessage() const{ return m_deprecationMessage; }

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline bool DeprecationMessageHasBeenSet() const { return m_deprecationMessageHasBeenSet; }

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline void SetDeprecationMessage(const Aws::String& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = value; }

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline void SetDeprecationMessage(Aws::String&& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = std::move(value); }

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline void SetDeprecationMessage(const char* value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage.assign(value); }

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline CustomProperty& WithDeprecationMessage(const Aws::String& value) { SetDeprecationMessage(value); return *this;}

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline CustomProperty& WithDeprecationMessage(Aws::String&& value) { SetDeprecationMessage(std::move(value)); return *this;}

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline CustomProperty& WithDeprecationMessage(const char* value) { SetDeprecationMessage(value); return *this;}


    /**
     * <p>A comment in addition to the description.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline CustomProperty& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline CustomProperty& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline CustomProperty& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline const Aws::String& GetStructFullyQualifiedName() const{ return m_structFullyQualifiedName; }

    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline bool StructFullyQualifiedNameHasBeenSet() const { return m_structFullyQualifiedNameHasBeenSet; }

    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline void SetStructFullyQualifiedName(const Aws::String& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = value; }

    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline void SetStructFullyQualifiedName(Aws::String&& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = std::move(value); }

    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline void SetStructFullyQualifiedName(const char* value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName.assign(value); }

    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline CustomProperty& WithStructFullyQualifiedName(const Aws::String& value) { SetStructFullyQualifiedName(value); return *this;}

    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline CustomProperty& WithStructFullyQualifiedName(Aws::String&& value) { SetStructFullyQualifiedName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline CustomProperty& WithStructFullyQualifiedName(const char* value) { SetStructFullyQualifiedName(value); return *this;}

  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    NodeDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    NodeDataEncoding m_dataEncoding;
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
