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
  class UpdatePreferencesResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API UpdatePreferencesResult();
    AWS_BCMPRICINGCALCULATOR_API UpdatePreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API UpdatePreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The updated preferred rate types for the management account. </p>
     */
    inline const Aws::Vector<RateType>& GetManagementAccountRateTypeSelections() const{ return m_managementAccountRateTypeSelections; }
    inline void SetManagementAccountRateTypeSelections(const Aws::Vector<RateType>& value) { m_managementAccountRateTypeSelections = value; }
    inline void SetManagementAccountRateTypeSelections(Aws::Vector<RateType>&& value) { m_managementAccountRateTypeSelections = std::move(value); }
    inline UpdatePreferencesResult& WithManagementAccountRateTypeSelections(const Aws::Vector<RateType>& value) { SetManagementAccountRateTypeSelections(value); return *this;}
    inline UpdatePreferencesResult& WithManagementAccountRateTypeSelections(Aws::Vector<RateType>&& value) { SetManagementAccountRateTypeSelections(std::move(value)); return *this;}
    inline UpdatePreferencesResult& AddManagementAccountRateTypeSelections(const RateType& value) { m_managementAccountRateTypeSelections.push_back(value); return *this; }
    inline UpdatePreferencesResult& AddManagementAccountRateTypeSelections(RateType&& value) { m_managementAccountRateTypeSelections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The updated preferred rate types for member accounts. </p>
     */
    inline const Aws::Vector<RateType>& GetMemberAccountRateTypeSelections() const{ return m_memberAccountRateTypeSelections; }
    inline void SetMemberAccountRateTypeSelections(const Aws::Vector<RateType>& value) { m_memberAccountRateTypeSelections = value; }
    inline void SetMemberAccountRateTypeSelections(Aws::Vector<RateType>&& value) { m_memberAccountRateTypeSelections = std::move(value); }
    inline UpdatePreferencesResult& WithMemberAccountRateTypeSelections(const Aws::Vector<RateType>& value) { SetMemberAccountRateTypeSelections(value); return *this;}
    inline UpdatePreferencesResult& WithMemberAccountRateTypeSelections(Aws::Vector<RateType>&& value) { SetMemberAccountRateTypeSelections(std::move(value)); return *this;}
    inline UpdatePreferencesResult& AddMemberAccountRateTypeSelections(const RateType& value) { m_memberAccountRateTypeSelections.push_back(value); return *this; }
    inline UpdatePreferencesResult& AddMemberAccountRateTypeSelections(RateType&& value) { m_memberAccountRateTypeSelections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RateType> m_managementAccountRateTypeSelections;

    Aws::Vector<RateType> m_memberAccountRateTypeSelections;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
