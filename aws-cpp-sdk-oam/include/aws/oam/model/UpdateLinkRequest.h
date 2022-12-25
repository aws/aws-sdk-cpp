/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/oam/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class UpdateLinkRequest : public OAMRequest
  {
  public:
    AWS_OAM_API UpdateLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLink"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline UpdateLinkRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline UpdateLinkRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline UpdateLinkRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline UpdateLinkRequest& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline UpdateLinkRequest& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline UpdateLinkRequest& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline UpdateLinkRequest& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
