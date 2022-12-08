/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/SmbMountOptions.h>
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
   * <p>DescribeLocationSmbResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationSmbResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLocationSmbResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationSmbResult();
    AWS_DATASYNC_API DescribeLocationSmbResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationSmbResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location that was described.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location that was described.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location that was described.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location that was described.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location that was described.</p>
     */
    inline DescribeLocationSmbResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location that was described.</p>
     */
    inline DescribeLocationSmbResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location that was described.</p>
     */
    inline DescribeLocationSmbResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the source SMB location that was described.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the source SMB location that was described.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the source SMB location that was described.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the source SMB location that was described.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the source SMB location that was described.</p>
     */
    inline DescribeLocationSmbResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the source SMB location that was described.</p>
     */
    inline DescribeLocationSmbResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the source SMB location that was described.</p>
     */
    inline DescribeLocationSmbResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline DescribeLocationSmbResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline DescribeLocationSmbResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline DescribeLocationSmbResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline DescribeLocationSmbResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source SMB file system location that is
     * created.</p>
     */
    inline DescribeLocationSmbResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }


    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline void SetUser(const Aws::String& value) { m_user = value; }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline void SetUser(Aws::String&& value) { m_user = std::move(value); }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline void SetUser(const char* value) { m_user.assign(value); }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline DescribeLocationSmbResult& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline DescribeLocationSmbResult& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline DescribeLocationSmbResult& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domain = value; }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline void SetDomain(const char* value) { m_domain.assign(value); }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline DescribeLocationSmbResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline DescribeLocationSmbResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline DescribeLocationSmbResult& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The mount options that are available for DataSync to use to access an SMB
     * location.</p>
     */
    inline const SmbMountOptions& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>The mount options that are available for DataSync to use to access an SMB
     * location.</p>
     */
    inline void SetMountOptions(const SmbMountOptions& value) { m_mountOptions = value; }

    /**
     * <p>The mount options that are available for DataSync to use to access an SMB
     * location.</p>
     */
    inline void SetMountOptions(SmbMountOptions&& value) { m_mountOptions = std::move(value); }

    /**
     * <p>The mount options that are available for DataSync to use to access an SMB
     * location.</p>
     */
    inline DescribeLocationSmbResult& WithMountOptions(const SmbMountOptions& value) { SetMountOptions(value); return *this;}

    /**
     * <p>The mount options that are available for DataSync to use to access an SMB
     * location.</p>
     */
    inline DescribeLocationSmbResult& WithMountOptions(SmbMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}


    /**
     * <p>The time that the SMB location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the SMB location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the SMB location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the SMB location was created.</p>
     */
    inline DescribeLocationSmbResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the SMB location was created.</p>
     */
    inline DescribeLocationSmbResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::String m_user;

    Aws::String m_domain;

    SmbMountOptions m_mountOptions;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
