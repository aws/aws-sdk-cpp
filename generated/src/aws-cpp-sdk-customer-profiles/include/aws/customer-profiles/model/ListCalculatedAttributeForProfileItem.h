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
   * <p>The details of a single calculated attribute for a profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListCalculatedAttributeForProfileItem">AWS
   * API Reference</a></p>
   */
  class ListCalculatedAttributeForProfileItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeForProfileItem() = default;
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeForProfileItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeForProfileItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const { return m_calculatedAttributeName; }
    inline bool CalculatedAttributeNameHasBeenSet() const { return m_calculatedAttributeNameHasBeenSet; }
    template<typename CalculatedAttributeNameT = Aws::String>
    void SetCalculatedAttributeName(CalculatedAttributeNameT&& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = std::forward<CalculatedAttributeNameT>(value); }
    template<typename CalculatedAttributeNameT = Aws::String>
    ListCalculatedAttributeForProfileItem& WithCalculatedAttributeName(CalculatedAttributeNameT&& value) { SetCalculatedAttributeName(std::forward<CalculatedAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ListCalculatedAttributeForProfileItem& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline const Aws::String& GetIsDataPartial() const { return m_isDataPartial; }
    inline bool IsDataPartialHasBeenSet() const { return m_isDataPartialHasBeenSet; }
    template<typename IsDataPartialT = Aws::String>
    void SetIsDataPartial(IsDataPartialT&& value) { m_isDataPartialHasBeenSet = true; m_isDataPartial = std::forward<IsDataPartialT>(value); }
    template<typename IsDataPartialT = Aws::String>
    ListCalculatedAttributeForProfileItem& WithIsDataPartial(IsDataPartialT&& value) { SetIsDataPartial(std::forward<IsDataPartialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ListCalculatedAttributeForProfileItem& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the newest object included in the calculated attribute
     * calculation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastObjectTimestamp() const { return m_lastObjectTimestamp; }
    inline bool LastObjectTimestampHasBeenSet() const { return m_lastObjectTimestampHasBeenSet; }
    template<typename LastObjectTimestampT = Aws::Utils::DateTime>
    void SetLastObjectTimestamp(LastObjectTimestampT&& value) { m_lastObjectTimestampHasBeenSet = true; m_lastObjectTimestamp = std::forward<LastObjectTimestampT>(value); }
    template<typename LastObjectTimestampT = Aws::Utils::DateTime>
    ListCalculatedAttributeForProfileItem& WithLastObjectTimestamp(LastObjectTimestampT&& value) { SetLastObjectTimestamp(std::forward<LastObjectTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculatedAttributeName;
    bool m_calculatedAttributeNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_isDataPartial;
    bool m_isDataPartialHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_lastObjectTimestamp{};
    bool m_lastObjectTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
