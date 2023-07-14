﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API CreateDBClusterEndpointRequest : public NeptuneRequest
  {
  public:
    CreateDBClusterEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBClusterEndpoint"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline CreateDBClusterEndpointRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline CreateDBClusterEndpointRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline CreateDBClusterEndpointRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const{ return m_dBClusterEndpointIdentifier; }

    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline bool DBClusterEndpointIdentifierHasBeenSet() const { return m_dBClusterEndpointIdentifierHasBeenSet; }

    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const Aws::String& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = value; }

    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(Aws::String&& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = std::move(value); }

    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const char* value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier.assign(value); }

    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline CreateDBClusterEndpointRequest& WithDBClusterEndpointIdentifier(const Aws::String& value) { SetDBClusterEndpointIdentifier(value); return *this;}

    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline CreateDBClusterEndpointRequest& WithDBClusterEndpointIdentifier(Aws::String&& value) { SetDBClusterEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier to use for the new endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline CreateDBClusterEndpointRequest& WithDBClusterEndpointIdentifier(const char* value) { SetDBClusterEndpointIdentifier(value); return *this;}


    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetEndpointType(const Aws::String& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetEndpointType(Aws::String&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetEndpointType(const char* value) { m_endpointTypeHasBeenSet = true; m_endpointType.assign(value); }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline CreateDBClusterEndpointRequest& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline CreateDBClusterEndpointRequest& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>ANY</code>.</p>
     */
    inline CreateDBClusterEndpointRequest& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}


    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticMembers() const{ return m_staticMembers; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline bool StaticMembersHasBeenSet() const { return m_staticMembersHasBeenSet; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline void SetStaticMembers(const Aws::Vector<Aws::String>& value) { m_staticMembersHasBeenSet = true; m_staticMembers = value; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline void SetStaticMembers(Aws::Vector<Aws::String>&& value) { m_staticMembersHasBeenSet = true; m_staticMembers = std::move(value); }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointRequest& WithStaticMembers(const Aws::Vector<Aws::String>& value) { SetStaticMembers(value); return *this;}

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointRequest& WithStaticMembers(Aws::Vector<Aws::String>&& value) { SetStaticMembers(std::move(value)); return *this;}

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointRequest& AddStaticMembers(const Aws::String& value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(value); return *this; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointRequest& AddStaticMembers(Aws::String&& value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointRequest& AddStaticMembers(const char* value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(value); return *this; }


    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedMembers() const{ return m_excludedMembers; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline bool ExcludedMembersHasBeenSet() const { return m_excludedMembersHasBeenSet; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline void SetExcludedMembers(const Aws::Vector<Aws::String>& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = value; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline void SetExcludedMembers(Aws::Vector<Aws::String>&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = std::move(value); }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointRequest& WithExcludedMembers(const Aws::Vector<Aws::String>& value) { SetExcludedMembers(value); return *this;}

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointRequest& WithExcludedMembers(Aws::Vector<Aws::String>&& value) { SetExcludedMembers(std::move(value)); return *this;}

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointRequest& AddExcludedMembers(const Aws::String& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(value); return *this; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointRequest& AddExcludedMembers(Aws::String&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointRequest& AddExcludedMembers(const char* value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(value); return *this; }


    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline CreateDBClusterEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline CreateDBClusterEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline CreateDBClusterEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the Amazon Neptune resource.</p>
     */
    inline CreateDBClusterEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_dBClusterEndpointIdentifier;
    bool m_dBClusterEndpointIdentifierHasBeenSet;

    Aws::String m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::Vector<Aws::String> m_staticMembers;
    bool m_staticMembersHasBeenSet;

    Aws::Vector<Aws::String> m_excludedMembers;
    bool m_excludedMembersHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
