/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/SmbMountOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
   * uses to access your Amazon FSx for NetApp ONTAP file system. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-access">Accessing
   * FSx for ONTAP file systems</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FsxProtocolSmb">AWS
   * API Reference</a></p>
   */
  class FsxProtocolSmb
  {
  public:
    AWS_DATASYNC_API FsxProtocolSmb();
    AWS_DATASYNC_API FsxProtocolSmb(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API FsxProtocolSmb& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline FsxProtocolSmb& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline FsxProtocolSmb& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specifies the fully qualified domain name (FQDN) of the Microsoft Active
     * Directory that your storage virtual machine (SVM) belongs to.</p> <p>If you have
     * multiple domains in your environment, configuring this setting makes sure that
     * DataSync connects to the right SVM.</p>
     */
    inline FsxProtocolSmb& WithDomain(const char* value) { SetDomain(value); return *this;}


    
    inline const SmbMountOptions& GetMountOptions() const{ return m_mountOptions; }

    
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    
    inline void SetMountOptions(const SmbMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    
    inline void SetMountOptions(SmbMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    
    inline FsxProtocolSmb& WithMountOptions(const SmbMountOptions& value) { SetMountOptions(value); return *this;}

    
    inline FsxProtocolSmb& WithMountOptions(SmbMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline FsxProtocolSmb& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline FsxProtocolSmb& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Specifies the password of a user who has permission to access your SVM.</p>
     */
    inline FsxProtocolSmb& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline FsxProtocolSmb& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline FsxProtocolSmb& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>Specifies a user that can mount and access the files, folders, and metadata
     * in your SVM.</p> <p>For information about choosing a user with the right level
     * of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">Using
     * the SMB protocol</a>.</p>
     */
    inline FsxProtocolSmb& WithUser(const char* value) { SetUser(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    SmbMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
