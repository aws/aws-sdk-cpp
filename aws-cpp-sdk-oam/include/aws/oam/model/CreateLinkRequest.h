/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateLinkRequest : public OAMRequest
  {
  public:
    AWS_OAM_API CreateLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLink"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline const Aws::String& GetLabelTemplate() const{ return m_labelTemplate; }

    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline bool LabelTemplateHasBeenSet() const { return m_labelTemplateHasBeenSet; }

    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline void SetLabelTemplate(const Aws::String& value) { m_labelTemplateHasBeenSet = true; m_labelTemplate = value; }

    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline void SetLabelTemplate(Aws::String&& value) { m_labelTemplateHasBeenSet = true; m_labelTemplate = std::move(value); }

    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline void SetLabelTemplate(const char* value) { m_labelTemplateHasBeenSet = true; m_labelTemplate.assign(value); }

    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline CreateLinkRequest& WithLabelTemplate(const Aws::String& value) { SetLabelTemplate(value); return *this;}

    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline CreateLinkRequest& WithLabelTemplate(Aws::String&& value) { SetLabelTemplate(std::move(value)); return *this;}

    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>
     */
    inline CreateLinkRequest& WithLabelTemplate(const char* value) { SetLabelTemplate(value); return *this;}


    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline CreateLinkRequest& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline CreateLinkRequest& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline CreateLinkRequest& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline CreateLinkRequest& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline const Aws::String& GetSinkIdentifier() const{ return m_sinkIdentifier; }

    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline bool SinkIdentifierHasBeenSet() const { return m_sinkIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline void SetSinkIdentifier(const Aws::String& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = value; }

    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline void SetSinkIdentifier(Aws::String&& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = std::move(value); }

    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline void SetSinkIdentifier(const char* value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier.assign(value); }

    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline CreateLinkRequest& WithSinkIdentifier(const Aws::String& value) { SetSinkIdentifier(value); return *this;}

    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline CreateLinkRequest& WithSinkIdentifier(Aws::String&& value) { SetSinkIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline CreateLinkRequest& WithSinkIdentifier(const char* value) { SetSinkIdentifier(value); return *this;}


    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline CreateLinkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_labelTemplate;
    bool m_labelTemplateHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_sinkIdentifier;
    bool m_sinkIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
