/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/DirectoryServiceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

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
  class DescribeGroupRequest : public DirectoryServiceDataRequest
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API DescribeGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGroup"; }

    AWS_DIRECTORYSERVICEDATA_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Identifier (ID) of the directory associated with the group.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline DescribeGroupRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DescribeGroupRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DescribeGroupRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more attributes to be returned for the group. For a list of supported
     * attributes, see <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data-attributes.html">Directory
     * Service Data Attributes</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOtherAttributes() const{ return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    inline void SetOtherAttributes(const Aws::Vector<Aws::String>& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = value; }
    inline void SetOtherAttributes(Aws::Vector<Aws::String>&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::move(value); }
    inline DescribeGroupRequest& WithOtherAttributes(const Aws::Vector<Aws::String>& value) { SetOtherAttributes(value); return *this;}
    inline DescribeGroupRequest& WithOtherAttributes(Aws::Vector<Aws::String>&& value) { SetOtherAttributes(std::move(value)); return *this;}
    inline DescribeGroupRequest& AddOtherAttributes(const Aws::String& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.push_back(value); return *this; }
    inline DescribeGroupRequest& AddOtherAttributes(Aws::String&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.push_back(std::move(value)); return *this; }
    inline DescribeGroupRequest& AddOtherAttributes(const char* value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the group. </p>  <p> This
     * parameter is optional, so you can return groups outside of your Managed
     * Microsoft AD domain. When no value is defined, only your Managed Microsoft AD
     * groups are returned. </p> <p> This value is case insensitive. </p> 
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    inline void SetRealm(const Aws::String& value) { m_realmHasBeenSet = true; m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realmHasBeenSet = true; m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realmHasBeenSet = true; m_realm.assign(value); }
    inline DescribeGroupRequest& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline DescribeGroupRequest& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline DescribeGroupRequest& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName.assign(value); }
    inline DescribeGroupRequest& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline DescribeGroupRequest& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline DescribeGroupRequest& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_otherAttributes;
    bool m_otherAttributesHasBeenSet = false;

    Aws::String m_realm;
    bool m_realmHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
