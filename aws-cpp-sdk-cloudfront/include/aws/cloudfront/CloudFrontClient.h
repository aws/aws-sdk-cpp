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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2019_03_26Result.h>
#include <aws/cloudfront/model/CreateDistribution2019_03_26Result.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2019_03_26Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2019_03_26Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2019_03_26Result.h>
#include <aws/cloudfront/model/CreateInvalidation2019_03_26Result.h>
#include <aws/cloudfront/model/CreatePublicKey2019_03_26Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2019_03_26Result.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2019_03_26Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2019_03_26Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2019_03_26Result.h>
#include <aws/cloudfront/model/GetDistribution2019_03_26Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2019_03_26Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2019_03_26Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2019_03_26Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2019_03_26Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2019_03_26Result.h>
#include <aws/cloudfront/model/GetInvalidation2019_03_26Result.h>
#include <aws/cloudfront/model/GetPublicKey2019_03_26Result.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2019_03_26Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2019_03_26Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2019_03_26Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2019_03_26Result.h>
#include <aws/cloudfront/model/ListDistributions2019_03_26Result.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2019_03_26Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2019_03_26Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2019_03_26Result.h>
#include <aws/cloudfront/model/ListInvalidations2019_03_26Result.h>
#include <aws/cloudfront/model/ListPublicKeys2019_03_26Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2019_03_26Result.h>
#include <aws/cloudfront/model/ListTagsForResource2019_03_26Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2019_03_26Result.h>
#include <aws/cloudfront/model/UpdateDistribution2019_03_26Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2019_03_26Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2019_03_26Result.h>
#include <aws/cloudfront/model/UpdatePublicKey2019_03_26Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2019_03_26Result.h>
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
        class CreateCloudFrontOriginAccessIdentity2019_03_26Request;
        class CreateDistribution2019_03_26Request;
        class CreateDistributionWithTags2019_03_26Request;
        class CreateFieldLevelEncryptionConfig2019_03_26Request;
        class CreateFieldLevelEncryptionProfile2019_03_26Request;
        class CreateInvalidation2019_03_26Request;
        class CreatePublicKey2019_03_26Request;
        class CreateStreamingDistribution2019_03_26Request;
        class CreateStreamingDistributionWithTags2019_03_26Request;
        class DeleteCloudFrontOriginAccessIdentity2019_03_26Request;
        class DeleteDistribution2019_03_26Request;
        class DeleteFieldLevelEncryptionConfig2019_03_26Request;
        class DeleteFieldLevelEncryptionProfile2019_03_26Request;
        class DeletePublicKey2019_03_26Request;
        class DeleteStreamingDistribution2019_03_26Request;
        class GetCloudFrontOriginAccessIdentity2019_03_26Request;
        class GetCloudFrontOriginAccessIdentityConfig2019_03_26Request;
        class GetDistribution2019_03_26Request;
        class GetDistributionConfig2019_03_26Request;
        class GetFieldLevelEncryption2019_03_26Request;
        class GetFieldLevelEncryptionConfig2019_03_26Request;
        class GetFieldLevelEncryptionProfile2019_03_26Request;
        class GetFieldLevelEncryptionProfileConfig2019_03_26Request;
        class GetInvalidation2019_03_26Request;
        class GetPublicKey2019_03_26Request;
        class GetPublicKeyConfig2019_03_26Request;
        class GetStreamingDistribution2019_03_26Request;
        class GetStreamingDistributionConfig2019_03_26Request;
        class ListCloudFrontOriginAccessIdentities2019_03_26Request;
        class ListDistributions2019_03_26Request;
        class ListDistributionsByWebACLId2019_03_26Request;
        class ListFieldLevelEncryptionConfigs2019_03_26Request;
        class ListFieldLevelEncryptionProfiles2019_03_26Request;
        class ListInvalidations2019_03_26Request;
        class ListPublicKeys2019_03_26Request;
        class ListStreamingDistributions2019_03_26Request;
        class ListTagsForResource2019_03_26Request;
        class TagResource2019_03_26Request;
        class UntagResource2019_03_26Request;
        class UpdateCloudFrontOriginAccessIdentity2019_03_26Request;
        class UpdateDistribution2019_03_26Request;
        class UpdateFieldLevelEncryptionConfig2019_03_26Request;
        class UpdateFieldLevelEncryptionProfile2019_03_26Request;
        class UpdatePublicKey2019_03_26Request;
        class UpdateStreamingDistribution2019_03_26Request;

        typedef Aws::Utils::Outcome<CreateCloudFrontOriginAccessIdentity2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateCloudFrontOriginAccessIdentity2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreateDistribution2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateDistribution2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreateDistributionWithTags2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateDistributionWithTags2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateFieldLevelEncryptionConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionProfile2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateFieldLevelEncryptionProfile2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreateInvalidation2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateInvalidation2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreatePublicKey2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreatePublicKey2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistribution2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateStreamingDistribution2019_03_26Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistributionWithTags2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> CreateStreamingDistributionWithTags2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteDistribution2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteFieldLevelEncryptionConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteFieldLevelEncryptionProfile2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeletePublicKey2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteStreamingDistribution2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentity2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentity2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetDistribution2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistribution2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetDistributionConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistributionConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryption2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryption2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryptionConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfile2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryptionProfile2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfileConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetFieldLevelEncryptionProfileConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetInvalidation2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetInvalidation2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetPublicKey2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetPublicKey2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetPublicKeyConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetPublicKeyConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistribution2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistribution2019_03_26Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistributionConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistributionConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListCloudFrontOriginAccessIdentities2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListCloudFrontOriginAccessIdentities2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListDistributions2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributions2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByWebACLId2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributionsByWebACLId2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListFieldLevelEncryptionConfigs2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListFieldLevelEncryptionConfigs2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListFieldLevelEncryptionProfiles2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListFieldLevelEncryptionProfiles2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListInvalidations2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListInvalidations2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListPublicKeys2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListPublicKeys2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListStreamingDistributions2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListStreamingDistributions2019_03_26Outcome;
        typedef Aws::Utils::Outcome<ListTagsForResource2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> ListTagsForResource2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> TagResource2019_03_26Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> UntagResource2019_03_26Outcome;
        typedef Aws::Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome;
        typedef Aws::Utils::Outcome<UpdateDistribution2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateDistribution2019_03_26Outcome;
        typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionConfig2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateFieldLevelEncryptionConfig2019_03_26Outcome;
        typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionProfile2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateFieldLevelEncryptionProfile2019_03_26Outcome;
        typedef Aws::Utils::Outcome<UpdatePublicKey2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> UpdatePublicKey2019_03_26Outcome;
        typedef Aws::Utils::Outcome<UpdateStreamingDistribution2019_03_26Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateStreamingDistribution2019_03_26Outcome;

        typedef std::future<CreateCloudFrontOriginAccessIdentity2019_03_26Outcome> CreateCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable;
        typedef std::future<CreateDistribution2019_03_26Outcome> CreateDistribution2019_03_26OutcomeCallable;
        typedef std::future<CreateDistributionWithTags2019_03_26Outcome> CreateDistributionWithTags2019_03_26OutcomeCallable;
        typedef std::future<CreateFieldLevelEncryptionConfig2019_03_26Outcome> CreateFieldLevelEncryptionConfig2019_03_26OutcomeCallable;
        typedef std::future<CreateFieldLevelEncryptionProfile2019_03_26Outcome> CreateFieldLevelEncryptionProfile2019_03_26OutcomeCallable;
        typedef std::future<CreateInvalidation2019_03_26Outcome> CreateInvalidation2019_03_26OutcomeCallable;
        typedef std::future<CreatePublicKey2019_03_26Outcome> CreatePublicKey2019_03_26OutcomeCallable;
        typedef std::future<CreateStreamingDistribution2019_03_26Outcome> CreateStreamingDistribution2019_03_26OutcomeCallable;
        typedef std::future<CreateStreamingDistributionWithTags2019_03_26Outcome> CreateStreamingDistributionWithTags2019_03_26OutcomeCallable;
        typedef std::future<DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome> DeleteCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable;
        typedef std::future<DeleteDistribution2019_03_26Outcome> DeleteDistribution2019_03_26OutcomeCallable;
        typedef std::future<DeleteFieldLevelEncryptionConfig2019_03_26Outcome> DeleteFieldLevelEncryptionConfig2019_03_26OutcomeCallable;
        typedef std::future<DeleteFieldLevelEncryptionProfile2019_03_26Outcome> DeleteFieldLevelEncryptionProfile2019_03_26OutcomeCallable;
        typedef std::future<DeletePublicKey2019_03_26Outcome> DeletePublicKey2019_03_26OutcomeCallable;
        typedef std::future<DeleteStreamingDistribution2019_03_26Outcome> DeleteStreamingDistribution2019_03_26OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentity2019_03_26Outcome> GetCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome> GetCloudFrontOriginAccessIdentityConfig2019_03_26OutcomeCallable;
        typedef std::future<GetDistribution2019_03_26Outcome> GetDistribution2019_03_26OutcomeCallable;
        typedef std::future<GetDistributionConfig2019_03_26Outcome> GetDistributionConfig2019_03_26OutcomeCallable;
        typedef std::future<GetFieldLevelEncryption2019_03_26Outcome> GetFieldLevelEncryption2019_03_26OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionConfig2019_03_26Outcome> GetFieldLevelEncryptionConfig2019_03_26OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionProfile2019_03_26Outcome> GetFieldLevelEncryptionProfile2019_03_26OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionProfileConfig2019_03_26Outcome> GetFieldLevelEncryptionProfileConfig2019_03_26OutcomeCallable;
        typedef std::future<GetInvalidation2019_03_26Outcome> GetInvalidation2019_03_26OutcomeCallable;
        typedef std::future<GetPublicKey2019_03_26Outcome> GetPublicKey2019_03_26OutcomeCallable;
        typedef std::future<GetPublicKeyConfig2019_03_26Outcome> GetPublicKeyConfig2019_03_26OutcomeCallable;
        typedef std::future<GetStreamingDistribution2019_03_26Outcome> GetStreamingDistribution2019_03_26OutcomeCallable;
        typedef std::future<GetStreamingDistributionConfig2019_03_26Outcome> GetStreamingDistributionConfig2019_03_26OutcomeCallable;
        typedef std::future<ListCloudFrontOriginAccessIdentities2019_03_26Outcome> ListCloudFrontOriginAccessIdentities2019_03_26OutcomeCallable;
        typedef std::future<ListDistributions2019_03_26Outcome> ListDistributions2019_03_26OutcomeCallable;
        typedef std::future<ListDistributionsByWebACLId2019_03_26Outcome> ListDistributionsByWebACLId2019_03_26OutcomeCallable;
        typedef std::future<ListFieldLevelEncryptionConfigs2019_03_26Outcome> ListFieldLevelEncryptionConfigs2019_03_26OutcomeCallable;
        typedef std::future<ListFieldLevelEncryptionProfiles2019_03_26Outcome> ListFieldLevelEncryptionProfiles2019_03_26OutcomeCallable;
        typedef std::future<ListInvalidations2019_03_26Outcome> ListInvalidations2019_03_26OutcomeCallable;
        typedef std::future<ListPublicKeys2019_03_26Outcome> ListPublicKeys2019_03_26OutcomeCallable;
        typedef std::future<ListStreamingDistributions2019_03_26Outcome> ListStreamingDistributions2019_03_26OutcomeCallable;
        typedef std::future<ListTagsForResource2019_03_26Outcome> ListTagsForResource2019_03_26OutcomeCallable;
        typedef std::future<TagResource2019_03_26Outcome> TagResource2019_03_26OutcomeCallable;
        typedef std::future<UntagResource2019_03_26Outcome> UntagResource2019_03_26OutcomeCallable;
        typedef std::future<UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome> UpdateCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable;
        typedef std::future<UpdateDistribution2019_03_26Outcome> UpdateDistribution2019_03_26OutcomeCallable;
        typedef std::future<UpdateFieldLevelEncryptionConfig2019_03_26Outcome> UpdateFieldLevelEncryptionConfig2019_03_26OutcomeCallable;
        typedef std::future<UpdateFieldLevelEncryptionProfile2019_03_26Outcome> UpdateFieldLevelEncryptionProfile2019_03_26OutcomeCallable;
        typedef std::future<UpdatePublicKey2019_03_26Outcome> UpdatePublicKey2019_03_26OutcomeCallable;
        typedef std::future<UpdateStreamingDistribution2019_03_26Outcome> UpdateStreamingDistribution2019_03_26OutcomeCallable;
} // namespace Model

  class CloudFrontClient;

    typedef std::function<void(const CloudFrontClient*, const Model::CreateCloudFrontOriginAccessIdentity2019_03_26Request&, const Model::CreateCloudFrontOriginAccessIdentity2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistribution2019_03_26Request&, const Model::CreateDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistribution2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistributionWithTags2019_03_26Request&, const Model::CreateDistributionWithTags2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionWithTags2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionConfig2019_03_26Request&, const Model::CreateFieldLevelEncryptionConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionProfile2019_03_26Request&, const Model::CreateFieldLevelEncryptionProfile2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateInvalidation2019_03_26Request&, const Model::CreateInvalidation2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvalidation2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreatePublicKey2019_03_26Request&, const Model::CreatePublicKey2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicKey2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistribution2019_03_26Request&, const Model::CreateStreamingDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistribution2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistributionWithTags2019_03_26Request&, const Model::CreateStreamingDistributionWithTags2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistributionWithTags2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCloudFrontOriginAccessIdentity2019_03_26Request&, const Model::DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteDistribution2019_03_26Request&, const Model::DeleteDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistribution2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionConfig2019_03_26Request&, const Model::DeleteFieldLevelEncryptionConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionProfile2019_03_26Request&, const Model::DeleteFieldLevelEncryptionProfile2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeletePublicKey2019_03_26Request&, const Model::DeletePublicKey2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicKey2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteStreamingDistribution2019_03_26Request&, const Model::DeleteStreamingDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingDistribution2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentity2019_03_26Request&, const Model::GetCloudFrontOriginAccessIdentity2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentityConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistribution2019_03_26Request&, const Model::GetDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistribution2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistributionConfig2019_03_26Request&, const Model::GetDistributionConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryption2019_03_26Request&, const Model::GetFieldLevelEncryption2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryption2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionConfig2019_03_26Request&, const Model::GetFieldLevelEncryptionConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfile2019_03_26Request&, const Model::GetFieldLevelEncryptionProfile2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfileConfig2019_03_26Request&, const Model::GetFieldLevelEncryptionProfileConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfileConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetInvalidation2019_03_26Request&, const Model::GetInvalidation2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvalidation2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKey2019_03_26Request&, const Model::GetPublicKey2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKey2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKeyConfig2019_03_26Request&, const Model::GetPublicKeyConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKeyConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistribution2019_03_26Request&, const Model::GetStreamingDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistribution2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistributionConfig2019_03_26Request&, const Model::GetStreamingDistributionConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistributionConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCloudFrontOriginAccessIdentities2019_03_26Request&, const Model::ListCloudFrontOriginAccessIdentities2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudFrontOriginAccessIdentities2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributions2019_03_26Request&, const Model::ListDistributions2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributions2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByWebACLId2019_03_26Request&, const Model::ListDistributionsByWebACLId2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByWebACLId2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionConfigs2019_03_26Request&, const Model::ListFieldLevelEncryptionConfigs2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionConfigs2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionProfiles2019_03_26Request&, const Model::ListFieldLevelEncryptionProfiles2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionProfiles2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListInvalidations2019_03_26Request&, const Model::ListInvalidations2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvalidations2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListPublicKeys2019_03_26Request&, const Model::ListPublicKeys2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeys2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListStreamingDistributions2019_03_26Request&, const Model::ListStreamingDistributions2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingDistributions2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListTagsForResource2019_03_26Request&, const Model::ListTagsForResource2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResource2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::TagResource2019_03_26Request&, const Model::TagResource2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResource2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UntagResource2019_03_26Request&, const Model::UntagResource2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResource2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCloudFrontOriginAccessIdentity2019_03_26Request&, const Model::UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistribution2019_03_26Request&, const Model::UpdateDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistribution2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionConfig2019_03_26Request&, const Model::UpdateFieldLevelEncryptionConfig2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionProfile2019_03_26Request&, const Model::UpdateFieldLevelEncryptionProfile2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdatePublicKey2019_03_26Request&, const Model::UpdatePublicKey2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublicKey2019_03_26ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateStreamingDistribution2019_03_26Request&, const Model::UpdateStreamingDistribution2019_03_26Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingDistribution2019_03_26ResponseReceivedHandler;

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
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2019_03_26Outcome CreateCloudFrontOriginAccessIdentity2019_03_26(const Model::CreateCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable CreateCloudFrontOriginAccessIdentity2019_03_26Callable(const Model::CreateCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFrontOriginAccessIdentity2019_03_26Async(const Model::CreateCloudFrontOriginAccessIdentity2019_03_26Request& request, const CreateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p> <important> <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
         * follow the steps included in the documentation to get the current configuration
         * and then make your updates. This helps to make sure that you include all of the
         * required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistribution2019_03_26Outcome CreateDistribution2019_03_26(const Model::CreateDistribution2019_03_26Request& request) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p> <important> <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
         * follow the steps included in the documentation to get the current configuration
         * and then make your updates. This helps to make sure that you include all of the
         * required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistribution2019_03_26OutcomeCallable CreateDistribution2019_03_26Callable(const Model::CreateDistribution2019_03_26Request& request) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p> <important> <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
         * follow the steps included in the documentation to get the current configuration
         * and then make your updates. This helps to make sure that you include all of the
         * required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistribution2019_03_26Async(const Model::CreateDistribution2019_03_26Request& request, const CreateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistributionWithTags2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionWithTags2019_03_26Outcome CreateDistributionWithTags2019_03_26(const Model::CreateDistributionWithTags2019_03_26Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistributionWithTags2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionWithTags2019_03_26OutcomeCallable CreateDistributionWithTags2019_03_26Callable(const Model::CreateDistributionWithTags2019_03_26Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistributionWithTags2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionWithTags2019_03_26Async(const Model::CreateDistributionWithTags2019_03_26Request& request, const CreateDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionConfig2019_03_26Outcome CreateFieldLevelEncryptionConfig2019_03_26(const Model::CreateFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFieldLevelEncryptionConfig2019_03_26OutcomeCallable CreateFieldLevelEncryptionConfig2019_03_26Callable(const Model::CreateFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFieldLevelEncryptionConfig2019_03_26Async(const Model::CreateFieldLevelEncryptionConfig2019_03_26Request& request, const CreateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionProfile2019_03_26Outcome CreateFieldLevelEncryptionProfile2019_03_26(const Model::CreateFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFieldLevelEncryptionProfile2019_03_26OutcomeCallable CreateFieldLevelEncryptionProfile2019_03_26Callable(const Model::CreateFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFieldLevelEncryptionProfile2019_03_26Async(const Model::CreateFieldLevelEncryptionProfile2019_03_26Request& request, const CreateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateInvalidation2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvalidation2019_03_26Outcome CreateInvalidation2019_03_26(const Model::CreateInvalidation2019_03_26Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateInvalidation2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvalidation2019_03_26OutcomeCallable CreateInvalidation2019_03_26Callable(const Model::CreateInvalidation2019_03_26Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateInvalidation2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInvalidation2019_03_26Async(const Model::CreateInvalidation2019_03_26Request& request, const CreateInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a new public key to CloudFront to use, for example, for field-level
         * encryption. You can add a maximum of 10 public keys with one AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreatePublicKey2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicKey2019_03_26Outcome CreatePublicKey2019_03_26(const Model::CreatePublicKey2019_03_26Request& request) const;

        /**
         * <p>Add a new public key to CloudFront to use, for example, for field-level
         * encryption. You can add a maximum of 10 public keys with one AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreatePublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicKey2019_03_26OutcomeCallable CreatePublicKey2019_03_26Callable(const Model::CreatePublicKey2019_03_26Request& request) const;

        /**
         * <p>Add a new public key to CloudFront to use, for example, for field-level
         * encryption. You can add a maximum of 10 public keys with one AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreatePublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicKey2019_03_26Async(const Model::CreatePublicKey2019_03_26Request& request, const CreatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new RTMP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistribution2019_03_26Outcome CreateStreamingDistribution2019_03_26(const Model::CreateStreamingDistribution2019_03_26Request& request) const;

        /**
         * <p>Creates a new RTMP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistribution2019_03_26OutcomeCallable CreateStreamingDistribution2019_03_26Callable(const Model::CreateStreamingDistribution2019_03_26Request& request) const;

        /**
         * <p>Creates a new RTMP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistribution2019_03_26Async(const Model::CreateStreamingDistribution2019_03_26Request& request, const CreateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateStreamingDistributionWithTags2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistributionWithTags2019_03_26Outcome CreateStreamingDistributionWithTags2019_03_26(const Model::CreateStreamingDistributionWithTags2019_03_26Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateStreamingDistributionWithTags2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistributionWithTags2019_03_26OutcomeCallable CreateStreamingDistributionWithTags2019_03_26Callable(const Model::CreateStreamingDistributionWithTags2019_03_26Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateStreamingDistributionWithTags2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistributionWithTags2019_03_26Async(const Model::CreateStreamingDistributionWithTags2019_03_26Request& request, const CreateStreamingDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome DeleteCloudFrontOriginAccessIdentity2019_03_26(const Model::DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable DeleteCloudFrontOriginAccessIdentity2019_03_26Callable(const Model::DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCloudFrontOriginAccessIdentity2019_03_26Async(const Model::DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request, const DeleteCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistribution2019_03_26Outcome DeleteDistribution2019_03_26(const Model::DeleteDistribution2019_03_26Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistribution2019_03_26OutcomeCallable DeleteDistribution2019_03_26Callable(const Model::DeleteDistribution2019_03_26Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistribution2019_03_26Async(const Model::DeleteDistribution2019_03_26Request& request, const DeleteDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionConfig2019_03_26Outcome DeleteFieldLevelEncryptionConfig2019_03_26(const Model::DeleteFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFieldLevelEncryptionConfig2019_03_26OutcomeCallable DeleteFieldLevelEncryptionConfig2019_03_26Callable(const Model::DeleteFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFieldLevelEncryptionConfig2019_03_26Async(const Model::DeleteFieldLevelEncryptionConfig2019_03_26Request& request, const DeleteFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionProfile2019_03_26Outcome DeleteFieldLevelEncryptionProfile2019_03_26(const Model::DeleteFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFieldLevelEncryptionProfile2019_03_26OutcomeCallable DeleteFieldLevelEncryptionProfile2019_03_26Callable(const Model::DeleteFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFieldLevelEncryptionProfile2019_03_26Async(const Model::DeleteFieldLevelEncryptionProfile2019_03_26Request& request, const DeleteFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeletePublicKey2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicKey2019_03_26Outcome DeletePublicKey2019_03_26(const Model::DeletePublicKey2019_03_26Request& request) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeletePublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicKey2019_03_26OutcomeCallable DeletePublicKey2019_03_26Callable(const Model::DeletePublicKey2019_03_26Request& request) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeletePublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicKey2019_03_26Async(const Model::DeletePublicKey2019_03_26Request& request, const DeletePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingDistribution2019_03_26Outcome DeleteStreamingDistribution2019_03_26(const Model::DeleteStreamingDistribution2019_03_26Request& request) const;

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
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingDistribution2019_03_26OutcomeCallable DeleteStreamingDistribution2019_03_26Callable(const Model::DeleteStreamingDistribution2019_03_26Request& request) const;

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
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/DeleteStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingDistribution2019_03_26Async(const Model::DeleteStreamingDistribution2019_03_26Request& request, const DeleteStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2019_03_26Outcome GetCloudFrontOriginAccessIdentity2019_03_26(const Model::GetCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable GetCloudFrontOriginAccessIdentity2019_03_26Callable(const Model::GetCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentity2019_03_26Async(const Model::GetCloudFrontOriginAccessIdentity2019_03_26Request& request, const GetCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetCloudFrontOriginAccessIdentityConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome GetCloudFrontOriginAccessIdentityConfig2019_03_26(const Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetCloudFrontOriginAccessIdentityConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2019_03_26Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetCloudFrontOriginAccessIdentityConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentityConfig2019_03_26Async(const Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request, const GetCloudFrontOriginAccessIdentityConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistribution2019_03_26Outcome GetDistribution2019_03_26(const Model::GetDistribution2019_03_26Request& request) const;

        /**
         * <p>Get the information about a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistribution2019_03_26OutcomeCallable GetDistribution2019_03_26Callable(const Model::GetDistribution2019_03_26Request& request) const;

        /**
         * <p>Get the information about a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistribution2019_03_26Async(const Model::GetDistribution2019_03_26Request& request, const GetDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetDistributionConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfig2019_03_26Outcome GetDistributionConfig2019_03_26(const Model::GetDistributionConfig2019_03_26Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetDistributionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionConfig2019_03_26OutcomeCallable GetDistributionConfig2019_03_26Callable(const Model::GetDistributionConfig2019_03_26Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetDistributionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionConfig2019_03_26Async(const Model::GetDistributionConfig2019_03_26Request& request, const GetDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryption2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryption2019_03_26Outcome GetFieldLevelEncryption2019_03_26(const Model::GetFieldLevelEncryption2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryption2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryption2019_03_26OutcomeCallable GetFieldLevelEncryption2019_03_26Callable(const Model::GetFieldLevelEncryption2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryption2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryption2019_03_26Async(const Model::GetFieldLevelEncryption2019_03_26Request& request, const GetFieldLevelEncryption2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionConfig2019_03_26Outcome GetFieldLevelEncryptionConfig2019_03_26(const Model::GetFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionConfig2019_03_26OutcomeCallable GetFieldLevelEncryptionConfig2019_03_26Callable(const Model::GetFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionConfig2019_03_26Async(const Model::GetFieldLevelEncryptionConfig2019_03_26Request& request, const GetFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfile2019_03_26Outcome GetFieldLevelEncryptionProfile2019_03_26(const Model::GetFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionProfile2019_03_26OutcomeCallable GetFieldLevelEncryptionProfile2019_03_26Callable(const Model::GetFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionProfile2019_03_26Async(const Model::GetFieldLevelEncryptionProfile2019_03_26Request& request, const GetFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionProfileConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfileConfig2019_03_26Outcome GetFieldLevelEncryptionProfileConfig2019_03_26(const Model::GetFieldLevelEncryptionProfileConfig2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionProfileConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionProfileConfig2019_03_26OutcomeCallable GetFieldLevelEncryptionProfileConfig2019_03_26Callable(const Model::GetFieldLevelEncryptionProfileConfig2019_03_26Request& request) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetFieldLevelEncryptionProfileConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionProfileConfig2019_03_26Async(const Model::GetFieldLevelEncryptionProfileConfig2019_03_26Request& request, const GetFieldLevelEncryptionProfileConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetInvalidation2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvalidation2019_03_26Outcome GetInvalidation2019_03_26(const Model::GetInvalidation2019_03_26Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetInvalidation2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvalidation2019_03_26OutcomeCallable GetInvalidation2019_03_26Callable(const Model::GetInvalidation2019_03_26Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetInvalidation2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvalidation2019_03_26Async(const Model::GetInvalidation2019_03_26Request& request, const GetInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the public key information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetPublicKey2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKey2019_03_26Outcome GetPublicKey2019_03_26(const Model::GetPublicKey2019_03_26Request& request) const;

        /**
         * <p>Get the public key information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetPublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicKey2019_03_26OutcomeCallable GetPublicKey2019_03_26Callable(const Model::GetPublicKey2019_03_26Request& request) const;

        /**
         * <p>Get the public key information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetPublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicKey2019_03_26Async(const Model::GetPublicKey2019_03_26Request& request, const GetPublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return public key configuration informaation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetPublicKeyConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKeyConfig2019_03_26Outcome GetPublicKeyConfig2019_03_26(const Model::GetPublicKeyConfig2019_03_26Request& request) const;

        /**
         * <p>Return public key configuration informaation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetPublicKeyConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicKeyConfig2019_03_26OutcomeCallable GetPublicKeyConfig2019_03_26Callable(const Model::GetPublicKeyConfig2019_03_26Request& request) const;

        /**
         * <p>Return public key configuration informaation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetPublicKeyConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicKeyConfig2019_03_26Async(const Model::GetPublicKeyConfig2019_03_26Request& request, const GetPublicKeyConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistribution2019_03_26Outcome GetStreamingDistribution2019_03_26(const Model::GetStreamingDistribution2019_03_26Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistribution2019_03_26OutcomeCallable GetStreamingDistribution2019_03_26Callable(const Model::GetStreamingDistribution2019_03_26Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistribution2019_03_26Async(const Model::GetStreamingDistribution2019_03_26Request& request, const GetStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetStreamingDistributionConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistributionConfig2019_03_26Outcome GetStreamingDistributionConfig2019_03_26(const Model::GetStreamingDistributionConfig2019_03_26Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetStreamingDistributionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistributionConfig2019_03_26OutcomeCallable GetStreamingDistributionConfig2019_03_26Callable(const Model::GetStreamingDistributionConfig2019_03_26Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetStreamingDistributionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistributionConfig2019_03_26Async(const Model::GetStreamingDistributionConfig2019_03_26Request& request, const GetStreamingDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListCloudFrontOriginAccessIdentities2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2019_03_26Outcome ListCloudFrontOriginAccessIdentities2019_03_26(const Model::ListCloudFrontOriginAccessIdentities2019_03_26Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListCloudFrontOriginAccessIdentities2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2019_03_26OutcomeCallable ListCloudFrontOriginAccessIdentities2019_03_26Callable(const Model::ListCloudFrontOriginAccessIdentities2019_03_26Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListCloudFrontOriginAccessIdentities2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCloudFrontOriginAccessIdentities2019_03_26Async(const Model::ListCloudFrontOriginAccessIdentities2019_03_26Request& request, const ListCloudFrontOriginAccessIdentities2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List CloudFront distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListDistributions2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributions2019_03_26Outcome ListDistributions2019_03_26(const Model::ListDistributions2019_03_26Request& request) const;

        /**
         * <p>List CloudFront distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListDistributions2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributions2019_03_26OutcomeCallable ListDistributions2019_03_26Callable(const Model::ListDistributions2019_03_26Request& request) const;

        /**
         * <p>List CloudFront distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListDistributions2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributions2019_03_26Async(const Model::ListDistributions2019_03_26Request& request, const ListDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListDistributionsByWebACLId2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByWebACLId2019_03_26Outcome ListDistributionsByWebACLId2019_03_26(const Model::ListDistributionsByWebACLId2019_03_26Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListDistributionsByWebACLId2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByWebACLId2019_03_26OutcomeCallable ListDistributionsByWebACLId2019_03_26Callable(const Model::ListDistributionsByWebACLId2019_03_26Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListDistributionsByWebACLId2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByWebACLId2019_03_26Async(const Model::ListDistributionsByWebACLId2019_03_26Request& request, const ListDistributionsByWebACLId2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListFieldLevelEncryptionConfigs2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionConfigs2019_03_26Outcome ListFieldLevelEncryptionConfigs2019_03_26(const Model::ListFieldLevelEncryptionConfigs2019_03_26Request& request) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListFieldLevelEncryptionConfigs2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldLevelEncryptionConfigs2019_03_26OutcomeCallable ListFieldLevelEncryptionConfigs2019_03_26Callable(const Model::ListFieldLevelEncryptionConfigs2019_03_26Request& request) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListFieldLevelEncryptionConfigs2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldLevelEncryptionConfigs2019_03_26Async(const Model::ListFieldLevelEncryptionConfigs2019_03_26Request& request, const ListFieldLevelEncryptionConfigs2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListFieldLevelEncryptionProfiles2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionProfiles2019_03_26Outcome ListFieldLevelEncryptionProfiles2019_03_26(const Model::ListFieldLevelEncryptionProfiles2019_03_26Request& request) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListFieldLevelEncryptionProfiles2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldLevelEncryptionProfiles2019_03_26OutcomeCallable ListFieldLevelEncryptionProfiles2019_03_26Callable(const Model::ListFieldLevelEncryptionProfiles2019_03_26Request& request) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListFieldLevelEncryptionProfiles2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldLevelEncryptionProfiles2019_03_26Async(const Model::ListFieldLevelEncryptionProfiles2019_03_26Request& request, const ListFieldLevelEncryptionProfiles2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListInvalidations2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvalidations2019_03_26Outcome ListInvalidations2019_03_26(const Model::ListInvalidations2019_03_26Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListInvalidations2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvalidations2019_03_26OutcomeCallable ListInvalidations2019_03_26Callable(const Model::ListInvalidations2019_03_26Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListInvalidations2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvalidations2019_03_26Async(const Model::ListInvalidations2019_03_26Request& request, const ListInvalidations2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListPublicKeys2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeys2019_03_26Outcome ListPublicKeys2019_03_26(const Model::ListPublicKeys2019_03_26Request& request) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListPublicKeys2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublicKeys2019_03_26OutcomeCallable ListPublicKeys2019_03_26Callable(const Model::ListPublicKeys2019_03_26Request& request) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListPublicKeys2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublicKeys2019_03_26Async(const Model::ListPublicKeys2019_03_26Request& request, const ListPublicKeys2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListStreamingDistributions2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingDistributions2019_03_26Outcome ListStreamingDistributions2019_03_26(const Model::ListStreamingDistributions2019_03_26Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListStreamingDistributions2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingDistributions2019_03_26OutcomeCallable ListStreamingDistributions2019_03_26Callable(const Model::ListStreamingDistributions2019_03_26Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListStreamingDistributions2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingDistributions2019_03_26Async(const Model::ListStreamingDistributions2019_03_26Request& request, const ListStreamingDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListTagsForResource2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResource2019_03_26Outcome ListTagsForResource2019_03_26(const Model::ListTagsForResource2019_03_26Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListTagsForResource2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResource2019_03_26OutcomeCallable ListTagsForResource2019_03_26Callable(const Model::ListTagsForResource2019_03_26Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListTagsForResource2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResource2019_03_26Async(const Model::ListTagsForResource2019_03_26Request& request, const ListTagsForResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/TagResource2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResource2019_03_26Outcome TagResource2019_03_26(const Model::TagResource2019_03_26Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/TagResource2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResource2019_03_26OutcomeCallable TagResource2019_03_26Callable(const Model::TagResource2019_03_26Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/TagResource2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResource2019_03_26Async(const Model::TagResource2019_03_26Request& request, const TagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UntagResource2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResource2019_03_26Outcome UntagResource2019_03_26(const Model::UntagResource2019_03_26Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UntagResource2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResource2019_03_26OutcomeCallable UntagResource2019_03_26Callable(const Model::UntagResource2019_03_26Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UntagResource2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResource2019_03_26Async(const Model::UntagResource2019_03_26Request& request, const UntagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome UpdateCloudFrontOriginAccessIdentity2019_03_26(const Model::UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable UpdateCloudFrontOriginAccessIdentity2019_03_26Callable(const Model::UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateCloudFrontOriginAccessIdentity2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCloudFrontOriginAccessIdentity2019_03_26Async(const Model::UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request, const UpdateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for a web distribution. </p> <important> <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
         * request to get the current configuration and an <code>Etag</code> header for the
         * distribution.</p> <note> <p>If you update the distribution again, you must get a
         * new <code>Etag</code> header.</p> </note> </li> <li> <p>Update the XML document
         * that was returned in the response to your <code>GetDistributionConfig</code>
         * request to include your changes. </p> <important> <p>When you edit the XML file,
         * be aware of the following:</p> <ul> <li> <p>You must strip out the ETag
         * parameter that is returned.</p> </li> <li> <p>Additional fields are required
         * when you update a distribution. There may be fields included in the XML file for
         * features that you haven't configured for your distribution. This is expected and
         * required to successfully update the distribution.</p> </li> <li> <p>You can't
         * change the value of <code>CallerReference</code>. If you try to change this
         * value, CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li>
         * <p>The new configuration replaces the existing configuration; the values that
         * you specify in an <code>UpdateDistribution</code> request are not merged into
         * your existing configuration. When you add, delete, or replace values in an
         * element that allows multiple values (for example, <code>CNAME</code>), you must
         * specify all of the values that you want to appear in the updated distribution.
         * In addition, you must update the corresponding <code>Quantity</code>
         * element.</p> </li> </ul> </important> </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * request to confirm that your changes have propagated. When propagation is
         * complete, the value of <code>Status</code> is <code>Deployed</code>.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistribution2019_03_26Outcome UpdateDistribution2019_03_26(const Model::UpdateDistribution2019_03_26Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. </p> <important> <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
         * request to get the current configuration and an <code>Etag</code> header for the
         * distribution.</p> <note> <p>If you update the distribution again, you must get a
         * new <code>Etag</code> header.</p> </note> </li> <li> <p>Update the XML document
         * that was returned in the response to your <code>GetDistributionConfig</code>
         * request to include your changes. </p> <important> <p>When you edit the XML file,
         * be aware of the following:</p> <ul> <li> <p>You must strip out the ETag
         * parameter that is returned.</p> </li> <li> <p>Additional fields are required
         * when you update a distribution. There may be fields included in the XML file for
         * features that you haven't configured for your distribution. This is expected and
         * required to successfully update the distribution.</p> </li> <li> <p>You can't
         * change the value of <code>CallerReference</code>. If you try to change this
         * value, CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li>
         * <p>The new configuration replaces the existing configuration; the values that
         * you specify in an <code>UpdateDistribution</code> request are not merged into
         * your existing configuration. When you add, delete, or replace values in an
         * element that allows multiple values (for example, <code>CNAME</code>), you must
         * specify all of the values that you want to appear in the updated distribution.
         * In addition, you must update the corresponding <code>Quantity</code>
         * element.</p> </li> </ul> </important> </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * request to confirm that your changes have propagated. When propagation is
         * complete, the value of <code>Status</code> is <code>Deployed</code>.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistribution2019_03_26OutcomeCallable UpdateDistribution2019_03_26Callable(const Model::UpdateDistribution2019_03_26Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. </p> <important> <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> </important> <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
         * request to get the current configuration and an <code>Etag</code> header for the
         * distribution.</p> <note> <p>If you update the distribution again, you must get a
         * new <code>Etag</code> header.</p> </note> </li> <li> <p>Update the XML document
         * that was returned in the response to your <code>GetDistributionConfig</code>
         * request to include your changes. </p> <important> <p>When you edit the XML file,
         * be aware of the following:</p> <ul> <li> <p>You must strip out the ETag
         * parameter that is returned.</p> </li> <li> <p>Additional fields are required
         * when you update a distribution. There may be fields included in the XML file for
         * features that you haven't configured for your distribution. This is expected and
         * required to successfully update the distribution.</p> </li> <li> <p>You can't
         * change the value of <code>CallerReference</code>. If you try to change this
         * value, CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li>
         * <p>The new configuration replaces the existing configuration; the values that
         * you specify in an <code>UpdateDistribution</code> request are not merged into
         * your existing configuration. When you add, delete, or replace values in an
         * element that allows multiple values (for example, <code>CNAME</code>), you must
         * specify all of the values that you want to appear in the updated distribution.
         * In addition, you must update the corresponding <code>Quantity</code>
         * element.</p> </li> </ul> </important> </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * request to confirm that your changes have propagated. When propagation is
         * complete, the value of <code>Status</code> is <code>Deployed</code>.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistribution2019_03_26Async(const Model::UpdateDistribution2019_03_26Request& request, const UpdateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionConfig2019_03_26Outcome UpdateFieldLevelEncryptionConfig2019_03_26(const Model::UpdateFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFieldLevelEncryptionConfig2019_03_26OutcomeCallable UpdateFieldLevelEncryptionConfig2019_03_26Callable(const Model::UpdateFieldLevelEncryptionConfig2019_03_26Request& request) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateFieldLevelEncryptionConfig2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFieldLevelEncryptionConfig2019_03_26Async(const Model::UpdateFieldLevelEncryptionConfig2019_03_26Request& request, const UpdateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionProfile2019_03_26Outcome UpdateFieldLevelEncryptionProfile2019_03_26(const Model::UpdateFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFieldLevelEncryptionProfile2019_03_26OutcomeCallable UpdateFieldLevelEncryptionProfile2019_03_26Callable(const Model::UpdateFieldLevelEncryptionProfile2019_03_26Request& request) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateFieldLevelEncryptionProfile2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFieldLevelEncryptionProfile2019_03_26Async(const Model::UpdateFieldLevelEncryptionProfile2019_03_26Request& request, const UpdateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdatePublicKey2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicKey2019_03_26Outcome UpdatePublicKey2019_03_26(const Model::UpdatePublicKey2019_03_26Request& request) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdatePublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePublicKey2019_03_26OutcomeCallable UpdatePublicKey2019_03_26Callable(const Model::UpdatePublicKey2019_03_26Request& request) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdatePublicKey2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePublicKey2019_03_26Async(const Model::UpdatePublicKey2019_03_26Request& request, const UpdatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingDistribution2019_03_26Outcome UpdateStreamingDistribution2019_03_26(const Model::UpdateStreamingDistribution2019_03_26Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamingDistribution2019_03_26OutcomeCallable UpdateStreamingDistribution2019_03_26Callable(const Model::UpdateStreamingDistribution2019_03_26Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/UpdateStreamingDistribution2019_03_26">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamingDistribution2019_03_26Async(const Model::UpdateStreamingDistribution2019_03_26Request& request, const UpdateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2019_03_26Request& request, const CreateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistribution2019_03_26AsyncHelper(const Model::CreateDistribution2019_03_26Request& request, const CreateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistributionWithTags2019_03_26AsyncHelper(const Model::CreateDistributionWithTags2019_03_26Request& request, const CreateDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFieldLevelEncryptionConfig2019_03_26AsyncHelper(const Model::CreateFieldLevelEncryptionConfig2019_03_26Request& request, const CreateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFieldLevelEncryptionProfile2019_03_26AsyncHelper(const Model::CreateFieldLevelEncryptionProfile2019_03_26Request& request, const CreateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInvalidation2019_03_26AsyncHelper(const Model::CreateInvalidation2019_03_26Request& request, const CreateInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePublicKey2019_03_26AsyncHelper(const Model::CreatePublicKey2019_03_26Request& request, const CreatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistribution2019_03_26AsyncHelper(const Model::CreateStreamingDistribution2019_03_26Request& request, const CreateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistributionWithTags2019_03_26AsyncHelper(const Model::CreateStreamingDistributionWithTags2019_03_26Request& request, const CreateStreamingDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request, const DeleteCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistribution2019_03_26AsyncHelper(const Model::DeleteDistribution2019_03_26Request& request, const DeleteDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFieldLevelEncryptionConfig2019_03_26AsyncHelper(const Model::DeleteFieldLevelEncryptionConfig2019_03_26Request& request, const DeleteFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFieldLevelEncryptionProfile2019_03_26AsyncHelper(const Model::DeleteFieldLevelEncryptionProfile2019_03_26Request& request, const DeleteFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePublicKey2019_03_26AsyncHelper(const Model::DeletePublicKey2019_03_26Request& request, const DeletePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingDistribution2019_03_26AsyncHelper(const Model::DeleteStreamingDistribution2019_03_26Request& request, const DeleteStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2019_03_26Request& request, const GetCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentityConfig2019_03_26AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request, const GetCloudFrontOriginAccessIdentityConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistribution2019_03_26AsyncHelper(const Model::GetDistribution2019_03_26Request& request, const GetDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionConfig2019_03_26AsyncHelper(const Model::GetDistributionConfig2019_03_26Request& request, const GetDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryption2019_03_26AsyncHelper(const Model::GetFieldLevelEncryption2019_03_26Request& request, const GetFieldLevelEncryption2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionConfig2019_03_26AsyncHelper(const Model::GetFieldLevelEncryptionConfig2019_03_26Request& request, const GetFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionProfile2019_03_26AsyncHelper(const Model::GetFieldLevelEncryptionProfile2019_03_26Request& request, const GetFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionProfileConfig2019_03_26AsyncHelper(const Model::GetFieldLevelEncryptionProfileConfig2019_03_26Request& request, const GetFieldLevelEncryptionProfileConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvalidation2019_03_26AsyncHelper(const Model::GetInvalidation2019_03_26Request& request, const GetInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicKey2019_03_26AsyncHelper(const Model::GetPublicKey2019_03_26Request& request, const GetPublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicKeyConfig2019_03_26AsyncHelper(const Model::GetPublicKeyConfig2019_03_26Request& request, const GetPublicKeyConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistribution2019_03_26AsyncHelper(const Model::GetStreamingDistribution2019_03_26Request& request, const GetStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistributionConfig2019_03_26AsyncHelper(const Model::GetStreamingDistributionConfig2019_03_26Request& request, const GetStreamingDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCloudFrontOriginAccessIdentities2019_03_26AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2019_03_26Request& request, const ListCloudFrontOriginAccessIdentities2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributions2019_03_26AsyncHelper(const Model::ListDistributions2019_03_26Request& request, const ListDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByWebACLId2019_03_26AsyncHelper(const Model::ListDistributionsByWebACLId2019_03_26Request& request, const ListDistributionsByWebACLId2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFieldLevelEncryptionConfigs2019_03_26AsyncHelper(const Model::ListFieldLevelEncryptionConfigs2019_03_26Request& request, const ListFieldLevelEncryptionConfigs2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFieldLevelEncryptionProfiles2019_03_26AsyncHelper(const Model::ListFieldLevelEncryptionProfiles2019_03_26Request& request, const ListFieldLevelEncryptionProfiles2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvalidations2019_03_26AsyncHelper(const Model::ListInvalidations2019_03_26Request& request, const ListInvalidations2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublicKeys2019_03_26AsyncHelper(const Model::ListPublicKeys2019_03_26Request& request, const ListPublicKeys2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingDistributions2019_03_26AsyncHelper(const Model::ListStreamingDistributions2019_03_26Request& request, const ListStreamingDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResource2019_03_26AsyncHelper(const Model::ListTagsForResource2019_03_26Request& request, const ListTagsForResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResource2019_03_26AsyncHelper(const Model::TagResource2019_03_26Request& request, const TagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResource2019_03_26AsyncHelper(const Model::UntagResource2019_03_26Request& request, const UntagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request, const UpdateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistribution2019_03_26AsyncHelper(const Model::UpdateDistribution2019_03_26Request& request, const UpdateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFieldLevelEncryptionConfig2019_03_26AsyncHelper(const Model::UpdateFieldLevelEncryptionConfig2019_03_26Request& request, const UpdateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFieldLevelEncryptionProfile2019_03_26AsyncHelper(const Model::UpdateFieldLevelEncryptionProfile2019_03_26Request& request, const UpdateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePublicKey2019_03_26AsyncHelper(const Model::UpdatePublicKey2019_03_26Request& request, const UpdatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamingDistribution2019_03_26AsyncHelper(const Model::UpdateStreamingDistribution2019_03_26Request& request, const UpdateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFront
} // namespace Aws
