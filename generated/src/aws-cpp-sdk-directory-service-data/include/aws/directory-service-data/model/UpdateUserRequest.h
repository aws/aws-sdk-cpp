/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/DirectoryServiceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/directory-service-data/model/UpdateType.h>
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
  class UpdateUserRequest : public DirectoryServiceDataRequest
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateUserRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateUserRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateUserRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the user. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline UpdateUserRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline UpdateUserRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The email address of the user. </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline UpdateUserRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline UpdateUserRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline UpdateUserRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The first name of the user. </p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    inline void SetGivenName(const Aws::String& value) { m_givenNameHasBeenSet = true; m_givenName = value; }
    inline void SetGivenName(Aws::String&& value) { m_givenNameHasBeenSet = true; m_givenName = std::move(value); }
    inline void SetGivenName(const char* value) { m_givenNameHasBeenSet = true; m_givenName.assign(value); }
    inline UpdateUserRequest& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline UpdateUserRequest& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline UpdateUserRequest& WithGivenName(const char* value) { SetGivenName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An expression that defines one or more attribute names with the data type
     * and value of each attribute. A key is an attribute name, and the value is a list
     * of maps. For a list of supported attributes, see <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data-attributes.html">Directory
     * Service Data Attributes</a>. </p>  <p> Attribute names are case
     * insensitive. </p> 
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const{ return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    inline void SetOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = value; }
    inline void SetOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::move(value); }
    inline UpdateUserRequest& WithOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetOtherAttributes(value); return *this;}
    inline UpdateUserRequest& WithOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetOtherAttributes(std::move(value)); return *this;}
    inline UpdateUserRequest& AddOtherAttributes(const Aws::String& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
    inline UpdateUserRequest& AddOtherAttributes(Aws::String&& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), value); return *this; }
    inline UpdateUserRequest& AddOtherAttributes(const Aws::String& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline UpdateUserRequest& AddOtherAttributes(Aws::String&& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateUserRequest& AddOtherAttributes(const char* key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline UpdateUserRequest& AddOtherAttributes(const char* key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the user. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName.assign(value); }
    inline UpdateUserRequest& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline UpdateUserRequest& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline UpdateUserRequest& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last name of the user. </p>
     */
    inline const Aws::String& GetSurname() const{ return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    inline void SetSurname(const Aws::String& value) { m_surnameHasBeenSet = true; m_surname = value; }
    inline void SetSurname(Aws::String&& value) { m_surnameHasBeenSet = true; m_surname = std::move(value); }
    inline void SetSurname(const char* value) { m_surnameHasBeenSet = true; m_surname.assign(value); }
    inline UpdateUserRequest& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}
    inline UpdateUserRequest& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}
    inline UpdateUserRequest& WithSurname(const char* value) { SetSurname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of update to be performed. If no value exists for the attribute,
     * use <code>ADD</code>. Otherwise, use <code>REPLACE</code> to change an attribute
     * value or <code>REMOVE</code> to clear the attribute value. </p>
     */
    inline const UpdateType& GetUpdateType() const{ return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(const UpdateType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline void SetUpdateType(UpdateType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }
    inline UpdateUserRequest& WithUpdateType(const UpdateType& value) { SetUpdateType(value); return *this;}
    inline UpdateUserRequest& WithUpdateType(UpdateType&& value) { SetUpdateType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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

    UpdateType m_updateType;
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
