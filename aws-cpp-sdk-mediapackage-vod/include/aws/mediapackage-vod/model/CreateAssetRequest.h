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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A new MediaPackage VOD Asset configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreateAssetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API CreateAssetRequest : public MediaPackageVodRequest
  {
  public:
    CreateAssetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAsset"; }

    Aws::String SerializePayload() const override;


    /**
     * The unique identifier for the Asset.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique identifier for the Asset.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique identifier for the Asset.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique identifier for the Asset.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique identifier for the Asset.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique identifier for the Asset.
     */
    inline CreateAssetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique identifier for the Asset.
     */
    inline CreateAssetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique identifier for the Asset.
     */
    inline CreateAssetRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline bool PackagingGroupIdHasBeenSet() const { return m_packagingGroupIdHasBeenSet; }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = value; }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = std::move(value); }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId.assign(value); }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline CreateAssetRequest& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline CreateAssetRequest& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline CreateAssetRequest& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}


    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline CreateAssetRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline CreateAssetRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline CreateAssetRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * ARN of the source object in S3.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * ARN of the source object in S3.
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * ARN of the source object in S3.
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * ARN of the source object in S3.
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * ARN of the source object in S3.
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * ARN of the source object in S3.
     */
    inline CreateAssetRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * ARN of the source object in S3.
     */
    inline CreateAssetRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * ARN of the source object in S3.
     */
    inline CreateAssetRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline const Aws::String& GetSourceRoleArn() const{ return m_sourceRoleArn; }

    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline bool SourceRoleArnHasBeenSet() const { return m_sourceRoleArnHasBeenSet; }

    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline void SetSourceRoleArn(const Aws::String& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = value; }

    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline void SetSourceRoleArn(Aws::String&& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = std::move(value); }

    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline void SetSourceRoleArn(const char* value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn.assign(value); }

    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline CreateAssetRequest& WithSourceRoleArn(const Aws::String& value) { SetSourceRoleArn(value); return *this;}

    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline CreateAssetRequest& WithSourceRoleArn(Aws::String&& value) { SetSourceRoleArn(std::move(value)); return *this;}

    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline CreateAssetRequest& WithSourceRoleArn(const char* value) { SetSourceRoleArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_packagingGroupId;
    bool m_packagingGroupIdHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;

    Aws::String m_sourceRoleArn;
    bool m_sourceRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
