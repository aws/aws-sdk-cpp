/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ResourceIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateAuditSuppressionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateAuditSuppressionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAuditSuppression"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetCheckName() const{ return m_checkName; }

    
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }

    
    inline void SetCheckName(const Aws::String& value) { m_checkNameHasBeenSet = true; m_checkName = value; }

    
    inline void SetCheckName(Aws::String&& value) { m_checkNameHasBeenSet = true; m_checkName = std::move(value); }

    
    inline void SetCheckName(const char* value) { m_checkNameHasBeenSet = true; m_checkName.assign(value); }

    
    inline CreateAuditSuppressionRequest& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}

    
    inline CreateAuditSuppressionRequest& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}

    
    inline CreateAuditSuppressionRequest& WithCheckName(const char* value) { SetCheckName(value); return *this;}


    
    inline const ResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    
    inline void SetResourceIdentifier(const ResourceIdentifier& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    
    inline void SetResourceIdentifier(ResourceIdentifier&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    
    inline CreateAuditSuppressionRequest& WithResourceIdentifier(const ResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}

    
    inline CreateAuditSuppressionRequest& WithResourceIdentifier(ResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}


    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline CreateAuditSuppressionRequest& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline CreateAuditSuppressionRequest& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline bool GetSuppressIndefinitely() const{ return m_suppressIndefinitely; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline bool SuppressIndefinitelyHasBeenSet() const { return m_suppressIndefinitelyHasBeenSet; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline void SetSuppressIndefinitely(bool value) { m_suppressIndefinitelyHasBeenSet = true; m_suppressIndefinitely = value; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline CreateAuditSuppressionRequest& WithSuppressIndefinitely(bool value) { SetSuppressIndefinitely(value); return *this;}


    /**
     * <p> The description of the audit suppression. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline CreateAuditSuppressionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline CreateAuditSuppressionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline CreateAuditSuppressionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline CreateAuditSuppressionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline CreateAuditSuppressionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> Each audit supression must have a unique client request token. If you try to
     * create a new audit suppression with the same token as one that already exists,
     * an exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline CreateAuditSuppressionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    bool m_suppressIndefinitely;
    bool m_suppressIndefinitelyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
