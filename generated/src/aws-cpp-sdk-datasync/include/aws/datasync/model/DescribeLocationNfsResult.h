/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/OnPremConfig.h>
#include <aws/datasync/model/NfsMountOptions.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeLocationNfsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationNfsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLocationNfsResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationNfsResult();
    AWS_DATASYNC_API DescribeLocationNfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationNfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the NFS location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the NFS location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the NFS location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the NFS location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the NFS location.</p>
     */
    inline DescribeLocationNfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the NFS location.</p>
     */
    inline DescribeLocationNfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the NFS location.</p>
     */
    inline DescribeLocationNfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URI of the NFS location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URI of the NFS location.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URI of the NFS location.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URI of the NFS location.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URI of the NFS location.</p>
     */
    inline DescribeLocationNfsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URI of the NFS location.</p>
     */
    inline DescribeLocationNfsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the NFS location.</p>
     */
    inline DescribeLocationNfsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    
    inline const OnPremConfig& GetOnPremConfig() const{ return m_onPremConfig; }

    
    inline void SetOnPremConfig(const OnPremConfig& value) { m_onPremConfig = value; }

    
    inline void SetOnPremConfig(OnPremConfig&& value) { m_onPremConfig = std::move(value); }

    
    inline DescribeLocationNfsResult& WithOnPremConfig(const OnPremConfig& value) { SetOnPremConfig(value); return *this;}

    
    inline DescribeLocationNfsResult& WithOnPremConfig(OnPremConfig&& value) { SetOnPremConfig(std::move(value)); return *this;}


    /**
     * <p>The mount options that DataSync uses to mount your NFS file server.</p>
     */
    inline const NfsMountOptions& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>The mount options that DataSync uses to mount your NFS file server.</p>
     */
    inline void SetMountOptions(const NfsMountOptions& value) { m_mountOptions = value; }

    /**
     * <p>The mount options that DataSync uses to mount your NFS file server.</p>
     */
    inline void SetMountOptions(NfsMountOptions&& value) { m_mountOptions = std::move(value); }

    /**
     * <p>The mount options that DataSync uses to mount your NFS file server.</p>
     */
    inline DescribeLocationNfsResult& WithMountOptions(const NfsMountOptions& value) { SetMountOptions(value); return *this;}

    /**
     * <p>The mount options that DataSync uses to mount your NFS file server.</p>
     */
    inline DescribeLocationNfsResult& WithMountOptions(NfsMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}


    /**
     * <p>The time when the NFS location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the NFS location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the NFS location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the NFS location was created.</p>
     */
    inline DescribeLocationNfsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the NFS location was created.</p>
     */
    inline DescribeLocationNfsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLocationNfsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLocationNfsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLocationNfsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    OnPremConfig m_onPremConfig;

    NfsMountOptions m_mountOptions;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
