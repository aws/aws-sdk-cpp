/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/securitylake/model/EndpointProtocol.h>
#include <aws/securitylake/model/SubscriptionStatus.h>
#include <aws/securitylake/model/AccessType.h>
#include <aws/securitylake/model/SourceType.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides details of the Amazon Security Lake account subscription.
   * Subscribers are notified of new objects for a source as the data is written to
   * your Amazon Security Lake S3 bucket. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/SubscriberResource">AWS
   * API Reference</a></p>
   */
  class SubscriberResource
  {
  public:
    AWS_SECURITYLAKE_API SubscriberResource();
    AWS_SECURITYLAKE_API SubscriberResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API SubscriberResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline const Aws::Vector<AccessType>& GetAccessTypes() const{ return m_accessTypes; }

    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline bool AccessTypesHasBeenSet() const { return m_accessTypesHasBeenSet; }

    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline void SetAccessTypes(const Aws::Vector<AccessType>& value) { m_accessTypesHasBeenSet = true; m_accessTypes = value; }

    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline void SetAccessTypes(Aws::Vector<AccessType>&& value) { m_accessTypesHasBeenSet = true; m_accessTypes = std::move(value); }

    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline SubscriberResource& WithAccessTypes(const Aws::Vector<AccessType>& value) { SetAccessTypes(value); return *this;}

    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline SubscriberResource& WithAccessTypes(Aws::Vector<AccessType>&& value) { SetAccessTypes(std::move(value)); return *this;}

    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline SubscriberResource& AddAccessTypes(const AccessType& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(value); return *this; }

    /**
     * <p>You can choose to notify subscribers of new objects with an Amazon Simple
     * Queue Service (Amazon SQS) queue or through messaging to an HTTPS endpoint
     * provided by the subscriber. </p> <p> Subscribers can consume data by directly
     * querying Lake Formation tables in your S3 bucket via services like Amazon
     * Athena. This subscription type is defined as <code>LAKEFORMATION</code>. </p>
     */
    inline SubscriberResource& AddAccessTypes(AccessType&& value) { m_accessTypesHasBeenSet = true; m_accessTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline SubscriberResource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline SubscriberResource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that you are using to
     * create your Amazon Security Lake account.</p>
     */
    inline SubscriberResource& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline SubscriberResource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline SubscriberResource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline SubscriberResource& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline SubscriberResource& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID of the subscriber. External ID allows the user that is
     * assuming the role to assert the circumstances in which they are operating. It
     * also provides a way for the account owner to permit the role to be assumed only
     * under specific circumstances.</p>
     */
    inline SubscriberResource& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline SubscriberResource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline SubscriberResource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) specifying the role of the subscriber.</p>
     */
    inline SubscriberResource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline SubscriberResource& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline SubscriberResource& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline SubscriberResource& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline const Aws::String& GetSnsArn() const{ return m_snsArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline bool SnsArnHasBeenSet() const { return m_snsArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline void SetSnsArn(const Aws::String& value) { m_snsArnHasBeenSet = true; m_snsArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline void SetSnsArn(Aws::String&& value) { m_snsArnHasBeenSet = true; m_snsArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline void SetSnsArn(const char* value) { m_snsArnHasBeenSet = true; m_snsArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline SubscriberResource& WithSnsArn(const Aws::String& value) { SetSnsArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline SubscriberResource& WithSnsArn(Aws::String&& value) { SetSnsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline SubscriberResource& WithSnsArn(const char* value) { SetSnsArn(value); return *this;}


    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline const Aws::Vector<SourceType>& GetSourceTypes() const{ return m_sourceTypes; }

    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline bool SourceTypesHasBeenSet() const { return m_sourceTypesHasBeenSet; }

    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline void SetSourceTypes(const Aws::Vector<SourceType>& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = value; }

    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline void SetSourceTypes(Aws::Vector<SourceType>&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = std::move(value); }

    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline SubscriberResource& WithSourceTypes(const Aws::Vector<SourceType>& value) { SetSourceTypes(value); return *this;}

    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline SubscriberResource& WithSourceTypes(Aws::Vector<SourceType>&& value) { SetSourceTypes(std::move(value)); return *this;}

    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline SubscriberResource& AddSourceTypes(const SourceType& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(value); return *this; }

    /**
     * <p>Amazon Security Lake supports logs and events collection for the
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide.</p>
     */
    inline SubscriberResource& AddSourceTypes(SourceType&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const{ return m_subscriberDescription; }

    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }

    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline void SetSubscriberDescription(const Aws::String& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = value; }

    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline void SetSubscriberDescription(Aws::String&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::move(value); }

    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline void SetSubscriberDescription(const char* value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription.assign(value); }

    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline SubscriberResource& WithSubscriberDescription(const Aws::String& value) { SetSubscriberDescription(value); return *this;}

    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline SubscriberResource& WithSubscriberDescription(Aws::String&& value) { SetSubscriberDescription(std::move(value)); return *this;}

    /**
     * <p>The subscriber descriptions for a subscriber account. The description for a
     * subscriber includes <code>subscriberName</code>, <code>accountID</code>,
     * <code>externalID</code>, and <code>subscriptionId</code>.</p>
     */
    inline SubscriberResource& WithSubscriberDescription(const char* value) { SetSubscriberDescription(value); return *this;}


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
    inline SubscriberResource& WithSubscriberName(const Aws::String& value) { SetSubscriberName(value); return *this;}

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberResource& WithSubscriberName(Aws::String&& value) { SetSubscriberName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberResource& WithSubscriberName(const char* value) { SetSubscriberName(value); return *this;}


    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline const Aws::String& GetSubscriptionEndpoint() const{ return m_subscriptionEndpoint; }

    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline bool SubscriptionEndpointHasBeenSet() const { return m_subscriptionEndpointHasBeenSet; }

    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline void SetSubscriptionEndpoint(const Aws::String& value) { m_subscriptionEndpointHasBeenSet = true; m_subscriptionEndpoint = value; }

    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline void SetSubscriptionEndpoint(Aws::String&& value) { m_subscriptionEndpointHasBeenSet = true; m_subscriptionEndpoint = std::move(value); }

    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline void SetSubscriptionEndpoint(const char* value) { m_subscriptionEndpointHasBeenSet = true; m_subscriptionEndpoint.assign(value); }

    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline SubscriberResource& WithSubscriptionEndpoint(const Aws::String& value) { SetSubscriptionEndpoint(value); return *this;}

    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline SubscriberResource& WithSubscriptionEndpoint(Aws::String&& value) { SetSubscriptionEndpoint(std::move(value)); return *this;}

    /**
     * <p>The subscription endpoint to which exception messages are posted. </p>
     */
    inline SubscriberResource& WithSubscriptionEndpoint(const char* value) { SetSubscriptionEndpoint(value); return *this;}


    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberResource& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberResource& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The subscription ID of the Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberResource& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}


    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline const EndpointProtocol& GetSubscriptionProtocol() const{ return m_subscriptionProtocol; }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline bool SubscriptionProtocolHasBeenSet() const { return m_subscriptionProtocolHasBeenSet; }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline void SetSubscriptionProtocol(const EndpointProtocol& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = value; }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline void SetSubscriptionProtocol(EndpointProtocol&& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = std::move(value); }

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline SubscriberResource& WithSubscriptionProtocol(const EndpointProtocol& value) { SetSubscriptionProtocol(value); return *this;}

    /**
     * <p>The subscription protocol to which exception messages are posted. </p>
     */
    inline SubscriberResource& WithSubscriptionProtocol(EndpointProtocol&& value) { SetSubscriptionProtocol(std::move(value)); return *this;}


    /**
     * <p>Subscription status of the Amazon Security Lake subscriber account.</p>
     */
    inline const SubscriptionStatus& GetSubscriptionStatus() const{ return m_subscriptionStatus; }

    /**
     * <p>Subscription status of the Amazon Security Lake subscriber account.</p>
     */
    inline bool SubscriptionStatusHasBeenSet() const { return m_subscriptionStatusHasBeenSet; }

    /**
     * <p>Subscription status of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionStatus(const SubscriptionStatus& value) { m_subscriptionStatusHasBeenSet = true; m_subscriptionStatus = value; }

    /**
     * <p>Subscription status of the Amazon Security Lake subscriber account.</p>
     */
    inline void SetSubscriptionStatus(SubscriptionStatus&& value) { m_subscriptionStatusHasBeenSet = true; m_subscriptionStatus = std::move(value); }

    /**
     * <p>Subscription status of the Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberResource& WithSubscriptionStatus(const SubscriptionStatus& value) { SetSubscriptionStatus(value); return *this;}

    /**
     * <p>Subscription status of the Amazon Security Lake subscriber account.</p>
     */
    inline SubscriberResource& WithSubscriptionStatus(SubscriptionStatus&& value) { SetSubscriptionStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline SubscriberResource& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the subscription was created. </p>
     */
    inline SubscriberResource& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Vector<AccessType> m_accessTypes;
    bool m_accessTypesHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    Aws::String m_snsArn;
    bool m_snsArnHasBeenSet = false;

    Aws::Vector<SourceType> m_sourceTypes;
    bool m_sourceTypesHasBeenSet = false;

    Aws::String m_subscriberDescription;
    bool m_subscriberDescriptionHasBeenSet = false;

    Aws::String m_subscriberName;
    bool m_subscriberNameHasBeenSet = false;

    Aws::String m_subscriptionEndpoint;
    bool m_subscriptionEndpointHasBeenSet = false;

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    EndpointProtocol m_subscriptionProtocol;
    bool m_subscriptionProtocolHasBeenSet = false;

    SubscriptionStatus m_subscriptionStatus;
    bool m_subscriptionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
