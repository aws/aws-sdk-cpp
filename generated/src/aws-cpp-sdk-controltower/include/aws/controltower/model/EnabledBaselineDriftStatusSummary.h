/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledBaselineDriftTypes.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>The drift summary of the enabled baseline. Amazon Web Services Control Tower
   * reports inheritance drift when an enabled baseline configuration of a member
   * account is different than the configuration that applies to the OU. Amazon Web
   * Services Control Tower reports this type of drift for a parent or child enabled
   * baseline. One way to repair this drift by resetting the parent enabled baseline,
   * on the OU.</p> <p>For example, you may see this type of drift if you move
   * accounts between OUs, but the accounts are not yet (re-)enrolled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineDriftStatusSummary">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineDriftStatusSummary
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineDriftStatusSummary() = default;
    AWS_CONTROLTOWER_API EnabledBaselineDriftStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineDriftStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The types of drift that can be detected for an enabled baseline. Amazon Web
     * Services Control Tower detects inheritance drift on enabled baselines that apply
     * at the OU level. </p>
     */
    inline const EnabledBaselineDriftTypes& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = EnabledBaselineDriftTypes>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = EnabledBaselineDriftTypes>
    EnabledBaselineDriftStatusSummary& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    ///@}
  private:

    EnabledBaselineDriftTypes m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
