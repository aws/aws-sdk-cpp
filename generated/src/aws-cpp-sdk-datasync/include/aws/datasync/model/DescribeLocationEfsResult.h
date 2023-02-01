/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Ec2Config.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/EfsInTransitEncryption.h>
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
   * <p>DescribeLocationEfsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationEfsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLocationEfsResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationEfsResult();
    AWS_DATASYNC_API DescribeLocationEfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationEfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline DescribeLocationEfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline DescribeLocationEfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon EFS file system location.</p>
     */
    inline DescribeLocationEfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline DescribeLocationEfsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline DescribeLocationEfsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon EFS file system location.</p>
     */
    inline DescribeLocationEfsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    
    inline const Ec2Config& GetEc2Config() const{ return m_ec2Config; }

    
    inline void SetEc2Config(const Ec2Config& value) { m_ec2Config = value; }

    
    inline void SetEc2Config(Ec2Config&& value) { m_ec2Config = std::move(value); }

    
    inline DescribeLocationEfsResult& WithEc2Config(const Ec2Config& value) { SetEc2Config(value); return *this;}

    
    inline DescribeLocationEfsResult& WithEc2Config(Ec2Config&& value) { SetEc2Config(std::move(value)); return *this;}


    /**
     * <p>The time that the location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the location was created.</p>
     */
    inline DescribeLocationEfsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the location was created.</p>
     */
    inline DescribeLocationEfsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArn = value; }

    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArn = std::move(value); }

    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArn.assign(value); }

    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p>
     */
    inline DescribeLocationEfsResult& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p>
     */
    inline DescribeLocationEfsResult& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the access point that DataSync uses to access the Amazon EFS file
     * system.</p>
     */
    inline DescribeLocationEfsResult& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p>The Identity and Access Management (IAM) role that DataSync assumes when
     * mounting the Amazon EFS file system.</p>
     */
    inline const Aws::String& GetFileSystemAccessRoleArn() const{ return m_fileSystemAccessRoleArn; }

    /**
     * <p>The Identity and Access Management (IAM) role that DataSync assumes when
     * mounting the Amazon EFS file system.</p>
     */
    inline void SetFileSystemAccessRoleArn(const Aws::String& value) { m_fileSystemAccessRoleArn = value; }

    /**
     * <p>The Identity and Access Management (IAM) role that DataSync assumes when
     * mounting the Amazon EFS file system.</p>
     */
    inline void SetFileSystemAccessRoleArn(Aws::String&& value) { m_fileSystemAccessRoleArn = std::move(value); }

    /**
     * <p>The Identity and Access Management (IAM) role that DataSync assumes when
     * mounting the Amazon EFS file system.</p>
     */
    inline void SetFileSystemAccessRoleArn(const char* value) { m_fileSystemAccessRoleArn.assign(value); }

    /**
     * <p>The Identity and Access Management (IAM) role that DataSync assumes when
     * mounting the Amazon EFS file system.</p>
     */
    inline DescribeLocationEfsResult& WithFileSystemAccessRoleArn(const Aws::String& value) { SetFileSystemAccessRoleArn(value); return *this;}

    /**
     * <p>The Identity and Access Management (IAM) role that DataSync assumes when
     * mounting the Amazon EFS file system.</p>
     */
    inline DescribeLocationEfsResult& WithFileSystemAccessRoleArn(Aws::String&& value) { SetFileSystemAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Identity and Access Management (IAM) role that DataSync assumes when
     * mounting the Amazon EFS file system.</p>
     */
    inline DescribeLocationEfsResult& WithFileSystemAccessRoleArn(const char* value) { SetFileSystemAccessRoleArn(value); return *this;}


    /**
     * <p>Describes whether DataSync uses Transport Layer Security (TLS) encryption
     * when copying data to or from the Amazon EFS file system.</p>
     */
    inline const EfsInTransitEncryption& GetInTransitEncryption() const{ return m_inTransitEncryption; }

    /**
     * <p>Describes whether DataSync uses Transport Layer Security (TLS) encryption
     * when copying data to or from the Amazon EFS file system.</p>
     */
    inline void SetInTransitEncryption(const EfsInTransitEncryption& value) { m_inTransitEncryption = value; }

    /**
     * <p>Describes whether DataSync uses Transport Layer Security (TLS) encryption
     * when copying data to or from the Amazon EFS file system.</p>
     */
    inline void SetInTransitEncryption(EfsInTransitEncryption&& value) { m_inTransitEncryption = std::move(value); }

    /**
     * <p>Describes whether DataSync uses Transport Layer Security (TLS) encryption
     * when copying data to or from the Amazon EFS file system.</p>
     */
    inline DescribeLocationEfsResult& WithInTransitEncryption(const EfsInTransitEncryption& value) { SetInTransitEncryption(value); return *this;}

    /**
     * <p>Describes whether DataSync uses Transport Layer Security (TLS) encryption
     * when copying data to or from the Amazon EFS file system.</p>
     */
    inline DescribeLocationEfsResult& WithInTransitEncryption(EfsInTransitEncryption&& value) { SetInTransitEncryption(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Ec2Config m_ec2Config;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_accessPointArn;

    Aws::String m_fileSystemAccessRoleArn;

    EfsInTransitEncryption m_inTransitEncryption;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
