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
   * <p/>
   */
  class AWS_RDS_API CopyOptionGroupRequest : public RDSRequest
  {
  public:
    CopyOptionGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier or ARN for the source option group. For information about
     * creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid option group.</p> </li> <li> <p>If the source
     * option group is in the same region as the copy, specify a valid option group
     * identifier, for example <code>my-option-group</code>, or a valid ARN.</p> </li>
     * <li> <p>If the source option group is in a different region than the copy,
     * specify a valid option group ARN, for example
     * <code>arn:aws:rds:us-west-2:123456789012:og:special-options</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetSourceOptionGroupIdentifier() const{ return m_sourceOptionGroupIdentifier; }

    /**
     * <p>The identifier or ARN for the source option group. For information about
     * creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid option group.</p> </li> <li> <p>If the source
     * option group is in the same region as the copy, specify a valid option group
     * identifier, for example <code>my-option-group</code>, or a valid ARN.</p> </li>
     * <li> <p>If the source option group is in a different region than the copy,
     * specify a valid option group ARN, for example
     * <code>arn:aws:rds:us-west-2:123456789012:og:special-options</code>.</p> </li>
     * </ul>
     */
    inline void SetSourceOptionGroupIdentifier(const Aws::String& value) { m_sourceOptionGroupIdentifierHasBeenSet = true; m_sourceOptionGroupIdentifier = value; }

    /**
     * <p>The identifier or ARN for the source option group. For information about
     * creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid option group.</p> </li> <li> <p>If the source
     * option group is in the same region as the copy, specify a valid option group
     * identifier, for example <code>my-option-group</code>, or a valid ARN.</p> </li>
     * <li> <p>If the source option group is in a different region than the copy,
     * specify a valid option group ARN, for example
     * <code>arn:aws:rds:us-west-2:123456789012:og:special-options</code>.</p> </li>
     * </ul>
     */
    inline void SetSourceOptionGroupIdentifier(Aws::String&& value) { m_sourceOptionGroupIdentifierHasBeenSet = true; m_sourceOptionGroupIdentifier = value; }

    /**
     * <p>The identifier or ARN for the source option group. For information about
     * creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid option group.</p> </li> <li> <p>If the source
     * option group is in the same region as the copy, specify a valid option group
     * identifier, for example <code>my-option-group</code>, or a valid ARN.</p> </li>
     * <li> <p>If the source option group is in a different region than the copy,
     * specify a valid option group ARN, for example
     * <code>arn:aws:rds:us-west-2:123456789012:og:special-options</code>.</p> </li>
     * </ul>
     */
    inline void SetSourceOptionGroupIdentifier(const char* value) { m_sourceOptionGroupIdentifierHasBeenSet = true; m_sourceOptionGroupIdentifier.assign(value); }

    /**
     * <p>The identifier or ARN for the source option group. For information about
     * creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid option group.</p> </li> <li> <p>If the source
     * option group is in the same region as the copy, specify a valid option group
     * identifier, for example <code>my-option-group</code>, or a valid ARN.</p> </li>
     * <li> <p>If the source option group is in a different region than the copy,
     * specify a valid option group ARN, for example
     * <code>arn:aws:rds:us-west-2:123456789012:og:special-options</code>.</p> </li>
     * </ul>
     */
    inline CopyOptionGroupRequest& WithSourceOptionGroupIdentifier(const Aws::String& value) { SetSourceOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier or ARN for the source option group. For information about
     * creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid option group.</p> </li> <li> <p>If the source
     * option group is in the same region as the copy, specify a valid option group
     * identifier, for example <code>my-option-group</code>, or a valid ARN.</p> </li>
     * <li> <p>If the source option group is in a different region than the copy,
     * specify a valid option group ARN, for example
     * <code>arn:aws:rds:us-west-2:123456789012:og:special-options</code>.</p> </li>
     * </ul>
     */
    inline CopyOptionGroupRequest& WithSourceOptionGroupIdentifier(Aws::String&& value) { SetSourceOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier or ARN for the source option group. For information about
     * creating an ARN, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>. </p> <p>Constraints:</p>
     * <ul> <li> <p>Must specify a valid option group.</p> </li> <li> <p>If the source
     * option group is in the same region as the copy, specify a valid option group
     * identifier, for example <code>my-option-group</code>, or a valid ARN.</p> </li>
     * <li> <p>If the source option group is in a different region than the copy,
     * specify a valid option group ARN, for example
     * <code>arn:aws:rds:us-west-2:123456789012:og:special-options</code>.</p> </li>
     * </ul>
     */
    inline CopyOptionGroupRequest& WithSourceOptionGroupIdentifier(const char* value) { SetSourceOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline const Aws::String& GetTargetOptionGroupIdentifier() const{ return m_targetOptionGroupIdentifier; }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline void SetTargetOptionGroupIdentifier(const Aws::String& value) { m_targetOptionGroupIdentifierHasBeenSet = true; m_targetOptionGroupIdentifier = value; }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline void SetTargetOptionGroupIdentifier(Aws::String&& value) { m_targetOptionGroupIdentifierHasBeenSet = true; m_targetOptionGroupIdentifier = value; }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline void SetTargetOptionGroupIdentifier(const char* value) { m_targetOptionGroupIdentifierHasBeenSet = true; m_targetOptionGroupIdentifier.assign(value); }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupIdentifier(const Aws::String& value) { SetTargetOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupIdentifier(Aws::String&& value) { SetTargetOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * alphanumeric characters or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupIdentifier(const char* value) { SetTargetOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The description for the copied option group.</p>
     */
    inline const Aws::String& GetTargetOptionGroupDescription() const{ return m_targetOptionGroupDescription; }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline void SetTargetOptionGroupDescription(const Aws::String& value) { m_targetOptionGroupDescriptionHasBeenSet = true; m_targetOptionGroupDescription = value; }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline void SetTargetOptionGroupDescription(Aws::String&& value) { m_targetOptionGroupDescriptionHasBeenSet = true; m_targetOptionGroupDescription = value; }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline void SetTargetOptionGroupDescription(const char* value) { m_targetOptionGroupDescriptionHasBeenSet = true; m_targetOptionGroupDescription.assign(value); }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupDescription(const Aws::String& value) { SetTargetOptionGroupDescription(value); return *this;}

    /**
     * <p>The description for the copied option group.</p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupDescription(Aws::String&& value) { SetTargetOptionGroupDescription(value); return *this;}

    /**
     * <p>The description for the copied option group.</p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupDescription(const char* value) { SetTargetOptionGroupDescription(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CopyOptionGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyOptionGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline CopyOptionGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyOptionGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_sourceOptionGroupIdentifier;
    bool m_sourceOptionGroupIdentifierHasBeenSet;
    Aws::String m_targetOptionGroupIdentifier;
    bool m_targetOptionGroupIdentifierHasBeenSet;
    Aws::String m_targetOptionGroupDescription;
    bool m_targetOptionGroupDescriptionHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
