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
    AWS_DATASYNC_API CreateLocationS3Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationS3"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
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
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationS3Request& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
    template<typename S3BucketArnT = Aws::String>
    void SetS3BucketArn(S3BucketArnT&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::forward<S3BucketArnT>(value); }
    template<typename S3BucketArnT = Aws::String>
    CreateLocationS3Request& WithS3BucketArn(S3BucketArnT&& value) { SetS3BucketArn(std::forward<S3BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage class that you want your objects to use when Amazon S3
     * is a transfer destination.</p> <p>For buckets in Amazon Web Services Regions,
     * the storage class defaults to <code>STANDARD</code>. For buckets on Outposts,
     * the storage class defaults to <code>OUTPOSTS</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline S3StorageClass GetS3StorageClass() const { return m_s3StorageClass; }
    inline bool S3StorageClassHasBeenSet() const { return m_s3StorageClassHasBeenSet; }
    inline void SetS3StorageClass(S3StorageClass value) { m_s3StorageClassHasBeenSet = true; m_s3StorageClass = value; }
    inline CreateLocationS3Request& WithS3StorageClass(S3StorageClass value) { SetS3StorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline const S3Config& GetS3Config() const { return m_s3Config; }
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }
    template<typename S3ConfigT = S3Config>
    void SetS3Config(S3ConfigT&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::forward<S3ConfigT>(value); }
    template<typename S3ConfigT = S3Config>
    CreateLocationS3Request& WithS3Config(S3ConfigT&& value) { SetS3Config(std::forward<S3ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Amazon S3 on Outposts only) Specifies the Amazon Resource Name (ARN) of the
     * DataSync agent on your Outpost.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    CreateLocationS3Request& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    CreateLocationS3Request& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationS3Request& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationS3Request& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    S3StorageClass m_s3StorageClass{S3StorageClass::NOT_SET};
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
