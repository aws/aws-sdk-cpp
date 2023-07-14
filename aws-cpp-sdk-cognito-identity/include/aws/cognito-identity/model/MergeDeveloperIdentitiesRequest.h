﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the <code>MergeDeveloperIdentities</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/MergeDeveloperIdentitiesInput">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API MergeDeveloperIdentitiesRequest : public CognitoIdentityRequest
  {
  public:
    MergeDeveloperIdentitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergeDeveloperIdentities"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline const Aws::String& GetSourceUserIdentifier() const{ return m_sourceUserIdentifier; }

    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline bool SourceUserIdentifierHasBeenSet() const { return m_sourceUserIdentifierHasBeenSet; }

    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline void SetSourceUserIdentifier(const Aws::String& value) { m_sourceUserIdentifierHasBeenSet = true; m_sourceUserIdentifier = value; }

    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline void SetSourceUserIdentifier(Aws::String&& value) { m_sourceUserIdentifierHasBeenSet = true; m_sourceUserIdentifier = std::move(value); }

    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline void SetSourceUserIdentifier(const char* value) { m_sourceUserIdentifierHasBeenSet = true; m_sourceUserIdentifier.assign(value); }

    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithSourceUserIdentifier(const Aws::String& value) { SetSourceUserIdentifier(value); return *this;}

    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithSourceUserIdentifier(Aws::String&& value) { SetSourceUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithSourceUserIdentifier(const char* value) { SetSourceUserIdentifier(value); return *this;}


    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline const Aws::String& GetDestinationUserIdentifier() const{ return m_destinationUserIdentifier; }

    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline bool DestinationUserIdentifierHasBeenSet() const { return m_destinationUserIdentifierHasBeenSet; }

    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline void SetDestinationUserIdentifier(const Aws::String& value) { m_destinationUserIdentifierHasBeenSet = true; m_destinationUserIdentifier = value; }

    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline void SetDestinationUserIdentifier(Aws::String&& value) { m_destinationUserIdentifierHasBeenSet = true; m_destinationUserIdentifier = std::move(value); }

    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline void SetDestinationUserIdentifier(const char* value) { m_destinationUserIdentifierHasBeenSet = true; m_destinationUserIdentifier.assign(value); }

    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithDestinationUserIdentifier(const Aws::String& value) { SetDestinationUserIdentifier(value); return *this;}

    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithDestinationUserIdentifier(Aws::String&& value) { SetDestinationUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithDestinationUserIdentifier(const char* value) { SetDestinationUserIdentifier(value); return *this;}


    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline const Aws::String& GetDeveloperProviderName() const{ return m_developerProviderName; }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline bool DeveloperProviderNameHasBeenSet() const { return m_developerProviderNameHasBeenSet; }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline void SetDeveloperProviderName(const Aws::String& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = value; }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline void SetDeveloperProviderName(Aws::String&& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = std::move(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline void SetDeveloperProviderName(const char* value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName.assign(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithDeveloperProviderName(const Aws::String& value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithDeveloperProviderName(Aws::String&& value) { SetDeveloperProviderName(std::move(value)); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithDeveloperProviderName(const char* value) { SetDeveloperProviderName(value); return *this;}


    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline MergeDeveloperIdentitiesRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

  private:

    Aws::String m_sourceUserIdentifier;
    bool m_sourceUserIdentifierHasBeenSet;

    Aws::String m_destinationUserIdentifier;
    bool m_destinationUserIdentifierHasBeenSet;

    Aws::String m_developerProviderName;
    bool m_developerProviderNameHasBeenSet;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
