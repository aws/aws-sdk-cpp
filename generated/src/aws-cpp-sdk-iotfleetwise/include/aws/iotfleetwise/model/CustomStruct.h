/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The custom structure represents a complex or higher-order data
   * structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CustomStruct">AWS
   * API Reference</a></p>
   */
  class CustomStruct
  {
  public:
    AWS_IOTFLEETWISE_API CustomStruct();
    AWS_IOTFLEETWISE_API CustomStruct(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CustomStruct& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of the custom structure. For example, the fully
     * qualified name of a custom structure might be
     * <code>ComplexDataTypes.VehicleDataTypes.SVMCamera</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }
    inline CustomStruct& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}
    inline CustomStruct& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}
    inline CustomStruct& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the custom structure.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CustomStruct& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CustomStruct& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CustomStruct& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline CustomStruct& WithDeprecationMessage(const Aws::String& value) { SetDeprecationMessage(value); return *this;}
    inline CustomStruct& WithDeprecationMessage(Aws::String&& value) { SetDeprecationMessage(std::move(value)); return *this;}
    inline CustomStruct& WithDeprecationMessage(const char* value) { SetDeprecationMessage(value); return *this;}
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
    inline CustomStruct& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline CustomStruct& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline CustomStruct& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}
  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deprecationMessage;
    bool m_deprecationMessageHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
