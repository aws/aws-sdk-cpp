/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/OfferingPromotion.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListOfferingPromotionsResult
  {
  public:
    AWS_DEVICEFARM_API ListOfferingPromotionsResult() = default;
    AWS_DEVICEFARM_API ListOfferingPromotionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListOfferingPromotionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the offering promotions.</p>
     */
    inline const Aws::Vector<OfferingPromotion>& GetOfferingPromotions() const { return m_offeringPromotions; }
    template<typename OfferingPromotionsT = Aws::Vector<OfferingPromotion>>
    void SetOfferingPromotions(OfferingPromotionsT&& value) { m_offeringPromotionsHasBeenSet = true; m_offeringPromotions = std::forward<OfferingPromotionsT>(value); }
    template<typename OfferingPromotionsT = Aws::Vector<OfferingPromotion>>
    ListOfferingPromotionsResult& WithOfferingPromotions(OfferingPromotionsT&& value) { SetOfferingPromotions(std::forward<OfferingPromotionsT>(value)); return *this;}
    template<typename OfferingPromotionsT = OfferingPromotion>
    ListOfferingPromotionsResult& AddOfferingPromotions(OfferingPromotionsT&& value) { m_offeringPromotionsHasBeenSet = true; m_offeringPromotions.emplace_back(std::forward<OfferingPromotionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOfferingPromotionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOfferingPromotionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OfferingPromotion> m_offeringPromotions;
    bool m_offeringPromotionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
