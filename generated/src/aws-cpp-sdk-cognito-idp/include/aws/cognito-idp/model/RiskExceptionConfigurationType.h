/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Exceptions to the risk evaluation configuration, including always-allow and
   * always-block IP address ranges. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RiskExceptionConfigurationType">AWS
   * API Reference</a></p>
   */
  class RiskExceptionConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RiskExceptionConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API RiskExceptionConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API RiskExceptionConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An always-block IP address list. Overrides the risk decision and always
     * blocks authentication requests. This parameter is displayed and set in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedIPRangeList() const { return m_blockedIPRangeList; }
    inline bool BlockedIPRangeListHasBeenSet() const { return m_blockedIPRangeListHasBeenSet; }
    template<typename BlockedIPRangeListT = Aws::Vector<Aws::String>>
    void SetBlockedIPRangeList(BlockedIPRangeListT&& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList = std::forward<BlockedIPRangeListT>(value); }
    template<typename BlockedIPRangeListT = Aws::Vector<Aws::String>>
    RiskExceptionConfigurationType& WithBlockedIPRangeList(BlockedIPRangeListT&& value) { SetBlockedIPRangeList(std::forward<BlockedIPRangeListT>(value)); return *this;}
    template<typename BlockedIPRangeListT = Aws::String>
    RiskExceptionConfigurationType& AddBlockedIPRangeList(BlockedIPRangeListT&& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList.emplace_back(std::forward<BlockedIPRangeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An always-allow IP address list. Risk detection isn't performed on the IP
     * addresses in this range list. This parameter is displayed and set in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkippedIPRangeList() const { return m_skippedIPRangeList; }
    inline bool SkippedIPRangeListHasBeenSet() const { return m_skippedIPRangeListHasBeenSet; }
    template<typename SkippedIPRangeListT = Aws::Vector<Aws::String>>
    void SetSkippedIPRangeList(SkippedIPRangeListT&& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList = std::forward<SkippedIPRangeListT>(value); }
    template<typename SkippedIPRangeListT = Aws::Vector<Aws::String>>
    RiskExceptionConfigurationType& WithSkippedIPRangeList(SkippedIPRangeListT&& value) { SetSkippedIPRangeList(std::forward<SkippedIPRangeListT>(value)); return *this;}
    template<typename SkippedIPRangeListT = Aws::String>
    RiskExceptionConfigurationType& AddSkippedIPRangeList(SkippedIPRangeListT&& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList.emplace_back(std::forward<SkippedIPRangeListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_blockedIPRangeList;
    bool m_blockedIPRangeListHasBeenSet = false;

    Aws::Vector<Aws::String> m_skippedIPRangeList;
    bool m_skippedIPRangeListHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
