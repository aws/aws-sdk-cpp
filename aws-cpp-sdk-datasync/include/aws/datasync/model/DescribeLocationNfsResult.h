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
  class AWS_DATASYNC_API DescribeLocationNfsResult
  {
  public:
    DescribeLocationNfsResult();
    DescribeLocationNfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLocationNfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon resource Name (ARN) of the NFS location that was described.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon resource Name (ARN) of the NFS location that was described.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The Amazon resource Name (ARN) of the NFS location that was described.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The Amazon resource Name (ARN) of the NFS location that was described.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The Amazon resource Name (ARN) of the NFS location that was described.</p>
     */
    inline DescribeLocationNfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon resource Name (ARN) of the NFS location that was described.</p>
     */
    inline DescribeLocationNfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource Name (ARN) of the NFS location that was described.</p>
     */
    inline DescribeLocationNfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the source NFS location that was described.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the source NFS location that was described.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the source NFS location that was described.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the source NFS location that was described.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the source NFS location that was described.</p>
     */
    inline DescribeLocationNfsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the source NFS location that was described.</p>
     */
    inline DescribeLocationNfsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the source NFS location that was described.</p>
     */
    inline DescribeLocationNfsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    
    inline const OnPremConfig& GetOnPremConfig() const{ return m_onPremConfig; }

    
    inline void SetOnPremConfig(const OnPremConfig& value) { m_onPremConfig = value; }

    
    inline void SetOnPremConfig(OnPremConfig&& value) { m_onPremConfig = std::move(value); }

    
    inline DescribeLocationNfsResult& WithOnPremConfig(const OnPremConfig& value) { SetOnPremConfig(value); return *this;}

    
    inline DescribeLocationNfsResult& WithOnPremConfig(OnPremConfig&& value) { SetOnPremConfig(std::move(value)); return *this;}


    /**
     * <p>The NFS mount options that DataSync used to mount your NFS share.</p>
     */
    inline const NfsMountOptions& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>The NFS mount options that DataSync used to mount your NFS share.</p>
     */
    inline void SetMountOptions(const NfsMountOptions& value) { m_mountOptions = value; }

    /**
     * <p>The NFS mount options that DataSync used to mount your NFS share.</p>
     */
    inline void SetMountOptions(NfsMountOptions&& value) { m_mountOptions = std::move(value); }

    /**
     * <p>The NFS mount options that DataSync used to mount your NFS share.</p>
     */
    inline DescribeLocationNfsResult& WithMountOptions(const NfsMountOptions& value) { SetMountOptions(value); return *this;}

    /**
     * <p>The NFS mount options that DataSync used to mount your NFS share.</p>
     */
    inline DescribeLocationNfsResult& WithMountOptions(NfsMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}


    /**
     * <p>The time that the NFS location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the NFS location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the NFS location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the NFS location was created.</p>
     */
    inline DescribeLocationNfsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the NFS location was created.</p>
     */
    inline DescribeLocationNfsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    OnPremConfig m_onPremConfig;

    NfsMountOptions m_mountOptions;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
