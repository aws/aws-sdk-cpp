/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains additional details about a service-specific
   * credential.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ServiceSpecificCredentialMetadata">AWS
   * API Reference</a></p>
   */
  class ServiceSpecificCredentialMetadata
  {
  public:
    AWS_IAM_API ServiceSpecificCredentialMetadata();
    AWS_IAM_API ServiceSpecificCredentialMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ServiceSpecificCredentialMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The status of the service-specific credential. <code>Active</code> means that
     * the key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means that
     * the key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means that
     * the key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means that
     * the key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means that
     * the key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service-specific credential. <code>Active</code> means that
     * the key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceUserName() const{ return m_serviceUserName; }

    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline bool ServiceUserNameHasBeenSet() const { return m_serviceUserNameHasBeenSet; }

    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline void SetServiceUserName(const Aws::String& value) { m_serviceUserNameHasBeenSet = true; m_serviceUserName = value; }

    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline void SetServiceUserName(Aws::String&& value) { m_serviceUserNameHasBeenSet = true; m_serviceUserName = std::move(value); }

    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline void SetServiceUserName(const char* value) { m_serviceUserNameHasBeenSet = true; m_serviceUserName.assign(value); }

    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceUserName(const Aws::String& value) { SetServiceUserName(value); return *this;}

    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceUserName(Aws::String&& value) { SetServiceUserName(std::move(value)); return *this;}

    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceUserName(const char* value) { SetServiceUserName(value); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceSpecificCredentialId() const{ return m_serviceSpecificCredentialId; }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline bool ServiceSpecificCredentialIdHasBeenSet() const { return m_serviceSpecificCredentialIdHasBeenSet; }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline void SetServiceSpecificCredentialId(const Aws::String& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = value; }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline void SetServiceSpecificCredentialId(Aws::String&& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = std::move(value); }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline void SetServiceSpecificCredentialId(const char* value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId.assign(value); }

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceSpecificCredentialId(const Aws::String& value) { SetServiceSpecificCredentialId(value); return *this;}

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceSpecificCredentialId(Aws::String&& value) { SetServiceSpecificCredentialId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceSpecificCredentialId(const char* value) { SetServiceSpecificCredentialId(value); return *this;}


    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline ServiceSpecificCredentialMetadata& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    StatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_serviceUserName;
    bool m_serviceUserNameHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_serviceSpecificCredentialId;
    bool m_serviceSpecificCredentialIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
