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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CopyDBParameterGroupRequest : public RDSRequest
  {
  public:
    CopyDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBParameterGroupIdentifier() const{ return m_sourceDBParameterGroupIdentifier; }

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline bool SourceDBParameterGroupIdentifierHasBeenSet() const { return m_sourceDBParameterGroupIdentifierHasBeenSet; }

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline void SetSourceDBParameterGroupIdentifier(const Aws::String& value) { m_sourceDBParameterGroupIdentifierHasBeenSet = true; m_sourceDBParameterGroupIdentifier = value; }

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline void SetSourceDBParameterGroupIdentifier(Aws::String&& value) { m_sourceDBParameterGroupIdentifierHasBeenSet = true; m_sourceDBParameterGroupIdentifier = std::move(value); }

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline void SetSourceDBParameterGroupIdentifier(const char* value) { m_sourceDBParameterGroupIdentifierHasBeenSet = true; m_sourceDBParameterGroupIdentifier.assign(value); }

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline CopyDBParameterGroupRequest& WithSourceDBParameterGroupIdentifier(const Aws::String& value) { SetSourceDBParameterGroupIdentifier(value); return *this;}

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline CopyDBParameterGroupRequest& WithSourceDBParameterGroupIdentifier(Aws::String&& value) { SetSourceDBParameterGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p> The identifier or ARN for the source DB parameter group. For information
     * about creating an ARN, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must specify a valid DB parameter group.</p>
     * </li> <li> <p>Must specify a valid DB parameter group identifier, for example
     * <code>my-db-param-group</code>, or a valid ARN.</p> </li> </ul>
     */
    inline CopyDBParameterGroupRequest& WithSourceDBParameterGroupIdentifier(const char* value) { SetSourceDBParameterGroupIdentifier(value); return *this;}


    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline const Aws::String& GetTargetDBParameterGroupIdentifier() const{ return m_targetDBParameterGroupIdentifier; }

    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline bool TargetDBParameterGroupIdentifierHasBeenSet() const { return m_targetDBParameterGroupIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline void SetTargetDBParameterGroupIdentifier(const Aws::String& value) { m_targetDBParameterGroupIdentifierHasBeenSet = true; m_targetDBParameterGroupIdentifier = value; }

    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline void SetTargetDBParameterGroupIdentifier(Aws::String&& value) { m_targetDBParameterGroupIdentifierHasBeenSet = true; m_targetDBParameterGroupIdentifier = std::move(value); }

    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline void SetTargetDBParameterGroupIdentifier(const char* value) { m_targetDBParameterGroupIdentifierHasBeenSet = true; m_targetDBParameterGroupIdentifier.assign(value); }

    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline CopyDBParameterGroupRequest& WithTargetDBParameterGroupIdentifier(const Aws::String& value) { SetTargetDBParameterGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline CopyDBParameterGroupRequest& WithTargetDBParameterGroupIdentifier(Aws::String&& value) { SetTargetDBParameterGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the copied DB parameter group.</p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from
     * 1 to 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be
     * a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-parameter-group</code> </p>
     */
    inline CopyDBParameterGroupRequest& WithTargetDBParameterGroupIdentifier(const char* value) { SetTargetDBParameterGroupIdentifier(value); return *this;}


    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline const Aws::String& GetTargetDBParameterGroupDescription() const{ return m_targetDBParameterGroupDescription; }

    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline bool TargetDBParameterGroupDescriptionHasBeenSet() const { return m_targetDBParameterGroupDescriptionHasBeenSet; }

    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline void SetTargetDBParameterGroupDescription(const Aws::String& value) { m_targetDBParameterGroupDescriptionHasBeenSet = true; m_targetDBParameterGroupDescription = value; }

    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline void SetTargetDBParameterGroupDescription(Aws::String&& value) { m_targetDBParameterGroupDescriptionHasBeenSet = true; m_targetDBParameterGroupDescription = std::move(value); }

    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline void SetTargetDBParameterGroupDescription(const char* value) { m_targetDBParameterGroupDescriptionHasBeenSet = true; m_targetDBParameterGroupDescription.assign(value); }

    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline CopyDBParameterGroupRequest& WithTargetDBParameterGroupDescription(const Aws::String& value) { SetTargetDBParameterGroupDescription(value); return *this;}

    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline CopyDBParameterGroupRequest& WithTargetDBParameterGroupDescription(Aws::String&& value) { SetTargetDBParameterGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the copied DB parameter group.</p>
     */
    inline CopyDBParameterGroupRequest& WithTargetDBParameterGroupDescription(const char* value) { SetTargetDBParameterGroupDescription(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CopyDBParameterGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyDBParameterGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CopyDBParameterGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyDBParameterGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceDBParameterGroupIdentifier;
    bool m_sourceDBParameterGroupIdentifierHasBeenSet;

    Aws::String m_targetDBParameterGroupIdentifier;
    bool m_targetDBParameterGroupIdentifierHasBeenSet;

    Aws::String m_targetDBParameterGroupDescription;
    bool m_targetDBParameterGroupDescriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
