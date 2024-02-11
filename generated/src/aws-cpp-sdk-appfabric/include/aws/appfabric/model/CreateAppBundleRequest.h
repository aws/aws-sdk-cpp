/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appfabric/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class CreateAppBundleRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API CreateAppBundleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppBundle"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateAppBundleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateAppBundleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateAppBundleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline const Aws::String& GetCustomerManagedKeyIdentifier() const{ return m_customerManagedKeyIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline bool CustomerManagedKeyIdentifierHasBeenSet() const { return m_customerManagedKeyIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline void SetCustomerManagedKeyIdentifier(const Aws::String& value) { m_customerManagedKeyIdentifierHasBeenSet = true; m_customerManagedKeyIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline void SetCustomerManagedKeyIdentifier(Aws::String&& value) { m_customerManagedKeyIdentifierHasBeenSet = true; m_customerManagedKeyIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline void SetCustomerManagedKeyIdentifier(const char* value) { m_customerManagedKeyIdentifierHasBeenSet = true; m_customerManagedKeyIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline CreateAppBundleRequest& WithCustomerManagedKeyIdentifier(const Aws::String& value) { SetCustomerManagedKeyIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline CreateAppBundleRequest& WithCustomerManagedKeyIdentifier(Aws::String&& value) { SetCustomerManagedKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key to use
     * to encrypt the application data. If this is not specified, an Amazon Web
     * Services owned key is used for encryption.</p>
     */
    inline CreateAppBundleRequest& WithCustomerManagedKeyIdentifier(const char* value) { SetCustomerManagedKeyIdentifier(value); return *this;}


    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateAppBundleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateAppBundleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateAppBundleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateAppBundleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_customerManagedKeyIdentifier;
    bool m_customerManagedKeyIdentifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
