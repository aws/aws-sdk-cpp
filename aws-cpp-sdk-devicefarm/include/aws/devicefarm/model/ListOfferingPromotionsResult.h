/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DEVICEFARM_API ListOfferingPromotionsResult
  {
  public:
    ListOfferingPromotionsResult();
    ListOfferingPromotionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOfferingPromotionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the offering promotions.</p>
     */
    inline const Aws::Vector<OfferingPromotion>& GetOfferingPromotions() const{ return m_offeringPromotions; }

    /**
     * <p>Information about the offering promotions.</p>
     */
    inline void SetOfferingPromotions(const Aws::Vector<OfferingPromotion>& value) { m_offeringPromotions = value; }

    /**
     * <p>Information about the offering promotions.</p>
     */
    inline void SetOfferingPromotions(Aws::Vector<OfferingPromotion>&& value) { m_offeringPromotions = std::move(value); }

    /**
     * <p>Information about the offering promotions.</p>
     */
    inline ListOfferingPromotionsResult& WithOfferingPromotions(const Aws::Vector<OfferingPromotion>& value) { SetOfferingPromotions(value); return *this;}

    /**
     * <p>Information about the offering promotions.</p>
     */
    inline ListOfferingPromotionsResult& WithOfferingPromotions(Aws::Vector<OfferingPromotion>&& value) { SetOfferingPromotions(std::move(value)); return *this;}

    /**
     * <p>Information about the offering promotions.</p>
     */
    inline ListOfferingPromotionsResult& AddOfferingPromotions(const OfferingPromotion& value) { m_offeringPromotions.push_back(value); return *this; }

    /**
     * <p>Information about the offering promotions.</p>
     */
    inline ListOfferingPromotionsResult& AddOfferingPromotions(OfferingPromotion&& value) { m_offeringPromotions.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline ListOfferingPromotionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline ListOfferingPromotionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier to be used in the next call to this operation, to return the
     * next set of items in the list.</p>
     */
    inline ListOfferingPromotionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OfferingPromotion> m_offeringPromotions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
