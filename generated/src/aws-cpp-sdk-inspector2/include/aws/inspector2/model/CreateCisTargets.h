/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Creates CIS targets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CreateCisTargets">AWS
   * API Reference</a></p>
   */
  class CreateCisTargets
  {
  public:
    AWS_INSPECTOR2_API CreateCisTargets() = default;
    AWS_INSPECTOR2_API CreateCisTargets(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CreateCisTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS target account ids.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    CreateCisTargets& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    CreateCisTargets& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CIS target resource tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTargetResourceTags() const { return m_targetResourceTags; }
    inline bool TargetResourceTagsHasBeenSet() const { return m_targetResourceTagsHasBeenSet; }
    template<typename TargetResourceTagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetTargetResourceTags(TargetResourceTagsT&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags = std::forward<TargetResourceTagsT>(value); }
    template<typename TargetResourceTagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    CreateCisTargets& WithTargetResourceTags(TargetResourceTagsT&& value) { SetTargetResourceTags(std::forward<TargetResourceTagsT>(value)); return *this;}
    template<typename TargetResourceTagsKeyT = Aws::String, typename TargetResourceTagsValueT = Aws::Vector<Aws::String>>
    CreateCisTargets& AddTargetResourceTags(TargetResourceTagsKeyT&& key, TargetResourceTagsValueT&& value) {
      m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(std::forward<TargetResourceTagsKeyT>(key), std::forward<TargetResourceTagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_targetResourceTags;
    bool m_targetResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
