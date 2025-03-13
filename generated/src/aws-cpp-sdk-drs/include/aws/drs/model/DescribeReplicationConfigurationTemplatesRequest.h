/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class DescribeReplicationConfigurationTemplatesRequest : public DrsRequest
  {
  public:
    AWS_DRS_API DescribeReplicationConfigurationTemplatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplicationConfigurationTemplates"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Maximum number of Replication Configuration Templates to retrieve.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeReplicationConfigurationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReplicationConfigurationTemplatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationConfigurationTemplateIDs() const { return m_replicationConfigurationTemplateIDs; }
    inline bool ReplicationConfigurationTemplateIDsHasBeenSet() const { return m_replicationConfigurationTemplateIDsHasBeenSet; }
    template<typename ReplicationConfigurationTemplateIDsT = Aws::Vector<Aws::String>>
    void SetReplicationConfigurationTemplateIDs(ReplicationConfigurationTemplateIDsT&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs = std::forward<ReplicationConfigurationTemplateIDsT>(value); }
    template<typename ReplicationConfigurationTemplateIDsT = Aws::Vector<Aws::String>>
    DescribeReplicationConfigurationTemplatesRequest& WithReplicationConfigurationTemplateIDs(ReplicationConfigurationTemplateIDsT&& value) { SetReplicationConfigurationTemplateIDs(std::forward<ReplicationConfigurationTemplateIDsT>(value)); return *this;}
    template<typename ReplicationConfigurationTemplateIDsT = Aws::String>
    DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(ReplicationConfigurationTemplateIDsT&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.emplace_back(std::forward<ReplicationConfigurationTemplateIDsT>(value)); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationConfigurationTemplateIDs;
    bool m_replicationConfigurationTemplateIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
