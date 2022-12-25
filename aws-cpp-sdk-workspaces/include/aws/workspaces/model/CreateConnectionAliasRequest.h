/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class CreateConnectionAliasRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateConnectionAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectionAlias"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline const Aws::String& GetConnectionString() const{ return m_connectionString; }

    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline bool ConnectionStringHasBeenSet() const { return m_connectionStringHasBeenSet; }

    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline void SetConnectionString(const Aws::String& value) { m_connectionStringHasBeenSet = true; m_connectionString = value; }

    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline void SetConnectionString(Aws::String&& value) { m_connectionStringHasBeenSet = true; m_connectionString = std::move(value); }

    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline void SetConnectionString(const char* value) { m_connectionStringHasBeenSet = true; m_connectionString.assign(value); }

    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline CreateConnectionAliasRequest& WithConnectionString(const Aws::String& value) { SetConnectionString(value); return *this;}

    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline CreateConnectionAliasRequest& WithConnectionString(Aws::String&& value) { SetConnectionString(std::move(value)); return *this;}

    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline CreateConnectionAliasRequest& WithConnectionString(const char* value) { SetConnectionString(value); return *this;}


    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline CreateConnectionAliasRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline CreateConnectionAliasRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline CreateConnectionAliasRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline CreateConnectionAliasRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionString;
    bool m_connectionStringHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
