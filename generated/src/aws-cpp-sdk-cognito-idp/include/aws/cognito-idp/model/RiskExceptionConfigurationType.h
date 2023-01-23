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
   * <p>The type of the configuration to override the risk decision.</p><p><h3>See
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


    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedIPRangeList() const{ return m_blockedIPRangeList; }

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline bool BlockedIPRangeListHasBeenSet() const { return m_blockedIPRangeListHasBeenSet; }

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline void SetBlockedIPRangeList(const Aws::Vector<Aws::String>& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList = value; }

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline void SetBlockedIPRangeList(Aws::Vector<Aws::String>&& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList = std::move(value); }

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline RiskExceptionConfigurationType& WithBlockedIPRangeList(const Aws::Vector<Aws::String>& value) { SetBlockedIPRangeList(value); return *this;}

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline RiskExceptionConfigurationType& WithBlockedIPRangeList(Aws::Vector<Aws::String>&& value) { SetBlockedIPRangeList(std::move(value)); return *this;}

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline RiskExceptionConfigurationType& AddBlockedIPRangeList(const Aws::String& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList.push_back(value); return *this; }

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline RiskExceptionConfigurationType& AddBlockedIPRangeList(Aws::String&& value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList.push_back(std::move(value)); return *this; }

    /**
     * <p>Overrides the risk decision to always block the pre-authentication requests.
     * The IP range is in CIDR notation, a compact representation of an IP address and
     * its routing prefix.</p>
     */
    inline RiskExceptionConfigurationType& AddBlockedIPRangeList(const char* value) { m_blockedIPRangeListHasBeenSet = true; m_blockedIPRangeList.push_back(value); return *this; }


    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSkippedIPRangeList() const{ return m_skippedIPRangeList; }

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline bool SkippedIPRangeListHasBeenSet() const { return m_skippedIPRangeListHasBeenSet; }

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline void SetSkippedIPRangeList(const Aws::Vector<Aws::String>& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList = value; }

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline void SetSkippedIPRangeList(Aws::Vector<Aws::String>&& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList = std::move(value); }

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline RiskExceptionConfigurationType& WithSkippedIPRangeList(const Aws::Vector<Aws::String>& value) { SetSkippedIPRangeList(value); return *this;}

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline RiskExceptionConfigurationType& WithSkippedIPRangeList(Aws::Vector<Aws::String>&& value) { SetSkippedIPRangeList(std::move(value)); return *this;}

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline RiskExceptionConfigurationType& AddSkippedIPRangeList(const Aws::String& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList.push_back(value); return *this; }

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline RiskExceptionConfigurationType& AddSkippedIPRangeList(Aws::String&& value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList.push_back(std::move(value)); return *this; }

    /**
     * <p>Risk detection isn't performed on the IP addresses in this range list. The IP
     * range is in CIDR notation.</p>
     */
    inline RiskExceptionConfigurationType& AddSkippedIPRangeList(const char* value) { m_skippedIPRangeListHasBeenSet = true; m_skippedIPRangeList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_blockedIPRangeList;
    bool m_blockedIPRangeListHasBeenSet = false;

    Aws::Vector<Aws::String> m_skippedIPRangeList;
    bool m_skippedIPRangeListHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
