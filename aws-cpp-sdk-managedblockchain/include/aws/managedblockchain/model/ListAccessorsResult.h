/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class ListAccessorsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult();
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline const Aws::Vector<AccessorSummary>& GetAccessors() const{ return m_accessors; }

    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline void SetAccessors(const Aws::Vector<AccessorSummary>& value) { m_accessors = value; }

    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline void SetAccessors(Aws::Vector<AccessorSummary>&& value) { m_accessors = std::move(value); }

    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline ListAccessorsResult& WithAccessors(const Aws::Vector<AccessorSummary>& value) { SetAccessors(value); return *this;}

    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline ListAccessorsResult& WithAccessors(Aws::Vector<AccessorSummary>&& value) { SetAccessors(std::move(value)); return *this;}

    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline ListAccessorsResult& AddAccessors(const AccessorSummary& value) { m_accessors.push_back(value); return *this; }

    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline ListAccessorsResult& AddAccessors(AccessorSummary&& value) { m_accessors.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListAccessorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListAccessorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListAccessorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessorSummary> m_accessors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
