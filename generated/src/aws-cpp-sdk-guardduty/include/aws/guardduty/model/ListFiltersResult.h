/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListFiltersResult
  {
  public:
    AWS_GUARDDUTY_API ListFiltersResult();
    AWS_GUARDDUTY_API ListFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of filter names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterNames() const{ return m_filterNames; }

    /**
     * <p>A list of filter names.</p>
     */
    inline void SetFilterNames(const Aws::Vector<Aws::String>& value) { m_filterNames = value; }

    /**
     * <p>A list of filter names.</p>
     */
    inline void SetFilterNames(Aws::Vector<Aws::String>&& value) { m_filterNames = std::move(value); }

    /**
     * <p>A list of filter names.</p>
     */
    inline ListFiltersResult& WithFilterNames(const Aws::Vector<Aws::String>& value) { SetFilterNames(value); return *this;}

    /**
     * <p>A list of filter names.</p>
     */
    inline ListFiltersResult& WithFilterNames(Aws::Vector<Aws::String>&& value) { SetFilterNames(std::move(value)); return *this;}

    /**
     * <p>A list of filter names.</p>
     */
    inline ListFiltersResult& AddFilterNames(const Aws::String& value) { m_filterNames.push_back(value); return *this; }

    /**
     * <p>A list of filter names.</p>
     */
    inline ListFiltersResult& AddFilterNames(Aws::String&& value) { m_filterNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of filter names.</p>
     */
    inline ListFiltersResult& AddFilterNames(const char* value) { m_filterNames.push_back(value); return *this; }


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_filterNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
