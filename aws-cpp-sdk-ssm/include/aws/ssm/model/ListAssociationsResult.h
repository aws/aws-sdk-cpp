﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Association.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListAssociationsResult
  {
  public:
    ListAssociationsResult();
    ListAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The associations.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The associations.</p>
     */
    inline void SetAssociations(const Aws::Vector<Association>& value) { m_associations = value; }

    /**
     * <p>The associations.</p>
     */
    inline void SetAssociations(Aws::Vector<Association>&& value) { m_associations = std::move(value); }

    /**
     * <p>The associations.</p>
     */
    inline ListAssociationsResult& WithAssociations(const Aws::Vector<Association>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The associations.</p>
     */
    inline ListAssociationsResult& WithAssociations(Aws::Vector<Association>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The associations.</p>
     */
    inline ListAssociationsResult& AddAssociations(const Association& value) { m_associations.push_back(value); return *this; }

    /**
     * <p>The associations.</p>
     */
    inline ListAssociationsResult& AddAssociations(Association&& value) { m_associations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Association> m_associations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
