/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Item that contains the attribute and when it was last updated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListObjectTypeAttributeItem">AWS
   * API Reference</a></p>
   */
  class ListObjectTypeAttributeItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListObjectTypeAttributeItem() = default;
    AWS_CUSTOMERPROFILES_API ListObjectTypeAttributeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListObjectTypeAttributeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    ListObjectTypeAttributeItem& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the attribute was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ListObjectTypeAttributeItem& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
