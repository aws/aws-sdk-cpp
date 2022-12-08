/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateSubscriberRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API UpdateSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline UpdateSubscriberRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline UpdateSubscriberRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>External ID of the Security Lake account.</p>
     */
    inline UpdateSubscriberRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline UpdateSubscriberRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline UpdateSubscriberRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>UpdateSubscriber</code> API request. </p>
     */
    inline UpdateSubscriberRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline const Aws::Vector<SourceType>& GetSourceTypes() const{ return m_sourceTypes; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline bool SourceTypesHasBeenSet() const { return m_sourceTypesHasBeenSet; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline void SetSourceTypes(const Aws::Vector<SourceType>& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = value; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline void SetSourceTypes(Aws::Vector<SourceType>&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = std::move(value); }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline UpdateSubscriberRequest& WithSourceTypes(const Aws::Vector<SourceType>& value) { SetSourceTypes(value); return *this;}

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline UpdateSubscriberRequest& WithSourceTypes(Aws::Vector<SourceType>&& value) { SetSourceTypes(std::move(value)); return *this;}

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline UpdateSubscriberRequest& AddSourceTypes(const SourceType& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(value); return *this; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for the
     * following natively-supported Amazon Web Services services. For more information,
     * see the Amazon Security Lake User Guide.</p>
     */
    inline UpdateSubscriberRequest& AddSourceTypes(SourceType&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline const Aws::String& GetSubscriberDescription() const{ return m_subscriberDescription; }

    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline bool SubscriberDescriptionHasBeenSet() const { return m_subscriberDescriptionHasBeenSet; }

    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberDescription(const Aws::String& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = value; }

    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberDescription(Aws::String&& value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription = std::move(value); }

    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline void SetSubscriberDescription(const char* value) { m_subscriberDescriptionHasBeenSet = true; m_subscriberDescription.assign(value); }

    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberDescription(const Aws::String& value) { SetSubscriberDescription(value); return *this;}

    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberDescription(Aws::String&& value) { SetSubscriberDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the Security Lake account subscriber.</p>
     */
    inline UpdateSubscriberRequest& WithSubscriberDescription(const char* value) { SetSubscriberDescription(value); return *this;}


    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline const Aws::String& GetSubscriberName() const{ return m_subscriberName; }

    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline bool SubscriberNameHasBeenSet() const { return m_subscriberNameHasBeenSet; }

    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline void SetSubscriberName(const Aws::String& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = value; }

    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline void SetSubscriberName(Aws::String&& value) { m_subscriberNameHasBeenSet = true; m_subscriberName = std::move(value); }

    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline void SetSubscriberName(const char* value) { m_subscriberNameHasBeenSet = true; m_subscriberName.assign(value); }

    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline UpdateSubscriberRequest& WithSubscriberName(const Aws::String& value) { SetSubscriberName(value); return *this;}

    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline UpdateSubscriberRequest& WithSubscriberName(Aws::String&& value) { SetSubscriberName(std::move(value)); return *this;}

    /**
     * <p>Name of the Security Lake account subscriber. </p>
     */
    inline UpdateSubscriberRequest& WithSubscriberName(const char* value) { SetSubscriberName(value); return *this;}

  private:

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
