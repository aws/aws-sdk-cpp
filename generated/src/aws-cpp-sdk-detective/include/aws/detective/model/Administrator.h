/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Information about the Detective administrator account for an
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/Administrator">AWS
   * API Reference</a></p>
   */
  class Administrator
  {
  public:
    AWS_DETECTIVE_API Administrator() = default;
    AWS_DETECTIVE_API Administrator(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Administrator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Administrator& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    Administrator& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the Detective administrator account was enabled. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetDelegationTime() const { return m_delegationTime; }
    inline bool DelegationTimeHasBeenSet() const { return m_delegationTimeHasBeenSet; }
    template<typename DelegationTimeT = Aws::Utils::DateTime>
    void SetDelegationTime(DelegationTimeT&& value) { m_delegationTimeHasBeenSet = true; m_delegationTime = std::forward<DelegationTimeT>(value); }
    template<typename DelegationTimeT = Aws::Utils::DateTime>
    Administrator& WithDelegationTime(DelegationTimeT&& value) { SetDelegationTime(std::forward<DelegationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::Utils::DateTime m_delegationTime{};
    bool m_delegationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
