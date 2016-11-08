/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API CopyDBClusterParameterGroupRequest : public RDSRequest
  {
  public:
    CopyDBClusterParameterGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li>
     * <p>If the source DB cluster parameter group is in the same region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different region than the copy, specify a
     * valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSourceDBClusterParameterGroupIdentifier() const{ return m_sourceDBClusterParameterGroupIdentifier; }

    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li>
     * <p>If the source DB cluster parameter group is in the same region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different region than the copy, specify a
     * valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline void SetSourceDBClusterParameterGroupIdentifier(const Aws::String& value) { m_sourceDBClusterParameterGroupIdentifierHasBeenSet = true; m_sourceDBClusterParameterGroupIdentifier = value; }

    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li>
     * <p>If the source DB cluster parameter group is in the same region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different region than the copy, specify a
     * valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline void SetSourceDBClusterParameterGroupIdentifier(Aws::String&& value) { m_sourceDBClusterParameterGroupIdentifierHasBeenSet = true; m_sourceDBClusterParameterGroupIdentifier = value; }

    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li>
     * <p>If the source DB cluster parameter group is in the same region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different region than the copy, specify a
     * valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline void SetSourceDBClusterParameterGroupIdentifier(const char* value) { m_sourceDBClusterParameterGroupIdentifierHasBeenSet = true; m_sourceDBClusterParameterGroupIdentifier.assign(value); }

    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li>
     * <p>If the source DB cluster parameter group is in the same region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different region than the copy, specify a
     * valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline CopyDBClusterParameterGroupRequest& WithSourceDBClusterParameterGroupIdentifier(const Aws::String& value) { SetSourceDBClusterParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li>
     * <p>If the source DB cluster parameter group is in the same region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different region than the copy, specify a
     * valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline CopyDBClusterParameterGroupRequest& WithSourceDBClusterParameterGroupIdentifier(Aws::String&& value) { SetSourceDBClusterParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier or Amazon Resource Name (ARN) for the source DB cluster
     * parameter group. For information about creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid DB cluster parameter group.</p> </li> <li>
     * <p>If the source DB cluster parameter group is in the same region as the copy,
     * specify a valid DB parameter group identifier, for example
     * <code>my-db-cluster-param-group</code>, or a valid ARN.</p> </li> <li> <p>If the
     * source DB parameter group is in a different region than the copy, specify a
     * valid DB cluster parameter group ARN, for example
     * <code>arn:aws:rds:us-east-1:123456789012:cluster-pg:custom-cluster-group1</code>.</p>
     * </li> </ul>
     */
    inline CopyDBClusterParameterGroupRequest& WithSourceDBClusterParameterGroupIdentifier(const char* value) { SetSourceDBClusterParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterParameterGroupIdentifier() const{ return m_targetDBClusterParameterGroupIdentifier; }

    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline void SetTargetDBClusterParameterGroupIdentifier(const Aws::String& value) { m_targetDBClusterParameterGroupIdentifierHasBeenSet = true; m_targetDBClusterParameterGroupIdentifier = value; }

    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline void SetTargetDBClusterParameterGroupIdentifier(Aws::String&& value) { m_targetDBClusterParameterGroupIdentifierHasBeenSet = true; m_targetDBClusterParameterGroupIdentifier = value; }

    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline void SetTargetDBClusterParameterGroupIdentifier(const char* value) { m_targetDBClusterParameterGroupIdentifierHasBeenSet = true; m_targetDBClusterParameterGroupIdentifier.assign(value); }

    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupIdentifier(const Aws::String& value) { SetTargetDBClusterParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupIdentifier(Aws::String&& value) { SetTargetDBClusterParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied DB cluster parameter group.</p>
     * <p>Constraints:</p> <ul> <li> <p>Cannot be null, empty, or blank</p> </li> <li>
     * <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster-param-group1</code> </p>
     */
    inline CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupIdentifier(const char* value) { SetTargetDBClusterParameterGroupIdentifier(value); return *this;}

    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline const Aws::String& GetTargetDBClusterParameterGroupDescription() const{ return m_targetDBClusterParameterGroupDescription; }

    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline void SetTargetDBClusterParameterGroupDescription(const Aws::String& value) { m_targetDBClusterParameterGroupDescriptionHasBeenSet = true; m_targetDBClusterParameterGroupDescription = value; }

    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline void SetTargetDBClusterParameterGroupDescription(Aws::String&& value) { m_targetDBClusterParameterGroupDescriptionHasBeenSet = true; m_targetDBClusterParameterGroupDescription = value; }

    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline void SetTargetDBClusterParameterGroupDescription(const char* value) { m_targetDBClusterParameterGroupDescriptionHasBeenSet = true; m_targetDBClusterParameterGroupDescription.assign(value); }

    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupDescription(const Aws::String& value) { SetTargetDBClusterParameterGroupDescription(value); return *this;}

    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupDescription(Aws::String&& value) { SetTargetDBClusterParameterGroupDescription(value); return *this;}

    /**
     * <p>A description for the copied DB cluster parameter group.</p>
     */
    inline CopyDBClusterParameterGroupRequest& WithTargetDBClusterParameterGroupDescription(const char* value) { SetTargetDBClusterParameterGroupDescription(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CopyDBClusterParameterGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyDBClusterParameterGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline CopyDBClusterParameterGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyDBClusterParameterGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_sourceDBClusterParameterGroupIdentifier;
    bool m_sourceDBClusterParameterGroupIdentifierHasBeenSet;
    Aws::String m_targetDBClusterParameterGroupIdentifier;
    bool m_targetDBClusterParameterGroupIdentifierHasBeenSet;
    Aws::String m_targetDBClusterParameterGroupDescription;
    bool m_targetDBClusterParameterGroupDescriptionHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
