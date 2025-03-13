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
    AWS_CLOUDTRAIL_API Query() = default;
    AWS_CLOUDTRAIL_API Query(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Query& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a query.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    Query& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the query. This can be <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline QueryStatus GetQueryStatus() const { return m_queryStatus; }
    inline bool QueryStatusHasBeenSet() const { return m_queryStatusHasBeenSet; }
    inline void SetQueryStatus(QueryStatus value) { m_queryStatusHasBeenSet = true; m_queryStatus = value; }
    inline Query& WithQueryStatus(QueryStatus value) { SetQueryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of a query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Query& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    QueryStatus m_queryStatus{QueryStatus::NOT_SET};
    bool m_queryStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
