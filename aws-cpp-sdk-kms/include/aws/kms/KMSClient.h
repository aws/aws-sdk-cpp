/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kms/KMSServiceClientModel.h>

namespace Aws
{
namespace KMS
{
  /**
   * <fullname>Key Management Service</fullname> <p>Key Management Service (KMS) is
   * an encryption and key management web service. This guide describes the KMS
   * operations that you can call programmatically. For general information about
   * KMS, see the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/">
   * <i>Key Management Service Developer Guide</i> </a>.</p>  <p>KMS has
   * replaced the term <i>customer master key (CMK)</i> with <i>KMS key</i> and
   * <i>KMS key</i>. The concept has not changed. To prevent breaking changes, KMS is
   * keeping some variations of this term.</p> <p>Amazon Web Services provides SDKs
   * that consist of libraries and sample code for various programming languages and
   * platforms (Java, Ruby, .Net, macOS, Android, etc.). The SDKs provide a
   * convenient way to create programmatic access to KMS and other Amazon Web
   * Services services. For example, the SDKs take care of tasks such as signing
   * requests (see below), managing errors, and retrying requests automatically. For
   * more information about the Amazon Web Services SDKs, including how to download
   * and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon
   * Web Services</a>.</p>  <p>We recommend that you use the Amazon Web
   * Services SDKs to make programmatic API calls to KMS.</p> <p>If you need to use
   * FIPS 140-2 validated cryptographic modules when communicating with Amazon Web
   * Services, use the FIPS endpoint in your preferred Amazon Web Services Region.
   * For more information about the available FIPS endpoints, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">Service
   * endpoints</a> in the Key Management Service topic of the <i>Amazon Web Services
   * General Reference</i>.</p> <p>All KMS API calls must be signed and be
   * transmitted using Transport Layer Security (TLS). KMS recommends you always use
   * the latest supported TLS version. Clients must also support cipher suites with
   * Perfect Forward Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic
   * Curve Ephemeral Diffie-Hellman (ECDHE). Most modern systems such as Java 7 and
   * later support these modes.</p> <p> <b>Signing Requests</b> </p> <p>Requests must
   * be signed by using an access key ID and a secret access key. We strongly
   * recommend that you <i>do not</i> use your Amazon Web Services account (root)
   * access key ID and secret access key for everyday work with KMS. Instead, use the
   * access key ID and secret access key for an IAM user. You can also use the Amazon
   * Web Services Security Token Service to generate temporary security credentials
   * that you can use to sign requests.</p> <p>All KMS operations require <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4</a>.</p> <p> <b>Logging API Requests</b> </p> <p>KMS supports
   * CloudTrail, a service that logs Amazon Web Services API calls and related events
   * for your Amazon Web Services account and delivers them to an Amazon S3 bucket
   * that you specify. By using the information collected by CloudTrail, you can
   * determine what requests were made to KMS, who made the request, when it was
   * made, and so on. To learn more about CloudTrail, including how to turn it on and
   * find your log files, see the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/">CloudTrail
   * User Guide</a>.</p> <p> <b>Additional Resources</b> </p> <p>For more information
   * about credentials and request signing, see the following:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">Amazon
   * Web Services Security Credentials</a> - This topic provides general information
   * about the types of credentials used to access Amazon Web Services.</p> </li>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary
   * Security Credentials</a> - This section of the <i>IAM User Guide</i> describes
   * how to create and use temporary security credentials.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a> - This set of topics walks you through the process
   * of signing a request using an access key ID and a secret access key.</p> </li>
   * </ul> <p> <b>Commonly Used API Operations</b> </p> <p>Of the API operations
   * discussed in this guide, the following will prove the most useful for most
   * applications. You will likely perform operations other than these, such as
   * creating keys and assigning policies, by using the console.</p> <ul> <li> <p>
   * <a>Encrypt</a> </p> </li> <li> <p> <a>Decrypt</a> </p> </li> <li> <p>
   * <a>GenerateDataKey</a> </p> </li> <li> <p>
   * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> </ul>
   */
  class AWS_KMS_API KMSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KMSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KMSClient(const Aws::KMS::KMSClientConfiguration& clientConfiguration = Aws::KMS::KMSClientConfiguration(),
                  std::shared_ptr<KMSEndpointProviderBase> endpointProvider = Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KMSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<KMSEndpointProviderBase> endpointProvider = Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::KMS::KMSClientConfiguration& clientConfiguration = Aws::KMS::KMSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<KMSEndpointProviderBase> endpointProvider = Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::KMS::KMSClientConfiguration& clientConfiguration = Aws::KMS::KMSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KMSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KMSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KMSClient();

        /**
         * <p>Cancels the deletion of a KMS key. When this operation succeeds, the key
         * state of the KMS key is <code>Disabled</code>. To enable the KMS key, use
         * <a>EnableKey</a>. </p> <p>For more information about scheduling and canceling
         * deletion of a KMS key, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The
         * KMS key that you use for this operation must be in a compatible key state. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CancelKeyDeletion</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>ScheduleKeyDeletion</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/CancelKeyDeletion">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelKeyDeletionOutcome CancelKeyDeletion(const Model::CancelKeyDeletionRequest& request) const;

        /**
         * A Callable wrapper for CancelKeyDeletion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelKeyDeletionOutcomeCallable CancelKeyDeletionCallable(const Model::CancelKeyDeletionRequest& request) const;

        /**
         * An Async wrapper for CancelKeyDeletion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelKeyDeletionAsync(const Model::CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Connects or reconnects a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a> to its backing key store. For an CloudHSM key store,
         * <code>ConnectCustomKeyStore</code> connects the key store to its associated
         * CloudHSM cluster. For an external key store, <code>ConnectCustomKeyStore</code>
         * connects the key store to the external key store proxy that communicates with
         * your external key manager.</p> <p>The custom key store must be connected before
         * you can create KMS keys in the key store or use the KMS keys it contains. You
         * can disconnect and reconnect a custom key store at any time.</p> <p>The
         * connection process for a custom key store can take an extended amount of time to
         * complete. This operation starts the connection process, but it does not wait for
         * it to complete. When it succeeds, this operation quickly returns an HTTP 200
         * response and a JSON object with no properties. However, this response does not
         * indicate that the custom key store is connected. To get the connection state of
         * the custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p> <p>
         * This operation is part of the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key stores</a> feature in KMS, which combines the convenience and extensive
         * integration of KMS with the isolation and control of a key store that you own
         * and manage.</p> <p>The <code>ConnectCustomKeyStore</code> operation might fail
         * for various reasons. To find the reason, use the <a>DescribeCustomKeyStores</a>
         * operation and see the <code>ConnectionErrorCode</code> in the response. For help
         * interpreting the <code>ConnectionErrorCode</code>, see
         * <a>CustomKeyStoresListEntry</a>.</p> <p>To fix the failure, use the
         * <a>DisconnectCustomKeyStore</a> operation to disconnect the custom key store,
         * correct the error, use the <a>UpdateCustomKeyStore</a> operation if necessary,
         * and then use <code>ConnectCustomKeyStore</code> again.</p> <p> <b>CloudHSM key
         * store</b> </p> <p>During the connection process for an CloudHSM key store, KMS
         * finds the CloudHSM cluster that is associated with the custom key store, creates
         * the connection infrastructure, connects to the cluster, logs into the CloudHSM
         * client as the <code>kmsuser</code> CU, and rotates its password.</p> <p>To
         * connect an CloudHSM key store, its associated CloudHSM cluster must have at
         * least one active HSM. To get the number of active HSMs in a cluster, use the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
         * operation. To add HSMs to the cluster, use the <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_CreateHsm.html">CreateHsm</a>
         * operation. Also, the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
         * <code>kmsuser</code> crypto user</a> (CU) must not be logged into the cluster.
         * This prevents KMS from using this account to log in.</p> <p>If you are having
         * trouble connecting or disconnecting a CloudHSM key store, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
         * an CloudHSM key store</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p> <b>External key store</b> </p> <p>When you connect an
         * external key store that uses public endpoint connectivity, KMS tests its ability
         * to communicate with your external key manager by sending a request via the
         * external key store proxy.</p> <p>When you connect to an external key store that
         * uses VPC endpoint service connectivity, KMS establishes the networking elements
         * that it needs to communicate with your external key manager via the external key
         * store proxy. This includes creating an interface endpoint to the VPC endpoint
         * service and a private hosted zone for traffic between KMS and the VPC endpoint
         * service.</p> <p>To connect an external key store, KMS must be able to connect to
         * the external key store proxy, the external key store proxy must be able to
         * communicate with your external key manager, and the external key manager must be
         * available for cryptographic operations.</p> <p>If you are having trouble
         * connecting or disconnecting an external key store, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/xks-troubleshooting.html">Troubleshooting
         * an external key store</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p> <b>Cross-account use</b>: No. You cannot perform this
         * operation on a custom key store in a different Amazon Web Services account.</p>
         * <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ConnectCustomKeyStore</a>
         * (IAM policy)</p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateCustomKeyStore</a> </p> </li> <li> <p> <a>DeleteCustomKeyStore</a> </p>
         * </li> <li> <p> <a>DescribeCustomKeyStores</a> </p> </li> <li> <p>
         * <a>DisconnectCustomKeyStore</a> </p> </li> <li> <p> <a>UpdateCustomKeyStore</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ConnectCustomKeyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::ConnectCustomKeyStoreOutcome ConnectCustomKeyStore(const Model::ConnectCustomKeyStoreRequest& request) const;

        /**
         * A Callable wrapper for ConnectCustomKeyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConnectCustomKeyStoreOutcomeCallable ConnectCustomKeyStoreCallable(const Model::ConnectCustomKeyStoreRequest& request) const;

        /**
         * An Async wrapper for ConnectCustomKeyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConnectCustomKeyStoreAsync(const Model::ConnectCustomKeyStoreRequest& request, const ConnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a friendly name for a KMS key. </p>  <p>Adding, deleting, or
         * updating an alias can allow or deny permission to the KMS key. For details, see
         * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC
         * for KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
         * <p>You can use an alias to identify a KMS key in the KMS console, in the
         * <a>DescribeKey</a> operation and in <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
         * operations</a>, such as <a>Encrypt</a> and <a>GenerateDataKey</a>. You can also
         * change the KMS key that's associated with the alias (<a>UpdateAlias</a>) or
         * delete the alias (<a>DeleteAlias</a>) at any time. These operations don't affect
         * the underlying KMS key. </p> <p>You can associate the alias with any customer
         * managed key in the same Amazon Web Services Region. Each alias is associated
         * with only one KMS key at a time, but a KMS key can have multiple aliases. A
         * valid KMS key is required. You can't create an alias without a KMS key.</p>
         * <p>The alias must be unique in the account and Region, but you can have aliases
         * with the same name in different Regions. For detailed information about aliases,
         * see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html">Using
         * aliases</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>This
         * operation does not return a response. To get the alias that you created, use the
         * <a>ListAliases</a> operation.</p> <p>The KMS key that you use for this operation
         * must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on an alias
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateAlias</a>
         * on the alias (IAM policy).</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateAlias</a>
         * on the KMS key (key policy).</p> </li> </ul> <p>For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
         * access to aliases</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Related operations:</b> </p> <ul> <li> <p> <a>DeleteAlias</a> </p> </li>
         * <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/CreateAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a> backed by a key store that you own and manage. When you use a KMS
         * key in a custom key store for a cryptographic operation, the cryptographic
         * operation is actually performed in your key store using your keys. KMS supports
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-cloudhsm.html">CloudHSM
         * key stores</a> backed by an <a
         * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/clusters.html">CloudHSM
         * cluster</a> and <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html">external
         * key stores</a> backed by an external key store proxy and external key manager
         * outside of Amazon Web Services.</p> <p> This operation is part of the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key stores</a> feature in KMS, which combines the convenience and extensive
         * integration of KMS with the isolation and control of a key store that you own
         * and manage.</p> <p>Before you create the custom key store, the required elements
         * must be in place and operational. We recommend that you use the test tools that
         * KMS provides to verify the configuration your external key store proxy. For
         * details about the required elements and verification tests, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">Assemble
         * the prerequisites (for CloudHSM key stores)</a> or <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">Assemble
         * the prerequisites (for external key stores)</a> in the <i>Key Management Service
         * Developer Guide</i>.</p> <p>To create a custom key store, use the following
         * parameters.</p> <ul> <li> <p>To create an CloudHSM key store, specify the
         * <code>CustomKeyStoreName</code>, <code>CloudHsmClusterId</code>,
         * <code>KeyStorePassword</code>, and <code>TrustAnchorCertificate</code>. The
         * <code>CustomKeyStoreType</code> parameter is optional for CloudHSM key stores.
         * If you include it, set it to the default value, <code>AWS_CLOUDHSM</code>. For
         * help with failures, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
         * an CloudHSM key store</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> </li> <li> <p>To create an external key store, specify the
         * <code>CustomKeyStoreName</code> and a <code>CustomKeyStoreType</code> of
         * <code>EXTERNAL_KEY_STORE</code>. Also, specify values for
         * <code>XksProxyConnectivity</code>,
         * <code>XksProxyAuthenticationCredential</code>, <code>XksProxyUriEndpoint</code>,
         * and <code>XksProxyUriPath</code>. If your <code>XksProxyConnectivity</code>
         * value is <code>VPC_ENDPOINT_SERVICE</code>, specify the
         * <code>XksProxyVpcEndpointServiceName</code> parameter. For help with failures,
         * see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/xks-troubleshooting.html">Troubleshooting
         * an external key store</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> </li> </ul>  <p>For external key stores:</p> <p>Some
         * external key managers provide a simpler method for creating an external key
         * store. For details, see your external key manager documentation.</p> <p>When
         * creating an external key store in the KMS console, you can upload a JSON-based
         * proxy configuration file with the desired values. You cannot use a proxy
         * configuration with the <code>CreateCustomKeyStore</code> operation. However, you
         * can use the values in the file to help you determine the correct values for the
         * <code>CreateCustomKeyStore</code> parameters.</p>  <p>When the operation
         * completes successfully, it returns the ID of the new custom key store. Before
         * you can use your new custom key store, you need to use the
         * <a>ConnectCustomKeyStore</a> operation to connect a new CloudHSM key store to
         * its CloudHSM cluster, or to connect a new external key store to the external key
         * store proxy for your external key manager. Even if you are not going to use your
         * custom key store immediately, you might want to connect it to verify that all
         * settings are correct and then disconnect it until you are ready to use it.</p>
         * <p>For help with failures, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
         * a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a custom
         * key store in a different Amazon Web Services account.</p> <p> <b>Required
         * permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateCustomKeyStore</a>
         * (IAM policy).</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ConnectCustomKeyStore</a> </p> </li> <li> <p> <a>DeleteCustomKeyStore</a>
         * </p> </li> <li> <p> <a>DescribeCustomKeyStores</a> </p> </li> <li> <p>
         * <a>DisconnectCustomKeyStore</a> </p> </li> <li> <p> <a>UpdateCustomKeyStore</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/CreateCustomKeyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomKeyStoreOutcome CreateCustomKeyStore(const Model::CreateCustomKeyStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomKeyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomKeyStoreOutcomeCallable CreateCustomKeyStoreCallable(const Model::CreateCustomKeyStoreRequest& request) const;

        /**
         * An Async wrapper for CreateCustomKeyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomKeyStoreAsync(const Model::CreateCustomKeyStoreRequest& request, const CreateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a grant to a KMS key. </p> <p>A <i>grant</i> is a policy instrument that
         * allows Amazon Web Services principals to use KMS keys in cryptographic
         * operations. It also can allow them to view a KMS key (<a>DescribeKey</a>) and
         * create and manage grants. When authorizing access to a KMS key, grants are
         * considered along with key policies and IAM policies. Grants are often used for
         * temporary permissions because you can create one, use its permissions, and
         * delete it without changing your key policies or IAM policies. </p> <p>For
         * detailed information about grants, including grant terminology, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants
         * in KMS</a> in the <i> <i>Key Management Service Developer Guide</i> </i>. For
         * examples of working with grants in several programming languages, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-grants.html">Programming
         * grants</a>. </p> <p>The <code>CreateGrant</code> operation returns a
         * <code>GrantToken</code> and a <code>GrantId</code>.</p> <ul> <li> <p>When you
         * create, retire, or revoke a grant, there might be a brief delay, usually less
         * than five minutes, until the grant is available throughout KMS. This state is
         * known as <i>eventual consistency</i>. Once the grant has achieved eventual
         * consistency, the grantee principal can use the permissions in the grant without
         * identifying the grant. </p> <p>However, to use the permissions in the grant
         * immediately, use the <code>GrantToken</code> that <code>CreateGrant</code>
         * returns. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using
         * a grant token</a> in the <i> <i>Key Management Service Developer Guide</i>
         * </i>.</p> </li> <li> <p>The <code>CreateGrant</code> operation also returns a
         * <code>GrantId</code>. You can use the <code>GrantId</code> and a key identifier
         * to identify the grant in the <a>RetireGrant</a> and <a>RevokeGrant</a>
         * operations. To find the grant ID, use the <a>ListGrants</a> or
         * <a>ListRetirableGrants</a> operations.</p> </li> </ul> <p>The KMS key that you
         * use for this operation must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation on a KMS key in a
         * different Amazon Web Services account, specify the key ARN in the value of the
         * <code>KeyId</code> parameter. </p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateGrant</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ListGrants</a> </p> </li> <li> <p> <a>ListRetirableGrants</a> </p> </li> <li>
         * <p> <a>RetireGrant</a> </p> </li> <li> <p> <a>RevokeGrant</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/CreateGrant">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateGrantOutcome CreateGrant(const Model::CreateGrantRequest& request) const;

        /**
         * A Callable wrapper for CreateGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGrantOutcomeCallable CreateGrantCallable(const Model::CreateGrantRequest& request) const;

        /**
         * An Async wrapper for CreateGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGrantAsync(const Model::CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a unique customer managed <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms-keys">KMS
         * key</a> in your Amazon Web Services account and Region. You can use a KMS key in
         * cryptographic operations, such as encryption and signing. Some Amazon Web
         * Services services let you use KMS keys that you create and manage to protect
         * your service resources.</p> <p>A KMS key is a logical representation of a
         * cryptographic key. In addition to the key material used in cryptographic
         * operations, a KMS key includes metadata, such as the key ID, key policy,
         * creation date, description, and key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
         * keys</a> in the <i>Key Management Service Developer Guide</i> </p> <p>Use the
         * parameters of <code>CreateKey</code> to specify the type of KMS key, the source
         * of its key material, its key policy, description, tags, and other
         * properties.</p>  <p>KMS has replaced the term <i>customer master key
         * (CMK)</i> with <i>KMS key</i> and <i>KMS key</i>. The concept has not changed.
         * To prevent breaking changes, KMS is keeping some variations of this term.</p>
         *  <p>To create different types of KMS keys, use the following
         * guidance:</p> <dl> <dt>Symmetric encryption KMS key</dt> <dd> <p>By default,
         * <code>CreateKey</code> creates a symmetric encryption KMS key with key material
         * that KMS generates. This is the basic and most widely used type of KMS key, and
         * provides the best performance.</p> <p>To create a symmetric encryption KMS key,
         * you don't need to specify any parameters. The default value for
         * <code>KeySpec</code>, <code>SYMMETRIC_DEFAULT</code>, the default value for
         * <code>KeyUsage</code>, <code>ENCRYPT_DECRYPT</code>, and the default value for
         * <code>Origin</code>, <code>AWS_KMS</code>, create a symmetric encryption KMS key
         * with KMS key material.</p> <p>If you need a key for basic encryption and
         * decryption or you are creating a KMS key to protect your resources in an Amazon
         * Web Services service, create a symmetric encryption KMS key. The key material in
         * a symmetric encryption key never leaves KMS unencrypted. You can use a symmetric
         * encryption KMS key to encrypt and decrypt data up to 4,096 bytes, but they are
         * typically used to generate data keys and data keys pairs. For details, see
         * <a>GenerateDataKey</a> and <a>GenerateDataKeyPair</a>.</p> <p> </p> </dd>
         * <dt>Asymmetric KMS keys</dt> <dd> <p>To create an asymmetric KMS key, use the
         * <code>KeySpec</code> parameter to specify the type of key material in the KMS
         * key. Then, use the <code>KeyUsage</code> parameter to determine whether the KMS
         * key will be used to encrypt and decrypt or sign and verify. You can't change
         * these properties after the KMS key is created.</p> <p>Asymmetric KMS keys
         * contain an RSA key pair, Elliptic Curve (ECC) key pair, or an SM2 key pair
         * (China Regions only). The private key in an asymmetric KMS key never leaves KMS
         * unencrypted. However, you can use the <a>GetPublicKey</a> operation to download
         * the public key so it can be used outside of KMS. KMS keys with RSA or SM2 key
         * pairs can be used to encrypt or decrypt data or sign and verify messages (but
         * not both). KMS keys with ECC key pairs can be used only to sign and verify
         * messages. For information about asymmetric KMS keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Asymmetric
         * KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p> <p> </p>
         * </dd> <dt>HMAC KMS key</dt> <dd> <p>To create an HMAC KMS key, set the
         * <code>KeySpec</code> parameter to a key spec value for HMAC KMS keys. Then set
         * the <code>KeyUsage</code> parameter to <code>GENERATE_VERIFY_MAC</code>. You
         * must set the key usage even though <code>GENERATE_VERIFY_MAC</code> is the only
         * valid key usage value for HMAC KMS keys. You can't change these properties after
         * the KMS key is created.</p> <p>HMAC KMS keys are symmetric keys that never leave
         * KMS unencrypted. You can use HMAC keys to generate (<a>GenerateMac</a>) and
         * verify (<a>VerifyMac</a>) HMAC codes for messages up to 4096 bytes.</p> <p>HMAC
         * KMS keys are not supported in all Amazon Web Services Regions. If you try to
         * create an HMAC KMS key in an Amazon Web Services Region in which HMAC keys are
         * not supported, the <code>CreateKey</code> operation returns an
         * <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC
         * KMS keys are supported, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
         * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> <p> </p>
         * </dd> <dt>Multi-Region primary keys</dt> <dt>Imported key material</dt> <dd>
         * <p>To create a multi-Region <i>primary key</i> in the local Amazon Web Services
         * Region, use the <code>MultiRegion</code> parameter with a value of
         * <code>True</code>. To create a multi-Region <i>replica key</i>, that is, a KMS
         * key with the same key ID and key material as a primary key, but in a different
         * Amazon Web Services Region, use the <a>ReplicateKey</a> operation. To change a
         * replica key to a primary key, and its primary key to a replica key, use the
         * <a>UpdatePrimaryRegion</a> operation.</p> <p>You can create multi-Region KMS
         * keys for all supported KMS key types: symmetric encryption KMS keys, HMAC KMS
         * keys, asymmetric encryption KMS keys, and asymmetric signing KMS keys. You can
         * also create multi-Region keys with imported key material. However, you can't
         * create multi-Region keys in a custom key store.</p> <p>This operation supports
         * <i>multi-Region keys</i>, an KMS feature that lets you create multiple
         * interoperable KMS keys in different Amazon Web Services Regions. Because these
         * KMS keys have the same key ID, key material, and other metadata, you can use
         * them interchangeably to encrypt data in one Amazon Web Services Region and
         * decrypt it in a different Amazon Web Services Region without re-encrypting the
         * data or making a cross-Region call. For more information about multi-Region
         * keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
         * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>
         * </p> </dd> <dd> <p>To import your own key material into a KMS key, begin by
         * creating a symmetric encryption KMS key with no key material. To do this, use
         * the <code>Origin</code> parameter of <code>CreateKey</code> with a value of
         * <code>EXTERNAL</code>. Next, use <a>GetParametersForImport</a> operation to get
         * a public key and import token, and use the public key to encrypt your key
         * material. Then, use <a>ImportKeyMaterial</a> with your import token to import
         * the key material. For step-by-step instructions, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i> <i>Key Management Service Developer Guide</i>
         * </i>.</p> <p>This feature supports only symmetric encryption KMS keys, including
         * multi-Region symmetric encryption KMS keys. You cannot import key material into
         * any other type of KMS key.</p> <p>To create a multi-Region primary key with
         * imported key material, use the <code>Origin</code> parameter of
         * <code>CreateKey</code> with a value of <code>EXTERNAL</code> and the
         * <code>MultiRegion</code> parameter with a value of <code>True</code>. To create
         * replicas of the multi-Region primary key, use the <a>ReplicateKey</a> operation.
         * For instructions, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-import.html
         * ">Importing key material into multi-Region keys</a>. For more information about
         * multi-Region keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
         * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>
         * </p> </dd> <dt>Custom key store</dt> <dd> <p>A <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a> lets you protect your Amazon Web Services resources using keys in
         * a backing key store that you own and manage. When you request a cryptographic
         * operation with a KMS key in a custom key store, the operation is performed in
         * the backing key store using its cryptographic keys.</p> <p>KMS supports <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-cloudhsm.html">CloudHSM
         * key stores</a> backed by an CloudHSM cluster and <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html">external
         * key stores</a> backed by an external key manager outside of Amazon Web Services.
         * When you create a KMS key in an CloudHSM key store, KMS generates an encryption
         * key in the CloudHSM cluster and associates it with the KMS key. When you create
         * a KMS key in an external key store, you specify an existing encryption key in
         * the external key manager.</p>  <p>Some external key managers provide a
         * simpler method for creating a KMS key in an external key store. For details, see
         * your external key manager documentation.</p>  <p>Before you create a KMS
         * key in a custom key store, the <code>ConnectionState</code> of the key store
         * must be <code>CONNECTED</code>. To connect the custom key store, use the
         * <a>ConnectCustomKeyStore</a> operation. To find the
         * <code>ConnectionState</code>, use the <a>DescribeCustomKeyStores</a>
         * operation.</p> <p>To create a KMS key in a custom key store, use the
         * <code>CustomKeyStoreId</code>. Use the default <code>KeySpec</code> value,
         * <code>SYMMETRIC_DEFAULT</code>, and the default <code>KeyUsage</code> value,
         * <code>ENCRYPT_DECRYPT</code> to create a symmetric encryption key. No other key
         * type is supported in a custom key store.</p> <p>To create a KMS key in an <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-cloudhsm.html">CloudHSM
         * key store</a>, use the <code>Origin</code> parameter with a value of
         * <code>AWS_CLOUDHSM</code>. The CloudHSM cluster that is associated with the
         * custom key store must have at least two active HSMs in different Availability
         * Zones in the Amazon Web Services Region.</p> <p>To create a KMS key in an <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html">external
         * key store</a>, use the <code>Origin</code> parameter with a value of
         * <code>EXTERNAL_KEY_STORE</code> and an <code>XksKeyId</code> parameter that
         * identifies an existing external key.</p>  <p>Some external key managers
         * provide a simpler method for creating a KMS key in an external key store. For
         * details, see your external key manager documentation.</p>  </dd> </dl>
         * <p> <b>Cross-account use</b>: No. You cannot use this operation to create a KMS
         * key in a different Amazon Web Services account.</p> <p> <b>Required
         * permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateKey</a>
         * (IAM policy). To use the <code>Tags</code> parameter, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
         * (IAM policy). For examples and information about related permissions, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/iam-policies.html#iam-policy-example-create-key">Allow
         * a user to create KMS keys</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>DescribeKey</a> </p> </li> <li> <p> <a>ListKeys</a> </p> </li> <li> <p>
         * <a>ScheduleKeyDeletion</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/CreateKey">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateKeyOutcome CreateKey(const Model::CreateKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeyOutcomeCallable CreateKeyCallable(const Model::CreateKeyRequest& request) const;

        /**
         * An Async wrapper for CreateKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Decrypts ciphertext that was encrypted by a KMS key using any of the
         * following operations:</p> <ul> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p> <a>GenerateDataKeyPair</a> </p> </li>
         * <li> <p> <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyPairWithoutPlaintext</a> </p> </li> </ul> <p>You can use this
         * operation to decrypt ciphertext that was encrypted under a symmetric encryption
         * KMS key or an asymmetric encryption KMS key. When the KMS key is asymmetric, you
         * must specify the KMS key and the encryption algorithm that was used to encrypt
         * the ciphertext. For information about asymmetric KMS keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Asymmetric
         * KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The
         * <code>Decrypt</code> operation also decrypts ciphertext that was encrypted
         * outside of KMS by the public key in an KMS asymmetric KMS key. However, it
         * cannot decrypt symmetric ciphertext produced by other libraries, such as the <a
         * href="https://docs.aws.amazon.com/encryption-sdk/latest/developer-guide/">Amazon
         * Web Services Encryption SDK</a> or <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
         * S3 client-side encryption</a>. These libraries return a ciphertext format that
         * is incompatible with KMS.</p> <p>If the ciphertext was encrypted under a
         * symmetric encryption KMS key, the <code>KeyId</code> parameter is optional. KMS
         * can get this information from metadata that it adds to the symmetric ciphertext
         * blob. This feature adds durability to your implementation by ensuring that
         * authorized users can decrypt ciphertext decades after it was encrypted, even if
         * they've lost track of the key ID. However, specifying the KMS key is always
         * recommended as a best practice. When you use the <code>KeyId</code> parameter to
         * specify a KMS key, KMS only uses the KMS key you specify. If the ciphertext was
         * encrypted under a different KMS key, the <code>Decrypt</code> operation fails.
         * This practice ensures that you use the KMS key that you intend.</p> <p>Whenever
         * possible, use key policies to give users permission to call the
         * <code>Decrypt</code> operation on a particular KMS key, instead of using IAM
         * policies. Otherwise, you might create an IAM user policy that gives the user
         * <code>Decrypt</code> permission on all KMS keys. This user could decrypt
         * ciphertext that was encrypted by KMS keys in other accounts if the key policy
         * for the cross-account KMS key permits it. If you must use an IAM policy for
         * <code>Decrypt</code> permissions, limit the user to particular KMS keys or
         * particular trusted accounts. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/iam-policies.html#iam-policies-best-practices">Best
         * practices for IAM policies</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p>Applications in Amazon Web Services Nitro Enclaves can call
         * this operation by using the <a
         * href="https://github.com/aws/aws-nitro-enclaves-sdk-c">Amazon Web Services Nitro
         * Enclaves Development Kit</a>. For information about the supporting parameters,
         * see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
         * Amazon Web Services Nitro Enclaves use KMS</a> in the <i>Key Management Service
         * Developer Guide</i>.</p> <p>The KMS key that you use for this operation must be
         * in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter. </p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Decrypt</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>Encrypt</a> </p> </li> <li> <p> <a>GenerateDataKey</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyPair</a> </p> </li> <li> <p> <a>ReEncrypt</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/Decrypt">AWS API
         * Reference</a></p>
         */
        virtual Model::DecryptOutcome Decrypt(const Model::DecryptRequest& request) const;

        /**
         * A Callable wrapper for Decrypt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DecryptOutcomeCallable DecryptCallable(const Model::DecryptRequest& request) const;

        /**
         * An Async wrapper for Decrypt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DecryptAsync(const Model::DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified alias. </p>  <p>Adding, deleting, or updating an
         * alias can allow or deny permission to the KMS key. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
         * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
         * <p>Because an alias is not a property of a KMS key, you can delete and change
         * the aliases of a KMS key without affecting the KMS key. Also, aliases do not
         * appear in the response from the <a>DescribeKey</a> operation. To get the aliases
         * of all KMS keys, use the <a>ListAliases</a> operation. </p> <p>Each KMS key can
         * have multiple aliases. To change the alias of a KMS key, use <a>DeleteAlias</a>
         * to delete the current alias and <a>CreateAlias</a> to create a new alias. To
         * associate an existing alias with a different KMS key, call
         * <a>UpdateAlias</a>.</p> <p> <b>Cross-account use</b>: No. You cannot perform
         * this operation on an alias in a different Amazon Web Services account.</p> <p>
         * <b>Required permissions</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteAlias</a>
         * on the alias (IAM policy).</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteAlias</a>
         * on the KMS key (key policy).</p> </li> </ul> <p>For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
         * access to aliases</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Related operations:</b> </p> <ul> <li> <p> <a>CreateAlias</a> </p> </li>
         * <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DeleteAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a>. This operation does not affect any backing elements of the custom
         * key store. It does not delete the CloudHSM cluster that is associated with an
         * CloudHSM key store, or affect any users or keys in the cluster. For an external
         * key store, it does not affect the external key store proxy, external key
         * manager, or any external keys.</p> <p> This operation is part of the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key stores</a> feature in KMS, which combines the convenience and extensive
         * integration of KMS with the isolation and control of a key store that you own
         * and manage.</p> <p>The custom key store that you delete cannot contain any <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS
         * keys</a>. Before deleting the key store, verify that you will never need to use
         * any of the KMS keys in the key store for any <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
         * operations</a>. Then, use <a>ScheduleKeyDeletion</a> to delete the KMS keys from
         * the key store. After the required waiting period expires and all KMS keys are
         * deleted from the custom key store, use <a>DisconnectCustomKeyStore</a> to
         * disconnect the key store from KMS. Then, you can delete the custom key
         * store.</p> <p>For keys in an CloudHSM key store, the
         * <code>ScheduleKeyDeletion</code> operation makes a best effort to delete the key
         * material from the associated cluster. However, you might need to manually <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-orphaned-key">delete
         * the orphaned key material</a> from the cluster and its backups. KMS never
         * creates, manages, or deletes cryptographic keys in the external key manager
         * associated with an external key store. You must manage them using your external
         * key manager tools.</p> <p>Instead of deleting the custom key store, consider
         * using the <a>DisconnectCustomKeyStore</a> operation to disconnect the custom key
         * store from its backing key store. While the key store is disconnected, you
         * cannot create or use the KMS keys in the key store. But, you do not need to
         * delete KMS keys and you can reconnect a disconnected custom key store at any
         * time.</p> <p>If the operation succeeds, it returns a JSON object with no
         * properties.</p> <p> <b>Cross-account use</b>: No. You cannot perform this
         * operation on a custom key store in a different Amazon Web Services account.</p>
         * <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteCustomKeyStore</a>
         * (IAM policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ConnectCustomKeyStore</a> </p> </li> <li> <p> <a>CreateCustomKeyStore</a>
         * </p> </li> <li> <p> <a>DescribeCustomKeyStores</a> </p> </li> <li> <p>
         * <a>DisconnectCustomKeyStore</a> </p> </li> <li> <p> <a>UpdateCustomKeyStore</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DeleteCustomKeyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomKeyStoreOutcome DeleteCustomKeyStore(const Model::DeleteCustomKeyStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomKeyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomKeyStoreOutcomeCallable DeleteCustomKeyStoreCallable(const Model::DeleteCustomKeyStoreRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomKeyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomKeyStoreAsync(const Model::DeleteCustomKeyStoreRequest& request, const DeleteCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes key material that you previously imported. This operation makes the
         * specified KMS key unusable. For more information about importing key material
         * into KMS, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>Key Management Service Developer Guide</i>. </p>
         * <p>When the specified KMS key is in the <code>PendingDeletion</code> state, this
         * operation does not change the KMS key's state. Otherwise, it changes the KMS
         * key's state to <code>PendingImport</code>.</p> <p>After you delete key material,
         * you can use <a>ImportKeyMaterial</a> to reimport the same key material into the
         * KMS key.</p> <p>The KMS key that you use for this operation must be in a
         * compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteImportedKeyMaterial</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>GetParametersForImport</a> </p> </li> <li> <p> <a>ImportKeyMaterial</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DeleteImportedKeyMaterial">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImportedKeyMaterialOutcome DeleteImportedKeyMaterial(const Model::DeleteImportedKeyMaterialRequest& request) const;

        /**
         * A Callable wrapper for DeleteImportedKeyMaterial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImportedKeyMaterialOutcomeCallable DeleteImportedKeyMaterialCallable(const Model::DeleteImportedKeyMaterialRequest& request) const;

        /**
         * An Async wrapper for DeleteImportedKeyMaterial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImportedKeyMaterialAsync(const Model::DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key stores</a> in the account and Region.</p> <p> This operation is part of the
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key stores</a> feature in KMS, which combines the convenience and extensive
         * integration of KMS with the isolation and control of a key store that you own
         * and manage.</p> <p>By default, this operation returns information about all
         * custom key stores in the account and Region. To get only information about a
         * particular custom key store, use either the <code>CustomKeyStoreName</code> or
         * <code>CustomKeyStoreId</code> parameter (but not both).</p> <p>To determine
         * whether the custom key store is connected to its CloudHSM cluster or external
         * key store proxy, use the <code>ConnectionState</code> element in the response.
         * If an attempt to connect the custom key store failed, the
         * <code>ConnectionState</code> value is <code>FAILED</code> and the
         * <code>ConnectionErrorCode</code> element in the response indicates the cause of
         * the failure. For help interpreting the <code>ConnectionErrorCode</code>, see
         * <a>CustomKeyStoresListEntry</a>.</p> <p>Custom key stores have a
         * <code>DISCONNECTED</code> connection state if the key store has never been
         * connected or you used the <a>DisconnectCustomKeyStore</a> operation to
         * disconnect it. Otherwise, the connection state is CONNECTED. If your custom key
         * store connection state is <code>CONNECTED</code> but you are having trouble
         * using it, verify that the backing store is active and available. For an CloudHSM
         * key store, verify that the associated CloudHSM cluster is active and contains
         * the minimum number of HSMs required for the operation, if any. For an external
         * key store, verify that the external key store proxy and its associated external
         * key manager are reachable and enabled.</p> <p> For help repairing your CloudHSM
         * key store, see the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting
         * CloudHSM key stores</a>. For help repairing your external key store, see the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/xks-troubleshooting.html">Troubleshooting
         * external key stores</a>. Both topics are in the <i>Key Management Service
         * Developer Guide</i>.</p> <p> <b>Cross-account use</b>: No. You cannot perform
         * this operation on a custom key store in a different Amazon Web Services
         * account.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DescribeCustomKeyStores</a>
         * (IAM policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ConnectCustomKeyStore</a> </p> </li> <li> <p> <a>CreateCustomKeyStore</a>
         * </p> </li> <li> <p> <a>DeleteCustomKeyStore</a> </p> </li> <li> <p>
         * <a>DisconnectCustomKeyStore</a> </p> </li> <li> <p> <a>UpdateCustomKeyStore</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DescribeCustomKeyStores">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomKeyStoresOutcome DescribeCustomKeyStores(const Model::DescribeCustomKeyStoresRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomKeyStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomKeyStoresOutcomeCallable DescribeCustomKeyStoresCallable(const Model::DescribeCustomKeyStoresRequest& request) const;

        /**
         * An Async wrapper for DescribeCustomKeyStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomKeyStoresAsync(const Model::DescribeCustomKeyStoresRequest& request, const DescribeCustomKeyStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides detailed information about a KMS key. You can run
         * <code>DescribeKey</code> on a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
         * managed key</a> or an <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed key</a>.</p> <p>This detailed information includes the key
         * ARN, creation date (and deletion date, if applicable), the key state, and the
         * origin and expiration date (if any) of the key material. It includes fields,
         * like <code>KeySpec</code>, that help you distinguish different types of KMS
         * keys. It also displays the key usage (encryption, signing, or generating and
         * verifying MACs) and the algorithms that the KMS key supports. </p> <p>For <a
         * href="kms/latest/developerguide/multi-region-keys-overview.html">multi-Region
         * keys</a>, <code>DescribeKey</code> displays the primary key and all related
         * replica keys. For KMS keys in <a
         * href="kms/latest/developerguide/keystore-cloudhsm.html">CloudHSM key stores</a>,
         * it includes information about the key store, such as the key store ID and the
         * CloudHSM cluster ID. For KMS keys in <a
         * href="kms/latest/developerguide/keystore-external.html">external key stores</a>,
         * it includes the custom key store ID and the ID of the external key.</p> <p>
         * <code>DescribeKey</code> does not return the following information:</p> <ul>
         * <li> <p>Aliases associated with the KMS key. To get this information, use
         * <a>ListAliases</a>.</p> </li> <li> <p>Whether automatic key rotation is enabled
         * on the KMS key. To get this information, use <a>GetKeyRotationStatus</a>. Also,
         * some key states prevent a KMS key from being automatically rotated. For details,
         * see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotate-keys-how-it-works">How
         * Automatic Key Rotation Works</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> </li> <li> <p>Tags on the KMS key. To get this information, use
         * <a>ListResourceTags</a>.</p> </li> <li> <p>Key policies and grants on the KMS
         * key. To get this information, use <a>GetKeyPolicy</a> and <a>ListGrants</a>.</p>
         * </li> </ul> <p>In general, <code>DescribeKey</code> is a non-mutating operation.
         * It returns data about KMS keys, but doesn't change them. However, Amazon Web
         * Services services use <code>DescribeKey</code> to create <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed keys</a> from a <i>predefined Amazon Web Services alias</i>
         * with no key ID.</p> <p> <b>Cross-account use</b>: Yes. To perform this operation
         * with a KMS key in a different Amazon Web Services account, specify the key ARN
         * or alias ARN in the value of the <code>KeyId</code> parameter.</p> <p>
         * <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DescribeKey</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>GetKeyPolicy</a> </p> </li> <li> <p> <a>GetKeyRotationStatus</a> </p> </li>
         * <li> <p> <a>ListAliases</a> </p> </li> <li> <p> <a>ListGrants</a> </p> </li>
         * <li> <p> <a>ListKeys</a> </p> </li> <li> <p> <a>ListResourceTags</a> </p> </li>
         * <li> <p> <a>ListRetirableGrants</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DescribeKey">AWS API
         * Reference</a></p>
         */
        virtual Model::DescribeKeyOutcome DescribeKey(const Model::DescribeKeyRequest& request) const;

        /**
         * A Callable wrapper for DescribeKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeKeyOutcomeCallable DescribeKeyCallable(const Model::DescribeKeyRequest& request) const;

        /**
         * An Async wrapper for DescribeKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeKeyAsync(const Model::DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the state of a KMS key to disabled. This change temporarily prevents use
         * of the KMS key for <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
         * operations</a>. </p> <p>For more information about how key state affects the use
         * of a KMS key, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i> <i>Key Management Service Developer Guide</i>
         * </i>.</p> <p>The KMS key that you use for this operation must be in a compatible
         * key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DisableKey</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>EnableKey</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DisableKey">AWS API
         * Reference</a></p>
         */
        virtual Model::DisableKeyOutcome DisableKey(const Model::DisableKeyRequest& request) const;

        /**
         * A Callable wrapper for DisableKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableKeyOutcomeCallable DisableKeyCallable(const Model::DisableKeyRequest& request) const;

        /**
         * An Async wrapper for DisableKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableKeyAsync(const Model::DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic
         * rotation of the key material</a> of the specified symmetric encryption KMS
         * key.</p> <p>Automatic key rotation is supported only on symmetric encryption KMS
         * keys. You cannot enable automatic rotation of <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
         * KMS keys</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
         * keys</a>, KMS keys with <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
         * key material</a>, or KMS keys in a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a>. To enable or disable automatic rotation of a set of related <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
         * keys</a>, set the property on the primary key.</p> <p>You can enable
         * (<a>EnableKeyRotation</a>) and disable automatic rotation of the key material in
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
         * managed KMS keys</a>. Key material rotation of <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed KMS keys</a> is not configurable. KMS always rotates the
         * key material for every year. Rotation of <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-owned-cmk">Amazon
         * Web Services owned KMS keys</a> varies.</p>  <p>In May 2022, KMS changed
         * the rotation schedule for Amazon Web Services managed keys from every three
         * years to every year. For details, see <a>EnableKeyRotation</a>.</p> 
         * <p>The KMS key that you use for this operation must be in a compatible key
         * state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DisableKeyRotation</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>EnableKeyRotation</a> </p> </li> <li> <p> <a>GetKeyRotationStatus</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DisableKeyRotation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableKeyRotationOutcome DisableKeyRotation(const Model::DisableKeyRotationRequest& request) const;

        /**
         * A Callable wrapper for DisableKeyRotation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableKeyRotationOutcomeCallable DisableKeyRotationCallable(const Model::DisableKeyRotationRequest& request) const;

        /**
         * An Async wrapper for DisableKeyRotation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableKeyRotationAsync(const Model::DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a> from its backing key store. This operation disconnects an CloudHSM
         * key store from its associated CloudHSM cluster or disconnects an external key
         * store from the external key store proxy that communicates with your external key
         * manager.</p> <p> This operation is part of the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key stores</a> feature in KMS, which combines the convenience and extensive
         * integration of KMS with the isolation and control of a key store that you own
         * and manage.</p> <p>While a custom key store is disconnected, you can manage the
         * custom key store and its KMS keys, but you cannot create or use its KMS keys.
         * You can reconnect the custom key store at any time.</p>  <p>While a custom
         * key store is disconnected, all attempts to create KMS keys in the custom key
         * store or to use existing KMS keys in <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
         * operations</a> will fail. This action can prevent users from storing and
         * accessing sensitive data.</p>  <p>When you disconnect a custom key store,
         * its <code>ConnectionState</code> changes to <code>Disconnected</code>. To find
         * the connection state of a custom key store, use the
         * <a>DescribeCustomKeyStores</a> operation. To reconnect a custom key store, use
         * the <a>ConnectCustomKeyStore</a> operation.</p> <p>If the operation succeeds, it
         * returns a JSON object with no properties.</p> <p> <b>Cross-account use</b>: No.
         * You cannot perform this operation on a custom key store in a different Amazon
         * Web Services account.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DisconnectCustomKeyStore</a>
         * (IAM policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ConnectCustomKeyStore</a> </p> </li> <li> <p> <a>CreateCustomKeyStore</a>
         * </p> </li> <li> <p> <a>DeleteCustomKeyStore</a> </p> </li> <li> <p>
         * <a>DescribeCustomKeyStores</a> </p> </li> <li> <p> <a>UpdateCustomKeyStore</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/DisconnectCustomKeyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectCustomKeyStoreOutcome DisconnectCustomKeyStore(const Model::DisconnectCustomKeyStoreRequest& request) const;

        /**
         * A Callable wrapper for DisconnectCustomKeyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectCustomKeyStoreOutcomeCallable DisconnectCustomKeyStoreCallable(const Model::DisconnectCustomKeyStoreRequest& request) const;

        /**
         * An Async wrapper for DisconnectCustomKeyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectCustomKeyStoreAsync(const Model::DisconnectCustomKeyStoreRequest& request, const DisconnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the key state of a KMS key to enabled. This allows you to use the KMS
         * key for <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
         * operations</a>. </p> <p>The KMS key that you use for this operation must be in a
         * compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:EnableKey</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>DisableKey</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/EnableKey">AWS API
         * Reference</a></p>
         */
        virtual Model::EnableKeyOutcome EnableKey(const Model::EnableKeyRequest& request) const;

        /**
         * A Callable wrapper for EnableKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableKeyOutcomeCallable EnableKeyCallable(const Model::EnableKeyRequest& request) const;

        /**
         * An Async wrapper for EnableKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableKeyAsync(const Model::EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic
         * rotation of the key material</a> of the specified symmetric encryption KMS key.
         * </p> <p>When you enable automatic rotation of a<a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
         * managed KMS key</a>, KMS rotates the key material of the KMS key one year
         * (approximately 365 days) from the enable date and every year thereafter. You can
         * monitor rotation of the key material for your KMS keys in CloudTrail and Amazon
         * CloudWatch. To disable rotation of the key material in a customer managed KMS
         * key, use the <a>DisableKeyRotation</a> operation.</p> <p>Automatic key rotation
         * is supported only on <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#symmetric-cmks">symmetric
         * encryption KMS keys</a>. You cannot enable automatic rotation of <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
         * KMS keys</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
         * keys</a>, KMS keys with <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
         * key material</a>, or KMS keys in a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a>. To enable or disable automatic rotation of a set of related <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
         * keys</a>, set the property on the primary key. </p> <p>You cannot enable or
         * disable automatic rotation <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed KMS keys</a>. KMS always rotates the key material of Amazon
         * Web Services managed keys every year. Rotation of <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-owned-cmk">Amazon
         * Web Services owned KMS keys</a> varies.</p>  <p>In May 2022, KMS changed
         * the rotation schedule for Amazon Web Services managed keys from every three
         * years (approximately 1,095 days) to every year (approximately 365 days).</p>
         * <p>New Amazon Web Services managed keys are automatically rotated one year after
         * they are created, and approximately every year thereafter. </p> <p>Existing
         * Amazon Web Services managed keys are automatically rotated one year after their
         * most recent rotation, and every year thereafter.</p>  <p>The KMS key that
         * you use for this operation must be in a compatible key state. For details, see
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:EnableKeyRotation</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>DisableKeyRotation</a> </p> </li> <li> <p> <a>GetKeyRotationStatus</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/EnableKeyRotation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableKeyRotationOutcome EnableKeyRotation(const Model::EnableKeyRotationRequest& request) const;

        /**
         * A Callable wrapper for EnableKeyRotation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableKeyRotationOutcomeCallable EnableKeyRotationCallable(const Model::EnableKeyRotationRequest& request) const;

        /**
         * An Async wrapper for EnableKeyRotation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableKeyRotationAsync(const Model::EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Encrypts plaintext of up to 4,096 bytes using a KMS key. You can use a
         * symmetric or asymmetric KMS key with a <code>KeyUsage</code> of
         * <code>ENCRYPT_DECRYPT</code>.</p> <p>You can use this operation to encrypt small
         * amounts of arbitrary data, such as a personal identifier or database password,
         * or other sensitive information. You don't need to use the <code>Encrypt</code>
         * operation to encrypt a data key. The <a>GenerateDataKey</a> and
         * <a>GenerateDataKeyPair</a> operations return a plaintext data key and an
         * encrypted copy of that data key.</p> <p>If you use a symmetric encryption KMS
         * key, you can use an encryption context to add additional security to your
         * encryption operation. If you specify an <code>EncryptionContext</code> when
         * encrypting data, you must specify the same encryption context (a case-sensitive
         * exact match) when decrypting the data. Otherwise, the request to decrypt fails
         * with an <code>InvalidCiphertextException</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
         * Context</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>If you
         * specify an asymmetric KMS key, you must also specify the encryption algorithm.
         * The algorithm must be compatible with the KMS key spec.</p>  <p>When
         * you use an asymmetric KMS key to encrypt or reencrypt data, be sure to record
         * the KMS key and encryption algorithm that you choose. You will be required to
         * provide the same KMS key and encryption algorithm when you decrypt the data. If
         * the KMS key and algorithm do not match the values used to encrypt the data, the
         * decrypt operation fails.</p> <p>You are not required to supply the key ID and
         * encryption algorithm when you decrypt with symmetric encryption KMS keys because
         * KMS stores this information in the ciphertext blob. KMS cannot store metadata in
         * ciphertext generated with asymmetric keys. The standard format for asymmetric
         * key ciphertext does not include configurable fields.</p>  <p>The
         * maximum size of the data that you can encrypt varies with the type of KMS key
         * and the encryption algorithm that you choose.</p> <ul> <li> <p>Symmetric
         * encryption KMS keys</p> <ul> <li> <p> <code>SYMMETRIC_DEFAULT</code>: 4096
         * bytes</p> </li> </ul> </li> <li> <p> <code>RSA_2048</code> </p> <ul> <li> <p>
         * <code>RSAES_OAEP_SHA_1</code>: 214 bytes</p> </li> <li> <p>
         * <code>RSAES_OAEP_SHA_256</code>: 190 bytes</p> </li> </ul> </li> <li> <p>
         * <code>RSA_3072</code> </p> <ul> <li> <p> <code>RSAES_OAEP_SHA_1</code>: 342
         * bytes</p> </li> <li> <p> <code>RSAES_OAEP_SHA_256</code>: 318 bytes</p> </li>
         * </ul> </li> <li> <p> <code>RSA_4096</code> </p> <ul> <li> <p>
         * <code>RSAES_OAEP_SHA_1</code>: 470 bytes</p> </li> <li> <p>
         * <code>RSAES_OAEP_SHA_256</code>: 446 bytes</p> </li> </ul> </li> <li> <p>
         * <code>SM2PKE</code>: 1024 bytes (China Regions only)</p> </li> </ul> <p>The KMS
         * key that you use for this operation must be in a compatible key state. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Encrypt</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>Decrypt</a> </p> </li> <li> <p> <a>GenerateDataKey</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyPair</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/Encrypt">AWS API
         * Reference</a></p>
         */
        virtual Model::EncryptOutcome Encrypt(const Model::EncryptRequest& request) const;

        /**
         * A Callable wrapper for Encrypt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EncryptOutcomeCallable EncryptCallable(const Model::EncryptRequest& request) const;

        /**
         * An Async wrapper for Encrypt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EncryptAsync(const Model::EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique symmetric data key for use outside of KMS. This operation
         * returns a plaintext copy of the data key and a copy that is encrypted under a
         * symmetric encryption KMS key that you specify. The bytes in the plaintext key
         * are random; they are not related to the caller or the KMS key. You can use the
         * plaintext key to encrypt your data outside of KMS and store the encrypted data
         * key with the encrypted data.</p> <p>To generate a data key, specify the
         * symmetric encryption KMS key that will be used to encrypt the data key. You
         * cannot use an asymmetric KMS key to encrypt data keys. To get the type of your
         * KMS key, use the <a>DescribeKey</a> operation.</p> <p>You must also specify the
         * length of the data key. Use either the <code>KeySpec</code> or
         * <code>NumberOfBytes</code> parameters (but not both). For 128-bit and 256-bit
         * data keys, use the <code>KeySpec</code> parameter.</p> <p>To generate an SM4
         * data key (China Regions only), specify a <code>KeySpec</code> value of
         * <code>AES_128</code> or <code>NumberOfBytes</code> value of <code>128</code>.
         * The symmetric encryption key used in China Regions to encrypt your data key is
         * an SM4 encryption key.</p> <p>To get only an encrypted copy of the data key, use
         * <a>GenerateDataKeyWithoutPlaintext</a>. To generate an asymmetric data key pair,
         * use the <a>GenerateDataKeyPair</a> or <a>GenerateDataKeyPairWithoutPlaintext</a>
         * operation. To get a cryptographically secure random byte string, use
         * <a>GenerateRandom</a>.</p> <p>You can use an optional encryption context to add
         * additional security to the encryption operation. If you specify an
         * <code>EncryptionContext</code>, you must specify the same encryption context (a
         * case-sensitive exact match) when decrypting the encrypted data key. Otherwise,
         * the request to decrypt fails with an <code>InvalidCiphertextException</code>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
         * Context</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>Applications in Amazon Web Services Nitro Enclaves can call this operation by
         * using the <a href="https://github.com/aws/aws-nitro-enclaves-sdk-c">Amazon Web
         * Services Nitro Enclaves Development Kit</a>. For information about the
         * supporting parameters, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
         * Amazon Web Services Nitro Enclaves use KMS</a> in the <i>Key Management Service
         * Developer Guide</i>.</p> <p>The KMS key that you use for this operation must be
         * in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>How to use your data key</b> </p> <p>We recommend that you use the
         * following pattern to encrypt data locally in your application. You can write
         * your own code or use a client-side encryption library, such as the <a
         * href="https://docs.aws.amazon.com/encryption-sdk/latest/developer-guide/">Amazon
         * Web Services Encryption SDK</a>, the <a
         * href="https://docs.aws.amazon.com/dynamodb-encryption-client/latest/devguide/">Amazon
         * DynamoDB Encryption Client</a>, or <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
         * S3 client-side encryption</a> to do these tasks for you.</p> <p>To encrypt data
         * outside of KMS:</p> <ol> <li> <p>Use the <code>GenerateDataKey</code> operation
         * to get a data key.</p> </li> <li> <p>Use the plaintext data key (in the
         * <code>Plaintext</code> field of the response) to encrypt your data outside of
         * KMS. Then erase the plaintext data key from memory.</p> </li> <li> <p>Store the
         * encrypted data key (in the <code>CiphertextBlob</code> field of the response)
         * with the encrypted data.</p> </li> </ol> <p>To decrypt data outside of KMS:</p>
         * <ol> <li> <p>Use the <a>Decrypt</a> operation to decrypt the encrypted data key.
         * The operation returns a plaintext copy of the data key.</p> </li> <li> <p>Use
         * the plaintext data key to decrypt data outside of KMS, then erase the plaintext
         * data key from memory.</p> </li> </ol> <p> <b>Cross-account use</b>: Yes. To
         * perform this operation with a KMS key in a different Amazon Web Services
         * account, specify the key ARN or alias ARN in the value of the <code>KeyId</code>
         * parameter.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKey</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyPair</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyPairWithoutPlaintext</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GenerateDataKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateDataKeyOutcome GenerateDataKey(const Model::GenerateDataKeyRequest& request) const;

        /**
         * A Callable wrapper for GenerateDataKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataKeyOutcomeCallable GenerateDataKeyCallable(const Model::GenerateDataKeyRequest& request) const;

        /**
         * An Async wrapper for GenerateDataKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateDataKeyAsync(const Model::GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique asymmetric data key pair for use outside of KMS. This
         * operation returns a plaintext public key, a plaintext private key, and a copy of
         * the private key that is encrypted under the symmetric encryption KMS key you
         * specify. You can use the data key pair to perform asymmetric cryptography and
         * implement digital signatures outside of KMS. The bytes in the keys are random;
         * they not related to the caller or to the KMS key that is used to encrypt the
         * private key. </p> <p>You can use the public key that
         * <code>GenerateDataKeyPair</code> returns to encrypt data or verify a signature
         * outside of KMS. Then, store the encrypted private key with the data. When you
         * are ready to decrypt data or sign a message, you can use the <a>Decrypt</a>
         * operation to decrypt the encrypted private key.</p> <p>To generate a data key
         * pair, you must specify a symmetric encryption KMS key to encrypt the private key
         * in a data key pair. You cannot use an asymmetric KMS key or a KMS key in a
         * custom key store. To get the type and origin of your KMS key, use the
         * <a>DescribeKey</a> operation. </p> <p>Use the <code>KeyPairSpec</code> parameter
         * to choose an RSA or Elliptic Curve (ECC) data key pair. In China Regions, you
         * can also choose an SM2 data key pair. KMS recommends that you use ECC key pairs
         * for signing, and use RSA and SM2 key pairs for either encryption or signing, but
         * not both. However, KMS cannot enforce any restrictions on the use of data key
         * pairs outside of KMS.</p> <p>If you are using the data key pair to encrypt data,
         * or for any operation where you don't immediately need a private key, consider
         * using the <a>GenerateDataKeyPairWithoutPlaintext</a> operation.
         * <code>GenerateDataKeyPairWithoutPlaintext</code> returns a plaintext public key
         * and an encrypted private key, but omits the plaintext private key that you need
         * only to decrypt ciphertext or sign a message. Later, when you need to decrypt
         * the data or sign a message, use the <a>Decrypt</a> operation to decrypt the
         * encrypted private key in the data key pair.</p> <p>
         * <code>GenerateDataKeyPair</code> returns a unique data key pair for each
         * request. The bytes in the keys are random; they are not related to the caller or
         * the KMS key that is used to encrypt the private key. The public key is a
         * DER-encoded X.509 SubjectPublicKeyInfo, as specified in <a
         * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. The private key is a
         * DER-encoded PKCS8 PrivateKeyInfo, as specified in <a
         * href="https://tools.ietf.org/html/rfc5958">RFC 5958</a>.</p> <p>You can use an
         * optional encryption context to add additional security to the encryption
         * operation. If you specify an <code>EncryptionContext</code>, you must specify
         * the same encryption context (a case-sensitive exact match) when decrypting the
         * encrypted data key. Otherwise, the request to decrypt fails with an
         * <code>InvalidCiphertextException</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
         * Context</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The KMS
         * key that you use for this operation must be in a compatible key state. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKeyPair</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyPairWithoutPlaintext</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GenerateDataKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateDataKeyPairOutcome GenerateDataKeyPair(const Model::GenerateDataKeyPairRequest& request) const;

        /**
         * A Callable wrapper for GenerateDataKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataKeyPairOutcomeCallable GenerateDataKeyPairCallable(const Model::GenerateDataKeyPairRequest& request) const;

        /**
         * An Async wrapper for GenerateDataKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateDataKeyPairAsync(const Model::GenerateDataKeyPairRequest& request, const GenerateDataKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique asymmetric data key pair for use outside of KMS. This
         * operation returns a plaintext public key and a copy of the private key that is
         * encrypted under the symmetric encryption KMS key you specify. Unlike
         * <a>GenerateDataKeyPair</a>, this operation does not return a plaintext private
         * key. The bytes in the keys are random; they are not related to the caller or to
         * the KMS key that is used to encrypt the private key. </p> <p>You can use the
         * public key that <code>GenerateDataKeyPairWithoutPlaintext</code> returns to
         * encrypt data or verify a signature outside of KMS. Then, store the encrypted
         * private key with the data. When you are ready to decrypt data or sign a message,
         * you can use the <a>Decrypt</a> operation to decrypt the encrypted private
         * key.</p> <p>To generate a data key pair, you must specify a symmetric encryption
         * KMS key to encrypt the private key in a data key pair. You cannot use an
         * asymmetric KMS key or a KMS key in a custom key store. To get the type and
         * origin of your KMS key, use the <a>DescribeKey</a> operation. </p> <p>Use the
         * <code>KeyPairSpec</code> parameter to choose an RSA or Elliptic Curve (ECC) data
         * key pair. In China Regions, you can also choose an SM2 data key pair. KMS
         * recommends that you use ECC key pairs for signing, and use RSA and SM2 key pairs
         * for either encryption or signing, but not both. However, KMS cannot enforce any
         * restrictions on the use of data key pairs outside of KMS.</p> <p>
         * <code>GenerateDataKeyPairWithoutPlaintext</code> returns a unique data key pair
         * for each request. The bytes in the key are not related to the caller or KMS key
         * that is used to encrypt the private key. The public key is a DER-encoded X.509
         * SubjectPublicKeyInfo, as specified in <a
         * href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>.</p> <p>You can use an
         * optional encryption context to add additional security to the encryption
         * operation. If you specify an <code>EncryptionContext</code>, you must specify
         * the same encryption context (a case-sensitive exact match) when decrypting the
         * encrypted data key. Otherwise, the request to decrypt fails with an
         * <code>InvalidCiphertextException</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
         * Context</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The KMS
         * key that you use for this operation must be in a compatible key state. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKeyPairWithoutPlaintext</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p> <a>GenerateDataKeyPair</a> </p> </li>
         * <li> <p> <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GenerateDataKeyPairWithoutPlaintext">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateDataKeyPairWithoutPlaintextOutcome GenerateDataKeyPairWithoutPlaintext(const Model::GenerateDataKeyPairWithoutPlaintextRequest& request) const;

        /**
         * A Callable wrapper for GenerateDataKeyPairWithoutPlaintext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataKeyPairWithoutPlaintextOutcomeCallable GenerateDataKeyPairWithoutPlaintextCallable(const Model::GenerateDataKeyPairWithoutPlaintextRequest& request) const;

        /**
         * An Async wrapper for GenerateDataKeyPairWithoutPlaintext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateDataKeyPairWithoutPlaintextAsync(const Model::GenerateDataKeyPairWithoutPlaintextRequest& request, const GenerateDataKeyPairWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique symmetric data key for use outside of KMS. This operation
         * returns a data key that is encrypted under a symmetric encryption KMS key that
         * you specify. The bytes in the key are random; they are not related to the caller
         * or to the KMS key.</p> <p> <code>GenerateDataKeyWithoutPlaintext</code> is
         * identical to the <a>GenerateDataKey</a> operation except that it does not return
         * a plaintext copy of the data key. </p> <p>This operation is useful for systems
         * that need to encrypt data at some point, but not immediately. When you need to
         * encrypt the data, you call the <a>Decrypt</a> operation on the encrypted copy of
         * the key.</p> <p>It's also useful in distributed systems with different levels of
         * trust. For example, you might store encrypted data in containers. One component
         * of your system creates new containers and stores an encrypted data key with each
         * container. Then, a different component puts the data into the containers. That
         * component first decrypts the data key, uses the plaintext data key to encrypt
         * data, puts the encrypted data into the container, and then destroys the
         * plaintext data key. In this system, the component that creates the containers
         * never sees the plaintext data key.</p> <p>To request an asymmetric data key
         * pair, use the <a>GenerateDataKeyPair</a> or
         * <a>GenerateDataKeyPairWithoutPlaintext</a> operations.</p> <p>To generate a data
         * key, you must specify the symmetric encryption KMS key that is used to encrypt
         * the data key. You cannot use an asymmetric KMS key or a key in a custom key
         * store to generate a data key. To get the type of your KMS key, use the
         * <a>DescribeKey</a> operation.</p> <p>You must also specify the length of the
         * data key. Use either the <code>KeySpec</code> or <code>NumberOfBytes</code>
         * parameters (but not both). For 128-bit and 256-bit data keys, use the
         * <code>KeySpec</code> parameter.</p> <p>To generate an SM4 data key (China
         * Regions only), specify a <code>KeySpec</code> value of <code>AES_128</code> or
         * <code>NumberOfBytes</code> value of <code>128</code>. The symmetric encryption
         * key used in China Regions to encrypt your data key is an SM4 encryption key.</p>
         * <p>If the operation succeeds, you will find the encrypted copy of the data key
         * in the <code>CiphertextBlob</code> field.</p> <p>You can use an optional
         * encryption context to add additional security to the encryption operation. If
         * you specify an <code>EncryptionContext</code>, you must specify the same
         * encryption context (a case-sensitive exact match) when decrypting the encrypted
         * data key. Otherwise, the request to decrypt fails with an
         * <code>InvalidCiphertextException</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
         * Context</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The KMS
         * key that you use for this operation must be in a compatible key state. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKeyWithoutPlaintext</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p> <a>GenerateDataKeyPair</a> </p> </li>
         * <li> <p> <a>GenerateDataKeyPairWithoutPlaintext</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GenerateDataKeyWithoutPlaintext">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateDataKeyWithoutPlaintextOutcome GenerateDataKeyWithoutPlaintext(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;

        /**
         * A Callable wrapper for GenerateDataKeyWithoutPlaintext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataKeyWithoutPlaintextOutcomeCallable GenerateDataKeyWithoutPlaintextCallable(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;

        /**
         * An Async wrapper for GenerateDataKeyWithoutPlaintext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateDataKeyWithoutPlaintextAsync(const Model::GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a hash-based message authentication code (HMAC) for a message using
         * an HMAC KMS key and a MAC algorithm that the key supports. HMAC KMS keys and the
         * HMAC algorithms that KMS uses conform to industry standards defined in <a
         * href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p> <p>You
         * can use value that GenerateMac returns in the <a>VerifyMac</a> operation to
         * demonstrate that the original message has not changed. Also, because a secret
         * key is used to create the hash, you can verify that the party that generated the
         * hash has the required secret key. You can also use the raw result to implement
         * HMAC-based algorithms such as key derivation functions. This operation is part
         * of KMS support for HMAC KMS keys. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
         * in KMS</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.</p>
         *  <p>Best practices recommend that you limit the time during which any
         * signing mechanism, including an HMAC, is effective. This deters an attack where
         * the actor uses a signed message to establish validity repeatedly or long after
         * the message is superseded. HMAC tags do not include a timestamp, but you can
         * include a timestamp in the token or message to help you detect when its time to
         * refresh the HMAC. </p>  <p>The KMS key that you use for this operation
         * must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter. </p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateMac</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>VerifyMac</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GenerateMac">AWS API
         * Reference</a></p>
         */
        virtual Model::GenerateMacOutcome GenerateMac(const Model::GenerateMacRequest& request) const;

        /**
         * A Callable wrapper for GenerateMac that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateMacOutcomeCallable GenerateMacCallable(const Model::GenerateMacRequest& request) const;

        /**
         * An Async wrapper for GenerateMac that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateMacAsync(const Model::GenerateMacRequest& request, const GenerateMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a random byte string that is cryptographically secure.</p> <p>You
         * must use the <code>NumberOfBytes</code> parameter to specify the length of the
         * random byte string. There is no default value for string length.</p> <p>By
         * default, the random byte string is generated in KMS. To generate the byte string
         * in the CloudHSM cluster associated with an CloudHSM key store, use the
         * <code>CustomKeyStoreId</code> parameter.</p> <p>Applications in Amazon Web
         * Services Nitro Enclaves can call this operation by using the <a
         * href="https://github.com/aws/aws-nitro-enclaves-sdk-c">Amazon Web Services Nitro
         * Enclaves Development Kit</a>. For information about the supporting parameters,
         * see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How
         * Amazon Web Services Nitro Enclaves use KMS</a> in the <i>Key Management Service
         * Developer Guide</i>.</p> <p>For more information about entropy and random number
         * generation, see <a
         * href="https://docs.aws.amazon.com/kms/latest/cryptographic-details/">Key
         * Management Service Cryptographic Details</a>.</p> <p> <b>Cross-account use</b>:
         * Not applicable. <code>GenerateRandom</code> does not use any account-specific
         * resources, such as KMS keys.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateRandom</a>
         * (IAM policy)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GenerateRandom">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateRandomOutcome GenerateRandom(const Model::GenerateRandomRequest& request) const;

        /**
         * A Callable wrapper for GenerateRandom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateRandomOutcomeCallable GenerateRandomCallable(const Model::GenerateRandomRequest& request) const;

        /**
         * An Async wrapper for GenerateRandom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateRandomAsync(const Model::GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a key policy attached to the specified KMS key.</p> <p> <b>Cross-account
         * use</b>: No. You cannot perform this operation on a KMS key in a different
         * Amazon Web Services account.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetKeyPolicy</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>PutKeyPolicy</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GetKeyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyPolicyOutcome GetKeyPolicy(const Model::GetKeyPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetKeyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyPolicyOutcomeCallable GetKeyPolicyCallable(const Model::GetKeyPolicyRequest& request) const;

        /**
         * An Async wrapper for GetKeyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyPolicyAsync(const Model::GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a Boolean value that indicates whether <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic
         * rotation of the key material</a> is enabled for the specified KMS key.</p>
         * <p>When you enable automatic rotation for <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
         * managed KMS keys</a>, KMS rotates the key material of the KMS key one year
         * (approximately 365 days) from the enable date and every year thereafter. You can
         * monitor rotation of the key material for your KMS keys in CloudTrail and Amazon
         * CloudWatch.</p> <p>Automatic key rotation is supported only on <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#symmetric-cmks">symmetric
         * encryption KMS keys</a>. You cannot enable automatic rotation of <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
         * KMS keys</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
         * keys</a>, KMS keys with <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
         * key material</a>, or KMS keys in a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key store</a>. To enable or disable automatic rotation of a set of related <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
         * keys</a>, set the property on the primary key..</p> <p>You can enable
         * (<a>EnableKeyRotation</a>) and disable automatic rotation
         * (<a>DisableKeyRotation</a>) of the key material in customer managed KMS keys.
         * Key material rotation of <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed KMS keys</a> is not configurable. KMS always rotates the
         * key material in Amazon Web Services managed KMS keys every year. The key
         * rotation status for Amazon Web Services managed KMS keys is always
         * <code>true</code>.</p>  <p>In May 2022, KMS changed the rotation schedule
         * for Amazon Web Services managed keys from every three years to every year. For
         * details, see <a>EnableKeyRotation</a>.</p>  <p>The KMS key that you use
         * for this operation must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <ul> <li> <p>Disabled: The key rotation status does not change when you disable
         * a KMS key. However, while the KMS key is disabled, KMS does not rotate the key
         * material. When you re-enable the KMS key, rotation resumes. If the key material
         * in the re-enabled KMS key hasn't been rotated in one year, KMS rotates it
         * immediately, and every year thereafter. If it's been less than a year since the
         * key material in the re-enabled KMS key was rotated, the KMS key resumes its
         * prior rotation schedule.</p> </li> <li> <p>Pending deletion: While a KMS key is
         * pending deletion, its key rotation status is <code>false</code> and KMS does not
         * rotate the key material. If you cancel the deletion, the original key rotation
         * status returns to <code>true</code>.</p> </li> </ul> <p> <b>Cross-account
         * use</b>: Yes. To perform this operation on a KMS key in a different Amazon Web
         * Services account, specify the key ARN in the value of the <code>KeyId</code>
         * parameter.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetKeyRotationStatus</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>DisableKeyRotation</a> </p> </li> <li> <p> <a>EnableKeyRotation</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GetKeyRotationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyRotationStatusOutcome GetKeyRotationStatus(const Model::GetKeyRotationStatusRequest& request) const;

        /**
         * A Callable wrapper for GetKeyRotationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyRotationStatusOutcomeCallable GetKeyRotationStatusCallable(const Model::GetKeyRotationStatusRequest& request) const;

        /**
         * An Async wrapper for GetKeyRotationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyRotationStatusAsync(const Model::GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the items you need to import key material into a symmetric encryption
         * KMS key. For more information about importing key material into KMS, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * key material</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>This operation returns a public key and an import token. Use the public key
         * to encrypt the symmetric key material. Store the import token to send with a
         * subsequent <a>ImportKeyMaterial</a> request.</p> <p>You must specify the key ID
         * of the symmetric encryption KMS key into which you will import key material. The
         * KMS key <code>Origin</code> must be <code>EXTERNAL</code>. You must also specify
         * the wrapping algorithm and type of wrapping key (public key) that you will use
         * to encrypt the key material. You cannot perform this operation on an asymmetric
         * KMS key, an HMAC KMS key, or on any KMS key in a different Amazon Web Services
         * account.</p> <p>To import key material, you must use the public key and import
         * token from the same response. These items are valid for 24 hours. The expiration
         * date and time appear in the <code>GetParametersForImport</code> response. You
         * cannot use an expired token in an <a>ImportKeyMaterial</a> request. If your key
         * and token expire, send another <code>GetParametersForImport</code> request.</p>
         * <p>The KMS key that you use for this operation must be in a compatible key
         * state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetParametersForImport</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ImportKeyMaterial</a> </p> </li> <li> <p> <a>DeleteImportedKeyMaterial</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GetParametersForImport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParametersForImportOutcome GetParametersForImport(const Model::GetParametersForImportRequest& request) const;

        /**
         * A Callable wrapper for GetParametersForImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParametersForImportOutcomeCallable GetParametersForImportCallable(const Model::GetParametersForImportRequest& request) const;

        /**
         * An Async wrapper for GetParametersForImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParametersForImportAsync(const Model::GetParametersForImportRequest& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the public key of an asymmetric KMS key. Unlike the private key of a
         * asymmetric KMS key, which never leaves KMS unencrypted, callers with
         * <code>kms:GetPublicKey</code> permission can download the public key of an
         * asymmetric KMS key. You can share the public key to allow others to encrypt
         * messages and verify signatures outside of KMS. For information about asymmetric
         * KMS keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Asymmetric
         * KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>You do
         * not need to download the public key. Instead, you can use the public key within
         * KMS by calling the <a>Encrypt</a>, <a>ReEncrypt</a>, or <a>Verify</a> operations
         * with the identifier of an asymmetric KMS key. When you use the public key within
         * KMS, you benefit from the authentication, authorization, and logging that are
         * part of every KMS operation. You also reduce of risk of encrypting data that
         * cannot be decrypted. These features are not effective outside of KMS.</p> <p>To
         * help you use the public key safely outside of KMS, <code>GetPublicKey</code>
         * returns important information about the public key in the response,
         * including:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-KeySpec">KeySpec</a>:
         * The type of key material in the public key, such as <code>RSA_4096</code> or
         * <code>ECC_NIST_P521</code>.</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-KeyUsage">KeyUsage</a>:
         * Whether the key is used for encryption or signing.</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-EncryptionAlgorithms">EncryptionAlgorithms</a>
         * or <a
         * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-SigningAlgorithms">SigningAlgorithms</a>:
         * A list of the encryption algorithms or the signing algorithms for the key.</p>
         * </li> </ul> <p>Although KMS cannot enforce these restrictions on external
         * operations, it is crucial that you use this information to prevent the public
         * key from being used improperly. For example, you can prevent a public signing
         * key from being used encrypt data, or prevent a public key from being used with
         * an encryption algorithm that is not supported by KMS. You can also avoid errors,
         * such as using the wrong signing algorithm in a verification operation.</p> <p>To
         * verify a signature outside of KMS with an SM2 public key (China Regions only),
         * you must specify the distinguishing ID. By default, KMS uses
         * <code>1234567812345678</code> as the distinguishing ID. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/asymmetric-key-specs.html#key-spec-sm-offline-verification">Offline
         * verification with SM2 key pairs</a>.</p> <p>The KMS key that you use for this
         * operation must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetPublicKey</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>CreateKey</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GetPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKeyOutcome GetPublicKey(const Model::GetPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for GetPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicKeyOutcomeCallable GetPublicKeyCallable(const Model::GetPublicKeyRequest& request) const;

        /**
         * An Async wrapper for GetPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicKeyAsync(const Model::GetPublicKeyRequest& request, const GetPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports key material into an existing symmetric encryption KMS key that was
         * created without key material. After you successfully import key material into a
         * KMS key, you can <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html#reimport-key-material">reimport
         * the same key material</a> into that KMS key, but you cannot import different key
         * material. </p> <p>You cannot perform this operation on an asymmetric KMS key, an
         * HMAC KMS key, or on any KMS key in a different Amazon Web Services account. For
         * more information about creating KMS keys with no key material and then importing
         * key material, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>Before using this operation, call <a>GetParametersForImport</a>. Its response
         * includes a public key and an import token. Use the public key to encrypt the key
         * material. Then, submit the import token from the same
         * <code>GetParametersForImport</code> response.</p> <p>When calling this
         * operation, you must specify the following values:</p> <ul> <li> <p>The key ID or
         * key ARN of a KMS key with no key material. Its <code>Origin</code> must be
         * <code>EXTERNAL</code>.</p> <p>To create a KMS key with no key material, call
         * <a>CreateKey</a> and set the value of its <code>Origin</code> parameter to
         * <code>EXTERNAL</code>. To get the <code>Origin</code> of a KMS key, call
         * <a>DescribeKey</a>.)</p> </li> <li> <p>The encrypted key material. To get the
         * public key to encrypt the key material, call <a>GetParametersForImport</a>.</p>
         * </li> <li> <p>The import token that <a>GetParametersForImport</a> returned. You
         * must use a public key and token from the same
         * <code>GetParametersForImport</code> response.</p> </li> <li> <p>Whether the key
         * material expires (<code>ExpirationModel</code>) and, if so, when
         * (<code>ValidTo</code>). If you set an expiration date, on the specified date,
         * KMS deletes the key material from the KMS key, making the KMS key unusable. To
         * use the KMS key in cryptographic operations again, you must reimport the same
         * key material. The only way to change the expiration model or expiration date is
         * by reimporting the same key material and specifying a new expiration date. </p>
         * </li> </ul> <p>When this operation is successful, the key state of the KMS key
         * changes from <code>PendingImport</code> to <code>Enabled</code>, and you can use
         * the KMS key.</p> <p>If this operation fails, use the exception to help determine
         * the problem. If the error is related to the key material, the import token, or
         * wrapping key, use <a>GetParametersForImport</a> to get a new public key and
         * import token for the KMS key and repeat the import procedure. For help, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html#importing-keys-overview">How
         * To Import Key Material</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p>The KMS key that you use for this operation must be in a
         * compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ImportKeyMaterial</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>DeleteImportedKeyMaterial</a> </p> </li> <li> <p>
         * <a>GetParametersForImport</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ImportKeyMaterial">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportKeyMaterialOutcome ImportKeyMaterial(const Model::ImportKeyMaterialRequest& request) const;

        /**
         * A Callable wrapper for ImportKeyMaterial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportKeyMaterialOutcomeCallable ImportKeyMaterialCallable(const Model::ImportKeyMaterialRequest& request) const;

        /**
         * An Async wrapper for ImportKeyMaterial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportKeyMaterialAsync(const Model::ImportKeyMaterialRequest& request, const ImportKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of aliases in the caller's Amazon Web Services account and
         * region. For more information about aliases, see <a>CreateAlias</a>.</p> <p>By
         * default, the <code>ListAliases</code> operation returns all aliases in the
         * account and region. To get only the aliases associated with a particular KMS
         * key, use the <code>KeyId</code> parameter.</p> <p>The <code>ListAliases</code>
         * response can include aliases that you created and associated with your customer
         * managed keys, and aliases that Amazon Web Services created and associated with
         * Amazon Web Services managed keys in your account. You can recognize Amazon Web
         * Services aliases because their names have the format
         * <code>aws/&lt;service-name&gt;</code>, such as <code>aws/dynamodb</code>.</p>
         * <p>The response might also include aliases that have no <code>TargetKeyId</code>
         * field. These are predefined aliases that Amazon Web Services has created but has
         * not yet associated with a KMS key. Aliases that Amazon Web Services creates in
         * your account, including predefined aliases, do not count against your <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/limits.html#aliases-limit">KMS
         * aliases quota</a>.</p> <p> <b>Cross-account use</b>: No.
         * <code>ListAliases</code> does not return aliases in other Amazon Web Services
         * accounts.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListAliases</a>
         * (IAM policy)</p> <p>For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
         * access to aliases</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Related operations:</b> </p> <ul> <li> <p> <a>CreateAlias</a> </p> </li>
         * <li> <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ListAliases">AWS API
         * Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all grants for the specified KMS key. </p> <p>You must specify
         * the KMS key in all requests. You can filter the grant list by grant ID or
         * grantee principal.</p> <p>For detailed information about grants, including grant
         * terminology, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants
         * in KMS</a> in the <i> <i>Key Management Service Developer Guide</i> </i>. For
         * examples of working with grants in several programming languages, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-grants.html">Programming
         * grants</a>. </p>  <p>The <code>GranteePrincipal</code> field in the
         * <code>ListGrants</code> response usually contains the user or role designated as
         * the grantee principal in the grant. However, when the grantee principal in the
         * grant is an Amazon Web Services service, the <code>GranteePrincipal</code> field
         * contains the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
         * principal</a>, which might represent several different grantee principals.</p>
         *  <p> <b>Cross-account use</b>: Yes. To perform this operation on a KMS
         * key in a different Amazon Web Services account, specify the key ARN in the value
         * of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListGrants</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateGrant</a> </p> </li> <li> <p> <a>ListRetirableGrants</a> </p> </li>
         * <li> <p> <a>RetireGrant</a> </p> </li> <li> <p> <a>RevokeGrant</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ListGrants">AWS API
         * Reference</a></p>
         */
        virtual Model::ListGrantsOutcome ListGrants(const Model::ListGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGrantsOutcomeCallable ListGrantsCallable(const Model::ListGrantsRequest& request) const;

        /**
         * An Async wrapper for ListGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGrantsAsync(const Model::ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the names of the key policies that are attached to a KMS key. This
         * operation is designed to get policy names that you can use in a
         * <a>GetKeyPolicy</a> operation. However, the only valid policy name is
         * <code>default</code>. </p> <p> <b>Cross-account use</b>: No. You cannot perform
         * this operation on a KMS key in a different Amazon Web Services account.</p> <p>
         * <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListKeyPolicies</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>GetKeyPolicy</a> </p> </li> <li> <p> <a>PutKeyPolicy</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ListKeyPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyPoliciesOutcome ListKeyPolicies(const Model::ListKeyPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListKeyPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeyPoliciesOutcomeCallable ListKeyPoliciesCallable(const Model::ListKeyPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListKeyPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeyPoliciesAsync(const Model::ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all KMS keys in the caller's Amazon Web Services account and
         * Region.</p> <p> <b>Cross-account use</b>: No. You cannot perform this operation
         * on a KMS key in a different Amazon Web Services account.</p> <p> <b>Required
         * permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListKeys</a>
         * (IAM policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateKey</a> </p> </li> <li> <p> <a>DescribeKey</a> </p> </li> <li> <p>
         * <a>ListAliases</a> </p> </li> <li> <p> <a>ListResourceTags</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ListKeys">AWS API
         * Reference</a></p>
         */
        virtual Model::ListKeysOutcome ListKeys(const Model::ListKeysRequest& request) const;

        /**
         * A Callable wrapper for ListKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeysOutcomeCallable ListKeysCallable(const Model::ListKeysRequest& request) const;

        /**
         * An Async wrapper for ListKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeysAsync(const Model::ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tags on the specified KMS key.</p> <p>For general information
         * about tags, including the format and syntax, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>. For information about using tags in KMS, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
         * keys</a>.</p> <p> <b>Cross-account use</b>: No. You cannot perform this
         * operation on a KMS key in a different Amazon Web Services account.</p> <p>
         * <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListResourceTags</a>
         * (key policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateKey</a> </p> </li> <li> <p> <a>ReplicateKey</a> </p> </li> <li> <p>
         * <a>TagResource</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ListResourceTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceTagsOutcome ListResourceTags(const Model::ListResourceTagsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceTagsOutcomeCallable ListResourceTagsCallable(const Model::ListResourceTagsRequest& request) const;

        /**
         * An Async wrapper for ListResourceTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceTagsAsync(const Model::ListResourceTagsRequest& request, const ListResourceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all grants in the Amazon Web Services account and
         * Region that have the specified retiring principal. </p> <p>You can specify any
         * principal in your Amazon Web Services account. The grants that are returned
         * include grants for KMS keys in your Amazon Web Services account and other Amazon
         * Web Services accounts. You might use this operation to determine which grants
         * you may retire. To retire a grant, use the <a>RetireGrant</a> operation.</p>
         * <p>For detailed information about grants, including grant terminology, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants
         * in KMS</a> in the <i> <i>Key Management Service Developer Guide</i> </i>. For
         * examples of working with grants in several programming languages, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-grants.html">Programming
         * grants</a>. </p> <p> <b>Cross-account use</b>: You must specify a principal in
         * your Amazon Web Services account. However, this operation can return grants in
         * any Amazon Web Services account. You do not need
         * <code>kms:ListRetirableGrants</code> permission (or any other additional
         * permission) in any Amazon Web Services account other than your own.</p> <p>
         * <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListRetirableGrants</a>
         * (IAM policy) in your Amazon Web Services account.</p> <p> <b>Related
         * operations:</b> </p> <ul> <li> <p> <a>CreateGrant</a> </p> </li> <li> <p>
         * <a>ListGrants</a> </p> </li> <li> <p> <a>RetireGrant</a> </p> </li> <li> <p>
         * <a>RevokeGrant</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ListRetirableGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRetirableGrantsOutcome ListRetirableGrants(const Model::ListRetirableGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListRetirableGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRetirableGrantsOutcomeCallable ListRetirableGrantsCallable(const Model::ListRetirableGrantsRequest& request) const;

        /**
         * An Async wrapper for ListRetirableGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRetirableGrantsAsync(const Model::ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a key policy to the specified KMS key. </p> <p>For more information
         * about key policies, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
         * Policies</a> in the <i>Key Management Service Developer Guide</i>. For help
         * writing and formatting a JSON policy document, see the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM
         * JSON Policy Reference</a> in the <i> <i>Identity and Access Management User
         * Guide</i> </i>. For examples of adding a key policy in multiple programming
         * languages, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-key-policies.html#put-policy">Setting
         * a key policy</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>
         * <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key in
         * a different Amazon Web Services account.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:PutKeyPolicy</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>GetKeyPolicy</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/PutKeyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutKeyPolicyOutcome PutKeyPolicy(const Model::PutKeyPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutKeyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutKeyPolicyOutcomeCallable PutKeyPolicyCallable(const Model::PutKeyPolicyRequest& request) const;

        /**
         * An Async wrapper for PutKeyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutKeyPolicyAsync(const Model::PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Decrypts ciphertext and then reencrypts it entirely within KMS. You can use
         * this operation to change the KMS key under which data is encrypted, such as when
         * you <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotate-keys-manually">manually
         * rotate</a> a KMS key or change the KMS key that protects a ciphertext. You can
         * also use it to reencrypt ciphertext under the same KMS key, such as to change
         * the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
         * context</a> of a ciphertext.</p> <p>The <code>ReEncrypt</code> operation can
         * decrypt ciphertext that was encrypted by using a KMS key in an KMS operation,
         * such as <a>Encrypt</a> or <a>GenerateDataKey</a>. It can also decrypt ciphertext
         * that was encrypted by using the public key of an <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html#asymmetric-cmks">asymmetric
         * KMS key</a> outside of KMS. However, it cannot decrypt ciphertext produced by
         * other libraries, such as the <a
         * href="https://docs.aws.amazon.com/encryption-sdk/latest/developer-guide/">Amazon
         * Web Services Encryption SDK</a> or <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon
         * S3 client-side encryption</a>. These libraries return a ciphertext format that
         * is incompatible with KMS.</p> <p>When you use the <code>ReEncrypt</code>
         * operation, you need to provide information for the decrypt operation and the
         * subsequent encrypt operation.</p> <ul> <li> <p>If your ciphertext was encrypted
         * under an asymmetric KMS key, you must use the <code>SourceKeyId</code> parameter
         * to identify the KMS key that encrypted the ciphertext. You must also supply the
         * encryption algorithm that was used. This information is required to decrypt the
         * data.</p> </li> <li> <p>If your ciphertext was encrypted under a symmetric
         * encryption KMS key, the <code>SourceKeyId</code> parameter is optional. KMS can
         * get this information from metadata that it adds to the symmetric ciphertext
         * blob. This feature adds durability to your implementation by ensuring that
         * authorized users can decrypt ciphertext decades after it was encrypted, even if
         * they've lost track of the key ID. However, specifying the source KMS key is
         * always recommended as a best practice. When you use the <code>SourceKeyId</code>
         * parameter to specify a KMS key, KMS uses only the KMS key you specify. If the
         * ciphertext was encrypted under a different KMS key, the <code>ReEncrypt</code>
         * operation fails. This practice ensures that you use the KMS key that you
         * intend.</p> </li> <li> <p>To reencrypt the data, you must use the
         * <code>DestinationKeyId</code> parameter to specify the KMS key that re-encrypts
         * the data after it is decrypted. If the destination KMS key is an asymmetric KMS
         * key, you must also provide the encryption algorithm. The algorithm that you
         * choose must be compatible with the KMS key.</p>  <p>When you use an
         * asymmetric KMS key to encrypt or reencrypt data, be sure to record the KMS key
         * and encryption algorithm that you choose. You will be required to provide the
         * same KMS key and encryption algorithm when you decrypt the data. If the KMS key
         * and algorithm do not match the values used to encrypt the data, the decrypt
         * operation fails.</p> <p>You are not required to supply the key ID and encryption
         * algorithm when you decrypt with symmetric encryption KMS keys because KMS stores
         * this information in the ciphertext blob. KMS cannot store metadata in ciphertext
         * generated with asymmetric keys. The standard format for asymmetric key
         * ciphertext does not include configurable fields.</p>  </li> </ul>
         * <p>The KMS key that you use for this operation must be in a compatible key
         * state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. The source KMS key and destination KMS key
         * can be in different Amazon Web Services accounts. Either or both KMS keys can be
         * in a different account than the caller. To specify a KMS key in a different
         * account, you must use its key ARN or alias ARN.</p> <p> <b>Required
         * permissions</b>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ReEncryptFrom</a>
         * permission on the source KMS key (key policy)</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ReEncryptTo</a>
         * permission on the destination KMS key (key policy)</p> </li> </ul> <p>To permit
         * reencryption from or to a KMS key, include the <code>"kms:ReEncrypt*"</code>
         * permission in your <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">key
         * policy</a>. This permission is automatically included in the key policy when you
         * use the console to create a KMS key. But you must include it manually when you
         * create a KMS key programmatically or when you use the <a>PutKeyPolicy</a>
         * operation to set a key policy.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a>Decrypt</a> </p> </li> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p> <a>GenerateDataKeyPair</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ReEncrypt">AWS API
         * Reference</a></p>
         */
        virtual Model::ReEncryptOutcome ReEncrypt(const Model::ReEncryptRequest& request) const;

        /**
         * A Callable wrapper for ReEncrypt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReEncryptOutcomeCallable ReEncryptCallable(const Model::ReEncryptRequest& request) const;

        /**
         * An Async wrapper for ReEncrypt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReEncryptAsync(const Model::ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replicates a multi-Region key into the specified Region. This operation
         * creates a multi-Region replica key based on a multi-Region primary key in a
         * different Region of the same Amazon Web Services partition. You can create
         * multiple replicas of a primary key, but each must be in a different Region. To
         * create a multi-Region primary key, use the <a>CreateKey</a> operation.</p>
         * <p>This operation supports <i>multi-Region keys</i>, an KMS feature that lets
         * you create multiple interoperable KMS keys in different Amazon Web Services
         * Regions. Because these KMS keys have the same key ID, key material, and other
         * metadata, you can use them interchangeably to encrypt data in one Amazon Web
         * Services Region and decrypt it in a different Amazon Web Services Region without
         * re-encrypting the data or making a cross-Region call. For more information about
         * multi-Region keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
         * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>A
         * <i>replica key</i> is a fully-functional KMS key that can be used independently
         * of its primary and peer replica keys. A primary key and its replica keys share
         * properties that make them interoperable. They have the same <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">key
         * ID</a> and key material. They also have the same <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-spec">key
         * spec</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-usage">key
         * usage</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-origin">key
         * material origin</a>, and <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic
         * key rotation status</a>. KMS automatically synchronizes these shared properties
         * among related multi-Region keys. All other properties of a replica key can
         * differ, including its <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">key
         * policy</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">tags</a>,
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html">aliases</a>,
         * and <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a>. KMS pricing and quotas for KMS keys apply to each
         * primary key and replica key.</p> <p>When this operation completes, the new
         * replica key has a transient key state of <code>Creating</code>. This key state
         * changes to <code>Enabled</code> (or <code>PendingImport</code>) after a few
         * seconds when the process of creating the new replica key is complete. While the
         * key state is <code>Creating</code>, you can manage key, but you cannot yet use
         * it in cryptographic operations. If you are creating and using the replica key
         * programmatically, retry on <code>KMSInvalidStateException</code> or call
         * <code>DescribeKey</code> to check its <code>KeyState</code> value before using
         * it. For details about the <code>Creating</code> key state, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>You cannot create more than one replica of a primary key in any Region. If
         * the Region already includes a replica of the key you're trying to replicate,
         * <code>ReplicateKey</code> returns an <code>AlreadyExistsException</code> error.
         * If the key state of the existing replica is <code>PendingDeletion</code>, you
         * can cancel the scheduled key deletion (<a>CancelKeyDeletion</a>) or wait for the
         * key to be deleted. The new replica key you create will have the same <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html#mrk-sync-properties">shared
         * properties</a> as the original replica key.</p> <p>The CloudTrail log of a
         * <code>ReplicateKey</code> operation records a <code>ReplicateKey</code>
         * operation in the primary key's Region and a <a>CreateKey</a> operation in the
         * replica key's Region.</p> <p>If you replicate a multi-Region primary key with
         * imported key material, the replica key is created with no key material. You must
         * import the same key material that you imported into the primary key. For
         * details, see <a
         * href="kms/latest/developerguide/multi-region-keys-import.html">Importing key
         * material into multi-Region keys</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p>To convert a replica key to a primary key, use the
         * <a>UpdatePrimaryRegion</a> operation.</p>  <p> <code>ReplicateKey</code>
         * uses different default values for the <code>KeyPolicy</code> and
         * <code>Tags</code> parameters than those used in the KMS console. For details,
         * see the parameter descriptions.</p>  <p> <b>Cross-account use</b>: No.
         * You cannot use this operation to create a replica key in a different Amazon Web
         * Services account. </p> <p> <b>Required permissions</b>: </p> <ul> <li> <p>
         * <code>kms:ReplicateKey</code> on the primary key (in the primary key's Region).
         * Include this permission in the primary key's key policy.</p> </li> <li> <p>
         * <code>kms:CreateKey</code> in an IAM policy in the replica Region.</p> </li>
         * <li> <p>To use the <code>Tags</code> parameter, <code>kms:TagResource</code> in
         * an IAM policy in the replica Region.</p> </li> </ul> <p> <b>Related
         * operations</b> </p> <ul> <li> <p> <a>CreateKey</a> </p> </li> <li> <p>
         * <a>UpdatePrimaryRegion</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ReplicateKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplicateKeyOutcome ReplicateKey(const Model::ReplicateKeyRequest& request) const;

        /**
         * A Callable wrapper for ReplicateKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplicateKeyOutcomeCallable ReplicateKeyCallable(const Model::ReplicateKeyRequest& request) const;

        /**
         * An Async wrapper for ReplicateKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplicateKeyAsync(const Model::ReplicateKeyRequest& request, const ReplicateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a grant. Typically, you retire a grant when you no longer need its
         * permissions. To identify the grant to retire, use a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">grant
         * token</a>, or both the grant ID and a key identifier (key ID or key ARN) of the
         * KMS key. The <a>CreateGrant</a> operation returns both values.</p> <p>This
         * operation can be called by the <i>retiring principal</i> for a grant, by the
         * <i>grantee principal</i> if the grant allows the <code>RetireGrant</code>
         * operation, and by the Amazon Web Services account in which the grant is created.
         * It can also be called by principals to whom permission for retiring a grant is
         * delegated. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#grant-delete">Retiring
         * and revoking grants</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p>For detailed information about grants, including grant
         * terminology, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants
         * in KMS</a> in the <i> <i>Key Management Service Developer Guide</i> </i>. For
         * examples of working with grants in several programming languages, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-grants.html">Programming
         * grants</a>. </p> <p> <b>Cross-account use</b>: Yes. You can retire a grant on a
         * KMS key in a different Amazon Web Services account.</p> <p> <b>Required
         * permissions:</b>:Permission to retire a grant is determined primarily by the
         * grant. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#grant-delete">Retiring
         * and revoking grants</a> in the <i>Key Management Service Developer
         * Guide</i>.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateGrant</a> </p> </li> <li> <p> <a>ListGrants</a> </p> </li> <li> <p>
         * <a>ListRetirableGrants</a> </p> </li> <li> <p> <a>RevokeGrant</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/RetireGrant">AWS API
         * Reference</a></p>
         */
        virtual Model::RetireGrantOutcome RetireGrant(const Model::RetireGrantRequest& request) const;

        /**
         * A Callable wrapper for RetireGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetireGrantOutcomeCallable RetireGrantCallable(const Model::RetireGrantRequest& request) const;

        /**
         * An Async wrapper for RetireGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetireGrantAsync(const Model::RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified grant. You revoke a grant to terminate the permissions
         * that the grant allows. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/managing-grants.html#grant-delete">Retiring
         * and revoking grants</a> in the <i> <i>Key Management Service Developer Guide</i>
         * </i>.</p> <p>When you create, retire, or revoke a grant, there might be a brief
         * delay, usually less than five minutes, until the grant is available throughout
         * KMS. This state is known as <i>eventual consistency</i>. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual
         * consistency</a> in the <i> <i>Key Management Service Developer Guide</i> </i>.
         * </p> <p>For detailed information about grants, including grant terminology, see
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants
         * in KMS</a> in the <i> <i>Key Management Service Developer Guide</i> </i>. For
         * examples of working with grants in several programming languages, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-grants.html">Programming
         * grants</a>. </p> <p> <b>Cross-account use</b>: Yes. To perform this operation on
         * a KMS key in a different Amazon Web Services account, specify the key ARN in the
         * value of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:RevokeGrant</a>
         * (key policy).</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateGrant</a> </p> </li> <li> <p> <a>ListGrants</a> </p> </li> <li> <p>
         * <a>ListRetirableGrants</a> </p> </li> <li> <p> <a>RetireGrant</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/RevokeGrant">AWS API
         * Reference</a></p>
         */
        virtual Model::RevokeGrantOutcome RevokeGrant(const Model::RevokeGrantRequest& request) const;

        /**
         * A Callable wrapper for RevokeGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeGrantOutcomeCallable RevokeGrantCallable(const Model::RevokeGrantRequest& request) const;

        /**
         * An Async wrapper for RevokeGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeGrantAsync(const Model::RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules the deletion of a KMS key. By default, KMS applies a waiting period
         * of 30 days, but you can specify a waiting period of 7-30 days. When this
         * operation is successful, the key state of the KMS key changes to
         * <code>PendingDeletion</code> and the key can't be used in any cryptographic
         * operations. It remains in this state for the duration of the waiting period.
         * Before the waiting period ends, you can use <a>CancelKeyDeletion</a> to cancel
         * the deletion of the KMS key. After the waiting period ends, KMS deletes the KMS
         * key, its key material, and all KMS data associated with it, including all
         * aliases that refer to it.</p>  <p>Deleting a KMS key is a destructive
         * and potentially dangerous operation. When a KMS key is deleted, all data that
         * was encrypted under the KMS key is unrecoverable. (The only exception is a
         * multi-Region replica key.) To prevent the use of a KMS key without deleting it,
         * use <a>DisableKey</a>. </p>  <p>You can schedule the deletion of a
         * multi-Region primary key and its replica keys at any time. However, KMS will not
         * delete a multi-Region primary key with existing replica keys. If you schedule
         * the deletion of a primary key with replicas, its key state changes to
         * <code>PendingReplicaDeletion</code> and it cannot be replicated or used in
         * cryptographic operations. This status can continue indefinitely. When the last
         * of its replicas keys is deleted (not just scheduled), the key state of the
         * primary key changes to <code>PendingDeletion</code> and its waiting period
         * (<code>PendingWindowInDays</code>) begins. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-delete.html">Deleting
         * multi-Region keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>When KMS <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/delete-cmk-keystore.html">deletes
         * a KMS key from an CloudHSM key store</a>, it makes a best effort to delete the
         * associated key material from the associated CloudHSM cluster. However, you might
         * need to manually <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-orphaned-key">delete
         * the orphaned key material</a> from the cluster and its backups. <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/delete-xks-key.html">Deleting
         * a KMS key from an external key store</a> has no effect on the associated
         * external key. However, for both types of custom key stores, deleting a KMS key
         * is destructive and irreversible. You cannot decrypt ciphertext encrypted under
         * the KMS key by using only its associated external key or CloudHSM key. Also, you
         * cannot recreate a KMS key in an external key store by creating a new KMS key
         * with the same key material.</p> <p>For more information about scheduling a KMS
         * key for deletion, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The
         * KMS key that you use for this operation must be in a compatible key state. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * kms:ScheduleKeyDeletion (key policy)</p> <p> <b>Related operations</b> </p> <ul>
         * <li> <p> <a>CancelKeyDeletion</a> </p> </li> <li> <p> <a>DisableKey</a> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/ScheduleKeyDeletion">AWS
         * API Reference</a></p>
         */
        virtual Model::ScheduleKeyDeletionOutcome ScheduleKeyDeletion(const Model::ScheduleKeyDeletionRequest& request) const;

        /**
         * A Callable wrapper for ScheduleKeyDeletion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScheduleKeyDeletionOutcomeCallable ScheduleKeyDeletionCallable(const Model::ScheduleKeyDeletionRequest& request) const;

        /**
         * An Async wrapper for ScheduleKeyDeletion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScheduleKeyDeletionAsync(const Model::ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a href="https://en.wikipedia.org/wiki/Digital_signature">digital
         * signature</a> for a message or message digest by using the private key in an
         * asymmetric signing KMS key. To verify the signature, use the <a>Verify</a>
         * operation, or use the public key in the same asymmetric KMS key outside of KMS.
         * For information about asymmetric KMS keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Asymmetric
         * KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>Digital signatures are generated and verified by using asymmetric key pair,
         * such as an RSA or ECC pair that is represented by an asymmetric KMS key. The key
         * owner (or an authorized user) uses their private key to sign a message. Anyone
         * with the public key can verify that the message was signed with that particular
         * private key and that the message hasn't changed since it was signed. </p> <p>To
         * use the <code>Sign</code> operation, provide the following information:</p> <ul>
         * <li> <p>Use the <code>KeyId</code> parameter to identify an asymmetric KMS key
         * with a <code>KeyUsage</code> value of <code>SIGN_VERIFY</code>. To get the
         * <code>KeyUsage</code> value of a KMS key, use the <a>DescribeKey</a> operation.
         * The caller must have <code>kms:Sign</code> permission on the KMS key.</p> </li>
         * <li> <p>Use the <code>Message</code> parameter to specify the message or message
         * digest to sign. You can submit messages of up to 4096 bytes. To sign a larger
         * message, generate a hash digest of the message, and then provide the hash digest
         * in the <code>Message</code> parameter. To indicate whether the message is a full
         * message or a digest, use the <code>MessageType</code> parameter.</p> </li> <li>
         * <p>Choose a signing algorithm that is compatible with the KMS key. </p> </li>
         * </ul>  <p>When signing a message, be sure to record the KMS key and
         * the signing algorithm. This information is required to verify the signature.</p>
         *   <p>Best practices recommend that you limit the time during
         * which any signature is effective. This deters an attack where the actor uses a
         * signed message to establish validity repeatedly or long after the message is
         * superseded. Signatures do not include a timestamp, but you can include a
         * timestamp in the signed message to help you detect when its time to refresh the
         * signature. </p>  <p>To verify the signature that this operation
         * generates, use the <a>Verify</a> operation. Or use the <a>GetPublicKey</a>
         * operation to download the public key and then use the public key to verify the
         * signature outside of KMS. </p> <p>The KMS key that you use for this operation
         * must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Sign</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>Verify</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/Sign">AWS API
         * Reference</a></p>
         */
        virtual Model::SignOutcome Sign(const Model::SignRequest& request) const;

        /**
         * A Callable wrapper for Sign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignOutcomeCallable SignCallable(const Model::SignRequest& request) const;

        /**
         * An Async wrapper for Sign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignAsync(const Model::SignRequest& request, const SignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or edits tags on a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
         * managed key</a>.</p>  <p>Tagging or untagging a KMS key can allow or deny
         * permission to the KMS key. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
         * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
         * <p>Each tag consists of a tag key and a tag value, both of which are
         * case-sensitive strings. The tag value can be an empty (null) string. To add a
         * tag, specify a new tag key and a tag value. To edit a tag, specify an existing
         * tag key and a new tag value.</p> <p>You can use this operation to tag a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
         * managed key</a>, but you cannot tag an <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
         * Web Services managed key</a>, an <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-owned-cmk">Amazon
         * Web Services owned key</a>, a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#keystore-concept">custom
         * key store</a>, or an <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#alias-concept">alias</a>.</p>
         * <p>You can also add tags to a KMS key while creating it (<a>CreateKey</a>) or
         * replicating it (<a>ReplicateKey</a>).</p> <p>For information about using tags in
         * KMS, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
         * keys</a>. For general information about tags, including the format and syntax,
         * see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>. </p> <p>The KMS key that you use for this operation must be in a
         * compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account. </p> <p> <b>Required
         * permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a>
         * (key policy)</p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateKey</a> </p> </li> <li> <p> <a>ListResourceTags</a> </p> </li> <li> <p>
         * <a>ReplicateKey</a> </p> </li> <li> <p> <a>UntagResource</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes tags from a <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
         * managed key</a>. To delete a tag, specify the tag key and the KMS key.</p>
         *  <p>Tagging or untagging a KMS key can allow or deny permission to the KMS
         * key. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
         * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
         * <p>When it succeeds, the <code>UntagResource</code> operation doesn't return any
         * output. Also, if the specified tag key isn't found on the KMS key, it doesn't
         * throw an exception or return a response. To confirm that the operation worked,
         * use the <a>ListResourceTags</a> operation.</p> <p>For information about using
         * tags in KMS, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
         * keys</a>. For general information about tags, including the format and syntax,
         * see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>. </p> <p>The KMS key that you use for this operation must be in a
         * compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account.</p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UntagResource</a>
         * (key policy)</p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateKey</a> </p> </li> <li> <p> <a>ListResourceTags</a> </p> </li> <li> <p>
         * <a>ReplicateKey</a> </p> </li> <li> <p> <a>TagResource</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an existing KMS alias with a different KMS key. Each alias is
         * associated with only one KMS key at a time, although a KMS key can have multiple
         * aliases. The alias and the KMS key must be in the same Amazon Web Services
         * account and Region.</p>  <p>Adding, deleting, or updating an alias can
         * allow or deny permission to the KMS key. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
         * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>  <p>The
         * current and new KMS key must be the same type (both symmetric or both asymmetric
         * or both HMAC), and they must have the same key usage. This restriction prevents
         * errors in code that uses aliases. If you must assign an alias to a different
         * type of KMS key, use <a>DeleteAlias</a> to delete the old alias and
         * <a>CreateAlias</a> to create a new alias.</p> <p>You cannot use
         * <code>UpdateAlias</code> to change an alias name. To change an alias name, use
         * <a>DeleteAlias</a> to delete the old alias and <a>CreateAlias</a> to create a
         * new alias.</p> <p>Because an alias is not a property of a KMS key, you can
         * create, update, and delete the aliases of a KMS key without affecting the KMS
         * key. Also, aliases do not appear in the response from the <a>DescribeKey</a>
         * operation. To get the aliases of all KMS keys in the account, use the
         * <a>ListAliases</a> operation. </p> <p>The KMS key that you use for this
         * operation must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account. </p> <p> <b>Required permissions</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateAlias</a>
         * on the alias (IAM policy).</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateAlias</a>
         * on the current KMS key (key policy).</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateAlias</a>
         * on the new KMS key (key policy).</p> </li> </ul> <p>For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
         * access to aliases</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Related operations:</b> </p> <ul> <li> <p> <a>CreateAlias</a> </p> </li>
         * <li> <p> <a>DeleteAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/UpdateAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the properties of a custom key store. You can use this operation to
         * change the properties of an CloudHSM key store or an external key store.</p>
         * <p>Use the required <code>CustomKeyStoreId</code> parameter to identify the
         * custom key store. Use the remaining optional parameters to change its
         * properties. This operation does not return any property values. To verify the
         * updated property values, use the <a>DescribeCustomKeyStores</a> operation.</p>
         * <p> This operation is part of the <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
         * key stores</a> feature in KMS, which combines the convenience and extensive
         * integration of KMS with the isolation and control of a key store that you own
         * and manage.</p>  <p>When updating the properties of an external key
         * store, verify that the updated settings connect your key store, via the external
         * key store proxy, to the same external key manager as the previous settings, or
         * to a backup or snapshot of the external key manager with the same cryptographic
         * keys. If the updated connection settings fail, you can fix them and retry,
         * although an extended delay might disrupt Amazon Web Services services. However,
         * if KMS permanently loses its access to cryptographic keys, ciphertext encrypted
         * under those keys is unrecoverable.</p>   <p>For external key
         * stores:</p> <p>Some external key managers provide a simpler method for updating
         * an external key store. For details, see your external key manager
         * documentation.</p> <p>When updating an external key store in the KMS console,
         * you can upload a JSON-based proxy configuration file with the desired values.
         * You cannot upload the proxy configuration file to the
         * <code>UpdateCustomKeyStore</code> operation. However, you can use the file to
         * help you determine the correct values for the <code>UpdateCustomKeyStore</code>
         * parameters.</p>  <p>For an CloudHSM key store, you can use this operation
         * to change the custom key store friendly name
         * (<code>NewCustomKeyStoreName</code>), to tell KMS about a change to the
         * <code>kmsuser</code> crypto user password (<code>KeyStorePassword</code>), or to
         * associate the custom key store with a different, but related, CloudHSM cluster
         * (<code>CloudHsmClusterId</code>). To update any property of an CloudHSM key
         * store, the <code>ConnectionState</code> of the CloudHSM key store must be
         * <code>DISCONNECTED</code>. </p> <p>For an external key store, you can use this
         * operation to change the custom key store friendly name
         * (<code>NewCustomKeyStoreName</code>), or to tell KMS about a change to the
         * external key store proxy authentication credentials
         * (<code>XksProxyAuthenticationCredential</code>), connection method
         * (<code>XksProxyConnectivity</code>), external proxy endpoint
         * (<code>XksProxyUriEndpoint</code>) and path (<code>XksProxyUriPath</code>). For
         * external key stores with an <code>XksProxyConnectivity</code> of
         * <code>VPC_ENDPOINT_SERVICE</code>, you can also update the Amazon VPC endpoint
         * service name (<code>XksProxyVpcEndpointServiceName</code>). To update most
         * properties of an external key store, the <code>ConnectionState</code> of the
         * external key store must be <code>DISCONNECTED</code>. However, you can update
         * the <code>CustomKeyStoreName</code>,
         * <code>XksProxyAuthenticationCredential</code>, and <code>XksProxyUriPath</code>
         * of an external key store when it is in the CONNECTED or DISCONNECTED state. </p>
         * <p>If your update requires a <code>DISCONNECTED</code> state, before using
         * <code>UpdateCustomKeyStore</code>, use the <a>DisconnectCustomKeyStore</a>
         * operation to disconnect the custom key store. After the
         * <code>UpdateCustomKeyStore</code> operation completes, use the
         * <a>ConnectCustomKeyStore</a> to reconnect the custom key store. To find the
         * <code>ConnectionState</code> of the custom key store, use the
         * <a>DescribeCustomKeyStores</a> operation. </p> <p> </p> <p>Before updating the
         * custom key store, verify that the new values allow KMS to connect the custom key
         * store to its backing key store. For example, before you change the
         * <code>XksProxyUriPath</code> value, verify that the external key store proxy is
         * reachable at the new path.</p> <p>If the operation succeeds, it returns a JSON
         * object with no properties.</p> <p> <b>Cross-account use</b>: No. You cannot
         * perform this operation on a custom key store in a different Amazon Web Services
         * account.</p> <p> <b>Required permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateCustomKeyStore</a>
         * (IAM policy)</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>ConnectCustomKeyStore</a> </p> </li> <li> <p> <a>CreateCustomKeyStore</a>
         * </p> </li> <li> <p> <a>DeleteCustomKeyStore</a> </p> </li> <li> <p>
         * <a>DescribeCustomKeyStores</a> </p> </li> <li> <p>
         * <a>DisconnectCustomKeyStore</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/UpdateCustomKeyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomKeyStoreOutcome UpdateCustomKeyStore(const Model::UpdateCustomKeyStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomKeyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomKeyStoreOutcomeCallable UpdateCustomKeyStoreCallable(const Model::UpdateCustomKeyStoreRequest& request) const;

        /**
         * An Async wrapper for UpdateCustomKeyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomKeyStoreAsync(const Model::UpdateCustomKeyStoreRequest& request, const UpdateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description of a KMS key. To see the description of a KMS key,
         * use <a>DescribeKey</a>. </p> <p>The KMS key that you use for this operation must
         * be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: No. You cannot perform this operation on a KMS key
         * in a different Amazon Web Services account. </p> <p> <b>Required
         * permissions</b>: <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateKeyDescription</a>
         * (key policy)</p> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateKey</a> </p> </li> <li> <p> <a>DescribeKey</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/UpdateKeyDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKeyDescriptionOutcome UpdateKeyDescription(const Model::UpdateKeyDescriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateKeyDescription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateKeyDescriptionOutcomeCallable UpdateKeyDescriptionCallable(const Model::UpdateKeyDescriptionRequest& request) const;

        /**
         * An Async wrapper for UpdateKeyDescription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateKeyDescriptionAsync(const Model::UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the primary key of a multi-Region key. </p> <p>This operation changes
         * the replica key in the specified Region to a primary key and changes the former
         * primary key to a replica key. For example, suppose you have a primary key in
         * <code>us-east-1</code> and a replica key in <code>eu-west-2</code>. If you run
         * <code>UpdatePrimaryRegion</code> with a <code>PrimaryRegion</code> value of
         * <code>eu-west-2</code>, the primary key is now the key in
         * <code>eu-west-2</code>, and the key in <code>us-east-1</code> becomes a replica
         * key. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-update">Updating
         * the primary Region</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>This operation supports <i>multi-Region keys</i>, an KMS feature that lets
         * you create multiple interoperable KMS keys in different Amazon Web Services
         * Regions. Because these KMS keys have the same key ID, key material, and other
         * metadata, you can use them interchangeably to encrypt data in one Amazon Web
         * Services Region and decrypt it in a different Amazon Web Services Region without
         * re-encrypting the data or making a cross-Region call. For more information about
         * multi-Region keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region
         * keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The
         * <i>primary key</i> of a multi-Region key is the source for properties that are
         * always shared by primary and replica keys, including the key material, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">key
         * ID</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-spec">key
         * spec</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-usage">key
         * usage</a>, <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-origin">key
         * material origin</a>, and <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic
         * key rotation</a>. It's the only key that can be replicated. You cannot <a
         * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_ScheduleKeyDeletion.html">delete
         * the primary key</a> until all replica keys are deleted.</p> <p>The key ID and
         * primary Region that you specify uniquely identify the replica key that will
         * become the primary key. The primary Region must already have a replica key. This
         * operation does not create a KMS key in the specified Region. To find the replica
         * keys, use the <a>DescribeKey</a> operation on the primary key or any replica
         * key. To create a replica key, use the <a>ReplicateKey</a> operation.</p> <p>You
         * can run this operation while using the affected multi-Region keys in
         * cryptographic operations. This operation should not delay, interrupt, or cause
         * failures in cryptographic operations. </p> <p>Even after this operation
         * completes, the process of updating the primary Region might still be in progress
         * for a few more seconds. Operations such as <code>DescribeKey</code> might
         * display both the old and new primary keys as replicas. The old and new primary
         * keys have a transient key state of <code>Updating</code>. The original key state
         * is restored when the update is complete. While the key state is
         * <code>Updating</code>, you can use the keys in cryptographic operations, but you
         * cannot replicate the new primary key or perform certain management operations,
         * such as enabling or disabling these keys. For details about the
         * <code>Updating</code> key state, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p>This operation does not return any output. To verify that primary key is
         * changed, use the <a>DescribeKey</a> operation.</p> <p> <b>Cross-account use</b>:
         * No. You cannot use this operation in a different Amazon Web Services account.
         * </p> <p> <b>Required permissions</b>: </p> <ul> <li> <p>
         * <code>kms:UpdatePrimaryRegion</code> on the current primary key (in the primary
         * key's Region). Include this permission primary key's key policy.</p> </li> <li>
         * <p> <code>kms:UpdatePrimaryRegion</code> on the current replica key (in the
         * replica key's Region). Include this permission in the replica key's key
         * policy.</p> </li> </ul> <p> <b>Related operations</b> </p> <ul> <li> <p>
         * <a>CreateKey</a> </p> </li> <li> <p> <a>ReplicateKey</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/UpdatePrimaryRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePrimaryRegionOutcome UpdatePrimaryRegion(const Model::UpdatePrimaryRegionRequest& request) const;

        /**
         * A Callable wrapper for UpdatePrimaryRegion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePrimaryRegionOutcomeCallable UpdatePrimaryRegionCallable(const Model::UpdatePrimaryRegionRequest& request) const;

        /**
         * An Async wrapper for UpdatePrimaryRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePrimaryRegionAsync(const Model::UpdatePrimaryRegionRequest& request, const UpdatePrimaryRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies a digital signature that was generated by the <a>Sign</a> operation.
         * </p> <p/> <p>Verification confirms that an authorized user signed the message
         * with the specified KMS key and signing algorithm, and the message hasn't changed
         * since it was signed. If the signature is verified, the value of the
         * <code>SignatureValid</code> field in the response is <code>True</code>. If the
         * signature verification fails, the <code>Verify</code> operation fails with an
         * <code>KMSInvalidSignatureException</code> exception.</p> <p>A digital signature
         * is generated by using the private key in an asymmetric KMS key. The signature is
         * verified by using the public key in the same asymmetric KMS key. For information
         * about asymmetric KMS keys, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Asymmetric
         * KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>To
         * verify a digital signature, you can use the <code>Verify</code> operation.
         * Specify the same asymmetric KMS key, message, and signing algorithm that were
         * used to produce the signature.</p> <p>You can also verify the digital signature
         * by using the public key of the KMS key outside of KMS. Use the
         * <a>GetPublicKey</a> operation to download the public key in the asymmetric KMS
         * key and then use the public key to verify the signature outside of KMS. The
         * advantage of using the <code>Verify</code> operation is that it is performed
         * within KMS. As a result, it's easy to call, the operation is performed within
         * the FIPS boundary, it is logged in CloudTrail, and you can use key policy and
         * IAM policy to determine who is authorized to use the KMS key to verify
         * signatures.</p> <p>To verify a signature outside of KMS with an SM2 public key
         * (China Regions only), you must specify the distinguishing ID. By default, KMS
         * uses <code>1234567812345678</code> as the distinguishing ID. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/asymmetric-key-specs.html#key-spec-sm-offline-verification">Offline
         * verification with SM2 key pairs</a>.</p> <p>The KMS key that you use for this
         * operation must be in a compatible key state. For details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter. </p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Verify</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>Sign</a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/Verify">AWS API
         * Reference</a></p>
         */
        virtual Model::VerifyOutcome Verify(const Model::VerifyRequest& request) const;

        /**
         * A Callable wrapper for Verify that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyOutcomeCallable VerifyCallable(const Model::VerifyRequest& request) const;

        /**
         * An Async wrapper for Verify that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyAsync(const Model::VerifyRequest& request, const VerifyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies the hash-based message authentication code (HMAC) for a specified
         * message, HMAC KMS key, and MAC algorithm. To verify the HMAC,
         * <code>VerifyMac</code> computes an HMAC using the message, HMAC KMS key, and MAC
         * algorithm that you specify, and compares the computed HMAC to the HMAC that you
         * specify. If the HMACs are identical, the verification succeeds; otherwise, it
         * fails. Verification indicates that the message hasn't changed since the HMAC was
         * calculated, and the specified key was used to generate and verify the HMAC.</p>
         * <p>HMAC KMS keys and the HMAC algorithms that KMS uses conform to industry
         * standards defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
         * 2104</a>.</p> <p>This operation is part of KMS support for HMAC KMS keys. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys
         * in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> <p>The KMS
         * key that you use for this operation must be in a compatible key state. For
         * details, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key
         * states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
         * <p> <b>Cross-account use</b>: Yes. To perform this operation with a KMS key in a
         * different Amazon Web Services account, specify the key ARN or alias ARN in the
         * value of the <code>KeyId</code> parameter. </p> <p> <b>Required permissions</b>:
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:VerifyMac</a>
         * (key policy)</p> <p> <b>Related operations</b>: <a>GenerateMac</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/VerifyMac">AWS API
         * Reference</a></p>
         */
        virtual Model::VerifyMacOutcome VerifyMac(const Model::VerifyMacRequest& request) const;

        /**
         * A Callable wrapper for VerifyMac that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyMacOutcomeCallable VerifyMacCallable(const Model::VerifyMacRequest& request) const;

        /**
         * An Async wrapper for VerifyMac that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyMacAsync(const Model::VerifyMacRequest& request, const VerifyMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KMSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KMSClient>;
      void init(const KMSClientConfiguration& clientConfiguration);

      KMSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KMSEndpointProviderBase> m_endpointProvider;
  };

} // namespace KMS
} // namespace Aws
