/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-identity/model/CreateIdentityPoolResult.h>
#include <aws/cognito-identity/model/DeleteIdentitiesResult.h>
#include <aws/cognito-identity/model/DescribeIdentityResult.h>
#include <aws/cognito-identity/model/DescribeIdentityPoolResult.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityResult.h>
#include <aws/cognito-identity/model/GetIdResult.h>
#include <aws/cognito-identity/model/GetIdentityPoolRolesResult.h>
#include <aws/cognito-identity/model/GetOpenIdTokenResult.h>
#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityResult.h>
#include <aws/cognito-identity/model/ListIdentitiesResult.h>
#include <aws/cognito-identity/model/ListIdentityPoolsResult.h>
#include <aws/cognito-identity/model/LookupDeveloperIdentityResult.h>
#include <aws/cognito-identity/model/MergeDeveloperIdentitiesResult.h>
#include <aws/cognito-identity/model/UpdateIdentityPoolResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CognitoIdentity
{

namespace Model
{
        class CreateIdentityPoolRequest;
        class DeleteIdentitiesRequest;
        class DeleteIdentityPoolRequest;
        class DescribeIdentityRequest;
        class DescribeIdentityPoolRequest;
        class GetCredentialsForIdentityRequest;
        class GetIdRequest;
        class GetIdentityPoolRolesRequest;
        class GetOpenIdTokenRequest;
        class GetOpenIdTokenForDeveloperIdentityRequest;
        class ListIdentitiesRequest;
        class ListIdentityPoolsRequest;
        class LookupDeveloperIdentityRequest;
        class MergeDeveloperIdentitiesRequest;
        class SetIdentityPoolRolesRequest;
        class UnlinkDeveloperIdentityRequest;
        class UnlinkIdentityRequest;
        class UpdateIdentityPoolRequest;

        typedef Aws::Utils::Outcome<CreateIdentityPoolResult, Aws::Client::AWSError<CognitoIdentityErrors>> CreateIdentityPoolOutcome;
        typedef Aws::Utils::Outcome<DeleteIdentitiesResult, Aws::Client::AWSError<CognitoIdentityErrors>> DeleteIdentitiesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityErrors>> DeleteIdentityPoolOutcome;
        typedef Aws::Utils::Outcome<DescribeIdentityResult, Aws::Client::AWSError<CognitoIdentityErrors>> DescribeIdentityOutcome;
        typedef Aws::Utils::Outcome<DescribeIdentityPoolResult, Aws::Client::AWSError<CognitoIdentityErrors>> DescribeIdentityPoolOutcome;
        typedef Aws::Utils::Outcome<GetCredentialsForIdentityResult, Aws::Client::AWSError<CognitoIdentityErrors>> GetCredentialsForIdentityOutcome;
        typedef Aws::Utils::Outcome<GetIdResult, Aws::Client::AWSError<CognitoIdentityErrors>> GetIdOutcome;
        typedef Aws::Utils::Outcome<GetIdentityPoolRolesResult, Aws::Client::AWSError<CognitoIdentityErrors>> GetIdentityPoolRolesOutcome;
        typedef Aws::Utils::Outcome<GetOpenIdTokenResult, Aws::Client::AWSError<CognitoIdentityErrors>> GetOpenIdTokenOutcome;
        typedef Aws::Utils::Outcome<GetOpenIdTokenForDeveloperIdentityResult, Aws::Client::AWSError<CognitoIdentityErrors>> GetOpenIdTokenForDeveloperIdentityOutcome;
        typedef Aws::Utils::Outcome<ListIdentitiesResult, Aws::Client::AWSError<CognitoIdentityErrors>> ListIdentitiesOutcome;
        typedef Aws::Utils::Outcome<ListIdentityPoolsResult, Aws::Client::AWSError<CognitoIdentityErrors>> ListIdentityPoolsOutcome;
        typedef Aws::Utils::Outcome<LookupDeveloperIdentityResult, Aws::Client::AWSError<CognitoIdentityErrors>> LookupDeveloperIdentityOutcome;
        typedef Aws::Utils::Outcome<MergeDeveloperIdentitiesResult, Aws::Client::AWSError<CognitoIdentityErrors>> MergeDeveloperIdentitiesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityErrors>> SetIdentityPoolRolesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityErrors>> UnlinkDeveloperIdentityOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CognitoIdentityErrors>> UnlinkIdentityOutcome;
        typedef Aws::Utils::Outcome<UpdateIdentityPoolResult, Aws::Client::AWSError<CognitoIdentityErrors>> UpdateIdentityPoolOutcome;

        typedef std::future<CreateIdentityPoolOutcome> CreateIdentityPoolOutcomeCallable;
        typedef std::future<DeleteIdentitiesOutcome> DeleteIdentitiesOutcomeCallable;
        typedef std::future<DeleteIdentityPoolOutcome> DeleteIdentityPoolOutcomeCallable;
        typedef std::future<DescribeIdentityOutcome> DescribeIdentityOutcomeCallable;
        typedef std::future<DescribeIdentityPoolOutcome> DescribeIdentityPoolOutcomeCallable;
        typedef std::future<GetCredentialsForIdentityOutcome> GetCredentialsForIdentityOutcomeCallable;
        typedef std::future<GetIdOutcome> GetIdOutcomeCallable;
        typedef std::future<GetIdentityPoolRolesOutcome> GetIdentityPoolRolesOutcomeCallable;
        typedef std::future<GetOpenIdTokenOutcome> GetOpenIdTokenOutcomeCallable;
        typedef std::future<GetOpenIdTokenForDeveloperIdentityOutcome> GetOpenIdTokenForDeveloperIdentityOutcomeCallable;
        typedef std::future<ListIdentitiesOutcome> ListIdentitiesOutcomeCallable;
        typedef std::future<ListIdentityPoolsOutcome> ListIdentityPoolsOutcomeCallable;
        typedef std::future<LookupDeveloperIdentityOutcome> LookupDeveloperIdentityOutcomeCallable;
        typedef std::future<MergeDeveloperIdentitiesOutcome> MergeDeveloperIdentitiesOutcomeCallable;
        typedef std::future<SetIdentityPoolRolesOutcome> SetIdentityPoolRolesOutcomeCallable;
        typedef std::future<UnlinkDeveloperIdentityOutcome> UnlinkDeveloperIdentityOutcomeCallable;
        typedef std::future<UnlinkIdentityOutcome> UnlinkIdentityOutcomeCallable;
        typedef std::future<UpdateIdentityPoolOutcome> UpdateIdentityPoolOutcomeCallable;
} // namespace Model

  class CognitoIdentityClient;

    typedef std::function<void(const CognitoIdentityClient*, const Model::CreateIdentityPoolRequest&, const Model::CreateIdentityPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdentityPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::DeleteIdentitiesRequest&, const Model::DeleteIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentitiesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::DeleteIdentityPoolRequest&, const Model::DeleteIdentityPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::DescribeIdentityRequest&, const Model::DescribeIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::DescribeIdentityPoolRequest&, const Model::DescribeIdentityPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityPoolResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::GetCredentialsForIdentityRequest&, const Model::GetCredentialsForIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCredentialsForIdentityResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::GetIdRequest&, const Model::GetIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::GetIdentityPoolRolesRequest&, const Model::GetIdentityPoolRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityPoolRolesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::GetOpenIdTokenRequest&, const Model::GetOpenIdTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpenIdTokenResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::GetOpenIdTokenForDeveloperIdentityRequest&, const Model::GetOpenIdTokenForDeveloperIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::ListIdentitiesRequest&, const Model::ListIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentitiesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::ListIdentityPoolsRequest&, const Model::ListIdentityPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityPoolsResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::LookupDeveloperIdentityRequest&, const Model::LookupDeveloperIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LookupDeveloperIdentityResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::MergeDeveloperIdentitiesRequest&, const Model::MergeDeveloperIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MergeDeveloperIdentitiesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::SetIdentityPoolRolesRequest&, const Model::SetIdentityPoolRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityPoolRolesResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::UnlinkDeveloperIdentityRequest&, const Model::UnlinkDeveloperIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnlinkDeveloperIdentityResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::UnlinkIdentityRequest&, const Model::UnlinkIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnlinkIdentityResponseReceivedHandler;
    typedef std::function<void(const CognitoIdentityClient*, const Model::UpdateIdentityPoolRequest&, const Model::UpdateIdentityPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentityPoolResponseReceivedHandler;

  /**
   * <fullname>Amazon Cognito</fullname> <p>Amazon Cognito is a web service that
   * delivers scoped temporary credentials to mobile devices and other untrusted
   * environments. Amazon Cognito uniquely identifies a device and supplies the user
   * with a consistent identity over the lifetime of an application.</p> <p>Using
   * Amazon Cognito, you can enable authentication with one or more third-party
   * identity providers (Facebook, Google, or Login with Amazon), and you can also
   * choose to support unauthenticated access from your app. Cognito delivers a
   * unique identifier for each user and acts as an OpenID token provider trusted by
   * AWS Security Token Service (STS) to access temporary, limited-privilege AWS
   * credentials.</p> <p>To provide end-user credentials, first make an unsigned call
   * to <a>GetId</a>. If the end user is authenticated with one of the supported
   * identity providers, set the <code>Logins</code> map with the identity provider
   * token. <code>GetId</code> returns a unique identifier for the user.</p> <p>Next,
   * make an unsigned call to <a>GetCredentialsForIdentity</a>. This call expects the
   * same <code>Logins</code> map as the <code>GetId</code> call, as well as the
   * <code>IdentityID</code> originally returned by <code>GetId</code>. Assuming your
   * identity pool has been configured via the <a>SetIdentityPoolRoles</a> operation,
   * <code>GetCredentialsForIdentity</code> will return AWS credentials for your use.
   * If your pool has not been configured with <code>SetIdentityPoolRoles</code>, or
   * if you want to follow legacy flow, make an unsigned call to
   * <a>GetOpenIdToken</a>, which returns the OpenID token necessary to call STS and
   * retrieve AWS credentials. This call expects the same <code>Logins</code> map as
   * the <code>GetId</code> call, as well as the <code>IdentityID</code> originally
   * returned by <code>GetId</code>. The token returned by
   * <code>GetOpenIdToken</code> can be passed to the STS operation <a
   * href="http://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html">AssumeRoleWithWebIdentity</a>
   * to retrieve AWS credentials.</p> <p>If you want to use Amazon Cognito in an
   * Android, iOS, or Unity application, you will probably want to make API calls via
   * the AWS Mobile SDK. To learn more, see the <a
   * href="http://docs.aws.amazon.com/mobile/index.html">AWS Mobile SDK Developer
   * Guide</a>.</p>
   */
  class AWS_COGNITOIDENTITY_API CognitoIdentityClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoIdentityClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoIdentityClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CognitoIdentityClient();

        /**
         * <p>Creates a new identity pool. The identity pool is a store of user identity
         * information that is specific to your AWS account. The limit on identity pools is
         * 60 per account. The keys for <code>SupportedLoginProviders</code> are as
         * follows:</p> <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li>
         * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
         * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
         * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
         * <code>www.digits.com</code> </p> </li> </ul> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/CreateIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentityPoolOutcome CreateIdentityPool(const Model::CreateIdentityPoolRequest& request) const;

        /**
         * <p>Creates a new identity pool. The identity pool is a store of user identity
         * information that is specific to your AWS account. The limit on identity pools is
         * 60 per account. The keys for <code>SupportedLoginProviders</code> are as
         * follows:</p> <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li>
         * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
         * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
         * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
         * <code>www.digits.com</code> </p> </li> </ul> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/CreateIdentityPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIdentityPoolOutcomeCallable CreateIdentityPoolCallable(const Model::CreateIdentityPoolRequest& request) const;

        /**
         * <p>Creates a new identity pool. The identity pool is a store of user identity
         * information that is specific to your AWS account. The limit on identity pools is
         * 60 per account. The keys for <code>SupportedLoginProviders</code> are as
         * follows:</p> <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li>
         * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
         * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
         * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
         * <code>www.digits.com</code> </p> </li> </ul> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/CreateIdentityPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIdentityPoolAsync(const Model::CreateIdentityPoolRequest& request, const CreateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes identities from an identity pool. You can specify a list of 1-60
         * identities that you want to delete.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentitiesOutcome DeleteIdentities(const Model::DeleteIdentitiesRequest& request) const;

        /**
         * <p>Deletes identities from an identity pool. You can specify a list of 1-60
         * identities that you want to delete.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentitiesOutcomeCallable DeleteIdentitiesCallable(const Model::DeleteIdentitiesRequest& request) const;

        /**
         * <p>Deletes identities from an identity pool. You can specify a list of 1-60
         * identities that you want to delete.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentitiesAsync(const Model::DeleteIdentitiesRequest& request, const DeleteIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user pool. Once a pool is deleted, users will not be able to
         * authenticate with the pool.</p> <p>You must use AWS Developer credentials to
         * call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityPoolOutcome DeleteIdentityPool(const Model::DeleteIdentityPoolRequest& request) const;

        /**
         * <p>Deletes a user pool. Once a pool is deleted, users will not be able to
         * authenticate with the pool.</p> <p>You must use AWS Developer credentials to
         * call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentityPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityPoolOutcomeCallable DeleteIdentityPoolCallable(const Model::DeleteIdentityPoolRequest& request) const;

        /**
         * <p>Deletes a user pool. Once a pool is deleted, users will not be able to
         * authenticate with the pool.</p> <p>You must use AWS Developer credentials to
         * call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentityPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityPoolAsync(const Model::DeleteIdentityPoolRequest& request, const DeleteIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata related to the given identity, including when the identity
         * was created and any associated linked logins.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityOutcome DescribeIdentity(const Model::DescribeIdentityRequest& request) const;

        /**
         * <p>Returns metadata related to the given identity, including when the identity
         * was created and any associated linked logins.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityOutcomeCallable DescribeIdentityCallable(const Model::DescribeIdentityRequest& request) const;

        /**
         * <p>Returns metadata related to the given identity, including when the identity
         * was created and any associated linked logins.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityAsync(const Model::DescribeIdentityRequest& request, const DescribeIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a particular identity pool, including the pool name, ID
         * description, creation date, and current number of users.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityPoolOutcome DescribeIdentityPool(const Model::DescribeIdentityPoolRequest& request) const;

        /**
         * <p>Gets details about a particular identity pool, including the pool name, ID
         * description, creation date, and current number of users.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentityPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityPoolOutcomeCallable DescribeIdentityPoolCallable(const Model::DescribeIdentityPoolRequest& request) const;

        /**
         * <p>Gets details about a particular identity pool, including the pool name, ID
         * description, creation date, and current number of users.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DescribeIdentityPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityPoolAsync(const Model::DescribeIdentityPoolRequest& request, const DescribeIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns credentials for the provided identity ID. Any provided logins will be
         * validated against supported login providers. If the token is for
         * cognito-identity.amazonaws.com, it will be passed through to AWS Security Token
         * Service with the appropriate role for the token.</p> <p>This is a public API.
         * You do not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetCredentialsForIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialsForIdentityOutcome GetCredentialsForIdentity(const Model::GetCredentialsForIdentityRequest& request) const;

        /**
         * <p>Returns credentials for the provided identity ID. Any provided logins will be
         * validated against supported login providers. If the token is for
         * cognito-identity.amazonaws.com, it will be passed through to AWS Security Token
         * Service with the appropriate role for the token.</p> <p>This is a public API.
         * You do not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetCredentialsForIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCredentialsForIdentityOutcomeCallable GetCredentialsForIdentityCallable(const Model::GetCredentialsForIdentityRequest& request) const;

        /**
         * <p>Returns credentials for the provided identity ID. Any provided logins will be
         * validated against supported login providers. If the token is for
         * cognito-identity.amazonaws.com, it will be passed through to AWS Security Token
         * Service with the appropriate role for the token.</p> <p>This is a public API.
         * You do not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetCredentialsForIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCredentialsForIdentityAsync(const Model::GetCredentialsForIdentityRequest& request, const GetCredentialsForIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates (or retrieves) a Cognito ID. Supplying multiple logins will create
         * an implicit linked account.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdOutcome GetId(const Model::GetIdRequest& request) const;

        /**
         * <p>Generates (or retrieves) a Cognito ID. Supplying multiple logins will create
         * an implicit linked account.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetId">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdOutcomeCallable GetIdCallable(const Model::GetIdRequest& request) const;

        /**
         * <p>Generates (or retrieves) a Cognito ID. Supplying multiple logins will create
         * an implicit linked account.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetId">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdAsync(const Model::GetIdRequest& request, const GetIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the roles for an identity pool.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetIdentityPoolRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityPoolRolesOutcome GetIdentityPoolRoles(const Model::GetIdentityPoolRolesRequest& request) const;

        /**
         * <p>Gets the roles for an identity pool.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetIdentityPoolRoles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityPoolRolesOutcomeCallable GetIdentityPoolRolesCallable(const Model::GetIdentityPoolRolesRequest& request) const;

        /**
         * <p>Gets the roles for an identity pool.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetIdentityPoolRoles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityPoolRolesAsync(const Model::GetIdentityPoolRolesRequest& request, const GetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an OpenID token, using a known Cognito ID. This known Cognito ID is
         * returned by <a>GetId</a>. You can optionally add additional logins for the
         * identity. Supplying multiple logins creates an implicit link.</p> <p>The OpenId
         * token is valid for 15 minutes.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpenIdTokenOutcome GetOpenIdToken(const Model::GetOpenIdTokenRequest& request) const;

        /**
         * <p>Gets an OpenID token, using a known Cognito ID. This known Cognito ID is
         * returned by <a>GetId</a>. You can optionally add additional logins for the
         * identity. Supplying multiple logins creates an implicit link.</p> <p>The OpenId
         * token is valid for 15 minutes.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpenIdTokenOutcomeCallable GetOpenIdTokenCallable(const Model::GetOpenIdTokenRequest& request) const;

        /**
         * <p>Gets an OpenID token, using a known Cognito ID. This known Cognito ID is
         * returned by <a>GetId</a>. You can optionally add additional logins for the
         * identity. Supplying multiple logins creates an implicit link.</p> <p>The OpenId
         * token is valid for 15 minutes.</p> <p>This is a public API. You do not need any
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpenIdTokenAsync(const Model::GetOpenIdTokenRequest& request, const GetOpenIdTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID
         * Connect token for a user authenticated by your backend authentication process.
         * Supplying multiple logins will create an implicit linked account. You can only
         * specify one developer provider as part of the <code>Logins</code> map, which is
         * linked to the identity pool. The developer provider is the "domain" by which
         * Cognito will refer to your users.</p> <p>You can use
         * <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to
         * link new logins (that is, user credentials issued by a public provider or
         * developer provider) to an existing identity. When you want to create a new
         * identity, the <code>IdentityId</code> should be null. When you want to associate
         * a new login with an existing authenticated/unauthenticated identity, you can do
         * so by providing the existing <code>IdentityId</code>. This API will create the
         * identity in the specified <code>IdentityPoolId</code>.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdTokenForDeveloperIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOpenIdTokenForDeveloperIdentityOutcome GetOpenIdTokenForDeveloperIdentity(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;

        /**
         * <p>Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID
         * Connect token for a user authenticated by your backend authentication process.
         * Supplying multiple logins will create an implicit linked account. You can only
         * specify one developer provider as part of the <code>Logins</code> map, which is
         * linked to the identity pool. The developer provider is the "domain" by which
         * Cognito will refer to your users.</p> <p>You can use
         * <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to
         * link new logins (that is, user credentials issued by a public provider or
         * developer provider) to an existing identity. When you want to create a new
         * identity, the <code>IdentityId</code> should be null. When you want to associate
         * a new login with an existing authenticated/unauthenticated identity, you can do
         * so by providing the existing <code>IdentityId</code>. This API will create the
         * identity in the specified <code>IdentityPoolId</code>.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdTokenForDeveloperIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOpenIdTokenForDeveloperIdentityOutcomeCallable GetOpenIdTokenForDeveloperIdentityCallable(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;

        /**
         * <p>Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID
         * Connect token for a user authenticated by your backend authentication process.
         * Supplying multiple logins will create an implicit linked account. You can only
         * specify one developer provider as part of the <code>Logins</code> map, which is
         * linked to the identity pool. The developer provider is the "domain" by which
         * Cognito will refer to your users.</p> <p>You can use
         * <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to
         * link new logins (that is, user credentials issued by a public provider or
         * developer provider) to an existing identity. When you want to create a new
         * identity, the <code>IdentityId</code> should be null. When you want to associate
         * a new login with an existing authenticated/unauthenticated identity, you can do
         * so by providing the existing <code>IdentityId</code>. This API will create the
         * identity in the specified <code>IdentityPoolId</code>.</p> <p>You must use AWS
         * Developer credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetOpenIdTokenForDeveloperIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOpenIdTokenForDeveloperIdentityAsync(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request, const GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the identities in a pool.</p> <p>You must use AWS Developer credentials
         * to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentitiesOutcome ListIdentities(const Model::ListIdentitiesRequest& request) const;

        /**
         * <p>Lists the identities in a pool.</p> <p>You must use AWS Developer credentials
         * to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentitiesOutcomeCallable ListIdentitiesCallable(const Model::ListIdentitiesRequest& request) const;

        /**
         * <p>Lists the identities in a pool.</p> <p>You must use AWS Developer credentials
         * to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentitiesAsync(const Model::ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the Cognito identity pools registered for your account.</p>
         * <p>You must use AWS Developer credentials to call this API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentityPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPoolsOutcome ListIdentityPools(const Model::ListIdentityPoolsRequest& request) const;

        /**
         * <p>Lists all of the Cognito identity pools registered for your account.</p>
         * <p>You must use AWS Developer credentials to call this API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentityPools">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityPoolsOutcomeCallable ListIdentityPoolsCallable(const Model::ListIdentityPoolsRequest& request) const;

        /**
         * <p>Lists all of the Cognito identity pools registered for your account.</p>
         * <p>You must use AWS Developer credentials to call this API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentityPools">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityPoolsAsync(const Model::ListIdentityPoolsRequest& request, const ListIdentityPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>IdentityID</code> associated with a
         * <code>DeveloperUserIdentifier</code> or the list of
         * <code>DeveloperUserIdentifier</code>s associated with an <code>IdentityId</code>
         * for an existing identity. Either <code>IdentityID</code> or
         * <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of
         * these values, the other value will be searched in the database and returned as a
         * part of the response. If you supply both, <code>DeveloperUserIdentifier</code>
         * will be matched against <code>IdentityID</code>. If the values are verified
         * against the database, the response returns both values and is the same as the
         * request. Otherwise a <code>ResourceConflictException</code> is thrown.</p>
         * <p>You must use AWS Developer credentials to call this API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/LookupDeveloperIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::LookupDeveloperIdentityOutcome LookupDeveloperIdentity(const Model::LookupDeveloperIdentityRequest& request) const;

        /**
         * <p>Retrieves the <code>IdentityID</code> associated with a
         * <code>DeveloperUserIdentifier</code> or the list of
         * <code>DeveloperUserIdentifier</code>s associated with an <code>IdentityId</code>
         * for an existing identity. Either <code>IdentityID</code> or
         * <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of
         * these values, the other value will be searched in the database and returned as a
         * part of the response. If you supply both, <code>DeveloperUserIdentifier</code>
         * will be matched against <code>IdentityID</code>. If the values are verified
         * against the database, the response returns both values and is the same as the
         * request. Otherwise a <code>ResourceConflictException</code> is thrown.</p>
         * <p>You must use AWS Developer credentials to call this API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/LookupDeveloperIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LookupDeveloperIdentityOutcomeCallable LookupDeveloperIdentityCallable(const Model::LookupDeveloperIdentityRequest& request) const;

        /**
         * <p>Retrieves the <code>IdentityID</code> associated with a
         * <code>DeveloperUserIdentifier</code> or the list of
         * <code>DeveloperUserIdentifier</code>s associated with an <code>IdentityId</code>
         * for an existing identity. Either <code>IdentityID</code> or
         * <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of
         * these values, the other value will be searched in the database and returned as a
         * part of the response. If you supply both, <code>DeveloperUserIdentifier</code>
         * will be matched against <code>IdentityID</code>. If the values are verified
         * against the database, the response returns both values and is the same as the
         * request. Otherwise a <code>ResourceConflictException</code> is thrown.</p>
         * <p>You must use AWS Developer credentials to call this API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/LookupDeveloperIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LookupDeveloperIdentityAsync(const Model::LookupDeveloperIdentityRequest& request, const LookupDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Merges two users having different <code>IdentityId</code>s, existing in the
         * same identity pool, and identified by the same developer provider. You can use
         * this action to request that discrete users be merged and identified as a single
         * user in the Cognito environment. Cognito associates the given source user
         * (<code>SourceUserIdentifier</code>) with the <code>IdentityId</code> of the
         * <code>DestinationUserIdentifier</code>. Only developer-authenticated users can
         * be merged. If the users to be merged are associated with the same public
         * provider, but as two different users, an exception will be thrown.</p> <p>You
         * must use AWS Developer credentials to call this API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/MergeDeveloperIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeDeveloperIdentitiesOutcome MergeDeveloperIdentities(const Model::MergeDeveloperIdentitiesRequest& request) const;

        /**
         * <p>Merges two users having different <code>IdentityId</code>s, existing in the
         * same identity pool, and identified by the same developer provider. You can use
         * this action to request that discrete users be merged and identified as a single
         * user in the Cognito environment. Cognito associates the given source user
         * (<code>SourceUserIdentifier</code>) with the <code>IdentityId</code> of the
         * <code>DestinationUserIdentifier</code>. Only developer-authenticated users can
         * be merged. If the users to be merged are associated with the same public
         * provider, but as two different users, an exception will be thrown.</p> <p>You
         * must use AWS Developer credentials to call this API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/MergeDeveloperIdentities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MergeDeveloperIdentitiesOutcomeCallable MergeDeveloperIdentitiesCallable(const Model::MergeDeveloperIdentitiesRequest& request) const;

        /**
         * <p>Merges two users having different <code>IdentityId</code>s, existing in the
         * same identity pool, and identified by the same developer provider. You can use
         * this action to request that discrete users be merged and identified as a single
         * user in the Cognito environment. Cognito associates the given source user
         * (<code>SourceUserIdentifier</code>) with the <code>IdentityId</code> of the
         * <code>DestinationUserIdentifier</code>. Only developer-authenticated users can
         * be merged. If the users to be merged are associated with the same public
         * provider, but as two different users, an exception will be thrown.</p> <p>You
         * must use AWS Developer credentials to call this API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/MergeDeveloperIdentities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MergeDeveloperIdentitiesAsync(const Model::MergeDeveloperIdentitiesRequest& request, const MergeDeveloperIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the roles for an identity pool. These roles are used when making calls
         * to <a>GetCredentialsForIdentity</a> action.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/SetIdentityPoolRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityPoolRolesOutcome SetIdentityPoolRoles(const Model::SetIdentityPoolRolesRequest& request) const;

        /**
         * <p>Sets the roles for an identity pool. These roles are used when making calls
         * to <a>GetCredentialsForIdentity</a> action.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/SetIdentityPoolRoles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityPoolRolesOutcomeCallable SetIdentityPoolRolesCallable(const Model::SetIdentityPoolRolesRequest& request) const;

        /**
         * <p>Sets the roles for an identity pool. These roles are used when making calls
         * to <a>GetCredentialsForIdentity</a> action.</p> <p>You must use AWS Developer
         * credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/SetIdentityPoolRoles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityPoolRolesAsync(const Model::SetIdentityPoolRolesRequest& request, const SetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity.
         * Unlinked developer users will be considered new identities next time they are
         * seen. If, for a given Cognito identity, you remove all federated identities as
         * well as the developer user identifier, the Cognito identity becomes
         * inaccessible.</p> <p>You must use AWS Developer credentials to call this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkDeveloperIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::UnlinkDeveloperIdentityOutcome UnlinkDeveloperIdentity(const Model::UnlinkDeveloperIdentityRequest& request) const;

        /**
         * <p>Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity.
         * Unlinked developer users will be considered new identities next time they are
         * seen. If, for a given Cognito identity, you remove all federated identities as
         * well as the developer user identifier, the Cognito identity becomes
         * inaccessible.</p> <p>You must use AWS Developer credentials to call this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkDeveloperIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnlinkDeveloperIdentityOutcomeCallable UnlinkDeveloperIdentityCallable(const Model::UnlinkDeveloperIdentityRequest& request) const;

        /**
         * <p>Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity.
         * Unlinked developer users will be considered new identities next time they are
         * seen. If, for a given Cognito identity, you remove all federated identities as
         * well as the developer user identifier, the Cognito identity becomes
         * inaccessible.</p> <p>You must use AWS Developer credentials to call this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkDeveloperIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnlinkDeveloperIdentityAsync(const Model::UnlinkDeveloperIdentityRequest& request, const UnlinkDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unlinks a federated identity from an existing account. Unlinked logins will
         * be considered new identities next time they are seen. Removing the last linked
         * login will make this identity inaccessible.</p> <p>This is a public API. You do
         * not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::UnlinkIdentityOutcome UnlinkIdentity(const Model::UnlinkIdentityRequest& request) const;

        /**
         * <p>Unlinks a federated identity from an existing account. Unlinked logins will
         * be considered new identities next time they are seen. Removing the last linked
         * login will make this identity inaccessible.</p> <p>This is a public API. You do
         * not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnlinkIdentityOutcomeCallable UnlinkIdentityCallable(const Model::UnlinkIdentityRequest& request) const;

        /**
         * <p>Unlinks a federated identity from an existing account. Unlinked logins will
         * be considered new identities next time they are seen. Removing the last linked
         * login will make this identity inaccessible.</p> <p>This is a public API. You do
         * not need any credentials to call this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnlinkIdentityAsync(const Model::UnlinkIdentityRequest& request, const UnlinkIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user pool.</p> <p>You must use AWS Developer credentials to call
         * this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UpdateIdentityPool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityPoolOutcome UpdateIdentityPool(const Model::UpdateIdentityPoolRequest& request) const;

        /**
         * <p>Updates a user pool.</p> <p>You must use AWS Developer credentials to call
         * this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UpdateIdentityPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIdentityPoolOutcomeCallable UpdateIdentityPoolCallable(const Model::UpdateIdentityPoolRequest& request) const;

        /**
         * <p>Updates a user pool.</p> <p>You must use AWS Developer credentials to call
         * this API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UpdateIdentityPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIdentityPoolAsync(const Model::UpdateIdentityPoolRequest& request, const UpdateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateIdentityPoolAsyncHelper(const Model::CreateIdentityPoolRequest& request, const CreateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIdentitiesAsyncHelper(const Model::DeleteIdentitiesRequest& request, const DeleteIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIdentityPoolAsyncHelper(const Model::DeleteIdentityPoolRequest& request, const DeleteIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdentityAsyncHelper(const Model::DescribeIdentityRequest& request, const DescribeIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdentityPoolAsyncHelper(const Model::DescribeIdentityPoolRequest& request, const DescribeIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCredentialsForIdentityAsyncHelper(const Model::GetCredentialsForIdentityRequest& request, const GetCredentialsForIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdAsyncHelper(const Model::GetIdRequest& request, const GetIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityPoolRolesAsyncHelper(const Model::GetIdentityPoolRolesRequest& request, const GetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOpenIdTokenAsyncHelper(const Model::GetOpenIdTokenRequest& request, const GetOpenIdTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOpenIdTokenForDeveloperIdentityAsyncHelper(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request, const GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentitiesAsyncHelper(const Model::ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentityPoolsAsyncHelper(const Model::ListIdentityPoolsRequest& request, const ListIdentityPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LookupDeveloperIdentityAsyncHelper(const Model::LookupDeveloperIdentityRequest& request, const LookupDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MergeDeveloperIdentitiesAsyncHelper(const Model::MergeDeveloperIdentitiesRequest& request, const MergeDeveloperIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIdentityPoolRolesAsyncHelper(const Model::SetIdentityPoolRolesRequest& request, const SetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnlinkDeveloperIdentityAsyncHelper(const Model::UnlinkDeveloperIdentityRequest& request, const UnlinkDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnlinkIdentityAsyncHelper(const Model::UnlinkIdentityRequest& request, const UnlinkIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIdentityPoolAsyncHelper(const Model::UpdateIdentityPoolRequest& request, const UpdateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CognitoIdentity
} // namespace Aws
