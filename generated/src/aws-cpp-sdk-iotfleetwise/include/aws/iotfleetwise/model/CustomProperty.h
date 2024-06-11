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


    ///@{
    /**
     * <p>The fully qualified name of the custom property. For example, the fully
     * qualified name of a custom property might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera.FPS</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }
    inline CustomProperty& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}
    inline CustomProperty& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}
    inline CustomProperty& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type for the custom property. </p>
     */
    inline const NodeDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const NodeDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(NodeDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline CustomProperty& WithDataType(const NodeDataType& value) { SetDataType(value); return *this;}
    inline CustomProperty& WithDataType(NodeDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the property is binary data.</p>
     */
    inline const NodeDataEncoding& GetDataEncoding() const{ return m_dataEncoding; }
    inline bool DataEncodingHasBeenSet() const { return m_dataEncodingHasBeenSet; }
    inline void SetDataEncoding(const NodeDataEncoding& value) { m_dataEncodingHasBeenSet = true; m_dataEncoding = value; }
    inline void SetDataEncoding(NodeDataEncoding&& value) { m_dataEncodingHasBeenSet = true; m_dataEncoding = std::move(value); }
    inline CustomProperty& WithDataEncoding(const NodeDataEncoding& value) { SetDataEncoding(value); return *this;}
    inline CustomProperty& WithDataEncoding(NodeDataEncoding&& value) { SetDataEncoding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the custom property.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CustomProperty& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CustomProperty& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CustomProperty& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline const Aws::String& GetDeprecationMessage() const{ return m_deprecationMessage; }
    inline bool DeprecationMessageHasBeenSet() const { return m_deprecationMessageHasBeenSet; }
    inline void SetDeprecationMessage(const Aws::String& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = value; }
    inline void SetDeprecationMessage(Aws::String&& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = std::move(value); }
    inline void SetDeprecationMessage(const char* value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage.assign(value); }
    inline CustomProperty& WithDeprecationMessage(const Aws::String& value) { SetDeprecationMessage(value); return *this;}
    inline CustomProperty& WithDeprecationMessage(Aws::String&& value) { SetDeprecationMessage(std::move(value)); return *this;}
    inline CustomProperty& WithDeprecationMessage(const char* value) { SetDeprecationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment in addition to the description.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline CustomProperty& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline CustomProperty& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline CustomProperty& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the struct node for the custom property if the
     * data type of the custom property is <code>Struct</code> or
     * <code>StructArray</code>. </p>
     */
    inline const Aws::String& GetStructFullyQualifiedName() const{ return m_structFullyQualifiedName; }
    inline bool StructFullyQualifiedNameHasBeenSet() const { return m_structFullyQualifiedNameHasBeenSet; }
    inline void SetStructFullyQualifiedName(const Aws::String& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = value; }
    inline void SetStructFullyQualifiedName(Aws::String&& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = std::move(value); }
    inline void SetStructFullyQualifiedName(const char* value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName.assign(value); }
    inline CustomProperty& WithStructFullyQualifiedName(const Aws::String& value) { SetStructFullyQualifiedName(value); return *this;}
    inline CustomProperty& WithStructFullyQualifiedName(Aws::String&& value) { SetStructFullyQualifiedName(std::move(value)); return *this;}
    inline CustomProperty& WithStructFullyQualifiedName(const char* value) { SetStructFullyQualifiedName(value); return *this;}
    ///@}
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
