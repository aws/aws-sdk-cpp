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
   * always-block IP address ranges. </p> <p>This data type is a request parameter of
   * <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetRiskConfiguration.html">SetRiskConfiguration</a>
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeRiskConfiguration.html">DescribeRiskConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RiskExceptionConfigurationType">AWS
   * API Reference</a></p>
   */
  class RiskExceptionConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RiskExceptionConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API RiskExceptionConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API RiskExceptionConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An always-block IP address list. Overrides the risk decision and always
     * blocks authentication requests. This parameter is displayed and set in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedIPRangeList() const{ return m_blockedIPRangeList; }
    inline bool BlockedIPRangeListHasBeenSet() const { return m_blockedIPRangeListHasBeenSet; }
    inline void SetBlockedIPRangeList(const Aws::Vector<Aws::String>& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList = value; }
    inline void SetBlockedIPRangeList(Aws::Vector<Aws::String>&& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList = std::move(value); }
    inline RiskExceptionConfigurationType& WithBlockedIPRangeList(const Aws::Vector<Aws::String>& value) { SetBlockedIPRangeList(value); return *this;}
    inline RiskExceptionConfigurationType& WithBlockedIPRangeList(Aws::Vector<Aws::String>&& value) { SetBlockedIPRangeList(std::move(value)); return *this;}
    inline RiskExceptionConfigurationType& AddBlockedIPRangeList(const Aws::String& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList.push_back(value); return *this; }
    inline RiskExceptionConfigurationType& AddBlockedIPRangeList(Aws::String&& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList.push_back(std::move(value)); return *this; }
    inline RiskExceptionConfigurationType& AddBlockedIPRangeList(const char* value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An always-allow IP address list. Risk detection isn't performed on the IP
     * addresses in this range list. This parameter is displayed and set in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkippedIPRangeList() const{ return m_skippedIPRangeList; }
    inline bool SkippedIPRangeListHasBeenSet() const { return m_skippedIPRangeListHasBeenSet; }
    inline void SetSkippedIPRangeList(const Aws::Vector<Aws::String>& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList = value; }
    inline void SetSkippedIPRangeList(Aws::Vector<Aws::String>&& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList = std::move(value); }
    inline RiskExceptionConfigurationType& WithSkippedIPRangeList(const Aws::Vector<Aws::String>& value) { SetSkippedIPRangeList(value); return *this;}
    inline RiskExceptionConfigurationType& WithSkippedIPRangeList(Aws::Vector<Aws::String>&& value) { SetSkippedIPRangeList(std::move(value)); return *this;}
    inline RiskExceptionConfigurationType& AddSkippedIPRangeList(const Aws::String& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList.push_back(value); return *this; }
    inline RiskExceptionConfigurationType& AddSkippedIPRangeList(Aws::String&& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList.push_back(std::move(value)); return *this; }
    inline RiskExceptionConfigurationType& AddSkippedIPRangeList(const char* value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList.push_back(value); return *this; }
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
