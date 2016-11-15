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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p>The result of the <code>CreateSnapshotCopyGrant</code> action.</p>
   */
  class AWS_REDSHIFT_API CreateSnapshotCopyGrantRequest : public RedshiftRequest
  {
  public:
    CreateSnapshotCopyGrantRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the snapshot copy grant. This name must be unique in the region
     * for the AWS account.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
     * 63 alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters
     * must be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li>
     * <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li>
     * <li> <p>Must be unique for all clusters within an AWS account.</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }

    /**
     * <p>The name of the snapshot copy grant. This name must be unique in the region
     * for the AWS account.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
     * 63 alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters
     * must be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li>
     * <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li>
     * <li> <p>Must be unique for all clusters within an AWS account.</p> </li> </ul>
     */
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

    /**
     * <p>The name of the snapshot copy grant. This name must be unique in the region
     * for the AWS account.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
     * 63 alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters
     * must be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li>
     * <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li>
     * <li> <p>Must be unique for all clusters within an AWS account.</p> </li> </ul>
     */
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

    /**
     * <p>The name of the snapshot copy grant. This name must be unique in the region
     * for the AWS account.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
     * 63 alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters
     * must be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li>
     * <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li>
     * <li> <p>Must be unique for all clusters within an AWS account.</p> </li> </ul>
     */
    inline void SetSnapshotCopyGrantName(const char* value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName.assign(value); }

    /**
     * <p>The name of the snapshot copy grant. This name must be unique in the region
     * for the AWS account.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
     * 63 alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters
     * must be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li>
     * <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li>
     * <li> <p>Must be unique for all clusters within an AWS account.</p> </li> </ul>
     */
    inline CreateSnapshotCopyGrantRequest& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant. This name must be unique in the region
     * for the AWS account.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
     * 63 alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters
     * must be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li>
     * <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li>
     * <li> <p>Must be unique for all clusters within an AWS account.</p> </li> </ul>
     */
    inline CreateSnapshotCopyGrantRequest& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant. This name must be unique in the region
     * for the AWS account.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to
     * 63 alphanumeric characters or hyphens.</p> </li> <li> <p>Alphabetic characters
     * must be lowercase.</p> </li> <li> <p>First character must be a letter.</p> </li>
     * <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li>
     * <li> <p>Must be unique for all clusters within an AWS account.</p> </li> </ul>
     */
    inline CreateSnapshotCopyGrantRequest& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The unique identifier of the customer master key (CMK) to which to grant
     * Amazon Redshift permission. If no key is specified, the default key is used.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The unique identifier of the customer master key (CMK) to which to grant
     * Amazon Redshift permission. If no key is specified, the default key is used.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The unique identifier of the customer master key (CMK) to which to grant
     * Amazon Redshift permission. If no key is specified, the default key is used.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The unique identifier of the customer master key (CMK) to which to grant
     * Amazon Redshift permission. If no key is specified, the default key is used.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The unique identifier of the customer master key (CMK) to which to grant
     * Amazon Redshift permission. If no key is specified, the default key is used.</p>
     */
    inline CreateSnapshotCopyGrantRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The unique identifier of the customer master key (CMK) to which to grant
     * Amazon Redshift permission. If no key is specified, the default key is used.</p>
     */
    inline CreateSnapshotCopyGrantRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The unique identifier of the customer master key (CMK) to which to grant
     * Amazon Redshift permission. If no key is specified, the default key is used.</p>
     */
    inline CreateSnapshotCopyGrantRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateSnapshotCopyGrantRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateSnapshotCopyGrantRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateSnapshotCopyGrantRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateSnapshotCopyGrantRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
