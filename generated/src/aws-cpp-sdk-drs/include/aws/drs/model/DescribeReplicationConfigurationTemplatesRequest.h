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
    AWS_DRS_API DescribeReplicationConfigurationTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplicationConfigurationTemplates"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>Maximum number of Replication Configuration Templates to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of Replication Configuration Templates to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of Replication Configuration Templates to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of Replication Configuration Templates to retrieve.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next Replication Configuration Template to retrieve.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationConfigurationTemplateIDs() const{ return m_replicationConfigurationTemplateIDs; }

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline bool ReplicationConfigurationTemplateIDsHasBeenSet() const { return m_replicationConfigurationTemplateIDsHasBeenSet; }

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline void SetReplicationConfigurationTemplateIDs(const Aws::Vector<Aws::String>& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs = value; }

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline void SetReplicationConfigurationTemplateIDs(Aws::Vector<Aws::String>&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs = std::move(value); }

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithReplicationConfigurationTemplateIDs(const Aws::Vector<Aws::String>& value) { SetReplicationConfigurationTemplateIDs(value); return *this;}

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& WithReplicationConfigurationTemplateIDs(Aws::Vector<Aws::String>&& value) { SetReplicationConfigurationTemplateIDs(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(const Aws::String& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.push_back(value); return *this; }

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(Aws::String&& value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Replication Configuration Templates to retrieve. An empty list
     * means all Replication Configuration Templates.</p>
     */
    inline DescribeReplicationConfigurationTemplatesRequest& AddReplicationConfigurationTemplateIDs(const char* value) { m_replicationConfigurationTemplateIDsHasBeenSet = true; m_replicationConfigurationTemplateIDs.push_back(value); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationConfigurationTemplateIDs;
    bool m_replicationConfigurationTemplateIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
