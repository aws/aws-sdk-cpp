/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/ObjectTypeField.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class CreateUploadJobRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateUploadJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUploadJob"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain. Domain should be exists for the upload job to
     * be created. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateUploadJobRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the upload job. Could be a file name to identify the
     * upload job.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateUploadJobRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping between CSV Columns and Profile Object attributes. A map of the
     * name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    CreateUploadJobRequest& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = ObjectTypeField>
    CreateUploadJobRequest& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique key columns for de-duping the profiles used to map data to the
     * profile. </p>
     */
    inline const Aws::String& GetUniqueKey() const { return m_uniqueKey; }
    inline bool UniqueKeyHasBeenSet() const { return m_uniqueKeyHasBeenSet; }
    template<typename UniqueKeyT = Aws::String>
    void SetUniqueKey(UniqueKeyT&& value) { m_uniqueKeyHasBeenSet = true; m_uniqueKey = std::forward<UniqueKeyT>(value); }
    template<typename UniqueKeyT = Aws::String>
    CreateUploadJobRequest& WithUniqueKey(UniqueKeyT&& value) { SetUniqueKey(std::forward<UniqueKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry duration for the profiles ingested with the job. If not provided,
     * the system default of 2 weeks is used. </p>
     */
    inline int GetDataExpiry() const { return m_dataExpiry; }
    inline bool DataExpiryHasBeenSet() const { return m_dataExpiryHasBeenSet; }
    inline void SetDataExpiry(int value) { m_dataExpiryHasBeenSet = true; m_dataExpiry = value; }
    inline CreateUploadJobRequest& WithDataExpiry(int value) { SetDataExpiry(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_uniqueKey;
    bool m_uniqueKeyHasBeenSet = false;

    int m_dataExpiry{0};
    bool m_dataExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
