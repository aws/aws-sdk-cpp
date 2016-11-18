/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kms/model/CancelKeyDeletionResult.h>
#include <aws/kms/model/CreateGrantResult.h>
#include <aws/kms/model/CreateKeyResult.h>
#include <aws/kms/model/DecryptResult.h>
#include <aws/kms/model/DescribeKeyResult.h>
#include <aws/kms/model/EncryptResult.h>
#include <aws/kms/model/GenerateDataKeyResult.h>
#include <aws/kms/model/GenerateDataKeyWithoutPlaintextResult.h>
#include <aws/kms/model/GenerateRandomResult.h>
#include <aws/kms/model/GetKeyPolicyResult.h>
#include <aws/kms/model/GetKeyRotationStatusResult.h>
#include <aws/kms/model/GetParametersForImportResult.h>
#include <aws/kms/model/ImportKeyMaterialResult.h>
#include <aws/kms/model/ListAliasesResult.h>
#include <aws/kms/model/ListGrantsResult.h>
#include <aws/kms/model/ListKeyPoliciesResult.h>
#include <aws/kms/model/ListKeysResult.h>
#include <aws/kms/model/ListRetirableGrantsResult.h>
#include <aws/kms/model/ReEncryptResult.h>
#include <aws/kms/model/ScheduleKeyDeletionResult.h>
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

namespace KMS
{

namespace Model
{
        class CancelKeyDeletionRequest;
        class CreateAliasRequest;
        class CreateGrantRequest;
        class CreateKeyRequest;
        class DecryptRequest;
        class DeleteAliasRequest;
        class DeleteImportedKeyMaterialRequest;
        class DescribeKeyRequest;
        class DisableKeyRequest;
        class DisableKeyRotationRequest;
        class EnableKeyRequest;
        class EnableKeyRotationRequest;
        class EncryptRequest;
        class GenerateDataKeyRequest;
        class GenerateDataKeyWithoutPlaintextRequest;
        class GenerateRandomRequest;
        class GetKeyPolicyRequest;
        class GetKeyRotationStatusRequest;
        class GetParametersForImportRequest;
        class ImportKeyMaterialRequest;
        class ListAliasesRequest;
        class ListGrantsRequest;
        class ListKeyPoliciesRequest;
        class ListKeysRequest;
        class ListRetirableGrantsRequest;
        class PutKeyPolicyRequest;
        class ReEncryptRequest;
        class RetireGrantRequest;
        class RevokeGrantRequest;
        class ScheduleKeyDeletionRequest;
        class UpdateAliasRequest;
        class UpdateKeyDescriptionRequest;

        typedef Aws::Utils::Outcome<CancelKeyDeletionResult, Aws::Client::AWSError<KMSErrors>> CancelKeyDeletionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateGrantResult, Aws::Client::AWSError<KMSErrors>> CreateGrantOutcome;
        typedef Aws::Utils::Outcome<CreateKeyResult, Aws::Client::AWSError<KMSErrors>> CreateKeyOutcome;
        typedef Aws::Utils::Outcome<DecryptResult, Aws::Client::AWSError<KMSErrors>> DecryptOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> DeleteImportedKeyMaterialOutcome;
        typedef Aws::Utils::Outcome<DescribeKeyResult, Aws::Client::AWSError<KMSErrors>> DescribeKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> DisableKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> DisableKeyRotationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> EnableKeyOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> EnableKeyRotationOutcome;
        typedef Aws::Utils::Outcome<EncryptResult, Aws::Client::AWSError<KMSErrors>> EncryptOutcome;
        typedef Aws::Utils::Outcome<GenerateDataKeyResult, Aws::Client::AWSError<KMSErrors>> GenerateDataKeyOutcome;
        typedef Aws::Utils::Outcome<GenerateDataKeyWithoutPlaintextResult, Aws::Client::AWSError<KMSErrors>> GenerateDataKeyWithoutPlaintextOutcome;
        typedef Aws::Utils::Outcome<GenerateRandomResult, Aws::Client::AWSError<KMSErrors>> GenerateRandomOutcome;
        typedef Aws::Utils::Outcome<GetKeyPolicyResult, Aws::Client::AWSError<KMSErrors>> GetKeyPolicyOutcome;
        typedef Aws::Utils::Outcome<GetKeyRotationStatusResult, Aws::Client::AWSError<KMSErrors>> GetKeyRotationStatusOutcome;
        typedef Aws::Utils::Outcome<GetParametersForImportResult, Aws::Client::AWSError<KMSErrors>> GetParametersForImportOutcome;
        typedef Aws::Utils::Outcome<ImportKeyMaterialResult, Aws::Client::AWSError<KMSErrors>> ImportKeyMaterialOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<KMSErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListGrantsResult, Aws::Client::AWSError<KMSErrors>> ListGrantsOutcome;
        typedef Aws::Utils::Outcome<ListKeyPoliciesResult, Aws::Client::AWSError<KMSErrors>> ListKeyPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListKeysResult, Aws::Client::AWSError<KMSErrors>> ListKeysOutcome;
        typedef Aws::Utils::Outcome<ListRetirableGrantsResult, Aws::Client::AWSError<KMSErrors>> ListRetirableGrantsOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> PutKeyPolicyOutcome;
        typedef Aws::Utils::Outcome<ReEncryptResult, Aws::Client::AWSError<KMSErrors>> ReEncryptOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> RetireGrantOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> RevokeGrantOutcome;
        typedef Aws::Utils::Outcome<ScheduleKeyDeletionResult, Aws::Client::AWSError<KMSErrors>> ScheduleKeyDeletionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<KMSErrors>> UpdateKeyDescriptionOutcome;

        typedef std::future<CancelKeyDeletionOutcome> CancelKeyDeletionOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateGrantOutcome> CreateGrantOutcomeCallable;
        typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
        typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteImportedKeyMaterialOutcome> DeleteImportedKeyMaterialOutcomeCallable;
        typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
        typedef std::future<DisableKeyOutcome> DisableKeyOutcomeCallable;
        typedef std::future<DisableKeyRotationOutcome> DisableKeyRotationOutcomeCallable;
        typedef std::future<EnableKeyOutcome> EnableKeyOutcomeCallable;
        typedef std::future<EnableKeyRotationOutcome> EnableKeyRotationOutcomeCallable;
        typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
        typedef std::future<GenerateDataKeyOutcome> GenerateDataKeyOutcomeCallable;
        typedef std::future<GenerateDataKeyWithoutPlaintextOutcome> GenerateDataKeyWithoutPlaintextOutcomeCallable;
        typedef std::future<GenerateRandomOutcome> GenerateRandomOutcomeCallable;
        typedef std::future<GetKeyPolicyOutcome> GetKeyPolicyOutcomeCallable;
        typedef std::future<GetKeyRotationStatusOutcome> GetKeyRotationStatusOutcomeCallable;
        typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
        typedef std::future<ImportKeyMaterialOutcome> ImportKeyMaterialOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListGrantsOutcome> ListGrantsOutcomeCallable;
        typedef std::future<ListKeyPoliciesOutcome> ListKeyPoliciesOutcomeCallable;
        typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
        typedef std::future<ListRetirableGrantsOutcome> ListRetirableGrantsOutcomeCallable;
        typedef std::future<PutKeyPolicyOutcome> PutKeyPolicyOutcomeCallable;
        typedef std::future<ReEncryptOutcome> ReEncryptOutcomeCallable;
        typedef std::future<RetireGrantOutcome> RetireGrantOutcomeCallable;
        typedef std::future<RevokeGrantOutcome> RevokeGrantOutcomeCallable;
        typedef std::future<ScheduleKeyDeletionOutcome> ScheduleKeyDeletionOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateKeyDescriptionOutcome> UpdateKeyDescriptionOutcomeCallable;
} // namespace Model

  class KMSClient;

    typedef std::function<void(const KMSClient*, const Model::CancelKeyDeletionRequest&, const Model::CancelKeyDeletionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelKeyDeletionResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::CreateGrantRequest&, const Model::CreateGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGrantResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::CreateKeyRequest&, const Model::CreateKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DecryptRequest&, const Model::DecryptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecryptResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DeleteImportedKeyMaterialRequest&, const Model::DeleteImportedKeyMaterialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImportedKeyMaterialResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DescribeKeyRequest&, const Model::DescribeKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DisableKeyRequest&, const Model::DisableKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DisableKeyRotationRequest&, const Model::DisableKeyRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableKeyRotationResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::EnableKeyRequest&, const Model::EnableKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::EnableKeyRotationRequest&, const Model::EnableKeyRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableKeyRotationResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::EncryptRequest&, const Model::EncryptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EncryptResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateDataKeyRequest&, const Model::GenerateDataKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateDataKeyWithoutPlaintextRequest&, const Model::GenerateDataKeyWithoutPlaintextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataKeyWithoutPlaintextResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateRandomRequest&, const Model::GenerateRandomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateRandomResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GetKeyPolicyRequest&, const Model::GetKeyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyPolicyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GetKeyRotationStatusRequest&, const Model::GetKeyRotationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyRotationStatusResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GetParametersForImportRequest&, const Model::GetParametersForImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersForImportResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ImportKeyMaterialRequest&, const Model::ImportKeyMaterialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportKeyMaterialResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListGrantsRequest&, const Model::ListGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGrantsResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListKeyPoliciesRequest&, const Model::ListKeyPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyPoliciesResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListKeysRequest&, const Model::ListKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeysResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListRetirableGrantsRequest&, const Model::ListRetirableGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRetirableGrantsResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::PutKeyPolicyRequest&, const Model::PutKeyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutKeyPolicyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ReEncryptRequest&, const Model::ReEncryptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReEncryptResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::RetireGrantRequest&, const Model::RetireGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetireGrantResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::RevokeGrantRequest&, const Model::RevokeGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeGrantResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ScheduleKeyDeletionRequest&, const Model::ScheduleKeyDeletionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScheduleKeyDeletionResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::UpdateKeyDescriptionRequest&, const Model::UpdateKeyDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKeyDescriptionResponseReceivedHandler;

  /**
   * <fullname>AWS Key Management Service</fullname> <p>AWS Key Management Service
   * (AWS KMS) is an encryption and key management web service. This guide describes
   * the AWS KMS operations that you can call programmatically. For general
   * information about AWS KMS, see the <a
   * href="http://docs.aws.amazon.com/kms/latest/developerguide/">AWS Key Management
   * Service Developer Guide</a>.</p> <note> <p>AWS provides SDKs that consist of
   * libraries and sample code for various programming languages and platforms (Java,
   * Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create
   * programmatic access to AWS KMS and other AWS services. For example, the SDKs
   * take care of tasks such as signing requests (see below), managing errors, and
   * retrying requests automatically. For more information about the AWS SDKs,
   * including how to download and install them, see <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * </note> <p>We recommend that you use the AWS SDKs to make programmatic API calls
   * to AWS KMS.</p> <p>Clients must support TLS (Transport Layer Security) 1.0. We
   * recommend TLS 1.2. Clients must also support cipher suites with Perfect Forward
   * Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral
   * Diffie-Hellman (ECDHE). Most modern systems such as Java 7 and later support
   * these modes.</p> <p> <b>Signing Requests</b> </p> <p>Requests must be signed by
   * using an access key ID and a secret access key. We strongly recommend that you
   * <i>do not</i> use your AWS account (root) access key ID and secret key for
   * everyday work with AWS KMS. Instead, use the access key ID and secret access key
   * for an IAM user, or you can use the AWS Security Token Service to generate
   * temporary security credentials that you can use to sign requests.</p> <p>All AWS
   * KMS operations require <a
   * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4</a>.</p> <p> <b>Logging API Requests</b> </p> <p>AWS KMS supports AWS
   * CloudTrail, a service that logs AWS API calls and related events for your AWS
   * account and delivers them to an Amazon S3 bucket that you specify. By using the
   * information collected by CloudTrail, you can determine what requests were made
   * to AWS KMS, who made the request, when it was made, and so on. To learn more
   * about CloudTrail, including how to turn it on and find your log files, see the
   * <a href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/">AWS
   * CloudTrail User Guide</a>.</p> <p> <b>Additional Resources</b> </p> <p>For more
   * information about credentials and request signing, see the following:</p> <ul>
   * <li> <p> <a
   * href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS
   * Security Credentials</a> - This topic provides general information about the
   * types of credentials used for accessing AWS.</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary
   * Security Credentials</a> - This section of the <i>IAM User Guide</i> describes
   * how to create and use temporary security credentials.</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a> - This set of topics walks you through the process
   * of signing a request using an access key ID and a secret access key.</p> </li>
   * </ul> <p> <b>Commonly Used APIs</b> </p> <p>Of the APIs discussed in this guide,
   * the following will prove the most useful for most applications. You will likely
   * perform actions other than these, such as creating keys and assigning policies,
   * by using the console.</p> <ul> <li> <p> <a>Encrypt</a> </p> </li> <li> <p>
   * <a>Decrypt</a> </p> </li> <li> <p> <a>GenerateDataKey</a> </p> </li> <li> <p>
   * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> </ul>
   */
  class AWS_KMS_API KMSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KMSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KMSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KMSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~KMSClient();

        /**
         * <p>Cancels the deletion of a customer master key (CMK). When this operation is
         * successful, the CMK is set to the <code>Disabled</code> state. To enable a CMK,
         * use <a>EnableKey</a>.</p> <p>For more information about scheduling and canceling
         * deletion of a CMK, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * Customer Master Keys</a> in the <i>AWS Key Management Service Developer
         * Guide</i>.</p>
         */
        virtual Model::CancelKeyDeletionOutcome CancelKeyDeletion(const Model::CancelKeyDeletionRequest& request) const;

        /**
         * <p>Cancels the deletion of a customer master key (CMK). When this operation is
         * successful, the CMK is set to the <code>Disabled</code> state. To enable a CMK,
         * use <a>EnableKey</a>.</p> <p>For more information about scheduling and canceling
         * deletion of a CMK, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * Customer Master Keys</a> in the <i>AWS Key Management Service Developer
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelKeyDeletionOutcomeCallable CancelKeyDeletionCallable(const Model::CancelKeyDeletionRequest& request) const;

        /**
         * <p>Cancels the deletion of a customer master key (CMK). When this operation is
         * successful, the CMK is set to the <code>Disabled</code> state. To enable a CMK,
         * use <a>EnableKey</a>.</p> <p>For more information about scheduling and canceling
         * deletion of a CMK, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * Customer Master Keys</a> in the <i>AWS Key Management Service Developer
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelKeyDeletionAsync(const Model::CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a display name for a customer master key. An alias can be used to
         * identify a key and should be unique. The console enforces a one-to-one mapping
         * between the alias and a key. An alias name can contain only alphanumeric
         * characters, forward slashes (/), underscores (_), and dashes (-). An alias must
         * start with the word "alias" followed by a forward slash (alias/). An alias that
         * begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon
         * Web Services (AWS).</p> <p>The alias and the key it is mapped to must be in the
         * same AWS account and the same region.</p> <p>To map an alias to a different key,
         * call <a>UpdateAlias</a>.</p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates a display name for a customer master key. An alias can be used to
         * identify a key and should be unique. The console enforces a one-to-one mapping
         * between the alias and a key. An alias name can contain only alphanumeric
         * characters, forward slashes (/), underscores (_), and dashes (-). An alias must
         * start with the word "alias" followed by a forward slash (alias/). An alias that
         * begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon
         * Web Services (AWS).</p> <p>The alias and the key it is mapped to must be in the
         * same AWS account and the same region.</p> <p>To map an alias to a different key,
         * call <a>UpdateAlias</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates a display name for a customer master key. An alias can be used to
         * identify a key and should be unique. The console enforces a one-to-one mapping
         * between the alias and a key. An alias name can contain only alphanumeric
         * characters, forward slashes (/), underscores (_), and dashes (-). An alias must
         * start with the word "alias" followed by a forward slash (alias/). An alias that
         * begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon
         * Web Services (AWS).</p> <p>The alias and the key it is mapped to must be in the
         * same AWS account and the same region.</p> <p>To map an alias to a different key,
         * call <a>UpdateAlias</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a grant to a key to specify who can use the key and under what
         * conditions. Grants are alternate permission mechanisms to key policies.</p>
         * <p>For more information about grants, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a>
         * in the <i>AWS Key Management Service Developer Guide</i>.</p>
         */
        virtual Model::CreateGrantOutcome CreateGrant(const Model::CreateGrantRequest& request) const;

        /**
         * <p>Adds a grant to a key to specify who can use the key and under what
         * conditions. Grants are alternate permission mechanisms to key policies.</p>
         * <p>For more information about grants, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a>
         * in the <i>AWS Key Management Service Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGrantOutcomeCallable CreateGrantCallable(const Model::CreateGrantRequest& request) const;

        /**
         * <p>Adds a grant to a key to specify who can use the key and under what
         * conditions. Grants are alternate permission mechanisms to key policies.</p>
         * <p>For more information about grants, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a>
         * in the <i>AWS Key Management Service Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGrantAsync(const Model::CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a customer master key (CMK).</p> <p>You can use a CMK to encrypt
         * small amounts of data (4 KiB or less) directly, but CMKs are more commonly used
         * to encrypt data encryption keys (DEKs), which are used to encrypt raw data. For
         * more information about DEKs and the difference between CMKs and DEKs, see the
         * following:</p> <ul> <li> <p>The <a>GenerateDataKey</a> operation</p> </li> <li>
         * <p> <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
         * Key Management Service Concepts</a> in the <i>AWS Key Management Service
         * Developer Guide</i> </p> </li> </ul>
         */
        virtual Model::CreateKeyOutcome CreateKey(const Model::CreateKeyRequest& request) const;

        /**
         * <p>Creates a customer master key (CMK).</p> <p>You can use a CMK to encrypt
         * small amounts of data (4 KiB or less) directly, but CMKs are more commonly used
         * to encrypt data encryption keys (DEKs), which are used to encrypt raw data. For
         * more information about DEKs and the difference between CMKs and DEKs, see the
         * following:</p> <ul> <li> <p>The <a>GenerateDataKey</a> operation</p> </li> <li>
         * <p> <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
         * Key Management Service Concepts</a> in the <i>AWS Key Management Service
         * Developer Guide</i> </p> </li> </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeyOutcomeCallable CreateKeyCallable(const Model::CreateKeyRequest& request) const;

        /**
         * <p>Creates a customer master key (CMK).</p> <p>You can use a CMK to encrypt
         * small amounts of data (4 KiB or less) directly, but CMKs are more commonly used
         * to encrypt data encryption keys (DEKs), which are used to encrypt raw data. For
         * more information about DEKs and the difference between CMKs and DEKs, see the
         * following:</p> <ul> <li> <p>The <a>GenerateDataKey</a> operation</p> </li> <li>
         * <p> <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">AWS
         * Key Management Service Concepts</a> in the <i>AWS Key Management Service
         * Developer Guide</i> </p> </li> </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Decrypts ciphertext. Ciphertext is plaintext that has been previously
         * encrypted by using any of the following functions:</p> <ul> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a>Encrypt</a> </p>
         * </li> </ul> <p>Note that if a caller has been granted access permissions to all
         * keys (through, for example, IAM user policies that grant <code>Decrypt</code>
         * permission on all resources), then ciphertext encrypted by using keys in other
         * accounts where the key grants access to the caller can be decrypted. To remedy
         * this, we recommend that you do not grant <code>Decrypt</code> access in an IAM
         * user policy. Instead grant <code>Decrypt</code> access only in key policies. If
         * you must grant <code>Decrypt</code> access in an IAM user policy, you should
         * scope the resource to specific keys or to specific trusted accounts.</p>
         */
        virtual Model::DecryptOutcome Decrypt(const Model::DecryptRequest& request) const;

        /**
         * <p>Decrypts ciphertext. Ciphertext is plaintext that has been previously
         * encrypted by using any of the following functions:</p> <ul> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a>Encrypt</a> </p>
         * </li> </ul> <p>Note that if a caller has been granted access permissions to all
         * keys (through, for example, IAM user policies that grant <code>Decrypt</code>
         * permission on all resources), then ciphertext encrypted by using keys in other
         * accounts where the key grants access to the caller can be decrypted. To remedy
         * this, we recommend that you do not grant <code>Decrypt</code> access in an IAM
         * user policy. Instead grant <code>Decrypt</code> access only in key policies. If
         * you must grant <code>Decrypt</code> access in an IAM user policy, you should
         * scope the resource to specific keys or to specific trusted accounts.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DecryptOutcomeCallable DecryptCallable(const Model::DecryptRequest& request) const;

        /**
         * <p>Decrypts ciphertext. Ciphertext is plaintext that has been previously
         * encrypted by using any of the following functions:</p> <ul> <li> <p>
         * <a>GenerateDataKey</a> </p> </li> <li> <p>
         * <a>GenerateDataKeyWithoutPlaintext</a> </p> </li> <li> <p> <a>Encrypt</a> </p>
         * </li> </ul> <p>Note that if a caller has been granted access permissions to all
         * keys (through, for example, IAM user policies that grant <code>Decrypt</code>
         * permission on all resources), then ciphertext encrypted by using keys in other
         * accounts where the key grants access to the caller can be decrypted. To remedy
         * this, we recommend that you do not grant <code>Decrypt</code> access in an IAM
         * user policy. Instead grant <code>Decrypt</code> access only in key policies. If
         * you must grant <code>Decrypt</code> access in an IAM user policy, you should
         * scope the resource to specific keys or to specific trusted accounts.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DecryptAsync(const Model::DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified alias. To map an alias to a different key, call
         * <a>UpdateAlias</a>.</p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes the specified alias. To map an alias to a different key, call
         * <a>UpdateAlias</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes the specified alias. To map an alias to a different key, call
         * <a>UpdateAlias</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes key material that you previously imported and makes the specified
         * customer master key (CMK) unusable. For more information about importing key
         * material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>When the specified CMK is in the <code>PendingDeletion</code> state, this
         * operation does not change the CMK's state. Otherwise, it changes the CMK's state
         * to <code>PendingImport</code>.</p> <p>After you delete key material, you can use
         * <a>ImportKeyMaterial</a> to reimport the same key material into the CMK.</p>
         */
        virtual Model::DeleteImportedKeyMaterialOutcome DeleteImportedKeyMaterial(const Model::DeleteImportedKeyMaterialRequest& request) const;

        /**
         * <p>Deletes key material that you previously imported and makes the specified
         * customer master key (CMK) unusable. For more information about importing key
         * material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>When the specified CMK is in the <code>PendingDeletion</code> state, this
         * operation does not change the CMK's state. Otherwise, it changes the CMK's state
         * to <code>PendingImport</code>.</p> <p>After you delete key material, you can use
         * <a>ImportKeyMaterial</a> to reimport the same key material into the CMK.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImportedKeyMaterialOutcomeCallable DeleteImportedKeyMaterialCallable(const Model::DeleteImportedKeyMaterialRequest& request) const;

        /**
         * <p>Deletes key material that you previously imported and makes the specified
         * customer master key (CMK) unusable. For more information about importing key
         * material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>When the specified CMK is in the <code>PendingDeletion</code> state, this
         * operation does not change the CMK's state. Otherwise, it changes the CMK's state
         * to <code>PendingImport</code>.</p> <p>After you delete key material, you can use
         * <a>ImportKeyMaterial</a> to reimport the same key material into the CMK.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImportedKeyMaterialAsync(const Model::DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides detailed information about the specified customer master key.</p>
         */
        virtual Model::DescribeKeyOutcome DescribeKey(const Model::DescribeKeyRequest& request) const;

        /**
         * <p>Provides detailed information about the specified customer master key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeKeyOutcomeCallable DescribeKeyCallable(const Model::DescribeKeyRequest& request) const;

        /**
         * <p>Provides detailed information about the specified customer master key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeKeyAsync(const Model::DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the state of a customer master key (CMK) to disabled, thereby preventing
         * its use for cryptographic operations. For more information about how key state
         * affects the use of a CMK, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
         * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
         * Management Service Developer Guide</i>.</p>
         */
        virtual Model::DisableKeyOutcome DisableKey(const Model::DisableKeyRequest& request) const;

        /**
         * <p>Sets the state of a customer master key (CMK) to disabled, thereby preventing
         * its use for cryptographic operations. For more information about how key state
         * affects the use of a CMK, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
         * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
         * Management Service Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableKeyOutcomeCallable DisableKeyCallable(const Model::DisableKeyRequest& request) const;

        /**
         * <p>Sets the state of a customer master key (CMK) to disabled, thereby preventing
         * its use for cryptographic operations. For more information about how key state
         * affects the use of a CMK, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How
         * Key State Affects the Use of a Customer Master Key</a> in the <i>AWS Key
         * Management Service Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableKeyAsync(const Model::DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables rotation of the specified key.</p>
         */
        virtual Model::DisableKeyRotationOutcome DisableKeyRotation(const Model::DisableKeyRotationRequest& request) const;

        /**
         * <p>Disables rotation of the specified key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableKeyRotationOutcomeCallable DisableKeyRotationCallable(const Model::DisableKeyRotationRequest& request) const;

        /**
         * <p>Disables rotation of the specified key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableKeyRotationAsync(const Model::DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Marks a key as enabled, thereby permitting its use.</p>
         */
        virtual Model::EnableKeyOutcome EnableKey(const Model::EnableKeyRequest& request) const;

        /**
         * <p>Marks a key as enabled, thereby permitting its use.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableKeyOutcomeCallable EnableKeyCallable(const Model::EnableKeyRequest& request) const;

        /**
         * <p>Marks a key as enabled, thereby permitting its use.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableKeyAsync(const Model::EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables rotation of the specified customer master key.</p>
         */
        virtual Model::EnableKeyRotationOutcome EnableKeyRotation(const Model::EnableKeyRotationRequest& request) const;

        /**
         * <p>Enables rotation of the specified customer master key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableKeyRotationOutcomeCallable EnableKeyRotationCallable(const Model::EnableKeyRotationRequest& request) const;

        /**
         * <p>Enables rotation of the specified customer master key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableKeyRotationAsync(const Model::EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Encrypts plaintext into ciphertext by using a customer master key. The
         * <code>Encrypt</code> function has two primary use cases:</p> <ul> <li> <p>You
         * can encrypt up to 4 KB of arbitrary data such as an RSA key, a database
         * password, or other sensitive customer information.</p> </li> <li> <p>If you are
         * moving encrypted data from one region to another, you can use this API to
         * encrypt in the new region the plaintext data key that was used to encrypt the
         * data in the original region. This provides you with an encrypted copy of the
         * data key that can be decrypted in the new region and used there to decrypt the
         * encrypted data.</p> </li> </ul> <p>Unless you are moving encrypted data from one
         * region to another, you don't use this function to encrypt a generated data key
         * within a region. You retrieve data keys already encrypted by calling the
         * <a>GenerateDataKey</a> or <a>GenerateDataKeyWithoutPlaintext</a> function. Data
         * keys don't need to be encrypted again by calling <code>Encrypt</code>.</p> <p>If
         * you want to encrypt data locally in your application, you can use the
         * <code>GenerateDataKey</code> function to return a plaintext data encryption key
         * and a copy of the key encrypted under the customer master key (CMK) of your
         * choosing.</p>
         */
        virtual Model::EncryptOutcome Encrypt(const Model::EncryptRequest& request) const;

        /**
         * <p>Encrypts plaintext into ciphertext by using a customer master key. The
         * <code>Encrypt</code> function has two primary use cases:</p> <ul> <li> <p>You
         * can encrypt up to 4 KB of arbitrary data such as an RSA key, a database
         * password, or other sensitive customer information.</p> </li> <li> <p>If you are
         * moving encrypted data from one region to another, you can use this API to
         * encrypt in the new region the plaintext data key that was used to encrypt the
         * data in the original region. This provides you with an encrypted copy of the
         * data key that can be decrypted in the new region and used there to decrypt the
         * encrypted data.</p> </li> </ul> <p>Unless you are moving encrypted data from one
         * region to another, you don't use this function to encrypt a generated data key
         * within a region. You retrieve data keys already encrypted by calling the
         * <a>GenerateDataKey</a> or <a>GenerateDataKeyWithoutPlaintext</a> function. Data
         * keys don't need to be encrypted again by calling <code>Encrypt</code>.</p> <p>If
         * you want to encrypt data locally in your application, you can use the
         * <code>GenerateDataKey</code> function to return a plaintext data encryption key
         * and a copy of the key encrypted under the customer master key (CMK) of your
         * choosing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EncryptOutcomeCallable EncryptCallable(const Model::EncryptRequest& request) const;

        /**
         * <p>Encrypts plaintext into ciphertext by using a customer master key. The
         * <code>Encrypt</code> function has two primary use cases:</p> <ul> <li> <p>You
         * can encrypt up to 4 KB of arbitrary data such as an RSA key, a database
         * password, or other sensitive customer information.</p> </li> <li> <p>If you are
         * moving encrypted data from one region to another, you can use this API to
         * encrypt in the new region the plaintext data key that was used to encrypt the
         * data in the original region. This provides you with an encrypted copy of the
         * data key that can be decrypted in the new region and used there to decrypt the
         * encrypted data.</p> </li> </ul> <p>Unless you are moving encrypted data from one
         * region to another, you don't use this function to encrypt a generated data key
         * within a region. You retrieve data keys already encrypted by calling the
         * <a>GenerateDataKey</a> or <a>GenerateDataKeyWithoutPlaintext</a> function. Data
         * keys don't need to be encrypted again by calling <code>Encrypt</code>.</p> <p>If
         * you want to encrypt data locally in your application, you can use the
         * <code>GenerateDataKey</code> function to return a plaintext data encryption key
         * and a copy of the key encrypted under the customer master key (CMK) of your
         * choosing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EncryptAsync(const Model::EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a data encryption key that you can use in your application to encrypt
         * data locally.</p> <p>You must specify the customer master key (CMK) under which
         * to generate the data key. You must also specify the length of the data key using
         * either the <code>KeySpec</code> or <code>NumberOfBytes</code> field. You must
         * specify one field or the other, but not both. For common key lengths (128-bit
         * and 256-bit symmetric keys), we recommend that you use <code>KeySpec</code>.</p>
         * <p>This operation returns a plaintext copy of the data key in the
         * <code>Plaintext</code> field of the response, and an encrypted copy of the data
         * key in the <code>CiphertextBlob</code> field. The data key is encrypted under
         * the CMK specified in the <code>KeyId</code> field of the request.</p> <p>We
         * recommend that you use the following pattern to encrypt data locally in your
         * application:</p> <ol> <li> <p>Use this operation (<code>GenerateDataKey</code>)
         * to retrieve a data encryption key.</p> </li> <li> <p>Use the plaintext data
         * encryption key (returned in the <code>Plaintext</code> field of the response) to
         * encrypt data locally, then erase the plaintext data key from memory.</p> </li>
         * <li> <p>Store the encrypted data key (returned in the
         * <code>CiphertextBlob</code> field of the response) alongside the locally
         * encrypted data.</p> </li> </ol> <p>To decrypt data locally:</p> <ol> <li> <p>Use
         * the <a>Decrypt</a> operation to decrypt the encrypted data key into a plaintext
         * copy of the data key.</p> </li> <li> <p>Use the plaintext data key to decrypt
         * data locally, then erase the plaintext data key from memory.</p> </li> </ol>
         * <p>To return only an encrypted copy of the data key, use
         * <a>GenerateDataKeyWithoutPlaintext</a>. To return an arbitrary unpredictable
         * byte string, use <a>GenerateRandom</a>.</p> <p>If you use the optional
         * <code>EncryptionContext</code> field, you must store at least enough information
         * to be able to reconstruct the full encryption context when you later send the
         * ciphertext to the <a>Decrypt</a> operation. It is a good practice to choose an
         * encryption context that you can reconstruct on the fly to better secure the
         * ciphertext. For more information, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
         * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         */
        virtual Model::GenerateDataKeyOutcome GenerateDataKey(const Model::GenerateDataKeyRequest& request) const;

        /**
         * <p>Returns a data encryption key that you can use in your application to encrypt
         * data locally.</p> <p>You must specify the customer master key (CMK) under which
         * to generate the data key. You must also specify the length of the data key using
         * either the <code>KeySpec</code> or <code>NumberOfBytes</code> field. You must
         * specify one field or the other, but not both. For common key lengths (128-bit
         * and 256-bit symmetric keys), we recommend that you use <code>KeySpec</code>.</p>
         * <p>This operation returns a plaintext copy of the data key in the
         * <code>Plaintext</code> field of the response, and an encrypted copy of the data
         * key in the <code>CiphertextBlob</code> field. The data key is encrypted under
         * the CMK specified in the <code>KeyId</code> field of the request.</p> <p>We
         * recommend that you use the following pattern to encrypt data locally in your
         * application:</p> <ol> <li> <p>Use this operation (<code>GenerateDataKey</code>)
         * to retrieve a data encryption key.</p> </li> <li> <p>Use the plaintext data
         * encryption key (returned in the <code>Plaintext</code> field of the response) to
         * encrypt data locally, then erase the plaintext data key from memory.</p> </li>
         * <li> <p>Store the encrypted data key (returned in the
         * <code>CiphertextBlob</code> field of the response) alongside the locally
         * encrypted data.</p> </li> </ol> <p>To decrypt data locally:</p> <ol> <li> <p>Use
         * the <a>Decrypt</a> operation to decrypt the encrypted data key into a plaintext
         * copy of the data key.</p> </li> <li> <p>Use the plaintext data key to decrypt
         * data locally, then erase the plaintext data key from memory.</p> </li> </ol>
         * <p>To return only an encrypted copy of the data key, use
         * <a>GenerateDataKeyWithoutPlaintext</a>. To return an arbitrary unpredictable
         * byte string, use <a>GenerateRandom</a>.</p> <p>If you use the optional
         * <code>EncryptionContext</code> field, you must store at least enough information
         * to be able to reconstruct the full encryption context when you later send the
         * ciphertext to the <a>Decrypt</a> operation. It is a good practice to choose an
         * encryption context that you can reconstruct on the fly to better secure the
         * ciphertext. For more information, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
         * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataKeyOutcomeCallable GenerateDataKeyCallable(const Model::GenerateDataKeyRequest& request) const;

        /**
         * <p>Returns a data encryption key that you can use in your application to encrypt
         * data locally.</p> <p>You must specify the customer master key (CMK) under which
         * to generate the data key. You must also specify the length of the data key using
         * either the <code>KeySpec</code> or <code>NumberOfBytes</code> field. You must
         * specify one field or the other, but not both. For common key lengths (128-bit
         * and 256-bit symmetric keys), we recommend that you use <code>KeySpec</code>.</p>
         * <p>This operation returns a plaintext copy of the data key in the
         * <code>Plaintext</code> field of the response, and an encrypted copy of the data
         * key in the <code>CiphertextBlob</code> field. The data key is encrypted under
         * the CMK specified in the <code>KeyId</code> field of the request.</p> <p>We
         * recommend that you use the following pattern to encrypt data locally in your
         * application:</p> <ol> <li> <p>Use this operation (<code>GenerateDataKey</code>)
         * to retrieve a data encryption key.</p> </li> <li> <p>Use the plaintext data
         * encryption key (returned in the <code>Plaintext</code> field of the response) to
         * encrypt data locally, then erase the plaintext data key from memory.</p> </li>
         * <li> <p>Store the encrypted data key (returned in the
         * <code>CiphertextBlob</code> field of the response) alongside the locally
         * encrypted data.</p> </li> </ol> <p>To decrypt data locally:</p> <ol> <li> <p>Use
         * the <a>Decrypt</a> operation to decrypt the encrypted data key into a plaintext
         * copy of the data key.</p> </li> <li> <p>Use the plaintext data key to decrypt
         * data locally, then erase the plaintext data key from memory.</p> </li> </ol>
         * <p>To return only an encrypted copy of the data key, use
         * <a>GenerateDataKeyWithoutPlaintext</a>. To return an arbitrary unpredictable
         * byte string, use <a>GenerateRandom</a>.</p> <p>If you use the optional
         * <code>EncryptionContext</code> field, you must store at least enough information
         * to be able to reconstruct the full encryption context when you later send the
         * ciphertext to the <a>Decrypt</a> operation. It is a good practice to choose an
         * encryption context that you can reconstruct on the fly to better secure the
         * ciphertext. For more information, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
         * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateDataKeyAsync(const Model::GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a data encryption key encrypted under a customer master key (CMK).
         * This operation is identical to <a>GenerateDataKey</a> but returns only the
         * encrypted copy of the data key.</p> <p>This operation is useful in a system that
         * has multiple components with different degrees of trust. For example, consider a
         * system that stores encrypted data in containers. Each container stores the
         * encrypted data and an encrypted copy of the data key. One component of the
         * system, called the <i>control plane</i>, creates new containers. When it creates
         * a new container, it uses this operation
         * (<code>GenerateDataKeyWithoutPlaintext</code>) to get an encrypted data key and
         * then stores it in the container. Later, a different component of the system,
         * called the <i>data plane</i>, puts encrypted data into the containers. To do
         * this, it passes the encrypted data key to the <a>Decrypt</a> operation, then
         * uses the returned plaintext data key to encrypt data, and finally stores the
         * encrypted data in the container. In this system, the control plane never sees
         * the plaintext data key.</p>
         */
        virtual Model::GenerateDataKeyWithoutPlaintextOutcome GenerateDataKeyWithoutPlaintext(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;

        /**
         * <p>Returns a data encryption key encrypted under a customer master key (CMK).
         * This operation is identical to <a>GenerateDataKey</a> but returns only the
         * encrypted copy of the data key.</p> <p>This operation is useful in a system that
         * has multiple components with different degrees of trust. For example, consider a
         * system that stores encrypted data in containers. Each container stores the
         * encrypted data and an encrypted copy of the data key. One component of the
         * system, called the <i>control plane</i>, creates new containers. When it creates
         * a new container, it uses this operation
         * (<code>GenerateDataKeyWithoutPlaintext</code>) to get an encrypted data key and
         * then stores it in the container. Later, a different component of the system,
         * called the <i>data plane</i>, puts encrypted data into the containers. To do
         * this, it passes the encrypted data key to the <a>Decrypt</a> operation, then
         * uses the returned plaintext data key to encrypt data, and finally stores the
         * encrypted data in the container. In this system, the control plane never sees
         * the plaintext data key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateDataKeyWithoutPlaintextOutcomeCallable GenerateDataKeyWithoutPlaintextCallable(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;

        /**
         * <p>Returns a data encryption key encrypted under a customer master key (CMK).
         * This operation is identical to <a>GenerateDataKey</a> but returns only the
         * encrypted copy of the data key.</p> <p>This operation is useful in a system that
         * has multiple components with different degrees of trust. For example, consider a
         * system that stores encrypted data in containers. Each container stores the
         * encrypted data and an encrypted copy of the data key. One component of the
         * system, called the <i>control plane</i>, creates new containers. When it creates
         * a new container, it uses this operation
         * (<code>GenerateDataKeyWithoutPlaintext</code>) to get an encrypted data key and
         * then stores it in the container. Later, a different component of the system,
         * called the <i>data plane</i>, puts encrypted data into the containers. To do
         * this, it passes the encrypted data key to the <a>Decrypt</a> operation, then
         * uses the returned plaintext data key to encrypt data, and finally stores the
         * encrypted data in the container. In this system, the control plane never sees
         * the plaintext data key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateDataKeyWithoutPlaintextAsync(const Model::GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates an unpredictable byte string.</p>
         */
        virtual Model::GenerateRandomOutcome GenerateRandom(const Model::GenerateRandomRequest& request) const;

        /**
         * <p>Generates an unpredictable byte string.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateRandomOutcomeCallable GenerateRandomCallable(const Model::GenerateRandomRequest& request) const;

        /**
         * <p>Generates an unpredictable byte string.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateRandomAsync(const Model::GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a policy attached to the specified key.</p>
         */
        virtual Model::GetKeyPolicyOutcome GetKeyPolicy(const Model::GetKeyPolicyRequest& request) const;

        /**
         * <p>Retrieves a policy attached to the specified key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyPolicyOutcomeCallable GetKeyPolicyCallable(const Model::GetKeyPolicyRequest& request) const;

        /**
         * <p>Retrieves a policy attached to the specified key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyPolicyAsync(const Model::GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a Boolean value that indicates whether key rotation is enabled for
         * the specified key.</p>
         */
        virtual Model::GetKeyRotationStatusOutcome GetKeyRotationStatus(const Model::GetKeyRotationStatusRequest& request) const;

        /**
         * <p>Retrieves a Boolean value that indicates whether key rotation is enabled for
         * the specified key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyRotationStatusOutcomeCallable GetKeyRotationStatusCallable(const Model::GetKeyRotationStatusRequest& request) const;

        /**
         * <p>Retrieves a Boolean value that indicates whether key rotation is enabled for
         * the specified key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyRotationStatusAsync(const Model::GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the items you need in order to import key material into AWS KMS from
         * your existing key management infrastructure. For more information about
         * importing key material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>You must specify the key ID of the customer master key (CMK) into which you
         * will import key material. This CMK's <code>Origin</code> must be
         * <code>EXTERNAL</code>. You must also specify the wrapping algorithm and type of
         * wrapping key (public key) that you will use to encrypt the key material.</p>
         * <p>This operation returns a public key and an import token. Use the public key
         * to encrypt the key material. Store the import token to send with a subsequent
         * <a>ImportKeyMaterial</a> request. The public key and import token from the same
         * response must be used together. These items are valid for 24 hours, after which
         * they cannot be used for a subsequent <a>ImportKeyMaterial</a> request. To
         * retrieve new ones, send another <code>GetParametersForImport</code> request.</p>
         */
        virtual Model::GetParametersForImportOutcome GetParametersForImport(const Model::GetParametersForImportRequest& request) const;

        /**
         * <p>Returns the items you need in order to import key material into AWS KMS from
         * your existing key management infrastructure. For more information about
         * importing key material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>You must specify the key ID of the customer master key (CMK) into which you
         * will import key material. This CMK's <code>Origin</code> must be
         * <code>EXTERNAL</code>. You must also specify the wrapping algorithm and type of
         * wrapping key (public key) that you will use to encrypt the key material.</p>
         * <p>This operation returns a public key and an import token. Use the public key
         * to encrypt the key material. Store the import token to send with a subsequent
         * <a>ImportKeyMaterial</a> request. The public key and import token from the same
         * response must be used together. These items are valid for 24 hours, after which
         * they cannot be used for a subsequent <a>ImportKeyMaterial</a> request. To
         * retrieve new ones, send another <code>GetParametersForImport</code> request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParametersForImportOutcomeCallable GetParametersForImportCallable(const Model::GetParametersForImportRequest& request) const;

        /**
         * <p>Returns the items you need in order to import key material into AWS KMS from
         * your existing key management infrastructure. For more information about
         * importing key material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>You must specify the key ID of the customer master key (CMK) into which you
         * will import key material. This CMK's <code>Origin</code> must be
         * <code>EXTERNAL</code>. You must also specify the wrapping algorithm and type of
         * wrapping key (public key) that you will use to encrypt the key material.</p>
         * <p>This operation returns a public key and an import token. Use the public key
         * to encrypt the key material. Store the import token to send with a subsequent
         * <a>ImportKeyMaterial</a> request. The public key and import token from the same
         * response must be used together. These items are valid for 24 hours, after which
         * they cannot be used for a subsequent <a>ImportKeyMaterial</a> request. To
         * retrieve new ones, send another <code>GetParametersForImport</code> request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParametersForImportAsync(const Model::GetParametersForImportRequest& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports key material into an AWS KMS customer master key (CMK) from your
         * existing key management infrastructure. For more information about importing key
         * material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>You must specify the key ID of the CMK to import the key material into. This
         * CMK's <code>Origin</code> must be <code>EXTERNAL</code>. You must also send an
         * import token and the encrypted key material. Send the import token that you
         * received in the same <a>GetParametersForImport</a> response that contained the
         * public key that you used to encrypt the key material. You must also specify
         * whether the key material expires and if so, when. When the key material expires,
         * AWS KMS deletes the key material and the CMK becomes unusable. To use the CMK
         * again, you can reimport the same key material. If you set an expiration date,
         * you can change it only by reimporting the same key material and specifying a new
         * expiration date.</p> <p>When this operation is successful, the specified CMK's
         * key state changes to <code>Enabled</code>, and you can use the CMK.</p> <p>After
         * you successfully import key material into a CMK, you can reimport the same key
         * material into that CMK, but you cannot import different key material.</p>
         */
        virtual Model::ImportKeyMaterialOutcome ImportKeyMaterial(const Model::ImportKeyMaterialRequest& request) const;

        /**
         * <p>Imports key material into an AWS KMS customer master key (CMK) from your
         * existing key management infrastructure. For more information about importing key
         * material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>You must specify the key ID of the CMK to import the key material into. This
         * CMK's <code>Origin</code> must be <code>EXTERNAL</code>. You must also send an
         * import token and the encrypted key material. Send the import token that you
         * received in the same <a>GetParametersForImport</a> response that contained the
         * public key that you used to encrypt the key material. You must also specify
         * whether the key material expires and if so, when. When the key material expires,
         * AWS KMS deletes the key material and the CMK becomes unusable. To use the CMK
         * again, you can reimport the same key material. If you set an expiration date,
         * you can change it only by reimporting the same key material and specifying a new
         * expiration date.</p> <p>When this operation is successful, the specified CMK's
         * key state changes to <code>Enabled</code>, and you can use the CMK.</p> <p>After
         * you successfully import key material into a CMK, you can reimport the same key
         * material into that CMK, but you cannot import different key material.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportKeyMaterialOutcomeCallable ImportKeyMaterialCallable(const Model::ImportKeyMaterialRequest& request) const;

        /**
         * <p>Imports key material into an AWS KMS customer master key (CMK) from your
         * existing key management infrastructure. For more information about importing key
         * material into AWS KMS, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
         * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         * <p>You must specify the key ID of the CMK to import the key material into. This
         * CMK's <code>Origin</code> must be <code>EXTERNAL</code>. You must also send an
         * import token and the encrypted key material. Send the import token that you
         * received in the same <a>GetParametersForImport</a> response that contained the
         * public key that you used to encrypt the key material. You must also specify
         * whether the key material expires and if so, when. When the key material expires,
         * AWS KMS deletes the key material and the CMK becomes unusable. To use the CMK
         * again, you can reimport the same key material. If you set an expiration date,
         * you can change it only by reimporting the same key material and specifying a new
         * expiration date.</p> <p>When this operation is successful, the specified CMK's
         * key state changes to <code>Enabled</code>, and you can use the CMK.</p> <p>After
         * you successfully import key material into a CMK, you can reimport the same key
         * material into that CMK, but you cannot import different key material.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportKeyMaterialAsync(const Model::ImportKeyMaterialRequest& request, const ImportKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the key aliases in the account.</p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Lists all of the key aliases in the account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Lists all of the key aliases in the account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the grants for a specified key.</p>
         */
        virtual Model::ListGrantsOutcome ListGrants(const Model::ListGrantsRequest& request) const;

        /**
         * <p>List the grants for a specified key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGrantsOutcomeCallable ListGrantsCallable(const Model::ListGrantsRequest& request) const;

        /**
         * <p>List the grants for a specified key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGrantsAsync(const Model::ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of policies attached to a key.</p>
         */
        virtual Model::ListKeyPoliciesOutcome ListKeyPolicies(const Model::ListKeyPoliciesRequest& request) const;

        /**
         * <p>Retrieves a list of policies attached to a key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeyPoliciesOutcomeCallable ListKeyPoliciesCallable(const Model::ListKeyPoliciesRequest& request) const;

        /**
         * <p>Retrieves a list of policies attached to a key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeyPoliciesAsync(const Model::ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the customer master keys.</p>
         */
        virtual Model::ListKeysOutcome ListKeys(const Model::ListKeysRequest& request) const;

        /**
         * <p>Lists the customer master keys.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeysOutcomeCallable ListKeysCallable(const Model::ListKeysRequest& request) const;

        /**
         * <p>Lists the customer master keys.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeysAsync(const Model::ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all grants for which the grant's
         * <code>RetiringPrincipal</code> matches the one specified.</p> <p>A typical use
         * is to list all grants that you are able to retire. To retire a grant, use
         * <a>RetireGrant</a>.</p>
         */
        virtual Model::ListRetirableGrantsOutcome ListRetirableGrants(const Model::ListRetirableGrantsRequest& request) const;

        /**
         * <p>Returns a list of all grants for which the grant's
         * <code>RetiringPrincipal</code> matches the one specified.</p> <p>A typical use
         * is to list all grants that you are able to retire. To retire a grant, use
         * <a>RetireGrant</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRetirableGrantsOutcomeCallable ListRetirableGrantsCallable(const Model::ListRetirableGrantsRequest& request) const;

        /**
         * <p>Returns a list of all grants for which the grant's
         * <code>RetiringPrincipal</code> matches the one specified.</p> <p>A typical use
         * is to list all grants that you are able to retire. To retire a grant, use
         * <a>RetireGrant</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRetirableGrantsAsync(const Model::ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a key policy to the specified customer master key (CMK).</p> <p>For
         * more information about key policies, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
         * Policies</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         */
        virtual Model::PutKeyPolicyOutcome PutKeyPolicy(const Model::PutKeyPolicyRequest& request) const;

        /**
         * <p>Attaches a key policy to the specified customer master key (CMK).</p> <p>For
         * more information about key policies, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
         * Policies</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutKeyPolicyOutcomeCallable PutKeyPolicyCallable(const Model::PutKeyPolicyRequest& request) const;

        /**
         * <p>Attaches a key policy to the specified customer master key (CMK).</p> <p>For
         * more information about key policies, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key
         * Policies</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutKeyPolicyAsync(const Model::PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Encrypts data on the server side with a new customer master key without
         * exposing the plaintext of the data on the client side. The data is first
         * decrypted and then encrypted. This operation can also be used to change the
         * encryption context of a ciphertext.</p> <p>Unlike other actions,
         * <code>ReEncrypt</code> is authorized twice - once as <code>ReEncryptFrom</code>
         * on the source key and once as <code>ReEncryptTo</code> on the destination key.
         * We therefore recommend that you include the
         * <code>"action":"kms:ReEncrypt*"</code> statement in your key policies to permit
         * re-encryption from or to the key. The statement is included automatically when
         * you authorize use of the key through the console but must be included manually
         * when you set a policy by using the <a>PutKeyPolicy</a> function.</p>
         */
        virtual Model::ReEncryptOutcome ReEncrypt(const Model::ReEncryptRequest& request) const;

        /**
         * <p>Encrypts data on the server side with a new customer master key without
         * exposing the plaintext of the data on the client side. The data is first
         * decrypted and then encrypted. This operation can also be used to change the
         * encryption context of a ciphertext.</p> <p>Unlike other actions,
         * <code>ReEncrypt</code> is authorized twice - once as <code>ReEncryptFrom</code>
         * on the source key and once as <code>ReEncryptTo</code> on the destination key.
         * We therefore recommend that you include the
         * <code>"action":"kms:ReEncrypt*"</code> statement in your key policies to permit
         * re-encryption from or to the key. The statement is included automatically when
         * you authorize use of the key through the console but must be included manually
         * when you set a policy by using the <a>PutKeyPolicy</a> function.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReEncryptOutcomeCallable ReEncryptCallable(const Model::ReEncryptRequest& request) const;

        /**
         * <p>Encrypts data on the server side with a new customer master key without
         * exposing the plaintext of the data on the client side. The data is first
         * decrypted and then encrypted. This operation can also be used to change the
         * encryption context of a ciphertext.</p> <p>Unlike other actions,
         * <code>ReEncrypt</code> is authorized twice - once as <code>ReEncryptFrom</code>
         * on the source key and once as <code>ReEncryptTo</code> on the destination key.
         * We therefore recommend that you include the
         * <code>"action":"kms:ReEncrypt*"</code> statement in your key policies to permit
         * re-encryption from or to the key. The statement is included automatically when
         * you authorize use of the key through the console but must be included manually
         * when you set a policy by using the <a>PutKeyPolicy</a> function.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReEncryptAsync(const Model::ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retires a grant. You can retire a grant when you're done using it to clean
         * up. You should revoke a grant when you intend to actively deny operations that
         * depend on it. The following are permitted to call this API:</p> <ul> <li> <p>The
         * account that created the grant</p> </li> <li> <p>The
         * <code>RetiringPrincipal</code>, if present</p> </li> <li> <p>The
         * <code>GranteePrincipal</code>, if <code>RetireGrant</code> is a grantee
         * operation</p> </li> </ul> <p>The grant to retire must be identified by its grant
         * token or by a combination of the key ARN and the grant ID. A grant token is a
         * unique variable-length base64-encoded string. A grant ID is a 64 character
         * unique identifier of a grant. Both are returned by the <code>CreateGrant</code>
         * function.</p>
         */
        virtual Model::RetireGrantOutcome RetireGrant(const Model::RetireGrantRequest& request) const;

        /**
         * <p>Retires a grant. You can retire a grant when you're done using it to clean
         * up. You should revoke a grant when you intend to actively deny operations that
         * depend on it. The following are permitted to call this API:</p> <ul> <li> <p>The
         * account that created the grant</p> </li> <li> <p>The
         * <code>RetiringPrincipal</code>, if present</p> </li> <li> <p>The
         * <code>GranteePrincipal</code>, if <code>RetireGrant</code> is a grantee
         * operation</p> </li> </ul> <p>The grant to retire must be identified by its grant
         * token or by a combination of the key ARN and the grant ID. A grant token is a
         * unique variable-length base64-encoded string. A grant ID is a 64 character
         * unique identifier of a grant. Both are returned by the <code>CreateGrant</code>
         * function.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetireGrantOutcomeCallable RetireGrantCallable(const Model::RetireGrantRequest& request) const;

        /**
         * <p>Retires a grant. You can retire a grant when you're done using it to clean
         * up. You should revoke a grant when you intend to actively deny operations that
         * depend on it. The following are permitted to call this API:</p> <ul> <li> <p>The
         * account that created the grant</p> </li> <li> <p>The
         * <code>RetiringPrincipal</code>, if present</p> </li> <li> <p>The
         * <code>GranteePrincipal</code>, if <code>RetireGrant</code> is a grantee
         * operation</p> </li> </ul> <p>The grant to retire must be identified by its grant
         * token or by a combination of the key ARN and the grant ID. A grant token is a
         * unique variable-length base64-encoded string. A grant ID is a 64 character
         * unique identifier of a grant. Both are returned by the <code>CreateGrant</code>
         * function.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetireGrantAsync(const Model::RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes a grant. You can revoke a grant to actively deny operations that
         * depend on it.</p>
         */
        virtual Model::RevokeGrantOutcome RevokeGrant(const Model::RevokeGrantRequest& request) const;

        /**
         * <p>Revokes a grant. You can revoke a grant to actively deny operations that
         * depend on it.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeGrantOutcomeCallable RevokeGrantCallable(const Model::RevokeGrantRequest& request) const;

        /**
         * <p>Revokes a grant. You can revoke a grant to actively deny operations that
         * depend on it.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeGrantAsync(const Model::RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules the deletion of a customer master key (CMK). You may provide a
         * waiting period, specified in days, before deletion occurs. If you do not provide
         * a waiting period, the default period of 30 days is used. When this operation is
         * successful, the state of the CMK changes to <code>PendingDeletion</code>. Before
         * the waiting period ends, you can use <a>CancelKeyDeletion</a> to cancel the
         * deletion of the CMK. After the waiting period ends, AWS KMS deletes the CMK and
         * all AWS KMS data associated with it, including all aliases that point to it.</p>
         * <important> <p>Deleting a CMK is a destructive and potentially dangerous
         * operation. When a CMK is deleted, all data that was encrypted under the CMK is
         * rendered unrecoverable. To restrict the use of a CMK without deleting it, use
         * <a>DisableKey</a>.</p> </important> <p>For more information about scheduling a
         * CMK for deletion, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * Customer Master Keys</a> in the <i>AWS Key Management Service Developer
         * Guide</i>.</p>
         */
        virtual Model::ScheduleKeyDeletionOutcome ScheduleKeyDeletion(const Model::ScheduleKeyDeletionRequest& request) const;

        /**
         * <p>Schedules the deletion of a customer master key (CMK). You may provide a
         * waiting period, specified in days, before deletion occurs. If you do not provide
         * a waiting period, the default period of 30 days is used. When this operation is
         * successful, the state of the CMK changes to <code>PendingDeletion</code>. Before
         * the waiting period ends, you can use <a>CancelKeyDeletion</a> to cancel the
         * deletion of the CMK. After the waiting period ends, AWS KMS deletes the CMK and
         * all AWS KMS data associated with it, including all aliases that point to it.</p>
         * <important> <p>Deleting a CMK is a destructive and potentially dangerous
         * operation. When a CMK is deleted, all data that was encrypted under the CMK is
         * rendered unrecoverable. To restrict the use of a CMK without deleting it, use
         * <a>DisableKey</a>.</p> </important> <p>For more information about scheduling a
         * CMK for deletion, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * Customer Master Keys</a> in the <i>AWS Key Management Service Developer
         * Guide</i>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScheduleKeyDeletionOutcomeCallable ScheduleKeyDeletionCallable(const Model::ScheduleKeyDeletionRequest& request) const;

        /**
         * <p>Schedules the deletion of a customer master key (CMK). You may provide a
         * waiting period, specified in days, before deletion occurs. If you do not provide
         * a waiting period, the default period of 30 days is used. When this operation is
         * successful, the state of the CMK changes to <code>PendingDeletion</code>. Before
         * the waiting period ends, you can use <a>CancelKeyDeletion</a> to cancel the
         * deletion of the CMK. After the waiting period ends, AWS KMS deletes the CMK and
         * all AWS KMS data associated with it, including all aliases that point to it.</p>
         * <important> <p>Deleting a CMK is a destructive and potentially dangerous
         * operation. When a CMK is deleted, all data that was encrypted under the CMK is
         * rendered unrecoverable. To restrict the use of a CMK without deleting it, use
         * <a>DisableKey</a>.</p> </important> <p>For more information about scheduling a
         * CMK for deletion, see <a
         * href="http://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting
         * Customer Master Keys</a> in the <i>AWS Key Management Service Developer
         * Guide</i>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScheduleKeyDeletionAsync(const Model::ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an alias to map it to a different key.</p> <p>An alias is not a
         * property of a key. Therefore, an alias can be mapped to and unmapped from an
         * existing key without changing the properties of the key.</p> <p>An alias name
         * can contain only alphanumeric characters, forward slashes (/), underscores (_),
         * and dashes (-). An alias must start with the word "alias" followed by a forward
         * slash (alias/). An alias that begins with "aws" after the forward slash
         * (alias/aws...) is reserved by Amazon Web Services (AWS).</p> <p>The alias and
         * the key it is mapped to must be in the same AWS account and the same region.</p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates an alias to map it to a different key.</p> <p>An alias is not a
         * property of a key. Therefore, an alias can be mapped to and unmapped from an
         * existing key without changing the properties of the key.</p> <p>An alias name
         * can contain only alphanumeric characters, forward slashes (/), underscores (_),
         * and dashes (-). An alias must start with the word "alias" followed by a forward
         * slash (alias/). An alias that begins with "aws" after the forward slash
         * (alias/aws...) is reserved by Amazon Web Services (AWS).</p> <p>The alias and
         * the key it is mapped to must be in the same AWS account and the same region.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Updates an alias to map it to a different key.</p> <p>An alias is not a
         * property of a key. Therefore, an alias can be mapped to and unmapped from an
         * existing key without changing the properties of the key.</p> <p>An alias name
         * can contain only alphanumeric characters, forward slashes (/), underscores (_),
         * and dashes (-). An alias must start with the word "alias" followed by a forward
         * slash (alias/). An alias that begins with "aws" after the forward slash
         * (alias/aws...) is reserved by Amazon Web Services (AWS).</p> <p>The alias and
         * the key it is mapped to must be in the same AWS account and the same region.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description of a key.</p>
         */
        virtual Model::UpdateKeyDescriptionOutcome UpdateKeyDescription(const Model::UpdateKeyDescriptionRequest& request) const;

        /**
         * <p>Updates the description of a key.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateKeyDescriptionOutcomeCallable UpdateKeyDescriptionCallable(const Model::UpdateKeyDescriptionRequest& request) const;

        /**
         * <p>Updates the description of a key.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateKeyDescriptionAsync(const Model::UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CancelKeyDeletionAsyncHelper(const Model::CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGrantAsyncHelper(const Model::CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateKeyAsyncHelper(const Model::CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DecryptAsyncHelper(const Model::DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImportedKeyMaterialAsyncHelper(const Model::DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeKeyAsyncHelper(const Model::DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableKeyAsyncHelper(const Model::DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableKeyRotationAsyncHelper(const Model::DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableKeyAsyncHelper(const Model::EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableKeyRotationAsyncHelper(const Model::EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EncryptAsyncHelper(const Model::EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateDataKeyAsyncHelper(const Model::GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateDataKeyWithoutPlaintextAsyncHelper(const Model::GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateRandomAsyncHelper(const Model::GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetKeyPolicyAsyncHelper(const Model::GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetKeyRotationStatusAsyncHelper(const Model::GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParametersForImportAsyncHelper(const Model::GetParametersForImportRequest& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportKeyMaterialAsyncHelper(const Model::ImportKeyMaterialRequest& request, const ImportKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGrantsAsyncHelper(const Model::ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListKeyPoliciesAsyncHelper(const Model::ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListKeysAsyncHelper(const Model::ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRetirableGrantsAsyncHelper(const Model::ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutKeyPolicyAsyncHelper(const Model::PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReEncryptAsyncHelper(const Model::ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetireGrantAsyncHelper(const Model::RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeGrantAsyncHelper(const Model::RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScheduleKeyDeletionAsyncHelper(const Model::ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateKeyDescriptionAsyncHelper(const Model::UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace KMS
} // namespace Aws
