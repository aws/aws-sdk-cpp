/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/AccessType.h>
#include <aws/securitylake/model/SourceType.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateSubscriberRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline const Aws::Vector<AccessType>& GetAccessTypes() const{ return m_accessTypes; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline bool AccessTypesHasBeenSet() const { return m_accessTypesHasBeenSet; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline void SetAccessTypes(const Aws::Vector<AccessType>& value) { m_accessTypesHasBeenSet = true; m_accessTypes = value; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline void SetAccessTypes(Aws::Vector<AccessType>&& value) { m_accessTypesHasBeenSet = true; m_accessTypes = std::move(value); }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& WithAccessTypes(const Aws::Vector<AccessType>& value) { SetAccessTypes(value); return *this;}

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& WithAccessTypes(Aws::Vector<AccessType>&& value) { SetAccessTypes(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& AddAccessTypes(const AccessType& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(value); return *this; }

    /**
     * <p>The Amazon S3 or Lake Formation access type.</p>
     */
    inline CreateSubscriberRequest& AddAccessTypes(AccessType&& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline CreateSubscriberRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline CreateSubscriberRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The third party Amazon Web Services account ID used to access your data.</p>
     */
    inline CreateSubscriberRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline CreateSubscriberRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline CreateSubscriberRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline CreateSubscriberRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline const Aws::Vector<SourceType>& GetSourceTypes() const{ return m_sourceTypes; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline bool SourceTypesHasBeenSet() const { return m_sourceTypesHasBeenSet; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline void SetSourceTypes(const Aws::Vector<SourceType>& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = value; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline void SetSourceTypes(Aws::Vector<SourceType>&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = std::move(value); }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline CreateSubscriberRequest& WithSourceTypes(const Aws::Vector<SourceType>& value) { SetSourceTypes(value); return *this;}

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline CreateSubscriberRequest& WithSourceTypes(Aws::Vector<SourceType>&& value) { SetSourceTypes(std::move(value)); return *this;}

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline CreateSubscriberRequest& AddSourceTypes(const SourceType& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(value); return *this; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services.</p>
     */
    inline CreateSubscriberRequest& AddSourceTypes(SourceType&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline const Aws::String& GetSubscriberDescription() const{ return m_subscriberDescription; }

    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }

    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline void SetSubscriberDescription(const Aws::String& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = value; }

    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline void SetSubscriberDescription(Aws::String&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::move(value); }

    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline void SetSubscriberDescription(const char* value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription.assign(value); }

    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline CreateSubscriberRequest& WithSubscriberDescription(const Aws::String& value) { SetSubscriberDescription(value); return *this;}

    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline CreateSubscriberRequest& WithSubscriberDescription(Aws::String&& value) { SetSubscriberDescription(std::move(value)); return *this;}

    /**
     * <p>The subscriber descriptions for the subscriber account in Amazon Security
     * Lake. </p>
     */
    inline CreateSubscriberRequest& WithSubscriberDescription(const char* value) { SetSubscriberDescription(value); return *this;}


    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberName() const{ return m_subscriberName; }

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriberName(const Aws::String& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = value; }

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriberName(Aws::String&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::move(value); }

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriberName(const char* value) { m_subscriberNameHasBeenSet = true; m_subscriberName.assign(value); }

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberName(const Aws::String& value) { SetSubscriberName(value); return *this;}

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberName(Aws::String&& value) { SetSubscriberName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline CreateSubscriberRequest& WithSubscriberName(const char* value) { SetSubscriberName(value); return *this;}

  private:

    Aws::Vector<AccessType> m_accessTypes;
    bool m_accessTypesHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::Vector<SourceType> m_sourceTypes;
    bool m_sourceTypesHasBeenSet = false;

    Aws::String m_subscriberDescription;
    bool m_subscriberDescriptionHasBeenSet = false;

    Aws::String m_subscriberName;
    bool m_subscriberNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
