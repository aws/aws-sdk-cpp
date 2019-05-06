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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_DATASYNC_API CreateLocationS3Request : public DataSyncRequest
  {
  public:
    CreateLocationS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationS3"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline CreateLocationS3Request& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline CreateLocationS3Request& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>A subdirectory in the Amazon S3 bucket. This subdirectory in Amazon S3 is
     * used to read data from the S3 source location or write data to the S3
     * destination.</p>
     */
    inline CreateLocationS3Request& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline CreateLocationS3Request& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline CreateLocationS3Request& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline CreateLocationS3Request& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    
    inline CreateLocationS3Request& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    
    inline CreateLocationS3Request& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationS3Request& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationS3Request& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationS3Request& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationS3Request& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet;

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
