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
   * <p>A group of signals that are defined in a hierarchical
   * structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/Branch">AWS
   * API Reference</a></p>
   */
  class Branch
  {
  public:
    AWS_IOTFLEETWISE_API Branch();
    AWS_IOTFLEETWISE_API Branch(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Branch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }

    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }

    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }

    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }

    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }

    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline Branch& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}

    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline Branch& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the branch. For example, the fully qualified name
     * of a branch might be <code>Vehicle.Body.Engine</code>.</p>
     */
    inline Branch& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}


    /**
     * <p>A brief description of the branch.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the branch.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the branch.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the branch.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the branch.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the branch.</p>
     */
    inline Branch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the branch.</p>
     */
    inline Branch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the branch.</p>
     */
    inline Branch& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline Branch& WithDeprecationMessage(const Aws::String& value) { SetDeprecationMessage(value); return *this;}

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline Branch& WithDeprecationMessage(Aws::String&& value) { SetDeprecationMessage(std::move(value)); return *this;}

    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline Branch& WithDeprecationMessage(const char* value) { SetDeprecationMessage(value); return *this;}


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
    inline Branch& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline Branch& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment in addition to the description.</p>
     */
    inline Branch& WithComment(const char* value) { SetComment(value); return *this;}

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
