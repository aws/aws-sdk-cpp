/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/QueryStatus.h>
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
namespace CloudTrail
{
namespace Model
{
  class CancelQueryResult
  {
  public:
    AWS_CLOUDTRAIL_API CancelQueryResult();
    AWS_CLOUDTRAIL_API CancelQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API CancelQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the canceled query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the canceled query.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The ID of the canceled query.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The ID of the canceled query.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The ID of the canceled query.</p>
     */
    inline CancelQueryResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the canceled query.</p>
     */
    inline CancelQueryResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the canceled query.</p>
     */
    inline CancelQueryResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>Shows the status of a query after a <code>CancelQuery</code> request.
     * Typically, the values shown are either <code>RUNNING</code> or
     * <code>CANCELLED</code>.</p>
     */
    inline const QueryStatus& GetQueryStatus() const{ return m_queryStatus; }

    /**
     * <p>Shows the status of a query after a <code>CancelQuery</code> request.
     * Typically, the values shown are either <code>RUNNING</code> or
     * <code>CANCELLED</code>.</p>
     */
    inline void SetQueryStatus(const QueryStatus& value) { m_queryStatus = value; }

    /**
     * <p>Shows the status of a query after a <code>CancelQuery</code> request.
     * Typically, the values shown are either <code>RUNNING</code> or
     * <code>CANCELLED</code>.</p>
     */
    inline void SetQueryStatus(QueryStatus&& value) { m_queryStatus = std::move(value); }

    /**
     * <p>Shows the status of a query after a <code>CancelQuery</code> request.
     * Typically, the values shown are either <code>RUNNING</code> or
     * <code>CANCELLED</code>.</p>
     */
    inline CancelQueryResult& WithQueryStatus(const QueryStatus& value) { SetQueryStatus(value); return *this;}

    /**
     * <p>Shows the status of a query after a <code>CancelQuery</code> request.
     * Typically, the values shown are either <code>RUNNING</code> or
     * <code>CANCELLED</code>.</p>
     */
    inline CancelQueryResult& WithQueryStatus(QueryStatus&& value) { SetQueryStatus(std::move(value)); return *this;}

  private:

    Aws::String m_queryId;

    QueryStatus m_queryStatus;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
