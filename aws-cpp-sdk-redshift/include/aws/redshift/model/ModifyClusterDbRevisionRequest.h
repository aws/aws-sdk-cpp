/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API ModifyClusterDbRevisionRequest : public RedshiftRequest
  {
  public:
    ModifyClusterDbRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterDbRevision"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline ModifyClusterDbRevisionRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline ModifyClusterDbRevisionRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline ModifyClusterDbRevisionRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline const Aws::String& GetRevisionTarget() const{ return m_revisionTarget; }

    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline bool RevisionTargetHasBeenSet() const { return m_revisionTargetHasBeenSet; }

    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline void SetRevisionTarget(const Aws::String& value) { m_revisionTargetHasBeenSet = true; m_revisionTarget = value; }

    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline void SetRevisionTarget(Aws::String&& value) { m_revisionTargetHasBeenSet = true; m_revisionTarget = std::move(value); }

    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline void SetRevisionTarget(const char* value) { m_revisionTargetHasBeenSet = true; m_revisionTarget.assign(value); }

    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline ModifyClusterDbRevisionRequest& WithRevisionTarget(const Aws::String& value) { SetRevisionTarget(value); return *this;}

    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline ModifyClusterDbRevisionRequest& WithRevisionTarget(Aws::String&& value) { SetRevisionTarget(std::move(value)); return *this;}

    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline ModifyClusterDbRevisionRequest& WithRevisionTarget(const char* value) { SetRevisionTarget(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_revisionTarget;
    bool m_revisionTargetHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
