/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/KeyspacesStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

  /**
   */
  class ListStreamsRequest : public KeyspacesStreamsRequest
  {
  public:
    AWS_KEYSPACESSTREAMS_API ListStreamsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreams"; }

    AWS_KEYSPACESSTREAMS_API Aws::String SerializePayload() const override;

    AWS_KEYSPACESSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the keyspace for which to list streams. If specified, only
     * streams associated with tables in this keyspace are returned. If omitted,
     * streams from all keyspaces are included in the results. </p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    ListStreamsRequest& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the table for which to list streams. Must be used together with
     * <code>keyspaceName</code>. If specified, only streams associated with this
     * specific table are returned. </p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ListStreamsRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of streams to return in a single <code>ListStreams</code>
     * request. Default value is 100. The minimum value is 1 and the maximum value is
     * 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStreamsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous <code>ListStreams</code>
     * operation. If this parameter is specified, the response includes only records
     * beyond the token, up to the value specified by <code>maxResults</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
