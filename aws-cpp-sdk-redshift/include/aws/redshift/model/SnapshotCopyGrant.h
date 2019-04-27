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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>The snapshot copy grant that grants Amazon Redshift permission to encrypt
   * copied snapshots with the specified customer master key (CMK) from AWS KMS in
   * the destination region.</p> <p> For more information about managing snapshot
   * copy grants, go to <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-db-encryption.html">Amazon
   * Redshift Database Encryption</a> in the <i>Amazon Redshift Cluster Management
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SnapshotCopyGrant">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API SnapshotCopyGrant
  {
  public:
    SnapshotCopyGrant();
    SnapshotCopyGrant(const Aws::Utils::Xml::XmlNode& xmlNode);
    SnapshotCopyGrant& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::move(value); }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline void SetSnapshotCopyGrantName(const char* value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName.assign(value); }

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline SnapshotCopyGrant& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline SnapshotCopyGrant& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline SnapshotCopyGrant& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}


    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline SnapshotCopyGrant& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline SnapshotCopyGrant& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the customer master key (CMK) in AWS KMS to which
     * Amazon Redshift is granted permission.</p>
     */
    inline SnapshotCopyGrant& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline SnapshotCopyGrant& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline SnapshotCopyGrant& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline SnapshotCopyGrant& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline SnapshotCopyGrant& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
