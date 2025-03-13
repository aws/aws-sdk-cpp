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
    AWS_CUSTOMERPROFILES_API Dimension() = default;
    AWS_CUSTOMERPROFILES_API Dimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Dimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Object that holds the profile attributes to segment on.</p>
     */
    inline const ProfileAttributes& GetProfileAttributes() const { return m_profileAttributes; }
    inline bool ProfileAttributesHasBeenSet() const { return m_profileAttributesHasBeenSet; }
    template<typename ProfileAttributesT = ProfileAttributes>
    void SetProfileAttributes(ProfileAttributesT&& value) { m_profileAttributesHasBeenSet = true; m_profileAttributes = std::forward<ProfileAttributesT>(value); }
    template<typename ProfileAttributesT = ProfileAttributes>
    Dimension& WithProfileAttributes(ProfileAttributesT&& value) { SetProfileAttributes(std::forward<ProfileAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that holds the calculated attributes to segment on.</p>
     */
    inline const Aws::Map<Aws::String, CalculatedAttributeDimension>& GetCalculatedAttributes() const { return m_calculatedAttributes; }
    inline bool CalculatedAttributesHasBeenSet() const { return m_calculatedAttributesHasBeenSet; }
    template<typename CalculatedAttributesT = Aws::Map<Aws::String, CalculatedAttributeDimension>>
    void SetCalculatedAttributes(CalculatedAttributesT&& value) { m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes = std::forward<CalculatedAttributesT>(value); }
    template<typename CalculatedAttributesT = Aws::Map<Aws::String, CalculatedAttributeDimension>>
    Dimension& WithCalculatedAttributes(CalculatedAttributesT&& value) { SetCalculatedAttributes(std::forward<CalculatedAttributesT>(value)); return *this;}
    template<typename CalculatedAttributesKeyT = Aws::String, typename CalculatedAttributesValueT = CalculatedAttributeDimension>
    Dimension& AddCalculatedAttributes(CalculatedAttributesKeyT&& key, CalculatedAttributesValueT&& value) {
      m_calculatedAttributesHasBeenSet = true; m_calculatedAttributes.emplace(std::forward<CalculatedAttributesKeyT>(key), std::forward<CalculatedAttributesValueT>(value)); return *this;
    }
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
