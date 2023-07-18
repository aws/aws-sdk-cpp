﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberFrameworkAttributes.h>
#include <aws/managedblockchain/model/MemberLogPublishingConfiguration.h>
#include <aws/managedblockchain/model/MemberStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Member configuration properties.</p> <p>Applies only to Hyperledger
   * Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Member">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API Member
  {
  public:
    Member();
    Member(Aws::Utils::Json::JsonView jsonValue);
    Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline Member& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline Member& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network to which the member belongs.</p>
     */
    inline Member& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The unique identifier of the member.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline Member& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline Member& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline Member& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the member.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline Member& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline Member& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline Member& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description for the member.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for the member.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for the member.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for the member.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for the member.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for the member.</p>
     */
    inline Member& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for the member.</p>
     */
    inline Member& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for the member.</p>
     */
    inline Member& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Attributes relevant to a member for the blockchain framework that the Managed
     * Blockchain network uses.</p>
     */
    inline const MemberFrameworkAttributes& GetFrameworkAttributes() const{ return m_frameworkAttributes; }

    /**
     * <p>Attributes relevant to a member for the blockchain framework that the Managed
     * Blockchain network uses.</p>
     */
    inline bool FrameworkAttributesHasBeenSet() const { return m_frameworkAttributesHasBeenSet; }

    /**
     * <p>Attributes relevant to a member for the blockchain framework that the Managed
     * Blockchain network uses.</p>
     */
    inline void SetFrameworkAttributes(const MemberFrameworkAttributes& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = value; }

    /**
     * <p>Attributes relevant to a member for the blockchain framework that the Managed
     * Blockchain network uses.</p>
     */
    inline void SetFrameworkAttributes(MemberFrameworkAttributes&& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = std::move(value); }

    /**
     * <p>Attributes relevant to a member for the blockchain framework that the Managed
     * Blockchain network uses.</p>
     */
    inline Member& WithFrameworkAttributes(const MemberFrameworkAttributes& value) { SetFrameworkAttributes(value); return *this;}

    /**
     * <p>Attributes relevant to a member for the blockchain framework that the Managed
     * Blockchain network uses.</p>
     */
    inline Member& WithFrameworkAttributes(MemberFrameworkAttributes&& value) { SetFrameworkAttributes(std::move(value)); return *this;}


    /**
     * <p>Configuration properties for logging events associated with a member.</p>
     */
    inline const MemberLogPublishingConfiguration& GetLogPublishingConfiguration() const{ return m_logPublishingConfiguration; }

    /**
     * <p>Configuration properties for logging events associated with a member.</p>
     */
    inline bool LogPublishingConfigurationHasBeenSet() const { return m_logPublishingConfigurationHasBeenSet; }

    /**
     * <p>Configuration properties for logging events associated with a member.</p>
     */
    inline void SetLogPublishingConfiguration(const MemberLogPublishingConfiguration& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = value; }

    /**
     * <p>Configuration properties for logging events associated with a member.</p>
     */
    inline void SetLogPublishingConfiguration(MemberLogPublishingConfiguration&& value) { m_logPublishingConfigurationHasBeenSet = true; m_logPublishingConfiguration = std::move(value); }

    /**
     * <p>Configuration properties for logging events associated with a member.</p>
     */
    inline Member& WithLogPublishingConfiguration(const MemberLogPublishingConfiguration& value) { SetLogPublishingConfiguration(value); return *this;}

    /**
     * <p>Configuration properties for logging events associated with a member.</p>
     */
    inline Member& WithLogPublishingConfiguration(MemberLogPublishingConfiguration&& value) { SetLogPublishingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status of a member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The member is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The member and all associated resources are in
     * the process of being deleted. Either the AWS account that owns the member
     * deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>DELETED</code> - The member can no longer participate on the network
     * and all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The member is impaired and might
     * not function as expected because it cannot access the specified customer managed
     * key in AWS KMS for encryption at rest. Either the KMS key was disabled or
     * deleted, or the grants on the key were revoked.</p> <p>The effect of disabling
     * or deleting a key, or revoking a grant is not immediate. The member resource
     * might take some time to find that the key is inaccessible. When a resource is in
     * this state, we recommend deleting and recreating the resource.</p> </li> </ul>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The member is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The member and all associated resources are in
     * the process of being deleted. Either the AWS account that owns the member
     * deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>DELETED</code> - The member can no longer participate on the network
     * and all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The member is impaired and might
     * not function as expected because it cannot access the specified customer managed
     * key in AWS KMS for encryption at rest. Either the KMS key was disabled or
     * deleted, or the grants on the key were revoked.</p> <p>The effect of disabling
     * or deleting a key, or revoking a grant is not immediate. The member resource
     * might take some time to find that the key is inaccessible. When a resource is in
     * this state, we recommend deleting and recreating the resource.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The member is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The member and all associated resources are in
     * the process of being deleted. Either the AWS account that owns the member
     * deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>DELETED</code> - The member can no longer participate on the network
     * and all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The member is impaired and might
     * not function as expected because it cannot access the specified customer managed
     * key in AWS KMS for encryption at rest. Either the KMS key was disabled or
     * deleted, or the grants on the key were revoked.</p> <p>The effect of disabling
     * or deleting a key, or revoking a grant is not immediate. The member resource
     * might take some time to find that the key is inaccessible. When a resource is in
     * this state, we recommend deleting and recreating the resource.</p> </li> </ul>
     */
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The member is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The member and all associated resources are in
     * the process of being deleted. Either the AWS account that owns the member
     * deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>DELETED</code> - The member can no longer participate on the network
     * and all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The member is impaired and might
     * not function as expected because it cannot access the specified customer managed
     * key in AWS KMS for encryption at rest. Either the KMS key was disabled or
     * deleted, or the grants on the key were revoked.</p> <p>The effect of disabling
     * or deleting a key, or revoking a grant is not immediate. The member resource
     * might take some time to find that the key is inaccessible. When a resource is in
     * this state, we recommend deleting and recreating the resource.</p> </li> </ul>
     */
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The member is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The member and all associated resources are in
     * the process of being deleted. Either the AWS account that owns the member
     * deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>DELETED</code> - The member can no longer participate on the network
     * and all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The member is impaired and might
     * not function as expected because it cannot access the specified customer managed
     * key in AWS KMS for encryption at rest. Either the KMS key was disabled or
     * deleted, or the grants on the key were revoked.</p> <p>The effect of disabling
     * or deleting a key, or revoking a grant is not immediate. The member resource
     * might take some time to find that the key is inaccessible. When a resource is in
     * this state, we recommend deleting and recreating the resource.</p> </li> </ul>
     */
    inline Member& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>UPDATING</code> - The member is in the process of being updated.</p> </li>
     * <li> <p> <code>DELETING</code> - The member and all associated resources are in
     * the process of being deleted. Either the AWS account that owns the member
     * deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>DELETED</code> - The member can no longer participate on the network
     * and all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li> <li>
     * <p> <code>INACCESSIBLE_ENCRYPTION_KEY</code> - The member is impaired and might
     * not function as expected because it cannot access the specified customer managed
     * key in AWS KMS for encryption at rest. Either the KMS key was disabled or
     * deleted, or the grants on the key were revoked.</p> <p>The effect of disabling
     * or deleting a key, or revoking a grant is not immediate. The member resource
     * might take some time to find that the key is inaccessible. When a resource is in
     * this state, we recommend deleting and recreating the resource.</p> </li> </ul>
     */
    inline Member& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline Member& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline Member& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to the member. Tags consist of a key and optional value. For
     * more information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline Member& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline Member& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline Member& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the member. For more information about ARNs
     * and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline Member& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline Member& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline Member& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed key in AWS Key
     * Management Service (AWS KMS) that the member uses for encryption at rest. If the
     * value of this parameter is <code>"AWS Owned KMS Key"</code>, the member uses an
     * AWS owned KMS key for encryption. This parameter is inherited by the nodes that
     * this member owns.</p>
     */
    inline Member& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    MemberFrameworkAttributes m_frameworkAttributes;
    bool m_frameworkAttributesHasBeenSet;

    MemberLogPublishingConfiguration m_logPublishingConfiguration;
    bool m_logPublishingConfigurationHasBeenSet;

    MemberStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
