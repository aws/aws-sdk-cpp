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
    AWS_IAM_API ServiceSpecificCredentialMetadata() = default;
    AWS_IAM_API ServiceSpecificCredentialMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ServiceSpecificCredentialMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the IAM user associated with the service-specific credential.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    ServiceSpecificCredentialMetadata& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service-specific credential. <code>Active</code> means that
     * the key is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline StatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceSpecificCredentialMetadata& WithStatus(StatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated user name for the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceUserName() const { return m_serviceUserName; }
    inline bool ServiceUserNameHasBeenSet() const { return m_serviceUserNameHasBeenSet; }
    template<typename ServiceUserNameT = Aws::String>
    void SetServiceUserName(ServiceUserNameT&& value) { m_serviceUserNameHasBeenSet = true; m_serviceUserName = std::forward<ServiceUserNameT>(value); }
    template<typename ServiceUserNameT = Aws::String>
    ServiceSpecificCredentialMetadata& WithServiceUserName(ServiceUserNameT&& value) { SetServiceUserName(std::forward<ServiceUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Bedrock API keys, this is the public portion of the credential that
     * includes the IAM user name and a suffix containing version and creation
     * information.</p>
     */
    inline const Aws::String& GetServiceCredentialAlias() const { return m_serviceCredentialAlias; }
    inline bool ServiceCredentialAliasHasBeenSet() const { return m_serviceCredentialAliasHasBeenSet; }
    template<typename ServiceCredentialAliasT = Aws::String>
    void SetServiceCredentialAlias(ServiceCredentialAliasT&& value) { m_serviceCredentialAliasHasBeenSet = true; m_serviceCredentialAlias = std::forward<ServiceCredentialAliasT>(value); }
    template<typename ServiceCredentialAliasT = Aws::String>
    ServiceSpecificCredentialMetadata& WithServiceCredentialAlias(ServiceCredentialAliasT&& value) { SetServiceCredentialAlias(std::forward<ServiceCredentialAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the service-specific credential were created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    ServiceSpecificCredentialMetadata& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the service specific credential expires. This field is
     * only present for Bedrock API keys that were created with an expiration
     * period.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    ServiceSpecificCredentialMetadata& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceSpecificCredentialId() const { return m_serviceSpecificCredentialId; }
    inline bool ServiceSpecificCredentialIdHasBeenSet() const { return m_serviceSpecificCredentialIdHasBeenSet; }
    template<typename ServiceSpecificCredentialIdT = Aws::String>
    void SetServiceSpecificCredentialId(ServiceSpecificCredentialIdT&& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = std::forward<ServiceSpecificCredentialIdT>(value); }
    template<typename ServiceSpecificCredentialIdT = Aws::String>
    ServiceSpecificCredentialMetadata& WithServiceSpecificCredentialId(ServiceSpecificCredentialIdT&& value) { SetServiceSpecificCredentialId(std::forward<ServiceSpecificCredentialIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service associated with the service-specific credential.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ServiceSpecificCredentialMetadata& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    StatusType m_status{StatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_serviceUserName;
    bool m_serviceUserNameHasBeenSet = false;

    Aws::String m_serviceCredentialAlias;
    bool m_serviceCredentialAliasHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_serviceSpecificCredentialId;
    bool m_serviceSpecificCredentialIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
