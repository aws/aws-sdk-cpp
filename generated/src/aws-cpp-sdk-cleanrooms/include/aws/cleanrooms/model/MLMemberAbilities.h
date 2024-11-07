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
   * <p>The ML member abilities for a collaboration member.</p> <p>Custom ML modeling
   * is in beta release and is subject to change. For beta terms and conditions, see
   * <i>Betas and Previews</i> in the <a
   * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
   * Terms</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MLMemberAbilities">AWS
   * API Reference</a></p>
   */
  class MLMemberAbilities
  {
  public:
    AWS_CLEANROOMS_API MLMemberAbilities();
    AWS_CLEANROOMS_API MLMemberAbilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MLMemberAbilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom ML member abilities for a collaboration member. The inference
     * feature is not available in the custom ML modeling beta.</p> <p>Custom ML
     * modeling is in beta release and is subject to change. For beta terms and
     * conditions, see <i>Betas and Previews</i> in the <a
     * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a>.</p>
     */
    inline const Aws::Vector<CustomMLMemberAbility>& GetCustomMLMemberAbilities() const{ return m_customMLMemberAbilities; }
    inline bool CustomMLMemberAbilitiesHasBeenSet() const { return m_customMLMemberAbilitiesHasBeenSet; }
    inline void SetCustomMLMemberAbilities(const Aws::Vector<CustomMLMemberAbility>& value) { m_customMLMemberAbilitiesHasBeenSet = true; m_customMLMemberAbilities = value; }
    inline void SetCustomMLMemberAbilities(Aws::Vector<CustomMLMemberAbility>&& value) { m_customMLMemberAbilitiesHasBeenSet = true; m_customMLMemberAbilities = std::move(value); }
    inline MLMemberAbilities& WithCustomMLMemberAbilities(const Aws::Vector<CustomMLMemberAbility>& value) { SetCustomMLMemberAbilities(value); return *this;}
    inline MLMemberAbilities& WithCustomMLMemberAbilities(Aws::Vector<CustomMLMemberAbility>&& value) { SetCustomMLMemberAbilities(std::move(value)); return *this;}
    inline MLMemberAbilities& AddCustomMLMemberAbilities(const CustomMLMemberAbility& value) { m_customMLMemberAbilitiesHasBeenSet = true; m_customMLMemberAbilities.push_back(value); return *this; }
    inline MLMemberAbilities& AddCustomMLMemberAbilities(CustomMLMemberAbility&& value) { m_customMLMemberAbilitiesHasBeenSet = true; m_customMLMemberAbilities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CustomMLMemberAbility> m_customMLMemberAbilities;
    bool m_customMLMemberAbilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
