/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/S3StorageClass.h>
#include <aws/datasync/model/S3Config.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateLocationS3Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationS3Request">AWS
   * API Reference</a></p>
   */
  class CreateLocationS3Request : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationS3"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline CreateLocationS3Request& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline CreateLocationS3Request& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies a prefix in the S3 bucket that DataSync reads from or writes to
     * (depending on whether the bucket is a source or destination location).</p>
     *  <p>DataSync can't transfer objects with a prefix that begins with a slash
     * (<code>/</code>) or includes <code>//</code>, <code>/./</code>, or
     * <code>/../</code> patterns. For example:</p> <ul> <li> <p> <code>/photos</code>
     * </p> </li> <li> <p> <code>photos//2006/January</code> </p> </li> <li> <p>
     * <code>photos/./2006/February</code> </p> </li> <li> <p>
     * <code>photos/../2006/March</code> </p> </li> </ul> 
     */
    inline CreateLocationS3Request& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline CreateLocationS3Request& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline CreateLocationS3Request& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the S3 bucket that you want to use as a location. (When
     * creating your DataSync task later, you specify whether this location is a
     * transfer source or destination.) </p> <p>If your S3 bucket is located on an
     * Outposts resource, you must specify an Amazon S3 access point. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
     * data access with Amazon S3 access points</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline CreateLocationS3Request& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline const S3StorageClass& GetS3StorageClass() const{ return m_s3StorageClass; }

    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline bool S3StorageClassHasBeenSet() const { return m_s3StorageClassHasBeenSet; }

    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline void SetS3StorageClass(const S3StorageClass& value) { m_s3StorageClassHasBeenSet = true; m_s3StorageClass = value; }

    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline void SetS3StorageClass(S3StorageClass&& value) { m_s3StorageClassHasBeenSet = true; m_s3StorageClass = std::move(value); }

    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline CreateLocationS3Request& WithS3StorageClass(const S3StorageClass& value) { SetS3StorageClass(value); return *this;}

    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline CreateLocationS3Request& WithS3StorageClass(S3StorageClass&& value) { SetS3StorageClass(std::move(value)); return *this;}


    
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    
    inline CreateLocationS3Request& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    
    inline CreateLocationS3Request& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline CreateLocationS3Request& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline CreateLocationS3Request& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline CreateLocationS3Request& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline CreateLocationS3Request& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline CreateLocationS3Request& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationS3Request& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationS3Request& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationS3Request& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationS3Request& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    S3StorageClass m_s3StorageClass;
    bool m_s3StorageClassHasBeenSet = false;

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
