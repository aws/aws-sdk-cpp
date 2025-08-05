/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/State.h>
#include <aws/inspector2/model/ResourceState.h>
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
   * <p>An object with details the status of an Amazon Web Services account within
   * your Amazon Inspector environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AccountState">AWS
   * API Reference</a></p>
   */
  class AccountState
  {
  public:
    AWS_INSPECTOR2_API AccountState() = default;
    AWS_INSPECTOR2_API AccountState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AccountState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountState& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object detailing the status of Amazon Inspector for the account.</p>
     */
    inline const State& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = State>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = State>
    AccountState& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object detailing which resources Amazon Inspector is enabled to scan for
     * the account.</p>
     */
    inline const ResourceState& GetResourceState() const { return m_resourceState; }
    inline bool ResourceStateHasBeenSet() const { return m_resourceStateHasBeenSet; }
    template<typename ResourceStateT = ResourceState>
    void SetResourceState(ResourceStateT&& value) { m_resourceStateHasBeenSet = true; m_resourceState = std::forward<ResourceStateT>(value); }
    template<typename ResourceStateT = ResourceState>
    AccountState& WithResourceState(ResourceStateT&& value) { SetResourceState(std::forward<ResourceStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    ResourceState m_resourceState;
    bool m_resourceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
