/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ProfileAttributes.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/CalculatedAttributeDimension.h>
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
   * <p>Object that holds what profile and calculated attributes to segment
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Dimension">AWS
   * API Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_CUSTOMERPROFILES_API Dimension();
    AWS_CUSTOMERPROFILES_API Dimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Dimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Object that holds the profile attributes to segment on.</p>
     */
    inline const ProfileAttributes& GetProfileAttributes() const{ return m_profileAttributes; }
    inline bool ProfileAttributesHasBeenSet() const { return m_profileAttributesHasBeenSet; }
    inline void SetProfileAttributes(const ProfileAttributes& value) { m_profileAttributesHasBeenSet = true; m_profileAttributes = value; }
    inline void SetProfileAttributes(ProfileAttributes&& value) { m_profileAttributesHasBeenSet = true; m_profileAttributes = std::move(value); }
    inline Dimension& WithProfileAttributes(const ProfileAttributes& value) { SetProfileAttributes(value); return *this;}
    inline Dimension& WithProfileAttributes(ProfileAttributes&& value) { SetProfileAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that holds the calculated attributes to segment on.</p>
     */
    inline const Aws::Map<Aws::String, CalculatedAttributeDimension>& GetCalculatedAttributes() const{ return m_calculatedAttributes; }
    inline bool CalculatedAttributesHasBeenSet() const { return m_calculatedAttributesHasBeenSet; }
    inline void SetCalculatedAttributes(const Aws::Map<Aws::String, CalculatedAttributeDimension>& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes = value; }
    inline void SetCalculatedAttributes(Aws::Map<Aws::String, CalculatedAttributeDimension>&& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes = std::move(value); }
    inline Dimension& WithCalculatedAttributes(const Aws::Map<Aws::String, CalculatedAttributeDimension>& value) { SetCalculatedAttributes(value); return *this;}
    inline Dimension& WithCalculatedAttributes(Aws::Map<Aws::String, CalculatedAttributeDimension>&& value) { SetCalculatedAttributes(std::move(value)); return *this;}
    inline Dimension& AddCalculatedAttributes(const Aws::String& key, const CalculatedAttributeDimension& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes.emplace(key, value); return *this; }
    inline Dimension& AddCalculatedAttributes(Aws::String&& key, const CalculatedAttributeDimension& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes.emplace(std::move(key), value); return *this; }
    inline Dimension& AddCalculatedAttributes(const Aws::String& key, CalculatedAttributeDimension&& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes.emplace(key, std::move(value)); return *this; }
    inline Dimension& AddCalculatedAttributes(Aws::String&& key, CalculatedAttributeDimension&& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Dimension& AddCalculatedAttributes(const char* key, CalculatedAttributeDimension&& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes.emplace(key, std::move(value)); return *this; }
    inline Dimension& AddCalculatedAttributes(const char* key, const CalculatedAttributeDimension& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes.emplace(key, value); return *this; }
    ///@}
  private:

    ProfileAttributes m_profileAttributes;
    bool m_profileAttributesHasBeenSet = false;

    Aws::Map<Aws::String, CalculatedAttributeDimension> m_calculatedAttributes;
    bool m_calculatedAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
