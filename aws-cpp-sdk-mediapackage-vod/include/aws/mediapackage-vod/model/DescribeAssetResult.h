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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/EgressEndpoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaPackageVod
{
namespace Model
{
  class AWS_MEDIAPACKAGEVOD_API DescribeAssetResult
  {
  public:
    DescribeAssetResult();
    DescribeAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the Asset.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the Asset.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the Asset.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the Asset.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the Asset.
     */
    inline DescribeAssetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the Asset.
     */
    inline DescribeAssetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the Asset.
     */
    inline DescribeAssetResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The list of egress endpoints available for the Asset.
     */
    inline const Aws::Vector<EgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }

    /**
     * The list of egress endpoints available for the Asset.
     */
    inline void SetEgressEndpoints(const Aws::Vector<EgressEndpoint>& value) { m_egressEndpoints = value; }

    /**
     * The list of egress endpoints available for the Asset.
     */
    inline void SetEgressEndpoints(Aws::Vector<EgressEndpoint>&& value) { m_egressEndpoints = std::move(value); }

    /**
     * The list of egress endpoints available for the Asset.
     */
    inline DescribeAssetResult& WithEgressEndpoints(const Aws::Vector<EgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}

    /**
     * The list of egress endpoints available for the Asset.
     */
    inline DescribeAssetResult& WithEgressEndpoints(Aws::Vector<EgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}

    /**
     * The list of egress endpoints available for the Asset.
     */
    inline DescribeAssetResult& AddEgressEndpoints(const EgressEndpoint& value) { m_egressEndpoints.push_back(value); return *this; }

    /**
     * The list of egress endpoints available for the Asset.
     */
    inline DescribeAssetResult& AddEgressEndpoints(EgressEndpoint&& value) { m_egressEndpoints.push_back(std::move(value)); return *this; }


    /**
     * The unique identifier for the Asset.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique identifier for the Asset.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The unique identifier for the Asset.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The unique identifier for the Asset.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The unique identifier for the Asset.
     */
    inline DescribeAssetResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique identifier for the Asset.
     */
    inline DescribeAssetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique identifier for the Asset.
     */
    inline DescribeAssetResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupId = value; }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupId = std::move(value); }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupId.assign(value); }

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline DescribeAssetResult& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline DescribeAssetResult& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline DescribeAssetResult& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}


    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline DescribeAssetResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline DescribeAssetResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline DescribeAssetResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * ARN of the source object in S3.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * ARN of the source object in S3.
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }

    /**
     * ARN of the source object in S3.
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }

    /**
     * ARN of the source object in S3.
     */
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }

    /**
     * ARN of the source object in S3.
     */
    inline DescribeAssetResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * ARN of the source object in S3.
     */
    inline DescribeAssetResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * ARN of the source object in S3.
     */
    inline DescribeAssetResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline const Aws::String& GetSourceRoleArn() const{ return m_sourceRoleArn; }

    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline void SetSourceRoleArn(const Aws::String& value) { m_sourceRoleArn = value; }

    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline void SetSourceRoleArn(Aws::String&& value) { m_sourceRoleArn = std::move(value); }

    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline void SetSourceRoleArn(const char* value) { m_sourceRoleArn.assign(value); }

    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline DescribeAssetResult& WithSourceRoleArn(const Aws::String& value) { SetSourceRoleArn(value); return *this;}

    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline DescribeAssetResult& WithSourceRoleArn(Aws::String&& value) { SetSourceRoleArn(std::move(value)); return *this;}

    /**
     * The IAM role_arn used to access the source S3 bucket.
     */
    inline DescribeAssetResult& WithSourceRoleArn(const char* value) { SetSourceRoleArn(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Vector<EgressEndpoint> m_egressEndpoints;

    Aws::String m_id;

    Aws::String m_packagingGroupId;

    Aws::String m_resourceId;

    Aws::String m_sourceArn;

    Aws::String m_sourceRoleArn;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
