﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Offering.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListOfferingsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferingsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ListOfferingsResult
  {
  public:
    ListOfferingsResult();
    ListOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Token to retrieve the next page of results
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Token to retrieve the next page of results
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Token to retrieve the next page of results
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Token to retrieve the next page of results
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Token to retrieve the next page of results
     */
    inline ListOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Token to retrieve the next page of results
     */
    inline ListOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Token to retrieve the next page of results
     */
    inline ListOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * List of offerings
     */
    inline const Aws::Vector<Offering>& GetOfferings() const{ return m_offerings; }

    /**
     * List of offerings
     */
    inline void SetOfferings(const Aws::Vector<Offering>& value) { m_offerings = value; }

    /**
     * List of offerings
     */
    inline void SetOfferings(Aws::Vector<Offering>&& value) { m_offerings = std::move(value); }

    /**
     * List of offerings
     */
    inline ListOfferingsResult& WithOfferings(const Aws::Vector<Offering>& value) { SetOfferings(value); return *this;}

    /**
     * List of offerings
     */
    inline ListOfferingsResult& WithOfferings(Aws::Vector<Offering>&& value) { SetOfferings(std::move(value)); return *this;}

    /**
     * List of offerings
     */
    inline ListOfferingsResult& AddOfferings(const Offering& value) { m_offerings.push_back(value); return *this; }

    /**
     * List of offerings
     */
    inline ListOfferingsResult& AddOfferings(Offering&& value) { m_offerings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Offering> m_offerings;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
