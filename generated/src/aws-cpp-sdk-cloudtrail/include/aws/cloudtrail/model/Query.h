/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/QueryStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A SQL string of criteria about events that you want to collect in an event
   * data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Query">AWS
   * API Reference</a></p>
   */
  class Query
  {
  public:
    AWS_CLOUDTRAIL_API Query();
    AWS_CLOUDTRAIL_API Query(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Query& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of a query.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The ID of a query.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The ID of a query.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The ID of a query.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The ID of a query.</p>
     */
    inline Query& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of a query.</p>
     */
    inline Query& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of a query.</p>
     */
    inline Query& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The status of the query. This can be <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline const QueryStatus& GetQueryStatus() const{ return m_queryStatus; }

    /**
     * <p>The status of the query. This can be <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline bool QueryStatusHasBeenSet() const { return m_queryStatusHasBeenSet; }

    /**
     * <p>The status of the query. This can be <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline void SetQueryStatus(const QueryStatus& value) { m_queryStatusHasBeenSet = true; m_queryStatus = value; }

    /**
     * <p>The status of the query. This can be <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline void SetQueryStatus(QueryStatus&& value) { m_queryStatusHasBeenSet = true; m_queryStatus = std::move(value); }

    /**
     * <p>The status of the query. This can be <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline Query& WithQueryStatus(const QueryStatus& value) { SetQueryStatus(value); return *this;}

    /**
     * <p>The status of the query. This can be <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline Query& WithQueryStatus(QueryStatus&& value) { SetQueryStatus(std::move(value)); return *this;}


    /**
     * <p>The creation time of a query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of a query.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of a query.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of a query.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of a query.</p>
     */
    inline Query& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of a query.</p>
     */
    inline Query& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    QueryStatus m_queryStatus;
    bool m_queryStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
