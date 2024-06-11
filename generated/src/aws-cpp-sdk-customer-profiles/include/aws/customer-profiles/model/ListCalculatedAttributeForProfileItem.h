﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeForProfileItem();
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeForProfileItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeForProfileItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const{ return m_calculatedAttributeName; }
    inline bool CalculatedAttributeNameHasBeenSet() const { return m_calculatedAttributeNameHasBeenSet; }
    inline void SetCalculatedAttributeName(const Aws::String& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = value; }
    inline void SetCalculatedAttributeName(Aws::String&& value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName = std::move(value); }
    inline void SetCalculatedAttributeName(const char* value) { m_calculatedAttributeNameHasBeenSet = true; m_calculatedAttributeName.assign(value); }
    inline ListCalculatedAttributeForProfileItem& WithCalculatedAttributeName(const Aws::String& value) { SetCalculatedAttributeName(value); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithCalculatedAttributeName(Aws::String&& value) { SetCalculatedAttributeName(std::move(value)); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithCalculatedAttributeName(const char* value) { SetCalculatedAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ListCalculatedAttributeForProfileItem& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline const Aws::String& GetIsDataPartial() const{ return m_isDataPartial; }
    inline bool IsDataPartialHasBeenSet() const { return m_isDataPartialHasBeenSet; }
    inline void SetIsDataPartial(const Aws::String& value) { m_isDataPartialHasBeenSet = true; m_isDataPartial = value; }
    inline void SetIsDataPartial(Aws::String&& value) { m_isDataPartialHasBeenSet = true; m_isDataPartial = std::move(value); }
    inline void SetIsDataPartial(const char* value) { m_isDataPartialHasBeenSet = true; m_isDataPartial.assign(value); }
    inline ListCalculatedAttributeForProfileItem& WithIsDataPartial(const Aws::String& value) { SetIsDataPartial(value); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithIsDataPartial(Aws::String&& value) { SetIsDataPartial(std::move(value)); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithIsDataPartial(const char* value) { SetIsDataPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ListCalculatedAttributeForProfileItem& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ListCalculatedAttributeForProfileItem& WithValue(const char* value) { SetValue(value); return *this;}
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
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
