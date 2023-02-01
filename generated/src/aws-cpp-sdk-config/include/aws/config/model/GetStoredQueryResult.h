/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/StoredQuery.h>
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
namespace ConfigService
{
namespace Model
{
  class GetStoredQueryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetStoredQueryResult();
    AWS_CONFIGSERVICE_API GetStoredQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetStoredQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a <code>StoredQuery</code> object.</p>
     */
    inline const StoredQuery& GetStoredQuery() const{ return m_storedQuery; }

    /**
     * <p>Returns a <code>StoredQuery</code> object.</p>
     */
    inline void SetStoredQuery(const StoredQuery& value) { m_storedQuery = value; }

    /**
     * <p>Returns a <code>StoredQuery</code> object.</p>
     */
    inline void SetStoredQuery(StoredQuery&& value) { m_storedQuery = std::move(value); }

    /**
     * <p>Returns a <code>StoredQuery</code> object.</p>
     */
    inline GetStoredQueryResult& WithStoredQuery(const StoredQuery& value) { SetStoredQuery(value); return *this;}

    /**
     * <p>Returns a <code>StoredQuery</code> object.</p>
     */
    inline GetStoredQueryResult& WithStoredQuery(StoredQuery&& value) { SetStoredQuery(std::move(value)); return *this;}

  private:

    StoredQuery m_storedQuery;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
