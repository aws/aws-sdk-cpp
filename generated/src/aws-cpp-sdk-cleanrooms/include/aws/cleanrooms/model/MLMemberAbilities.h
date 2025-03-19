/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CustomMLMemberAbility.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The ML member abilities for a collaboration member.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MLMemberAbilities">AWS
   * API Reference</a></p>
   */
  class MLMemberAbilities
  {
  public:
    AWS_CLEANROOMS_API MLMemberAbilities() = default;
    AWS_CLEANROOMS_API MLMemberAbilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MLMemberAbilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom ML member abilities for a collaboration member. </p>
     */
    inline const Aws::Vector<CustomMLMemberAbility>& GetCustomMLMemberAbilities() const { return m_customMLMemberAbilities; }
    inline bool CustomMLMemberAbilitiesHasBeenSet() const { return m_customMLMemberAbilitiesHasBeenSet; }
    template<typename CustomMLMemberAbilitiesT = Aws::Vector<CustomMLMemberAbility>>
    void SetCustomMLMemberAbilities(CustomMLMemberAbilitiesT&& value) { m_customMLMemberAbilitiesHasBeenSet = true; m_customMLMemberAbilities = std::forward<CustomMLMemberAbilitiesT>(value); }
    template<typename CustomMLMemberAbilitiesT = Aws::Vector<CustomMLMemberAbility>>
    MLMemberAbilities& WithCustomMLMemberAbilities(CustomMLMemberAbilitiesT&& value) { SetCustomMLMemberAbilities(std::forward<CustomMLMemberAbilitiesT>(value)); return *this;}
    inline MLMemberAbilities& AddCustomMLMemberAbilities(CustomMLMemberAbility value) { m_customMLMemberAbilitiesHasBeenSet = true; m_customMLMemberAbilities.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<CustomMLMemberAbility> m_customMLMemberAbilities;
    bool m_customMLMemberAbilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
