/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/DirectoryServiceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/directory-service-data/model/AttributeValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DirectoryServiceData
{
namespace Model
{

  /**
   */
  class CreateUserRequest : public DirectoryServiceDataRequest
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API CreateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_DIRECTORYSERVICEDATA_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> A unique and case-sensitive identifier that you provide to make sure the
     * idempotency of the request, so multiple identical calls have the same effect as
     * one single call. </p> <p> A client token is valid for 8 hours after the first
     * request that uses it completes. After 8 hours, any request with the same client
     * token is treated as a new request. If the request succeeds, any future uses of
     * that token will be idempotent for another 8 hours. </p> <p> If you submit a
     * request with the same client token but change one of the other parameters within
     * the 8-hour idempotency window, Directory Service Data returns an
     * <code>ConflictException</code>. </p>  <p> This parameter is optional when
     * using the CLI or SDK. </p> 
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateUserRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier (ID) of the directory that’s associated with the user. </p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    CreateUserRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The email address of the user. </p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    CreateUserRequest& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The first name of the user. </p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    CreateUserRequest& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An expression that defines one or more attribute names with the data type
     * and value of each attribute. A key is an attribute name, and the value is a list
     * of maps. For a list of supported attributes, see <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data_attributes.html">Directory
     * Service Data Attributes</a>. </p>  <p> Attribute names are case
     * insensitive. </p> 
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const { return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    void SetOtherAttributes(OtherAttributesT&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::forward<OtherAttributesT>(value); }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    CreateUserRequest& WithOtherAttributes(OtherAttributesT&& value) { SetOtherAttributes(std::forward<OtherAttributesT>(value)); return *this;}
    template<typename OtherAttributesKeyT = Aws::String, typename OtherAttributesValueT = AttributeValue>
    CreateUserRequest& AddOtherAttributes(OtherAttributesKeyT&& key, OtherAttributesValueT&& value) {
      m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::forward<OtherAttributesKeyT>(key), std::forward<OtherAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    CreateUserRequest& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last name of the user. </p>
     */
    inline const Aws::String& GetSurname() const { return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    template<typename SurnameT = Aws::String>
    void SetSurname(SurnameT&& value) { m_surnameHasBeenSet = true; m_surname = std::forward<SurnameT>(value); }
    template<typename SurnameT = Aws::String>
    CreateUserRequest& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_otherAttributes;
    bool m_otherAttributesHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
