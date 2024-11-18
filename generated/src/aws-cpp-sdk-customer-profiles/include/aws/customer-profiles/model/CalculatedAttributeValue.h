/**
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
   * <p>The object containing the values of a single calculated attribute
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CalculatedAttributeValue">AWS
   * API Reference</a></p>
   */
  class CalculatedAttributeValue
  {
  public:
    AWS_CUSTOMERPROFILES_API CalculatedAttributeValue();
    AWS_CUSTOMERPROFILES_API CalculatedAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API CalculatedAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CalculatedAttributeValue& WithCalculatedAttributeName(const Aws::String& value) { SetCalculatedAttributeName(value); return *this;}
    inline CalculatedAttributeValue& WithCalculatedAttributeName(Aws::String&& value) { SetCalculatedAttributeName(std::move(value)); return *this;}
    inline CalculatedAttributeValue& WithCalculatedAttributeName(const char* value) { SetCalculatedAttributeName(value); return *this;}
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
    inline CalculatedAttributeValue& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CalculatedAttributeValue& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CalculatedAttributeValue& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the calculated attribute's value is based on partial data.
     * If the data is partial, it is set to true.</p>
     */
    inline const Aws::String& GetIsDataPartial() const{ return m_isDataPartial; }
    inline bool IsDataPartialHasBeenSet() const { return m_isDataPartialHasBeenSet; }
    inline void SetIsDataPartial(const Aws::String& value) { m_isDataPartialHasBeenSet = true; m_isDataPartial = value; }
    inline void SetIsDataPartial(Aws::String&& value) { m_isDataPartialHasBeenSet = true; m_isDataPartial = std::move(value); }
    inline void SetIsDataPartial(const char* value) { m_isDataPartialHasBeenSet = true; m_isDataPartial.assign(value); }
    inline CalculatedAttributeValue& WithIsDataPartial(const Aws::String& value) { SetIsDataPartial(value); return *this;}
    inline CalculatedAttributeValue& WithIsDataPartial(Aws::String&& value) { SetIsDataPartial(std::move(value)); return *this;}
    inline CalculatedAttributeValue& WithIsDataPartial(const char* value) { SetIsDataPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile id belonging to this calculated attribute value.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline CalculatedAttributeValue& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline CalculatedAttributeValue& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline CalculatedAttributeValue& WithProfileId(const char* value) { SetProfileId(value); return *this;}
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
    inline CalculatedAttributeValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CalculatedAttributeValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CalculatedAttributeValue& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_calculatedAttributeName;
    bool m_calculatedAttributeNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_isDataPartial;
    bool m_isDataPartialHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
