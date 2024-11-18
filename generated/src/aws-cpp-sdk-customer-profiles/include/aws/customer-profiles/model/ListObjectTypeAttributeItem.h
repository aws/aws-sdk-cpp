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
    AWS_CUSTOMERPROFILES_API ListObjectTypeAttributeItem();
    AWS_CUSTOMERPROFILES_API ListObjectTypeAttributeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListObjectTypeAttributeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline ListObjectTypeAttributeItem& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline ListObjectTypeAttributeItem& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline ListObjectTypeAttributeItem& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the attribute was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ListObjectTypeAttributeItem& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ListObjectTypeAttributeItem& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
