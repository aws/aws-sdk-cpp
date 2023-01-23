/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Offering.h>
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
  /**
   * <p>Represents the return values of the list of offerings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingsResult">AWS
   * API Reference</a></p>
   */
  class ListOfferingsResult
  {
  public:
    AWS_DEVICEFARM_API ListOfferingsResult();
    AWS_DEVICEFARM_API ListOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A value that represents the list offering results.</p>
     */
    inline const Aws::Vector<Offering>& GetOfferings() const{ return m_offerings; }

    /**
     * <p>A value that represents the list offering results.</p>
     */
    inline void SetOfferings(const Aws::Vector<Offering>& value) { m_offerings = value; }

    /**
     * <p>A value that represents the list offering results.</p>
     */
    inline void SetOfferings(Aws::Vector<Offering>&& value) { m_offerings = std::move(value); }

    /**
     * <p>A value that represents the list offering results.</p>
     */
    inline ListOfferingsResult& WithOfferings(const Aws::Vector<Offering>& value) { SetOfferings(value); return *this;}

    /**
     * <p>A value that represents the list offering results.</p>
     */
    inline ListOfferingsResult& WithOfferings(Aws::Vector<Offering>&& value) { SetOfferings(std::move(value)); return *this;}

    /**
     * <p>A value that represents the list offering results.</p>
     */
    inline ListOfferingsResult& AddOfferings(const Offering& value) { m_offerings.push_back(value); return *this; }

    /**
     * <p>A value that represents the list offering results.</p>
     */
    inline ListOfferingsResult& AddOfferings(Offering&& value) { m_offerings.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Offering> m_offerings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
