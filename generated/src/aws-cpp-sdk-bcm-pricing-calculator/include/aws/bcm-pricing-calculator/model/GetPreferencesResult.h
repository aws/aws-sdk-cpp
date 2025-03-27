/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/RateType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BCMPricingCalculator
{
namespace Model
{
  class GetPreferencesResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API GetPreferencesResult() = default;
    AWS_BCMPRICINGCALCULATOR_API GetPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API GetPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The preferred rate types for the management account. </p>
     */
    inline const Aws::Vector<RateType>& GetManagementAccountRateTypeSelections() const { return m_managementAccountRateTypeSelections; }
    template<typename ManagementAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    void SetManagementAccountRateTypeSelections(ManagementAccountRateTypeSelectionsT&& value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections = std::forward<ManagementAccountRateTypeSelectionsT>(value); }
    template<typename ManagementAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    GetPreferencesResult& WithManagementAccountRateTypeSelections(ManagementAccountRateTypeSelectionsT&& value) { SetManagementAccountRateTypeSelections(std::forward<ManagementAccountRateTypeSelectionsT>(value)); return *this;}
    inline GetPreferencesResult& AddManagementAccountRateTypeSelections(RateType value) { m_managementAccountRateTypeSelectionsHasBeenSet = true; m_managementAccountRateTypeSelections.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The preferred rate types for member accounts. </p>
     */
    inline const Aws::Vector<RateType>& GetMemberAccountRateTypeSelections() const { return m_memberAccountRateTypeSelections; }
    template<typename MemberAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    void SetMemberAccountRateTypeSelections(MemberAccountRateTypeSelectionsT&& value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections = std::forward<MemberAccountRateTypeSelectionsT>(value); }
    template<typename MemberAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    GetPreferencesResult& WithMemberAccountRateTypeSelections(MemberAccountRateTypeSelectionsT&& value) { SetMemberAccountRateTypeSelections(std::forward<MemberAccountRateTypeSelectionsT>(value)); return *this;}
    inline GetPreferencesResult& AddMemberAccountRateTypeSelections(RateType value) { m_memberAccountRateTypeSelectionsHasBeenSet = true; m_memberAccountRateTypeSelections.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The preferred rate types for a standalone account. </p>
     */
    inline const Aws::Vector<RateType>& GetStandaloneAccountRateTypeSelections() const { return m_standaloneAccountRateTypeSelections; }
    template<typename StandaloneAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    void SetStandaloneAccountRateTypeSelections(StandaloneAccountRateTypeSelectionsT&& value) { m_standaloneAccountRateTypeSelectionsHasBeenSet = true; m_standaloneAccountRateTypeSelections = std::forward<StandaloneAccountRateTypeSelectionsT>(value); }
    template<typename StandaloneAccountRateTypeSelectionsT = Aws::Vector<RateType>>
    GetPreferencesResult& WithStandaloneAccountRateTypeSelections(StandaloneAccountRateTypeSelectionsT&& value) { SetStandaloneAccountRateTypeSelections(std::forward<StandaloneAccountRateTypeSelectionsT>(value)); return *this;}
    inline GetPreferencesResult& AddStandaloneAccountRateTypeSelections(RateType value) { m_standaloneAccountRateTypeSelectionsHasBeenSet = true; m_standaloneAccountRateTypeSelections.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RateType> m_managementAccountRateTypeSelections;
    bool m_managementAccountRateTypeSelectionsHasBeenSet = false;

    Aws::Vector<RateType> m_memberAccountRateTypeSelections;
    bool m_memberAccountRateTypeSelectionsHasBeenSet = false;

    Aws::Vector<RateType> m_standaloneAccountRateTypeSelections;
    bool m_standaloneAccountRateTypeSelectionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
