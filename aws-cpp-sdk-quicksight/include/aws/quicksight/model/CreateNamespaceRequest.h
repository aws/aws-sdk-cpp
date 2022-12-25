/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IdentityStore.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateNamespaceRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNamespace"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline CreateNamespaceRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline CreateNamespaceRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to create the Amazon
     * QuickSight namespace in.</p>
     */
    inline CreateNamespaceRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline CreateNamespaceRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline CreateNamespaceRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The name that you want to use to describe the new namespace.</p>
     */
    inline CreateNamespaceRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline const IdentityStore& GetIdentityStore() const{ return m_identityStore; }

    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline bool IdentityStoreHasBeenSet() const { return m_identityStoreHasBeenSet; }

    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline void SetIdentityStore(const IdentityStore& value) { m_identityStoreHasBeenSet = true; m_identityStore = value; }

    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline void SetIdentityStore(IdentityStore&& value) { m_identityStoreHasBeenSet = true; m_identityStore = std::move(value); }

    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline CreateNamespaceRequest& WithIdentityStore(const IdentityStore& value) { SetIdentityStore(value); return *this;}

    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline CreateNamespaceRequest& WithIdentityStore(IdentityStore&& value) { SetIdentityStore(std::move(value)); return *this;}


    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline CreateNamespaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline CreateNamespaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline CreateNamespaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that you want to associate with the namespace that you're
     * creating.</p>
     */
    inline CreateNamespaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    IdentityStore m_identityStore;
    bool m_identityStoreHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
