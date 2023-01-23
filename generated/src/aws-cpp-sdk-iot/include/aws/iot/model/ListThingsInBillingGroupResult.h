/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  class ListThingsInBillingGroupResult
  {
  public:
    AWS_IOT_API ListThingsInBillingGroupResult();
    AWS_IOT_API ListThingsInBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingsInBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of things in the billing group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThings() const{ return m_things; }

    /**
     * <p>A list of things in the billing group.</p>
     */
    inline void SetThings(const Aws::Vector<Aws::String>& value) { m_things = value; }

    /**
     * <p>A list of things in the billing group.</p>
     */
    inline void SetThings(Aws::Vector<Aws::String>&& value) { m_things = std::move(value); }

    /**
     * <p>A list of things in the billing group.</p>
     */
    inline ListThingsInBillingGroupResult& WithThings(const Aws::Vector<Aws::String>& value) { SetThings(value); return *this;}

    /**
     * <p>A list of things in the billing group.</p>
     */
    inline ListThingsInBillingGroupResult& WithThings(Aws::Vector<Aws::String>&& value) { SetThings(std::move(value)); return *this;}

    /**
     * <p>A list of things in the billing group.</p>
     */
    inline ListThingsInBillingGroupResult& AddThings(const Aws::String& value) { m_things.push_back(value); return *this; }

    /**
     * <p>A list of things in the billing group.</p>
     */
    inline ListThingsInBillingGroupResult& AddThings(Aws::String&& value) { m_things.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of things in the billing group.</p>
     */
    inline ListThingsInBillingGroupResult& AddThings(const char* value) { m_things.push_back(value); return *this; }


    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline ListThingsInBillingGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline ListThingsInBillingGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline ListThingsInBillingGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_things;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
