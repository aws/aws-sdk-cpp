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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudhsm/model/AddTagsToResourceResult.h>
#include <aws/cloudhsm/model/CreateHapgResult.h>
#include <aws/cloudhsm/model/CreateHsmResult.h>
#include <aws/cloudhsm/model/CreateLunaClientResult.h>
#include <aws/cloudhsm/model/DeleteHapgResult.h>
#include <aws/cloudhsm/model/DeleteHsmResult.h>
#include <aws/cloudhsm/model/DeleteLunaClientResult.h>
#include <aws/cloudhsm/model/DescribeHapgResult.h>
#include <aws/cloudhsm/model/DescribeHsmResult.h>
#include <aws/cloudhsm/model/DescribeLunaClientResult.h>
#include <aws/cloudhsm/model/GetConfigResult.h>
#include <aws/cloudhsm/model/ListAvailableZonesResult.h>
#include <aws/cloudhsm/model/ListHapgsResult.h>
#include <aws/cloudhsm/model/ListHsmsResult.h>
#include <aws/cloudhsm/model/ListLunaClientsResult.h>
#include <aws/cloudhsm/model/ListTagsForResourceResult.h>
#include <aws/cloudhsm/model/ModifyHapgResult.h>
#include <aws/cloudhsm/model/ModifyHsmResult.h>
#include <aws/cloudhsm/model/ModifyLunaClientResult.h>
#include <aws/cloudhsm/model/RemoveTagsFromResourceResult.h>
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

namespace CloudHSM
{

namespace Model
{
        class AddTagsToResourceRequest;
        class CreateHapgRequest;
        class CreateHsmRequest;
        class CreateLunaClientRequest;
        class DeleteHapgRequest;
        class DeleteHsmRequest;
        class DeleteLunaClientRequest;
        class DescribeHapgRequest;
        class DescribeHsmRequest;
        class DescribeLunaClientRequest;
        class GetConfigRequest;
        class ListAvailableZonesRequest;
        class ListHapgsRequest;
        class ListHsmsRequest;
        class ListLunaClientsRequest;
        class ListTagsForResourceRequest;
        class ModifyHapgRequest;
        class ModifyHsmRequest;
        class ModifyLunaClientRequest;
        class RemoveTagsFromResourceRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<CloudHSMErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<CreateHapgResult, Aws::Client::AWSError<CloudHSMErrors>> CreateHapgOutcome;
        typedef Aws::Utils::Outcome<CreateHsmResult, Aws::Client::AWSError<CloudHSMErrors>> CreateHsmOutcome;
        typedef Aws::Utils::Outcome<CreateLunaClientResult, Aws::Client::AWSError<CloudHSMErrors>> CreateLunaClientOutcome;
        typedef Aws::Utils::Outcome<DeleteHapgResult, Aws::Client::AWSError<CloudHSMErrors>> DeleteHapgOutcome;
        typedef Aws::Utils::Outcome<DeleteHsmResult, Aws::Client::AWSError<CloudHSMErrors>> DeleteHsmOutcome;
        typedef Aws::Utils::Outcome<DeleteLunaClientResult, Aws::Client::AWSError<CloudHSMErrors>> DeleteLunaClientOutcome;
        typedef Aws::Utils::Outcome<DescribeHapgResult, Aws::Client::AWSError<CloudHSMErrors>> DescribeHapgOutcome;
        typedef Aws::Utils::Outcome<DescribeHsmResult, Aws::Client::AWSError<CloudHSMErrors>> DescribeHsmOutcome;
        typedef Aws::Utils::Outcome<DescribeLunaClientResult, Aws::Client::AWSError<CloudHSMErrors>> DescribeLunaClientOutcome;
        typedef Aws::Utils::Outcome<GetConfigResult, Aws::Client::AWSError<CloudHSMErrors>> GetConfigOutcome;
        typedef Aws::Utils::Outcome<ListAvailableZonesResult, Aws::Client::AWSError<CloudHSMErrors>> ListAvailableZonesOutcome;
        typedef Aws::Utils::Outcome<ListHapgsResult, Aws::Client::AWSError<CloudHSMErrors>> ListHapgsOutcome;
        typedef Aws::Utils::Outcome<ListHsmsResult, Aws::Client::AWSError<CloudHSMErrors>> ListHsmsOutcome;
        typedef Aws::Utils::Outcome<ListLunaClientsResult, Aws::Client::AWSError<CloudHSMErrors>> ListLunaClientsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<CloudHSMErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyHapgResult, Aws::Client::AWSError<CloudHSMErrors>> ModifyHapgOutcome;
        typedef Aws::Utils::Outcome<ModifyHsmResult, Aws::Client::AWSError<CloudHSMErrors>> ModifyHsmOutcome;
        typedef Aws::Utils::Outcome<ModifyLunaClientResult, Aws::Client::AWSError<CloudHSMErrors>> ModifyLunaClientOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<CloudHSMErrors>> RemoveTagsFromResourceOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<CreateHapgOutcome> CreateHapgOutcomeCallable;
        typedef std::future<CreateHsmOutcome> CreateHsmOutcomeCallable;
        typedef std::future<CreateLunaClientOutcome> CreateLunaClientOutcomeCallable;
        typedef std::future<DeleteHapgOutcome> DeleteHapgOutcomeCallable;
        typedef std::future<DeleteHsmOutcome> DeleteHsmOutcomeCallable;
        typedef std::future<DeleteLunaClientOutcome> DeleteLunaClientOutcomeCallable;
        typedef std::future<DescribeHapgOutcome> DescribeHapgOutcomeCallable;
        typedef std::future<DescribeHsmOutcome> DescribeHsmOutcomeCallable;
        typedef std::future<DescribeLunaClientOutcome> DescribeLunaClientOutcomeCallable;
        typedef std::future<GetConfigOutcome> GetConfigOutcomeCallable;
        typedef std::future<ListAvailableZonesOutcome> ListAvailableZonesOutcomeCallable;
        typedef std::future<ListHapgsOutcome> ListHapgsOutcomeCallable;
        typedef std::future<ListHsmsOutcome> ListHsmsOutcomeCallable;
        typedef std::future<ListLunaClientsOutcome> ListLunaClientsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyHapgOutcome> ModifyHapgOutcomeCallable;
        typedef std::future<ModifyHsmOutcome> ModifyHsmOutcomeCallable;
        typedef std::future<ModifyLunaClientOutcome> ModifyLunaClientOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
} // namespace Model

  class CloudHSMClient;

    typedef std::function<void(const CloudHSMClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::CreateHapgRequest&, const Model::CreateHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::CreateHsmRequest&, const Model::CreateHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::CreateLunaClientRequest&, const Model::CreateLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DeleteHapgRequest&, const Model::DeleteHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DeleteHsmRequest&, const Model::DeleteHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DeleteLunaClientRequest&, const Model::DeleteLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DescribeHapgRequest&, const Model::DescribeHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DescribeHsmRequest&, const Model::DescribeHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DescribeLunaClientRequest&, const Model::DescribeLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::GetConfigRequest&, const Model::GetConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListAvailableZonesRequest&, const Model::ListAvailableZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableZonesResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListHapgsRequest&, const Model::ListHapgsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHapgsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListHsmsRequest&, const Model::ListHsmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHsmsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListLunaClientsRequest&, const Model::ListLunaClientsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLunaClientsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ModifyHapgRequest&, const Model::ModifyHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ModifyHsmRequest&, const Model::ModifyHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ModifyLunaClientRequest&, const Model::ModifyLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;

  /**
   * <fullname>AWS CloudHSM Service</fullname> <p>This is documentation for <b>AWS
   * CloudHSM Classic</b>. For more information, see <a
   * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
   * FAQs</a>, the <a
   * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
   * Classic User Guide</a>, and the <a
   * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
   * Classic API Reference</a>.</p> <p> <b>For information about the current version
   * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
   * CloudHSM</a>, the <a
   * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
   * Guide</a>, and the <a
   * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
   * Reference</a>.</p>
   */
  class AWS_CLOUDHSM_API CloudHSMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudHSMClient();

        inline virtual const char* GetServiceClientName() const override { return "CloudHSM"; }


        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Adds or overwrites one or more tags for the specified AWS
         * CloudHSM resource.</p> <p>Each tag consists of a key and a value. Tag keys must
         * be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Adds or overwrites one or more tags for the specified AWS
         * CloudHSM resource.</p> <p>Each tag consists of a key and a value. Tag keys must
         * be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Adds or overwrites one or more tags for the specified AWS
         * CloudHSM resource.</p> <p>Each tag consists of a key and a value. Tag keys must
         * be unique to each resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/AddTagsToResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates a high-availability partition group. A
         * high-availability partition group is a group of partitions that spans multiple
         * physical HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHapgOutcome CreateHapg(const Model::CreateHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates a high-availability partition group. A
         * high-availability partition group is a group of partitions that spans multiple
         * physical HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHapg">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHapgOutcomeCallable CreateHapgCallable(const Model::CreateHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates a high-availability partition group. A
         * high-availability partition group is a group of partitions that spans multiple
         * physical HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHapg">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHapgAsync(const Model::CreateHapgRequest& request, const CreateHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates an uninitialized HSM instance.</p> <p>There is an
         * upfront fee charged for each HSM instance that you create with the
         * <code>CreateHsm</code> operation. If you accidentally provision an HSM and want
         * to request a refund, delete the instance using the <a>DeleteHsm</a> operation,
         * go to the <a href="https://console.aws.amazon.com/support/home">AWS Support
         * Center</a>, create a new case, and select <b>Account and Billing
         * Support</b>.</p> <important> <p>It can take up to 20 minutes to create and
         * provision an HSM. You can monitor the status of the HSM with the
         * <a>DescribeHsm</a> operation. The HSM is ready to be initialized when the status
         * changes to <code>RUNNING</code>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHsmOutcome CreateHsm(const Model::CreateHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates an uninitialized HSM instance.</p> <p>There is an
         * upfront fee charged for each HSM instance that you create with the
         * <code>CreateHsm</code> operation. If you accidentally provision an HSM and want
         * to request a refund, delete the instance using the <a>DeleteHsm</a> operation,
         * go to the <a href="https://console.aws.amazon.com/support/home">AWS Support
         * Center</a>, create a new case, and select <b>Account and Billing
         * Support</b>.</p> <important> <p>It can take up to 20 minutes to create and
         * provision an HSM. You can monitor the status of the HSM with the
         * <a>DescribeHsm</a> operation. The HSM is ready to be initialized when the status
         * changes to <code>RUNNING</code>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHsm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHsmOutcomeCallable CreateHsmCallable(const Model::CreateHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates an uninitialized HSM instance.</p> <p>There is an
         * upfront fee charged for each HSM instance that you create with the
         * <code>CreateHsm</code> operation. If you accidentally provision an HSM and want
         * to request a refund, delete the instance using the <a>DeleteHsm</a> operation,
         * go to the <a href="https://console.aws.amazon.com/support/home">AWS Support
         * Center</a>, create a new case, and select <b>Account and Billing
         * Support</b>.</p> <important> <p>It can take up to 20 minutes to create and
         * provision an HSM. You can monitor the status of the HSM with the
         * <a>DescribeHsm</a> operation. The HSM is ready to be initialized when the status
         * changes to <code>RUNNING</code>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHsm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHsmAsync(const Model::CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates an HSM client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLunaClientOutcome CreateLunaClient(const Model::CreateLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates an HSM client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateLunaClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLunaClientOutcomeCallable CreateLunaClientCallable(const Model::CreateLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Creates an HSM client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateLunaClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLunaClientAsync(const Model::CreateLunaClientRequest& request, const CreateLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes a high-availability partition group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHapgOutcome DeleteHapg(const Model::DeleteHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes a high-availability partition group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHapg">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHapgOutcomeCallable DeleteHapgCallable(const Model::DeleteHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes a high-availability partition group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHapg">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHapgAsync(const Model::DeleteHapgRequest& request, const DeleteHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes an HSM. After completion, this operation cannot be
         * undone and your key material cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHsmOutcome DeleteHsm(const Model::DeleteHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes an HSM. After completion, this operation cannot be
         * undone and your key material cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHsm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHsmOutcomeCallable DeleteHsmCallable(const Model::DeleteHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes an HSM. After completion, this operation cannot be
         * undone and your key material cannot be recovered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteHsm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHsmAsync(const Model::DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes a client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLunaClientOutcome DeleteLunaClient(const Model::DeleteLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes a client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteLunaClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLunaClientOutcomeCallable DeleteLunaClientCallable(const Model::DeleteLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Deletes a client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DeleteLunaClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLunaClientAsync(const Model::DeleteLunaClientRequest& request, const DeleteLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about a high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHapgOutcome DescribeHapg(const Model::DescribeHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about a high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHapg">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHapgOutcomeCallable DescribeHapgCallable(const Model::DescribeHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about a high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHapg">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHapgAsync(const Model::DescribeHapgRequest& request, const DescribeHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about an HSM. You can identify the
         * HSM by its ARN or its serial number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHsmOutcome DescribeHsm(const Model::DescribeHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about an HSM. You can identify the
         * HSM by its ARN or its serial number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHsm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHsmOutcomeCallable DescribeHsmCallable(const Model::DescribeHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about an HSM. You can identify the
         * HSM by its ARN or its serial number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHsm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHsmAsync(const Model::DescribeHsmRequest& request, const DescribeHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about an HSM client.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLunaClientOutcome DescribeLunaClient(const Model::DescribeLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about an HSM client.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeLunaClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLunaClientOutcomeCallable DescribeLunaClientCallable(const Model::DescribeLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves information about an HSM client.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeLunaClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLunaClientAsync(const Model::DescribeLunaClientRequest& request, const DescribeLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Gets the configuration files necessary to connect to all
         * high availability partition groups the client is associated with.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/GetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigOutcome GetConfig(const Model::GetConfigRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Gets the configuration files necessary to connect to all
         * high availability partition groups the client is associated with.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/GetConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigOutcomeCallable GetConfigCallable(const Model::GetConfigRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Gets the configuration files necessary to connect to all
         * high availability partition groups the client is associated with.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/GetConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigAsync(const Model::GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists the Availability Zones that have available AWS
         * CloudHSM capacity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListAvailableZones">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableZonesOutcome ListAvailableZones(const Model::ListAvailableZonesRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists the Availability Zones that have available AWS
         * CloudHSM capacity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListAvailableZones">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableZonesOutcomeCallable ListAvailableZonesCallable(const Model::ListAvailableZonesRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists the Availability Zones that have available AWS
         * CloudHSM capacity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListAvailableZones">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableZonesAsync(const Model::ListAvailableZonesRequest& request, const ListAvailableZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists the high-availability partition groups for the
         * account.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> member. If more results are available, the
         * <code>NextToken</code> member of the response contains a token that you pass in
         * the next call to <code>ListHapgs</code> to retrieve the next set of
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHapgs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHapgsOutcome ListHapgs(const Model::ListHapgsRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists the high-availability partition groups for the
         * account.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> member. If more results are available, the
         * <code>NextToken</code> member of the response contains a token that you pass in
         * the next call to <code>ListHapgs</code> to retrieve the next set of
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHapgs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHapgsOutcomeCallable ListHapgsCallable(const Model::ListHapgsRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists the high-availability partition groups for the
         * account.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> member. If more results are available, the
         * <code>NextToken</code> member of the response contains a token that you pass in
         * the next call to <code>ListHapgs</code> to retrieve the next set of
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHapgs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHapgsAsync(const Model::ListHapgsRequest& request, const ListHapgsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves the identifiers of all of the HSMs provisioned
         * for the current customer.</p> <p>This operation supports pagination with the use
         * of the <code>NextToken</code> member. If more results are available, the
         * <code>NextToken</code> member of the response contains a token that you pass in
         * the next call to <code>ListHsms</code> to retrieve the next set of
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHsms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHsmsOutcome ListHsms(const Model::ListHsmsRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves the identifiers of all of the HSMs provisioned
         * for the current customer.</p> <p>This operation supports pagination with the use
         * of the <code>NextToken</code> member. If more results are available, the
         * <code>NextToken</code> member of the response contains a token that you pass in
         * the next call to <code>ListHsms</code> to retrieve the next set of
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHsms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHsmsOutcomeCallable ListHsmsCallable(const Model::ListHsmsRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Retrieves the identifiers of all of the HSMs provisioned
         * for the current customer.</p> <p>This operation supports pagination with the use
         * of the <code>NextToken</code> member. If more results are available, the
         * <code>NextToken</code> member of the response contains a token that you pass in
         * the next call to <code>ListHsms</code> to retrieve the next set of
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListHsms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHsmsAsync(const Model::ListHsmsRequest& request, const ListHsmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists all of the clients.</p> <p>This operation supports
         * pagination with the use of the <code>NextToken</code> member. If more results
         * are available, the <code>NextToken</code> member of the response contains a
         * token that you pass in the next call to <code>ListLunaClients</code> to retrieve
         * the next set of items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListLunaClients">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLunaClientsOutcome ListLunaClients(const Model::ListLunaClientsRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists all of the clients.</p> <p>This operation supports
         * pagination with the use of the <code>NextToken</code> member. If more results
         * are available, the <code>NextToken</code> member of the response contains a
         * token that you pass in the next call to <code>ListLunaClients</code> to retrieve
         * the next set of items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListLunaClients">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLunaClientsOutcomeCallable ListLunaClientsCallable(const Model::ListLunaClientsRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Lists all of the clients.</p> <p>This operation supports
         * pagination with the use of the <code>NextToken</code> member. If more results
         * are available, the <code>NextToken</code> member of the response contains a
         * token that you pass in the next call to <code>ListLunaClients</code> to retrieve
         * the next set of items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListLunaClients">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLunaClientsAsync(const Model::ListLunaClientsRequest& request, const ListLunaClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Returns a list of all tags for the specified AWS CloudHSM
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Returns a list of all tags for the specified AWS CloudHSM
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Returns a list of all tags for the specified AWS CloudHSM
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies an existing high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHapg">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyHapgOutcome ModifyHapg(const Model::ModifyHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies an existing high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHapg">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyHapgOutcomeCallable ModifyHapgCallable(const Model::ModifyHapgRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies an existing high-availability partition
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHapg">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyHapgAsync(const Model::ModifyHapgRequest& request, const ModifyHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies an HSM.</p> <important> <p>This operation can
         * result in the HSM being offline for up to 15 minutes while the AWS CloudHSM
         * service is reconfigured. If you are modifying a production HSM, you should
         * ensure that your AWS CloudHSM service is configured for high availability, and
         * consider executing this operation during a maintenance window.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHsm">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyHsmOutcome ModifyHsm(const Model::ModifyHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies an HSM.</p> <important> <p>This operation can
         * result in the HSM being offline for up to 15 minutes while the AWS CloudHSM
         * service is reconfigured. If you are modifying a production HSM, you should
         * ensure that your AWS CloudHSM service is configured for high availability, and
         * consider executing this operation during a maintenance window.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHsm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyHsmOutcomeCallable ModifyHsmCallable(const Model::ModifyHsmRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies an HSM.</p> <important> <p>This operation can
         * result in the HSM being offline for up to 15 minutes while the AWS CloudHSM
         * service is reconfigured. If you are modifying a production HSM, you should
         * ensure that your AWS CloudHSM service is configured for high availability, and
         * consider executing this operation during a maintenance window.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyHsm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyHsmAsync(const Model::ModifyHsmRequest& request, const ModifyHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies the certificate used by the client.</p> <p>This
         * action can potentially start a workflow to install the new certificate on the
         * client's HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyLunaClient">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyLunaClientOutcome ModifyLunaClient(const Model::ModifyLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies the certificate used by the client.</p> <p>This
         * action can potentially start a workflow to install the new certificate on the
         * client's HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyLunaClient">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyLunaClientOutcomeCallable ModifyLunaClientCallable(const Model::ModifyLunaClientRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Modifies the certificate used by the client.</p> <p>This
         * action can potentially start a workflow to install the new certificate on the
         * client's HSMs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/ModifyLunaClient">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyLunaClientAsync(const Model::ModifyLunaClientRequest& request, const ModifyLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Removes one or more tags from the specified AWS CloudHSM
         * resource.</p> <p>To remove a tag, specify only the tag key to remove (not the
         * value). To overwrite the value for an existing tag, use
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Removes one or more tags from the specified AWS CloudHSM
         * resource.</p> <p>To remove a tag, specify only the tag key to remove (not the
         * value). To overwrite the value for an existing tag, use
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>This is documentation for <b>AWS CloudHSM Classic</b>. For more information,
         * see <a href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
         * FAQs</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
         * Classic User Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
         * Classic API Reference</a>.</p> <p> <b>For information about the current version
         * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
         * CloudHSM</a>, the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
         * Guide</a>, and the <a
         * href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
         * Reference</a>.</p> <p>Removes one or more tags from the specified AWS CloudHSM
         * resource.</p> <p>To remove a tag, specify only the tag key to remove (not the
         * value). To overwrite the value for an existing tag, use
         * <a>AddTagsToResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHapgAsyncHelper(const Model::CreateHapgRequest& request, const CreateHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHsmAsyncHelper(const Model::CreateHsmRequest& request, const CreateHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLunaClientAsyncHelper(const Model::CreateLunaClientRequest& request, const CreateLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHapgAsyncHelper(const Model::DeleteHapgRequest& request, const DeleteHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHsmAsyncHelper(const Model::DeleteHsmRequest& request, const DeleteHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLunaClientAsyncHelper(const Model::DeleteLunaClientRequest& request, const DeleteLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHapgAsyncHelper(const Model::DescribeHapgRequest& request, const DescribeHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHsmAsyncHelper(const Model::DescribeHsmRequest& request, const DescribeHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLunaClientAsyncHelper(const Model::DescribeLunaClientRequest& request, const DescribeLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConfigAsyncHelper(const Model::GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAvailableZonesAsyncHelper(const Model::ListAvailableZonesRequest& request, const ListAvailableZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHapgsAsyncHelper(const Model::ListHapgsRequest& request, const ListHapgsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHsmsAsyncHelper(const Model::ListHsmsRequest& request, const ListHsmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLunaClientsAsyncHelper(const Model::ListLunaClientsRequest& request, const ListLunaClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyHapgAsyncHelper(const Model::ModifyHapgRequest& request, const ModifyHapgResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyHsmAsyncHelper(const Model::ModifyHsmRequest& request, const ModifyHsmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyLunaClientAsyncHelper(const Model::ModifyLunaClientRequest& request, const ModifyLunaClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudHSM
} // namespace Aws
