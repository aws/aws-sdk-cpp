﻿/*
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetDeployablePatchSnapshotForInstanceResult
  {
  public:
    GetDeployablePatchSnapshotForInstanceResult();
    GetDeployablePatchSnapshotForInstanceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeployablePatchSnapshotForInstanceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = value; }

    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The user-defined snapshot ID.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the patch
     * snapshot.</p>
     */
    inline const Aws::String& GetSnapshotDownloadUrl() const{ return m_snapshotDownloadUrl; }

    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the patch
     * snapshot.</p>
     */
    inline void SetSnapshotDownloadUrl(const Aws::String& value) { m_snapshotDownloadUrl = value; }

    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the patch
     * snapshot.</p>
     */
    inline void SetSnapshotDownloadUrl(Aws::String&& value) { m_snapshotDownloadUrl = value; }

    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the patch
     * snapshot.</p>
     */
    inline void SetSnapshotDownloadUrl(const char* value) { m_snapshotDownloadUrl.assign(value); }

    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the patch
     * snapshot.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotDownloadUrl(const Aws::String& value) { SetSnapshotDownloadUrl(value); return *this;}

    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the patch
     * snapshot.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotDownloadUrl(Aws::String&& value) { SetSnapshotDownloadUrl(value); return *this;}

    /**
     * <p>A pre-signed Amazon S3 URL that can be used to download the patch
     * snapshot.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceResult& WithSnapshotDownloadUrl(const char* value) { SetSnapshotDownloadUrl(value); return *this;}

  private:
    Aws::String m_instanceId;
    Aws::String m_snapshotId;
    Aws::String m_snapshotDownloadUrl;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
