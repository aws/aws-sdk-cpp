/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/TypedLinkSpecifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/LinkAttributeUpdate.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Updates a given typed link’s attributes inside a <a>BatchRead</a> operation.
   * Attributes to be updated must not contribute to the typed link’s identity, as
   * defined by its <code>IdentityAttributeOrder</code>. For more information, see
   * <a>UpdateLinkAttributes</a> and
   * <a>BatchReadRequest$Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchUpdateLinkAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchUpdateLinkAttributes
  {
  public:
    BatchUpdateLinkAttributes();
    BatchUpdateLinkAttributes(Aws::Utils::Json::JsonView jsonValue);
    BatchUpdateLinkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline const TypedLinkSpecifier& GetTypedLinkSpecifier() const{ return m_typedLinkSpecifier; }

    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline bool TypedLinkSpecifierHasBeenSet() const { return m_typedLinkSpecifierHasBeenSet; }

    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline void SetTypedLinkSpecifier(const TypedLinkSpecifier& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = value; }

    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline void SetTypedLinkSpecifier(TypedLinkSpecifier&& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = std::move(value); }

    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline BatchUpdateLinkAttributes& WithTypedLinkSpecifier(const TypedLinkSpecifier& value) { SetTypedLinkSpecifier(value); return *this;}

    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline BatchUpdateLinkAttributes& WithTypedLinkSpecifier(TypedLinkSpecifier&& value) { SetTypedLinkSpecifier(std::move(value)); return *this;}


    /**
     * <p>The attributes update structure.</p>
     */
    inline const Aws::Vector<LinkAttributeUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }

    /**
     * <p>The attributes update structure.</p>
     */
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }

    /**
     * <p>The attributes update structure.</p>
     */
    inline void SetAttributeUpdates(const Aws::Vector<LinkAttributeUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }

    /**
     * <p>The attributes update structure.</p>
     */
    inline void SetAttributeUpdates(Aws::Vector<LinkAttributeUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::move(value); }

    /**
     * <p>The attributes update structure.</p>
     */
    inline BatchUpdateLinkAttributes& WithAttributeUpdates(const Aws::Vector<LinkAttributeUpdate>& value) { SetAttributeUpdates(value); return *this;}

    /**
     * <p>The attributes update structure.</p>
     */
    inline BatchUpdateLinkAttributes& WithAttributeUpdates(Aws::Vector<LinkAttributeUpdate>&& value) { SetAttributeUpdates(std::move(value)); return *this;}

    /**
     * <p>The attributes update structure.</p>
     */
    inline BatchUpdateLinkAttributes& AddAttributeUpdates(const LinkAttributeUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(value); return *this; }

    /**
     * <p>The attributes update structure.</p>
     */
    inline BatchUpdateLinkAttributes& AddAttributeUpdates(LinkAttributeUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.push_back(std::move(value)); return *this; }

  private:

    TypedLinkSpecifier m_typedLinkSpecifier;
    bool m_typedLinkSpecifierHasBeenSet;

    Aws::Vector<LinkAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
