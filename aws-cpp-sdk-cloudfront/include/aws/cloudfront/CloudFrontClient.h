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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2018_06_18Result.h>
#include <aws/cloudfront/model/CreateDistribution2018_06_18Result.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2018_06_18Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2018_06_18Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2018_06_18Result.h>
#include <aws/cloudfront/model/CreateInvalidation2018_06_18Result.h>
#include <aws/cloudfront/model/CreatePublicKey2018_06_18Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2018_06_18Result.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2018_06_18Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2018_06_18Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2018_06_18Result.h>
#include <aws/cloudfront/model/GetDistribution2018_06_18Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2018_06_18Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2018_06_18Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2018_06_18Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2018_06_18Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2018_06_18Result.h>
#include <aws/cloudfront/model/GetInvalidation2018_06_18Result.h>
#include <aws/cloudfront/model/GetPublicKey2018_06_18Result.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2018_06_18Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2018_06_18Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2018_06_18Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2018_06_18Result.h>
#include <aws/cloudfront/model/ListDistributions2018_06_18Result.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2018_06_18Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2018_06_18Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2018_06_18Result.h>
#include <aws/cloudfront/model/ListInvalidations2018_06_18Result.h>
#include <aws/cloudfront/model/ListPublicKeys2018_06_18Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2018_06_18Result.h>
#include <aws/cloudfront/model/ListTagsForResource2018_06_18Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2018_06_18Result.h>
#include <aws/cloudfront/model/UpdateDistribution2018_06_18Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2018_06_18Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2018_06_18Result.h>
#include <aws/cloudfront/model/UpdatePublicKey2018_06_18Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2018_06_18Result.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace CloudFront
{

namespace Model
{
        class CreateCloudFrontOriginAccessIdentity2018_06_18Request;
        class CreateDistribution2018_06_18Request;
        class CreateDistributionWithTags2018_06_18Request;
        class CreateFieldLevelEncryptionConfig2018_06_18Request;
        class CreateFieldLevelEncryptionProfile2018_06_18Request;
        class CreateInvalidation2018_06_18Request;
        class CreatePublicKey2018_06_18Request;
        class CreateStreamingDistribution2018_06_18Request;
        class CreateStreamingDistributionWithTags2018_06_18Request;
        class DeleteCloudFrontOriginAccessIdentity2018_06_18Request;
        class DeleteDistribution2018_06_18Request;
        class DeleteFieldLevelEncryptionConfig2018_06_18Request;
        class DeleteFieldLevelEncryptionProfile2018_06_18Request;
        class DeletePublicKey2018_06_18Request;
        class DeleteStreamingDistribution2018_06_18Request;
        class GetCloudFrontOriginAccessIdentity2018_06_18Request;
        class GetCloudFrontOriginAccessIdentityConfig2018_06_18Request;
        class GetDistribution2018_06_18Request;
        class GetDistributionConfig2018_06_18Request;
        class GetFieldLevelEncryption2018_06_18Request;
        class GetFieldLevelEncryptionConfig2018_06_18Request;
        class GetFieldLevelEncryptionProfile2018_06_18Request;
        class GetFieldLevelEncryptionProfileConfig2018_06_18Request;
        class GetInvalidation2018_06_18Request;
        class GetPublicKey2018_06_18Request;
        class GetPublicKeyConfig2018_06_18Request;
        class GetStreamingDistribution2018_06_18Request;
        class GetStreamingDistributionConfig2018_06_18Request;
        class ListCloudFrontOriginAccessIdentities2018_06_18Request;
        class ListDistributions2018_06_18Request;
        class ListDistributionsByWebACLId2018_06_18Request;
        class ListFieldLevelEncryptionConfigs2018_06_18Request;
        class ListFieldLevelEncryptionProfiles2018_06_18Request;
        class ListInvalidations2018_06_18Request;
        class ListPublicKeys2018_06_18Request;
        class ListStreamingDistributions2018_06_18Request;
        class ListTagsForResource2018_06_18Request;
        class TagResource2018_06_18Request;
        class UntagResource2018_06_18Request;
        class UpdateCloudFrontOriginAccessIdentity2018_06_18Request;
        class UpdateDistribution2018_06_18Request;
        class UpdateFieldLevelEncryptionConfig2018_06_18Request;
        class UpdateFieldLevelEncryptionProfile2018_06_18Request;
        class UpdatePublicKey2018_06_18Request;
        class UpdateStreamingDistribution2018_06_18Request;

        typedef Aws::Utils::Outcome<CreateCloudFrontOriginAccessIdentity2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateCloudFrontOriginAccessIdentity2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreateDistribution2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateDistribution2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreateDistributionWithTags2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateDistributionWithTags2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateFieldLevelEncryptionConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionProfile2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateFieldLevelEncryptionProfile2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreateInvalidation2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateInvalidation2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreatePublicKey2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreatePublicKey2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistribution2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateStreamingDistribution2018_06_18Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistributionWithTags2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> CreateStreamingDistributionWithTags2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteDistribution2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteFieldLevelEncryptionConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteFieldLevelEncryptionProfile2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeletePublicKey2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteStreamingDistribution2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentity2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentity2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetDistribution2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistribution2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetDistributionConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistributionConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryption2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryption2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryptionConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfile2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryptionProfile2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfileConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryptionProfileConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetInvalidation2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetInvalidation2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetPublicKey2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetPublicKey2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetPublicKeyConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetPublicKeyConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistribution2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistribution2018_06_18Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistributionConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistributionConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListCloudFrontOriginAccessIdentities2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListCloudFrontOriginAccessIdentities2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListDistributions2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributions2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByWebACLId2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributionsByWebACLId2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListFieldLevelEncryptionConfigs2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListFieldLevelEncryptionConfigs2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListFieldLevelEncryptionProfiles2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListFieldLevelEncryptionProfiles2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListInvalidations2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListInvalidations2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListPublicKeys2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListPublicKeys2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListStreamingDistributions2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListStreamingDistributions2018_06_18Outcome;
        typedef Aws::Utils::Outcome<ListTagsForResource2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> ListTagsForResource2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> TagResource2018_06_18Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> UntagResource2018_06_18Outcome;
        typedef Aws::Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome;
        typedef Aws::Utils::Outcome<UpdateDistribution2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateDistribution2018_06_18Outcome;
        typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionConfig2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateFieldLevelEncryptionConfig2018_06_18Outcome;
        typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionProfile2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateFieldLevelEncryptionProfile2018_06_18Outcome;
        typedef Aws::Utils::Outcome<UpdatePublicKey2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> UpdatePublicKey2018_06_18Outcome;
        typedef Aws::Utils::Outcome<UpdateStreamingDistribution2018_06_18Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateStreamingDistribution2018_06_18Outcome;

        typedef std::future<CreateCloudFrontOriginAccessIdentity2018_06_18Outcome> CreateCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable;
        typedef std::future<CreateDistribution2018_06_18Outcome> CreateDistribution2018_06_18OutcomeCallable;
        typedef std::future<CreateDistributionWithTags2018_06_18Outcome> CreateDistributionWithTags2018_06_18OutcomeCallable;
        typedef std::future<CreateFieldLevelEncryptionConfig2018_06_18Outcome> CreateFieldLevelEncryptionConfig2018_06_18OutcomeCallable;
        typedef std::future<CreateFieldLevelEncryptionProfile2018_06_18Outcome> CreateFieldLevelEncryptionProfile2018_06_18OutcomeCallable;
        typedef std::future<CreateInvalidation2018_06_18Outcome> CreateInvalidation2018_06_18OutcomeCallable;
        typedef std::future<CreatePublicKey2018_06_18Outcome> CreatePublicKey2018_06_18OutcomeCallable;
        typedef std::future<CreateStreamingDistribution2018_06_18Outcome> CreateStreamingDistribution2018_06_18OutcomeCallable;
        typedef std::future<CreateStreamingDistributionWithTags2018_06_18Outcome> CreateStreamingDistributionWithTags2018_06_18OutcomeCallable;
        typedef std::future<DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome> DeleteCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable;
        typedef std::future<DeleteDistribution2018_06_18Outcome> DeleteDistribution2018_06_18OutcomeCallable;
        typedef std::future<DeleteFieldLevelEncryptionConfig2018_06_18Outcome> DeleteFieldLevelEncryptionConfig2018_06_18OutcomeCallable;
        typedef std::future<DeleteFieldLevelEncryptionProfile2018_06_18Outcome> DeleteFieldLevelEncryptionProfile2018_06_18OutcomeCallable;
        typedef std::future<DeletePublicKey2018_06_18Outcome> DeletePublicKey2018_06_18OutcomeCallable;
        typedef std::future<DeleteStreamingDistribution2018_06_18Outcome> DeleteStreamingDistribution2018_06_18OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentity2018_06_18Outcome> GetCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome> GetCloudFrontOriginAccessIdentityConfig2018_06_18OutcomeCallable;
        typedef std::future<GetDistribution2018_06_18Outcome> GetDistribution2018_06_18OutcomeCallable;
        typedef std::future<GetDistributionConfig2018_06_18Outcome> GetDistributionConfig2018_06_18OutcomeCallable;
        typedef std::future<GetFieldLevelEncryption2018_06_18Outcome> GetFieldLevelEncryption2018_06_18OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionConfig2018_06_18Outcome> GetFieldLevelEncryptionConfig2018_06_18OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionProfile2018_06_18Outcome> GetFieldLevelEncryptionProfile2018_06_18OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionProfileConfig2018_06_18Outcome> GetFieldLevelEncryptionProfileConfig2018_06_18OutcomeCallable;
        typedef std::future<GetInvalidation2018_06_18Outcome> GetInvalidation2018_06_18OutcomeCallable;
        typedef std::future<GetPublicKey2018_06_18Outcome> GetPublicKey2018_06_18OutcomeCallable;
        typedef std::future<GetPublicKeyConfig2018_06_18Outcome> GetPublicKeyConfig2018_06_18OutcomeCallable;
        typedef std::future<GetStreamingDistribution2018_06_18Outcome> GetStreamingDistribution2018_06_18OutcomeCallable;
        typedef std::future<GetStreamingDistributionConfig2018_06_18Outcome> GetStreamingDistributionConfig2018_06_18OutcomeCallable;
        typedef std::future<ListCloudFrontOriginAccessIdentities2018_06_18Outcome> ListCloudFrontOriginAccessIdentities2018_06_18OutcomeCallable;
        typedef std::future<ListDistributions2018_06_18Outcome> ListDistributions2018_06_18OutcomeCallable;
        typedef std::future<ListDistributionsByWebACLId2018_06_18Outcome> ListDistributionsByWebACLId2018_06_18OutcomeCallable;
        typedef std::future<ListFieldLevelEncryptionConfigs2018_06_18Outcome> ListFieldLevelEncryptionConfigs2018_06_18OutcomeCallable;
        typedef std::future<ListFieldLevelEncryptionProfiles2018_06_18Outcome> ListFieldLevelEncryptionProfiles2018_06_18OutcomeCallable;
        typedef std::future<ListInvalidations2018_06_18Outcome> ListInvalidations2018_06_18OutcomeCallable;
        typedef std::future<ListPublicKeys2018_06_18Outcome> ListPublicKeys2018_06_18OutcomeCallable;
        typedef std::future<ListStreamingDistributions2018_06_18Outcome> ListStreamingDistributions2018_06_18OutcomeCallable;
        typedef std::future<ListTagsForResource2018_06_18Outcome> ListTagsForResource2018_06_18OutcomeCallable;
        typedef std::future<TagResource2018_06_18Outcome> TagResource2018_06_18OutcomeCallable;
        typedef std::future<UntagResource2018_06_18Outcome> UntagResource2018_06_18OutcomeCallable;
        typedef std::future<UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome> UpdateCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable;
        typedef std::future<UpdateDistribution2018_06_18Outcome> UpdateDistribution2018_06_18OutcomeCallable;
        typedef std::future<UpdateFieldLevelEncryptionConfig2018_06_18Outcome> UpdateFieldLevelEncryptionConfig2018_06_18OutcomeCallable;
        typedef std::future<UpdateFieldLevelEncryptionProfile2018_06_18Outcome> UpdateFieldLevelEncryptionProfile2018_06_18OutcomeCallable;
        typedef std::future<UpdatePublicKey2018_06_18Outcome> UpdatePublicKey2018_06_18OutcomeCallable;
        typedef std::future<UpdateStreamingDistribution2018_06_18Outcome> UpdateStreamingDistribution2018_06_18OutcomeCallable;
} // namespace Model

  class CloudFrontClient;

    typedef std::function<void(const CloudFrontClient*, const Model::CreateCloudFrontOriginAccessIdentity2018_06_18Request&, const Model::CreateCloudFrontOriginAccessIdentity2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistribution2018_06_18Request&, const Model::CreateDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistribution2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistributionWithTags2018_06_18Request&, const Model::CreateDistributionWithTags2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionWithTags2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionConfig2018_06_18Request&, const Model::CreateFieldLevelEncryptionConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionProfile2018_06_18Request&, const Model::CreateFieldLevelEncryptionProfile2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateInvalidation2018_06_18Request&, const Model::CreateInvalidation2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvalidation2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreatePublicKey2018_06_18Request&, const Model::CreatePublicKey2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicKey2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistribution2018_06_18Request&, const Model::CreateStreamingDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistribution2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistributionWithTags2018_06_18Request&, const Model::CreateStreamingDistributionWithTags2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistributionWithTags2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCloudFrontOriginAccessIdentity2018_06_18Request&, const Model::DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteDistribution2018_06_18Request&, const Model::DeleteDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistribution2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionConfig2018_06_18Request&, const Model::DeleteFieldLevelEncryptionConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionProfile2018_06_18Request&, const Model::DeleteFieldLevelEncryptionProfile2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeletePublicKey2018_06_18Request&, const Model::DeletePublicKey2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicKey2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteStreamingDistribution2018_06_18Request&, const Model::DeleteStreamingDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingDistribution2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentity2018_06_18Request&, const Model::GetCloudFrontOriginAccessIdentity2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentityConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistribution2018_06_18Request&, const Model::GetDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistribution2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistributionConfig2018_06_18Request&, const Model::GetDistributionConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryption2018_06_18Request&, const Model::GetFieldLevelEncryption2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryption2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionConfig2018_06_18Request&, const Model::GetFieldLevelEncryptionConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfile2018_06_18Request&, const Model::GetFieldLevelEncryptionProfile2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfileConfig2018_06_18Request&, const Model::GetFieldLevelEncryptionProfileConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfileConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetInvalidation2018_06_18Request&, const Model::GetInvalidation2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvalidation2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKey2018_06_18Request&, const Model::GetPublicKey2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKey2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKeyConfig2018_06_18Request&, const Model::GetPublicKeyConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKeyConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistribution2018_06_18Request&, const Model::GetStreamingDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistribution2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistributionConfig2018_06_18Request&, const Model::GetStreamingDistributionConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistributionConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCloudFrontOriginAccessIdentities2018_06_18Request&, const Model::ListCloudFrontOriginAccessIdentities2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudFrontOriginAccessIdentities2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributions2018_06_18Request&, const Model::ListDistributions2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributions2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByWebACLId2018_06_18Request&, const Model::ListDistributionsByWebACLId2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByWebACLId2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionConfigs2018_06_18Request&, const Model::ListFieldLevelEncryptionConfigs2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionConfigs2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionProfiles2018_06_18Request&, const Model::ListFieldLevelEncryptionProfiles2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionProfiles2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListInvalidations2018_06_18Request&, const Model::ListInvalidations2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvalidations2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListPublicKeys2018_06_18Request&, const Model::ListPublicKeys2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeys2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListStreamingDistributions2018_06_18Request&, const Model::ListStreamingDistributions2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingDistributions2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListTagsForResource2018_06_18Request&, const Model::ListTagsForResource2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResource2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::TagResource2018_06_18Request&, const Model::TagResource2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResource2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UntagResource2018_06_18Request&, const Model::UntagResource2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResource2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCloudFrontOriginAccessIdentity2018_06_18Request&, const Model::UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistribution2018_06_18Request&, const Model::UpdateDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistribution2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionConfig2018_06_18Request&, const Model::UpdateFieldLevelEncryptionConfig2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionProfile2018_06_18Request&, const Model::UpdateFieldLevelEncryptionProfile2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdatePublicKey2018_06_18Request&, const Model::UpdatePublicKey2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublicKey2018_06_18ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateStreamingDistribution2018_06_18Request&, const Model::UpdateStreamingDistribution2018_06_18Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingDistribution2018_06_18ResponseReceivedHandler;

  /**
   * <fullname>Amazon CloudFront</fullname> <p>This is the <i>Amazon CloudFront API
   * Reference</i>. This guide is for developers who need detailed information about
   * CloudFront API actions, data types, and errors. For detailed information about
   * CloudFront features, see the <i>Amazon CloudFront Developer Guide</i>.</p>
   */
  class AWS_CLOUDFRONT_API CloudFrontClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudFrontClient();

        inline virtual const char* GetServiceClientName() const override { return "CloudFront"; }


        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2018_06_18Outcome CreateCloudFrontOriginAccessIdentity2018_06_18(const Model::CreateCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable CreateCloudFrontOriginAccessIdentity2018_06_18Callable(const Model::CreateCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFrontOriginAccessIdentity2018_06_18Async(const Model::CreateCloudFrontOriginAccessIdentity2018_06_18Request& request, const CreateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p> <important> <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a>UpdateDistribution</a>, follow the steps included in
         * the documentation to get the current configuration and then make your updates.
         * This helps to make sure that you include all of the required fields. To view a
         * summary, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>If you are using Adobe Flash
         * Media Server's RTMP protocol, you set up a different kind of CloudFront
         * distribution. For more information, see
         * <a>CreateStreamingDistribution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistribution2018_06_18Outcome CreateDistribution2018_06_18(const Model::CreateDistribution2018_06_18Request& request) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p> <important> <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a>UpdateDistribution</a>, follow the steps included in
         * the documentation to get the current configuration and then make your updates.
         * This helps to make sure that you include all of the required fields. To view a
         * summary, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>If you are using Adobe Flash
         * Media Server's RTMP protocol, you set up a different kind of CloudFront
         * distribution. For more information, see
         * <a>CreateStreamingDistribution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistribution2018_06_18OutcomeCallable CreateDistribution2018_06_18Callable(const Model::CreateDistribution2018_06_18Request& request) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p> <important> <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a>UpdateDistribution</a>, follow the steps included in
         * the documentation to get the current configuration and then make your updates.
         * This helps to make sure that you include all of the required fields. To view a
         * summary, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>If you are using Adobe Flash
         * Media Server's RTMP protocol, you set up a different kind of CloudFront
         * distribution. For more information, see
         * <a>CreateStreamingDistribution</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistribution2018_06_18Async(const Model::CreateDistribution2018_06_18Request& request, const CreateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateDistributionWithTags2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionWithTags2018_06_18Outcome CreateDistributionWithTags2018_06_18(const Model::CreateDistributionWithTags2018_06_18Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateDistributionWithTags2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionWithTags2018_06_18OutcomeCallable CreateDistributionWithTags2018_06_18Callable(const Model::CreateDistributionWithTags2018_06_18Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateDistributionWithTags2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionWithTags2018_06_18Async(const Model::CreateDistributionWithTags2018_06_18Request& request, const CreateDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionConfig2018_06_18Outcome CreateFieldLevelEncryptionConfig2018_06_18(const Model::CreateFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFieldLevelEncryptionConfig2018_06_18OutcomeCallable CreateFieldLevelEncryptionConfig2018_06_18Callable(const Model::CreateFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFieldLevelEncryptionConfig2018_06_18Async(const Model::CreateFieldLevelEncryptionConfig2018_06_18Request& request, const CreateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionProfile2018_06_18Outcome CreateFieldLevelEncryptionProfile2018_06_18(const Model::CreateFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFieldLevelEncryptionProfile2018_06_18OutcomeCallable CreateFieldLevelEncryptionProfile2018_06_18Callable(const Model::CreateFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFieldLevelEncryptionProfile2018_06_18Async(const Model::CreateFieldLevelEncryptionProfile2018_06_18Request& request, const CreateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateInvalidation2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvalidation2018_06_18Outcome CreateInvalidation2018_06_18(const Model::CreateInvalidation2018_06_18Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateInvalidation2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvalidation2018_06_18OutcomeCallable CreateInvalidation2018_06_18Callable(const Model::CreateInvalidation2018_06_18Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateInvalidation2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInvalidation2018_06_18Async(const Model::CreateInvalidation2018_06_18Request& request, const CreateInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a new public key to CloudFront to use, for example, for field-level
         * encryption. You can add a maximum of 10 public keys with one AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreatePublicKey2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicKey2018_06_18Outcome CreatePublicKey2018_06_18(const Model::CreatePublicKey2018_06_18Request& request) const;

        /**
         * <p>Add a new public key to CloudFront to use, for example, for field-level
         * encryption. You can add a maximum of 10 public keys with one AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreatePublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicKey2018_06_18OutcomeCallable CreatePublicKey2018_06_18Callable(const Model::CreatePublicKey2018_06_18Request& request) const;

        /**
         * <p>Add a new public key to CloudFront to use, for example, for field-level
         * encryption. You can add a maximum of 10 public keys with one AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreatePublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicKey2018_06_18Async(const Model::CreatePublicKey2018_06_18Request& request, const CreatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new RMTP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new web distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         * <important> <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistribution2018_06_18Outcome CreateStreamingDistribution2018_06_18(const Model::CreateStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Creates a new RMTP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new web distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         * <important> <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistribution2018_06_18OutcomeCallable CreateStreamingDistribution2018_06_18Callable(const Model::CreateStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Creates a new RMTP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new web distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         * <important> <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistribution2018_06_18Async(const Model::CreateStreamingDistribution2018_06_18Request& request, const CreateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateStreamingDistributionWithTags2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistributionWithTags2018_06_18Outcome CreateStreamingDistributionWithTags2018_06_18(const Model::CreateStreamingDistributionWithTags2018_06_18Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateStreamingDistributionWithTags2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistributionWithTags2018_06_18OutcomeCallable CreateStreamingDistributionWithTags2018_06_18Callable(const Model::CreateStreamingDistributionWithTags2018_06_18Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/CreateStreamingDistributionWithTags2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistributionWithTags2018_06_18Async(const Model::CreateStreamingDistributionWithTags2018_06_18Request& request, const CreateStreamingDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome DeleteCloudFrontOriginAccessIdentity2018_06_18(const Model::DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable DeleteCloudFrontOriginAccessIdentity2018_06_18Callable(const Model::DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCloudFrontOriginAccessIdentity2018_06_18Async(const Model::DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request, const DeleteCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistribution2018_06_18Outcome DeleteDistribution2018_06_18(const Model::DeleteDistribution2018_06_18Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistribution2018_06_18OutcomeCallable DeleteDistribution2018_06_18Callable(const Model::DeleteDistribution2018_06_18Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistribution2018_06_18Async(const Model::DeleteDistribution2018_06_18Request& request, const DeleteDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionConfig2018_06_18Outcome DeleteFieldLevelEncryptionConfig2018_06_18(const Model::DeleteFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFieldLevelEncryptionConfig2018_06_18OutcomeCallable DeleteFieldLevelEncryptionConfig2018_06_18Callable(const Model::DeleteFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFieldLevelEncryptionConfig2018_06_18Async(const Model::DeleteFieldLevelEncryptionConfig2018_06_18Request& request, const DeleteFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionProfile2018_06_18Outcome DeleteFieldLevelEncryptionProfile2018_06_18(const Model::DeleteFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFieldLevelEncryptionProfile2018_06_18OutcomeCallable DeleteFieldLevelEncryptionProfile2018_06_18Callable(const Model::DeleteFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFieldLevelEncryptionProfile2018_06_18Async(const Model::DeleteFieldLevelEncryptionProfile2018_06_18Request& request, const DeleteFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeletePublicKey2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicKey2018_06_18Outcome DeletePublicKey2018_06_18(const Model::DeletePublicKey2018_06_18Request& request) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeletePublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicKey2018_06_18OutcomeCallable DeletePublicKey2018_06_18Callable(const Model::DeletePublicKey2018_06_18Request& request) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeletePublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicKey2018_06_18Async(const Model::DeletePublicKey2018_06_18Request& request, const DeletePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a streaming distribution. To delete an RTMP distribution using the
         * CloudFront API, perform the following steps.</p> <p> <b>To delete an RTMP
         * distribution using the CloudFront API</b>:</p> <ol> <li> <p>Disable the RTMP
         * distribution.</p> </li> <li> <p>Submit a <code>GET Streaming Distribution
         * Config</code> request to get the current configuration and the <code>Etag</code>
         * header for the distribution. </p> </li> <li> <p>Update the XML document that was
         * returned in the response to your <code>GET Streaming Distribution Config</code>
         * request to change the value of <code>Enabled</code> to <code>false</code>.</p>
         * </li> <li> <p>Submit a <code>PUT Streaming Distribution Config</code> request to
         * update the configuration for your distribution. In the request body, include the
         * XML document that you updated in Step 3. Then set the value of the HTTP
         * <code>If-Match</code> header to the value of the <code>ETag</code> header that
         * CloudFront returned when you submitted the <code>GET Streaming Distribution
         * Config</code> request in Step 2.</p> </li> <li> <p>Review the response to the
         * <code>PUT Streaming Distribution Config</code> request to confirm that the
         * distribution was successfully disabled.</p> </li> <li> <p>Submit a <code>GET
         * Streaming Distribution Config</code> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE Streaming
         * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GET Streaming Distribution Config</code> request in
         * Step 2.</p> </li> <li> <p>Review the response to your <code>DELETE Streaming
         * Distribution</code> request to confirm that the distribution was successfully
         * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
         * the CloudFront console, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingDistribution2018_06_18Outcome DeleteStreamingDistribution2018_06_18(const Model::DeleteStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Delete a streaming distribution. To delete an RTMP distribution using the
         * CloudFront API, perform the following steps.</p> <p> <b>To delete an RTMP
         * distribution using the CloudFront API</b>:</p> <ol> <li> <p>Disable the RTMP
         * distribution.</p> </li> <li> <p>Submit a <code>GET Streaming Distribution
         * Config</code> request to get the current configuration and the <code>Etag</code>
         * header for the distribution. </p> </li> <li> <p>Update the XML document that was
         * returned in the response to your <code>GET Streaming Distribution Config</code>
         * request to change the value of <code>Enabled</code> to <code>false</code>.</p>
         * </li> <li> <p>Submit a <code>PUT Streaming Distribution Config</code> request to
         * update the configuration for your distribution. In the request body, include the
         * XML document that you updated in Step 3. Then set the value of the HTTP
         * <code>If-Match</code> header to the value of the <code>ETag</code> header that
         * CloudFront returned when you submitted the <code>GET Streaming Distribution
         * Config</code> request in Step 2.</p> </li> <li> <p>Review the response to the
         * <code>PUT Streaming Distribution Config</code> request to confirm that the
         * distribution was successfully disabled.</p> </li> <li> <p>Submit a <code>GET
         * Streaming Distribution Config</code> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE Streaming
         * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GET Streaming Distribution Config</code> request in
         * Step 2.</p> </li> <li> <p>Review the response to your <code>DELETE Streaming
         * Distribution</code> request to confirm that the distribution was successfully
         * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
         * the CloudFront console, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingDistribution2018_06_18OutcomeCallable DeleteStreamingDistribution2018_06_18Callable(const Model::DeleteStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Delete a streaming distribution. To delete an RTMP distribution using the
         * CloudFront API, perform the following steps.</p> <p> <b>To delete an RTMP
         * distribution using the CloudFront API</b>:</p> <ol> <li> <p>Disable the RTMP
         * distribution.</p> </li> <li> <p>Submit a <code>GET Streaming Distribution
         * Config</code> request to get the current configuration and the <code>Etag</code>
         * header for the distribution. </p> </li> <li> <p>Update the XML document that was
         * returned in the response to your <code>GET Streaming Distribution Config</code>
         * request to change the value of <code>Enabled</code> to <code>false</code>.</p>
         * </li> <li> <p>Submit a <code>PUT Streaming Distribution Config</code> request to
         * update the configuration for your distribution. In the request body, include the
         * XML document that you updated in Step 3. Then set the value of the HTTP
         * <code>If-Match</code> header to the value of the <code>ETag</code> header that
         * CloudFront returned when you submitted the <code>GET Streaming Distribution
         * Config</code> request in Step 2.</p> </li> <li> <p>Review the response to the
         * <code>PUT Streaming Distribution Config</code> request to confirm that the
         * distribution was successfully disabled.</p> </li> <li> <p>Submit a <code>GET
         * Streaming Distribution Config</code> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE Streaming
         * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GET Streaming Distribution Config</code> request in
         * Step 2.</p> </li> <li> <p>Review the response to your <code>DELETE Streaming
         * Distribution</code> request to confirm that the distribution was successfully
         * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
         * the CloudFront console, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/DeleteStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingDistribution2018_06_18Async(const Model::DeleteStreamingDistribution2018_06_18Request& request, const DeleteStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2018_06_18Outcome GetCloudFrontOriginAccessIdentity2018_06_18(const Model::GetCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable GetCloudFrontOriginAccessIdentity2018_06_18Callable(const Model::GetCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentity2018_06_18Async(const Model::GetCloudFrontOriginAccessIdentity2018_06_18Request& request, const GetCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetCloudFrontOriginAccessIdentityConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome GetCloudFrontOriginAccessIdentityConfig2018_06_18(const Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetCloudFrontOriginAccessIdentityConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2018_06_18Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetCloudFrontOriginAccessIdentityConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentityConfig2018_06_18Async(const Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request, const GetCloudFrontOriginAccessIdentityConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistribution2018_06_18Outcome GetDistribution2018_06_18(const Model::GetDistribution2018_06_18Request& request) const;

        /**
         * <p>Get the information about a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistribution2018_06_18OutcomeCallable GetDistribution2018_06_18Callable(const Model::GetDistribution2018_06_18Request& request) const;

        /**
         * <p>Get the information about a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistribution2018_06_18Async(const Model::GetDistribution2018_06_18Request& request, const GetDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetDistributionConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfig2018_06_18Outcome GetDistributionConfig2018_06_18(const Model::GetDistributionConfig2018_06_18Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetDistributionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionConfig2018_06_18OutcomeCallable GetDistributionConfig2018_06_18Callable(const Model::GetDistributionConfig2018_06_18Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetDistributionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionConfig2018_06_18Async(const Model::GetDistributionConfig2018_06_18Request& request, const GetDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryption2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryption2018_06_18Outcome GetFieldLevelEncryption2018_06_18(const Model::GetFieldLevelEncryption2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryption2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryption2018_06_18OutcomeCallable GetFieldLevelEncryption2018_06_18Callable(const Model::GetFieldLevelEncryption2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryption2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryption2018_06_18Async(const Model::GetFieldLevelEncryption2018_06_18Request& request, const GetFieldLevelEncryption2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionConfig2018_06_18Outcome GetFieldLevelEncryptionConfig2018_06_18(const Model::GetFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionConfig2018_06_18OutcomeCallable GetFieldLevelEncryptionConfig2018_06_18Callable(const Model::GetFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionConfig2018_06_18Async(const Model::GetFieldLevelEncryptionConfig2018_06_18Request& request, const GetFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfile2018_06_18Outcome GetFieldLevelEncryptionProfile2018_06_18(const Model::GetFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionProfile2018_06_18OutcomeCallable GetFieldLevelEncryptionProfile2018_06_18Callable(const Model::GetFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionProfile2018_06_18Async(const Model::GetFieldLevelEncryptionProfile2018_06_18Request& request, const GetFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionProfileConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfileConfig2018_06_18Outcome GetFieldLevelEncryptionProfileConfig2018_06_18(const Model::GetFieldLevelEncryptionProfileConfig2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionProfileConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionProfileConfig2018_06_18OutcomeCallable GetFieldLevelEncryptionProfileConfig2018_06_18Callable(const Model::GetFieldLevelEncryptionProfileConfig2018_06_18Request& request) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetFieldLevelEncryptionProfileConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionProfileConfig2018_06_18Async(const Model::GetFieldLevelEncryptionProfileConfig2018_06_18Request& request, const GetFieldLevelEncryptionProfileConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetInvalidation2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvalidation2018_06_18Outcome GetInvalidation2018_06_18(const Model::GetInvalidation2018_06_18Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetInvalidation2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvalidation2018_06_18OutcomeCallable GetInvalidation2018_06_18Callable(const Model::GetInvalidation2018_06_18Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetInvalidation2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvalidation2018_06_18Async(const Model::GetInvalidation2018_06_18Request& request, const GetInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the public key information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetPublicKey2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKey2018_06_18Outcome GetPublicKey2018_06_18(const Model::GetPublicKey2018_06_18Request& request) const;

        /**
         * <p>Get the public key information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetPublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicKey2018_06_18OutcomeCallable GetPublicKey2018_06_18Callable(const Model::GetPublicKey2018_06_18Request& request) const;

        /**
         * <p>Get the public key information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetPublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicKey2018_06_18Async(const Model::GetPublicKey2018_06_18Request& request, const GetPublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return public key configuration informaation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetPublicKeyConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKeyConfig2018_06_18Outcome GetPublicKeyConfig2018_06_18(const Model::GetPublicKeyConfig2018_06_18Request& request) const;

        /**
         * <p>Return public key configuration informaation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetPublicKeyConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicKeyConfig2018_06_18OutcomeCallable GetPublicKeyConfig2018_06_18Callable(const Model::GetPublicKeyConfig2018_06_18Request& request) const;

        /**
         * <p>Return public key configuration informaation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetPublicKeyConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicKeyConfig2018_06_18Async(const Model::GetPublicKeyConfig2018_06_18Request& request, const GetPublicKeyConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistribution2018_06_18Outcome GetStreamingDistribution2018_06_18(const Model::GetStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistribution2018_06_18OutcomeCallable GetStreamingDistribution2018_06_18Callable(const Model::GetStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistribution2018_06_18Async(const Model::GetStreamingDistribution2018_06_18Request& request, const GetStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetStreamingDistributionConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistributionConfig2018_06_18Outcome GetStreamingDistributionConfig2018_06_18(const Model::GetStreamingDistributionConfig2018_06_18Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetStreamingDistributionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistributionConfig2018_06_18OutcomeCallable GetStreamingDistributionConfig2018_06_18Callable(const Model::GetStreamingDistributionConfig2018_06_18Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/GetStreamingDistributionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistributionConfig2018_06_18Async(const Model::GetStreamingDistributionConfig2018_06_18Request& request, const GetStreamingDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListCloudFrontOriginAccessIdentities2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2018_06_18Outcome ListCloudFrontOriginAccessIdentities2018_06_18(const Model::ListCloudFrontOriginAccessIdentities2018_06_18Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListCloudFrontOriginAccessIdentities2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2018_06_18OutcomeCallable ListCloudFrontOriginAccessIdentities2018_06_18Callable(const Model::ListCloudFrontOriginAccessIdentities2018_06_18Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListCloudFrontOriginAccessIdentities2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCloudFrontOriginAccessIdentities2018_06_18Async(const Model::ListCloudFrontOriginAccessIdentities2018_06_18Request& request, const ListCloudFrontOriginAccessIdentities2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListDistributions2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributions2018_06_18Outcome ListDistributions2018_06_18(const Model::ListDistributions2018_06_18Request& request) const;

        /**
         * <p>List distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListDistributions2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributions2018_06_18OutcomeCallable ListDistributions2018_06_18Callable(const Model::ListDistributions2018_06_18Request& request) const;

        /**
         * <p>List distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListDistributions2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributions2018_06_18Async(const Model::ListDistributions2018_06_18Request& request, const ListDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListDistributionsByWebACLId2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByWebACLId2018_06_18Outcome ListDistributionsByWebACLId2018_06_18(const Model::ListDistributionsByWebACLId2018_06_18Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListDistributionsByWebACLId2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByWebACLId2018_06_18OutcomeCallable ListDistributionsByWebACLId2018_06_18Callable(const Model::ListDistributionsByWebACLId2018_06_18Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListDistributionsByWebACLId2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByWebACLId2018_06_18Async(const Model::ListDistributionsByWebACLId2018_06_18Request& request, const ListDistributionsByWebACLId2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListFieldLevelEncryptionConfigs2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionConfigs2018_06_18Outcome ListFieldLevelEncryptionConfigs2018_06_18(const Model::ListFieldLevelEncryptionConfigs2018_06_18Request& request) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListFieldLevelEncryptionConfigs2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldLevelEncryptionConfigs2018_06_18OutcomeCallable ListFieldLevelEncryptionConfigs2018_06_18Callable(const Model::ListFieldLevelEncryptionConfigs2018_06_18Request& request) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListFieldLevelEncryptionConfigs2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldLevelEncryptionConfigs2018_06_18Async(const Model::ListFieldLevelEncryptionConfigs2018_06_18Request& request, const ListFieldLevelEncryptionConfigs2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListFieldLevelEncryptionProfiles2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionProfiles2018_06_18Outcome ListFieldLevelEncryptionProfiles2018_06_18(const Model::ListFieldLevelEncryptionProfiles2018_06_18Request& request) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListFieldLevelEncryptionProfiles2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldLevelEncryptionProfiles2018_06_18OutcomeCallable ListFieldLevelEncryptionProfiles2018_06_18Callable(const Model::ListFieldLevelEncryptionProfiles2018_06_18Request& request) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListFieldLevelEncryptionProfiles2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldLevelEncryptionProfiles2018_06_18Async(const Model::ListFieldLevelEncryptionProfiles2018_06_18Request& request, const ListFieldLevelEncryptionProfiles2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListInvalidations2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvalidations2018_06_18Outcome ListInvalidations2018_06_18(const Model::ListInvalidations2018_06_18Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListInvalidations2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvalidations2018_06_18OutcomeCallable ListInvalidations2018_06_18Callable(const Model::ListInvalidations2018_06_18Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListInvalidations2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvalidations2018_06_18Async(const Model::ListInvalidations2018_06_18Request& request, const ListInvalidations2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListPublicKeys2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeys2018_06_18Outcome ListPublicKeys2018_06_18(const Model::ListPublicKeys2018_06_18Request& request) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListPublicKeys2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublicKeys2018_06_18OutcomeCallable ListPublicKeys2018_06_18Callable(const Model::ListPublicKeys2018_06_18Request& request) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListPublicKeys2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublicKeys2018_06_18Async(const Model::ListPublicKeys2018_06_18Request& request, const ListPublicKeys2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListStreamingDistributions2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingDistributions2018_06_18Outcome ListStreamingDistributions2018_06_18(const Model::ListStreamingDistributions2018_06_18Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListStreamingDistributions2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingDistributions2018_06_18OutcomeCallable ListStreamingDistributions2018_06_18Callable(const Model::ListStreamingDistributions2018_06_18Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListStreamingDistributions2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingDistributions2018_06_18Async(const Model::ListStreamingDistributions2018_06_18Request& request, const ListStreamingDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListTagsForResource2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResource2018_06_18Outcome ListTagsForResource2018_06_18(const Model::ListTagsForResource2018_06_18Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListTagsForResource2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResource2018_06_18OutcomeCallable ListTagsForResource2018_06_18Callable(const Model::ListTagsForResource2018_06_18Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/ListTagsForResource2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResource2018_06_18Async(const Model::ListTagsForResource2018_06_18Request& request, const ListTagsForResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/TagResource2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResource2018_06_18Outcome TagResource2018_06_18(const Model::TagResource2018_06_18Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/TagResource2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResource2018_06_18OutcomeCallable TagResource2018_06_18Callable(const Model::TagResource2018_06_18Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/TagResource2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResource2018_06_18Async(const Model::TagResource2018_06_18Request& request, const TagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UntagResource2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResource2018_06_18Outcome UntagResource2018_06_18(const Model::UntagResource2018_06_18Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UntagResource2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResource2018_06_18OutcomeCallable UntagResource2018_06_18Callable(const Model::UntagResource2018_06_18Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UntagResource2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResource2018_06_18Async(const Model::UntagResource2018_06_18Request& request, const UntagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome UpdateCloudFrontOriginAccessIdentity2018_06_18(const Model::UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable UpdateCloudFrontOriginAccessIdentity2018_06_18Callable(const Model::UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateCloudFrontOriginAccessIdentity2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCloudFrontOriginAccessIdentity2018_06_18Async(const Model::UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request, const UpdateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for a web distribution. </p> <important> <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a>GetDistributionConfig</a> request to get the current
         * configuration and an <code>Etag</code> header for the distribution.</p> <note>
         * <p>If you update the distribution again, you must get a new <code>Etag</code>
         * header.</p> </note> </li> <li> <p>Update the XML document that was returned in
         * the response to your <code>GetDistributionConfig</code> request to include your
         * changes. </p> <important> <p>When you edit the XML file, be aware of the
         * following:</p> <ul> <li> <p>You must strip out the ETag parameter that is
         * returned.</p> </li> <li> <p>Additional fields are required when you update a
         * distribution. There may be fields included in the XML file for features that you
         * haven't configured for your distribution. This is expected and required to
         * successfully update the distribution.</p> </li> <li> <p>You can't change the
         * value of <code>CallerReference</code>. If you try to change this value,
         * CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li> <p>The
         * new configuration replaces the existing configuration; the values that you
         * specify in an <code>UpdateDistribution</code> request are not merged into your
         * existing configuration. When you add, delete, or replace values in an element
         * that allows multiple values (for example, <code>CNAME</code>), you must specify
         * all of the values that you want to appear in the updated distribution. In
         * addition, you must update the corresponding <code>Quantity</code> element.</p>
         * </li> </ul> </important> </li> <li> <p>Submit an <code>UpdateDistribution</code>
         * request to update the configuration for your distribution:</p> <ul> <li> <p>In
         * the request body, include the XML document that you updated in Step 2. The
         * request body must include an XML document with a <code>DistributionConfig</code>
         * element.</p> </li> <li> <p>Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GetDistributionConfig</code> request in Step 1.</p>
         * </li> </ul> </li> <li> <p>Review the response to the
         * <code>UpdateDistribution</code> request to confirm that the configuration was
         * successfully updated.</p> </li> <li> <p>Optional: Submit a
         * <a>GetDistribution</a> request to confirm that your changes have propagated.
         * When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistribution2018_06_18Outcome UpdateDistribution2018_06_18(const Model::UpdateDistribution2018_06_18Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. </p> <important> <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a>GetDistributionConfig</a> request to get the current
         * configuration and an <code>Etag</code> header for the distribution.</p> <note>
         * <p>If you update the distribution again, you must get a new <code>Etag</code>
         * header.</p> </note> </li> <li> <p>Update the XML document that was returned in
         * the response to your <code>GetDistributionConfig</code> request to include your
         * changes. </p> <important> <p>When you edit the XML file, be aware of the
         * following:</p> <ul> <li> <p>You must strip out the ETag parameter that is
         * returned.</p> </li> <li> <p>Additional fields are required when you update a
         * distribution. There may be fields included in the XML file for features that you
         * haven't configured for your distribution. This is expected and required to
         * successfully update the distribution.</p> </li> <li> <p>You can't change the
         * value of <code>CallerReference</code>. If you try to change this value,
         * CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li> <p>The
         * new configuration replaces the existing configuration; the values that you
         * specify in an <code>UpdateDistribution</code> request are not merged into your
         * existing configuration. When you add, delete, or replace values in an element
         * that allows multiple values (for example, <code>CNAME</code>), you must specify
         * all of the values that you want to appear in the updated distribution. In
         * addition, you must update the corresponding <code>Quantity</code> element.</p>
         * </li> </ul> </important> </li> <li> <p>Submit an <code>UpdateDistribution</code>
         * request to update the configuration for your distribution:</p> <ul> <li> <p>In
         * the request body, include the XML document that you updated in Step 2. The
         * request body must include an XML document with a <code>DistributionConfig</code>
         * element.</p> </li> <li> <p>Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GetDistributionConfig</code> request in Step 1.</p>
         * </li> </ul> </li> <li> <p>Review the response to the
         * <code>UpdateDistribution</code> request to confirm that the configuration was
         * successfully updated.</p> </li> <li> <p>Optional: Submit a
         * <a>GetDistribution</a> request to confirm that your changes have propagated.
         * When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistribution2018_06_18OutcomeCallable UpdateDistribution2018_06_18Callable(const Model::UpdateDistribution2018_06_18Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. </p> <important> <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a>GetDistributionConfig</a> request to get the current
         * configuration and an <code>Etag</code> header for the distribution.</p> <note>
         * <p>If you update the distribution again, you must get a new <code>Etag</code>
         * header.</p> </note> </li> <li> <p>Update the XML document that was returned in
         * the response to your <code>GetDistributionConfig</code> request to include your
         * changes. </p> <important> <p>When you edit the XML file, be aware of the
         * following:</p> <ul> <li> <p>You must strip out the ETag parameter that is
         * returned.</p> </li> <li> <p>Additional fields are required when you update a
         * distribution. There may be fields included in the XML file for features that you
         * haven't configured for your distribution. This is expected and required to
         * successfully update the distribution.</p> </li> <li> <p>You can't change the
         * value of <code>CallerReference</code>. If you try to change this value,
         * CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li> <p>The
         * new configuration replaces the existing configuration; the values that you
         * specify in an <code>UpdateDistribution</code> request are not merged into your
         * existing configuration. When you add, delete, or replace values in an element
         * that allows multiple values (for example, <code>CNAME</code>), you must specify
         * all of the values that you want to appear in the updated distribution. In
         * addition, you must update the corresponding <code>Quantity</code> element.</p>
         * </li> </ul> </important> </li> <li> <p>Submit an <code>UpdateDistribution</code>
         * request to update the configuration for your distribution:</p> <ul> <li> <p>In
         * the request body, include the XML document that you updated in Step 2. The
         * request body must include an XML document with a <code>DistributionConfig</code>
         * element.</p> </li> <li> <p>Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GetDistributionConfig</code> request in Step 1.</p>
         * </li> </ul> </li> <li> <p>Review the response to the
         * <code>UpdateDistribution</code> request to confirm that the configuration was
         * successfully updated.</p> </li> <li> <p>Optional: Submit a
         * <a>GetDistribution</a> request to confirm that your changes have propagated.
         * When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistribution2018_06_18Async(const Model::UpdateDistribution2018_06_18Request& request, const UpdateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionConfig2018_06_18Outcome UpdateFieldLevelEncryptionConfig2018_06_18(const Model::UpdateFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFieldLevelEncryptionConfig2018_06_18OutcomeCallable UpdateFieldLevelEncryptionConfig2018_06_18Callable(const Model::UpdateFieldLevelEncryptionConfig2018_06_18Request& request) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateFieldLevelEncryptionConfig2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFieldLevelEncryptionConfig2018_06_18Async(const Model::UpdateFieldLevelEncryptionConfig2018_06_18Request& request, const UpdateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionProfile2018_06_18Outcome UpdateFieldLevelEncryptionProfile2018_06_18(const Model::UpdateFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFieldLevelEncryptionProfile2018_06_18OutcomeCallable UpdateFieldLevelEncryptionProfile2018_06_18Callable(const Model::UpdateFieldLevelEncryptionProfile2018_06_18Request& request) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateFieldLevelEncryptionProfile2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFieldLevelEncryptionProfile2018_06_18Async(const Model::UpdateFieldLevelEncryptionProfile2018_06_18Request& request, const UpdateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdatePublicKey2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicKey2018_06_18Outcome UpdatePublicKey2018_06_18(const Model::UpdatePublicKey2018_06_18Request& request) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdatePublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePublicKey2018_06_18OutcomeCallable UpdatePublicKey2018_06_18Callable(const Model::UpdatePublicKey2018_06_18Request& request) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdatePublicKey2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePublicKey2018_06_18Async(const Model::UpdatePublicKey2018_06_18Request& request, const UpdatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingDistribution2018_06_18Outcome UpdateStreamingDistribution2018_06_18(const Model::UpdateStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamingDistribution2018_06_18OutcomeCallable UpdateStreamingDistribution2018_06_18Callable(const Model::UpdateStreamingDistribution2018_06_18Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2018-06-18/UpdateStreamingDistribution2018_06_18">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamingDistribution2018_06_18Async(const Model::UpdateStreamingDistribution2018_06_18Request& request, const UpdateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2018_06_18Request& request, const CreateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistribution2018_06_18AsyncHelper(const Model::CreateDistribution2018_06_18Request& request, const CreateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistributionWithTags2018_06_18AsyncHelper(const Model::CreateDistributionWithTags2018_06_18Request& request, const CreateDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFieldLevelEncryptionConfig2018_06_18AsyncHelper(const Model::CreateFieldLevelEncryptionConfig2018_06_18Request& request, const CreateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFieldLevelEncryptionProfile2018_06_18AsyncHelper(const Model::CreateFieldLevelEncryptionProfile2018_06_18Request& request, const CreateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInvalidation2018_06_18AsyncHelper(const Model::CreateInvalidation2018_06_18Request& request, const CreateInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePublicKey2018_06_18AsyncHelper(const Model::CreatePublicKey2018_06_18Request& request, const CreatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistribution2018_06_18AsyncHelper(const Model::CreateStreamingDistribution2018_06_18Request& request, const CreateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistributionWithTags2018_06_18AsyncHelper(const Model::CreateStreamingDistributionWithTags2018_06_18Request& request, const CreateStreamingDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request, const DeleteCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistribution2018_06_18AsyncHelper(const Model::DeleteDistribution2018_06_18Request& request, const DeleteDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFieldLevelEncryptionConfig2018_06_18AsyncHelper(const Model::DeleteFieldLevelEncryptionConfig2018_06_18Request& request, const DeleteFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFieldLevelEncryptionProfile2018_06_18AsyncHelper(const Model::DeleteFieldLevelEncryptionProfile2018_06_18Request& request, const DeleteFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePublicKey2018_06_18AsyncHelper(const Model::DeletePublicKey2018_06_18Request& request, const DeletePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingDistribution2018_06_18AsyncHelper(const Model::DeleteStreamingDistribution2018_06_18Request& request, const DeleteStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2018_06_18Request& request, const GetCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentityConfig2018_06_18AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request, const GetCloudFrontOriginAccessIdentityConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistribution2018_06_18AsyncHelper(const Model::GetDistribution2018_06_18Request& request, const GetDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionConfig2018_06_18AsyncHelper(const Model::GetDistributionConfig2018_06_18Request& request, const GetDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryption2018_06_18AsyncHelper(const Model::GetFieldLevelEncryption2018_06_18Request& request, const GetFieldLevelEncryption2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionConfig2018_06_18AsyncHelper(const Model::GetFieldLevelEncryptionConfig2018_06_18Request& request, const GetFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionProfile2018_06_18AsyncHelper(const Model::GetFieldLevelEncryptionProfile2018_06_18Request& request, const GetFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionProfileConfig2018_06_18AsyncHelper(const Model::GetFieldLevelEncryptionProfileConfig2018_06_18Request& request, const GetFieldLevelEncryptionProfileConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvalidation2018_06_18AsyncHelper(const Model::GetInvalidation2018_06_18Request& request, const GetInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicKey2018_06_18AsyncHelper(const Model::GetPublicKey2018_06_18Request& request, const GetPublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicKeyConfig2018_06_18AsyncHelper(const Model::GetPublicKeyConfig2018_06_18Request& request, const GetPublicKeyConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistribution2018_06_18AsyncHelper(const Model::GetStreamingDistribution2018_06_18Request& request, const GetStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistributionConfig2018_06_18AsyncHelper(const Model::GetStreamingDistributionConfig2018_06_18Request& request, const GetStreamingDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCloudFrontOriginAccessIdentities2018_06_18AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2018_06_18Request& request, const ListCloudFrontOriginAccessIdentities2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributions2018_06_18AsyncHelper(const Model::ListDistributions2018_06_18Request& request, const ListDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByWebACLId2018_06_18AsyncHelper(const Model::ListDistributionsByWebACLId2018_06_18Request& request, const ListDistributionsByWebACLId2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFieldLevelEncryptionConfigs2018_06_18AsyncHelper(const Model::ListFieldLevelEncryptionConfigs2018_06_18Request& request, const ListFieldLevelEncryptionConfigs2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFieldLevelEncryptionProfiles2018_06_18AsyncHelper(const Model::ListFieldLevelEncryptionProfiles2018_06_18Request& request, const ListFieldLevelEncryptionProfiles2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvalidations2018_06_18AsyncHelper(const Model::ListInvalidations2018_06_18Request& request, const ListInvalidations2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublicKeys2018_06_18AsyncHelper(const Model::ListPublicKeys2018_06_18Request& request, const ListPublicKeys2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingDistributions2018_06_18AsyncHelper(const Model::ListStreamingDistributions2018_06_18Request& request, const ListStreamingDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResource2018_06_18AsyncHelper(const Model::ListTagsForResource2018_06_18Request& request, const ListTagsForResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResource2018_06_18AsyncHelper(const Model::TagResource2018_06_18Request& request, const TagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResource2018_06_18AsyncHelper(const Model::UntagResource2018_06_18Request& request, const UntagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request, const UpdateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistribution2018_06_18AsyncHelper(const Model::UpdateDistribution2018_06_18Request& request, const UpdateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFieldLevelEncryptionConfig2018_06_18AsyncHelper(const Model::UpdateFieldLevelEncryptionConfig2018_06_18Request& request, const UpdateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFieldLevelEncryptionProfile2018_06_18AsyncHelper(const Model::UpdateFieldLevelEncryptionProfile2018_06_18Request& request, const UpdateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePublicKey2018_06_18AsyncHelper(const Model::UpdatePublicKey2018_06_18Request& request, const UpdatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamingDistribution2018_06_18AsyncHelper(const Model::UpdateStreamingDistribution2018_06_18Request& request, const UpdateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFront
} // namespace Aws
