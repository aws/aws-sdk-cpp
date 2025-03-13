/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>An entity attribute that's unique to a specific entity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/UniqueAttribute">AWS
   * API Reference</a></p>
   */
  class UniqueAttribute
  {
  public:
    AWS_IDENTITYSTORE_API UniqueAttribute() = default;
    AWS_IDENTITYSTORE_API UniqueAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API UniqueAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string representation of the path to a given attribute or sub-attribute.
     * Supports JMESPath.</p>
     */
    inline const Aws::String& GetAttributePath() const { return m_attributePath; }
    inline bool AttributePathHasBeenSet() const { return m_attributePathHasBeenSet; }
    template<typename AttributePathT = Aws::String>
    void SetAttributePath(AttributePathT&& value) { m_attributePathHasBeenSet = true; m_attributePath = std::forward<AttributePathT>(value); }
    template<typename AttributePathT = Aws::String>
    UniqueAttribute& WithAttributePath(AttributePathT&& value) { SetAttributePath(std::forward<AttributePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the attribute. This is a <code>Document</code> type. This type
     * is not supported by Java V1, Go V1, and older versions of the CLI.</p>
     */
    inline Aws::Utils::DocumentView GetAttributeValue() const { return m_attributeValue; }
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
    template<typename AttributeValueT = Aws::Utils::Document>
    void SetAttributeValue(AttributeValueT&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::forward<AttributeValueT>(value); }
    template<typename AttributeValueT = Aws::Utils::Document>
    UniqueAttribute& WithAttributeValue(AttributeValueT&& value) { SetAttributeValue(std::forward<AttributeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributePath;
    bool m_attributePathHasBeenSet = false;

    Aws::Utils::Document m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
