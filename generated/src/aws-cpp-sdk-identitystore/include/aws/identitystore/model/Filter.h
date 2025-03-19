/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>A query filter used by <code>ListUsers</code> and <code>ListGroups</code>.
   * This filter object provides the attribute name and attribute value to search
   * users or groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_IDENTITYSTORE_API Filter() = default;
    AWS_IDENTITYSTORE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute path that is used to specify which attribute name to search.
     * Length limit is 255 characters. For example, <code>UserName</code> is a valid
     * attribute path for the <code>ListUsers</code> API, and <code>DisplayName</code>
     * is a valid attribute path for the <code>ListGroups</code> API.</p>
     */
    inline const Aws::String& GetAttributePath() const { return m_attributePath; }
    inline bool AttributePathHasBeenSet() const { return m_attributePathHasBeenSet; }
    template<typename AttributePathT = Aws::String>
    void SetAttributePath(AttributePathT&& value) { m_attributePathHasBeenSet = true; m_attributePath = std::forward<AttributePathT>(value); }
    template<typename AttributePathT = Aws::String>
    Filter& WithAttributePath(AttributePathT&& value) { SetAttributePath(std::forward<AttributePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the data for an attribute. Each attribute value is described as a
     * name-value pair. </p>
     */
    inline const Aws::String& GetAttributeValue() const { return m_attributeValue; }
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
    template<typename AttributeValueT = Aws::String>
    void SetAttributeValue(AttributeValueT&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::forward<AttributeValueT>(value); }
    template<typename AttributeValueT = Aws::String>
    Filter& WithAttributeValue(AttributeValueT&& value) { SetAttributeValue(std::forward<AttributeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributePath;
    bool m_attributePathHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
