/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityResult.h>
#include <aws/elasticbeanstalk/model/CreateApplicationResult.h>
#include <aws/elasticbeanstalk/model/CreateApplicationVersionResult.h>
#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateResult.h>
#include <aws/elasticbeanstalk/model/CreateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/CreateStorageLocationResult.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationsResult.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEventsResult.h>
#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksResult.h>
#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoResult.h>
#include <aws/elasticbeanstalk/model/TerminateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResult.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationVersionResult.h>
#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateResult.h>
#include <aws/elasticbeanstalk/model/UpdateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

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

namespace ElasticBeanstalk
{

namespace Model
{
  class AbortEnvironmentUpdateRequest;
  class CheckDNSAvailabilityRequest;
  class CreateApplicationRequest;
  class CreateApplicationVersionRequest;
  class CreateConfigurationTemplateRequest;
  class CreateEnvironmentRequest;
  class CreateStorageLocationRequest;
  class DeleteApplicationRequest;
  class DeleteApplicationVersionRequest;
  class DeleteConfigurationTemplateRequest;
  class DeleteEnvironmentConfigurationRequest;
  class DescribeApplicationVersionsRequest;
  class DescribeApplicationsRequest;
  class DescribeConfigurationOptionsRequest;
  class DescribeConfigurationSettingsRequest;
  class DescribeEnvironmentResourcesRequest;
  class DescribeEnvironmentsRequest;
  class DescribeEventsRequest;
  class ListAvailableSolutionStacksRequest;
  class RebuildEnvironmentRequest;
  class RequestEnvironmentInfoRequest;
  class RestartAppServerRequest;
  class RetrieveEnvironmentInfoRequest;
  class SwapEnvironmentCNAMEsRequest;
  class TerminateEnvironmentRequest;
  class UpdateApplicationRequest;
  class UpdateApplicationVersionRequest;
  class UpdateConfigurationTemplateRequest;
  class UpdateEnvironmentRequest;
  class ValidateConfigurationSettingsRequest;

  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> AbortEnvironmentUpdateOutcome;
  typedef Utils::Outcome<CheckDNSAvailabilityResult, Client::AWSError<ElasticBeanstalkErrors>> CheckDNSAvailabilityOutcome;
  typedef Utils::Outcome<CreateApplicationResult, Client::AWSError<ElasticBeanstalkErrors>> CreateApplicationOutcome;
  typedef Utils::Outcome<CreateApplicationVersionResult, Client::AWSError<ElasticBeanstalkErrors>> CreateApplicationVersionOutcome;
  typedef Utils::Outcome<CreateConfigurationTemplateResult, Client::AWSError<ElasticBeanstalkErrors>> CreateConfigurationTemplateOutcome;
  typedef Utils::Outcome<CreateEnvironmentResult, Client::AWSError<ElasticBeanstalkErrors>> CreateEnvironmentOutcome;
  typedef Utils::Outcome<CreateStorageLocationResult, Client::AWSError<ElasticBeanstalkErrors>> CreateStorageLocationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> DeleteApplicationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> DeleteApplicationVersionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> DeleteConfigurationTemplateOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> DeleteEnvironmentConfigurationOutcome;
  typedef Utils::Outcome<DescribeApplicationVersionsResult, Client::AWSError<ElasticBeanstalkErrors>> DescribeApplicationVersionsOutcome;
  typedef Utils::Outcome<DescribeApplicationsResult, Client::AWSError<ElasticBeanstalkErrors>> DescribeApplicationsOutcome;
  typedef Utils::Outcome<DescribeConfigurationOptionsResult, Client::AWSError<ElasticBeanstalkErrors>> DescribeConfigurationOptionsOutcome;
  typedef Utils::Outcome<DescribeConfigurationSettingsResult, Client::AWSError<ElasticBeanstalkErrors>> DescribeConfigurationSettingsOutcome;
  typedef Utils::Outcome<DescribeEnvironmentResourcesResult, Client::AWSError<ElasticBeanstalkErrors>> DescribeEnvironmentResourcesOutcome;
  typedef Utils::Outcome<DescribeEnvironmentsResult, Client::AWSError<ElasticBeanstalkErrors>> DescribeEnvironmentsOutcome;
  typedef Utils::Outcome<DescribeEventsResult, Client::AWSError<ElasticBeanstalkErrors>> DescribeEventsOutcome;
  typedef Utils::Outcome<ListAvailableSolutionStacksResult, Client::AWSError<ElasticBeanstalkErrors>> ListAvailableSolutionStacksOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> RebuildEnvironmentOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> RequestEnvironmentInfoOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> RestartAppServerOutcome;
  typedef Utils::Outcome<RetrieveEnvironmentInfoResult, Client::AWSError<ElasticBeanstalkErrors>> RetrieveEnvironmentInfoOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<ElasticBeanstalkErrors>> SwapEnvironmentCNAMEsOutcome;
  typedef Utils::Outcome<TerminateEnvironmentResult, Client::AWSError<ElasticBeanstalkErrors>> TerminateEnvironmentOutcome;
  typedef Utils::Outcome<UpdateApplicationResult, Client::AWSError<ElasticBeanstalkErrors>> UpdateApplicationOutcome;
  typedef Utils::Outcome<UpdateApplicationVersionResult, Client::AWSError<ElasticBeanstalkErrors>> UpdateApplicationVersionOutcome;
  typedef Utils::Outcome<UpdateConfigurationTemplateResult, Client::AWSError<ElasticBeanstalkErrors>> UpdateConfigurationTemplateOutcome;
  typedef Utils::Outcome<UpdateEnvironmentResult, Client::AWSError<ElasticBeanstalkErrors>> UpdateEnvironmentOutcome;
  typedef Utils::Outcome<ValidateConfigurationSettingsResult, Client::AWSError<ElasticBeanstalkErrors>> ValidateConfigurationSettingsOutcome;

  typedef std::future<AbortEnvironmentUpdateOutcome> AbortEnvironmentUpdateOutcomeCallable;
  typedef std::future<CheckDNSAvailabilityOutcome> CheckDNSAvailabilityOutcomeCallable;
  typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
  typedef std::future<CreateApplicationVersionOutcome> CreateApplicationVersionOutcomeCallable;
  typedef std::future<CreateConfigurationTemplateOutcome> CreateConfigurationTemplateOutcomeCallable;
  typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
  typedef std::future<CreateStorageLocationOutcome> CreateStorageLocationOutcomeCallable;
  typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
  typedef std::future<DeleteApplicationVersionOutcome> DeleteApplicationVersionOutcomeCallable;
  typedef std::future<DeleteConfigurationTemplateOutcome> DeleteConfigurationTemplateOutcomeCallable;
  typedef std::future<DeleteEnvironmentConfigurationOutcome> DeleteEnvironmentConfigurationOutcomeCallable;
  typedef std::future<DescribeApplicationVersionsOutcome> DescribeApplicationVersionsOutcomeCallable;
  typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
  typedef std::future<DescribeConfigurationOptionsOutcome> DescribeConfigurationOptionsOutcomeCallable;
  typedef std::future<DescribeConfigurationSettingsOutcome> DescribeConfigurationSettingsOutcomeCallable;
  typedef std::future<DescribeEnvironmentResourcesOutcome> DescribeEnvironmentResourcesOutcomeCallable;
  typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
  typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
  typedef std::future<ListAvailableSolutionStacksOutcome> ListAvailableSolutionStacksOutcomeCallable;
  typedef std::future<RebuildEnvironmentOutcome> RebuildEnvironmentOutcomeCallable;
  typedef std::future<RequestEnvironmentInfoOutcome> RequestEnvironmentInfoOutcomeCallable;
  typedef std::future<RestartAppServerOutcome> RestartAppServerOutcomeCallable;
  typedef std::future<RetrieveEnvironmentInfoOutcome> RetrieveEnvironmentInfoOutcomeCallable;
  typedef std::future<SwapEnvironmentCNAMEsOutcome> SwapEnvironmentCNAMEsOutcomeCallable;
  typedef std::future<TerminateEnvironmentOutcome> TerminateEnvironmentOutcomeCallable;
  typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
  typedef std::future<UpdateApplicationVersionOutcome> UpdateApplicationVersionOutcomeCallable;
  typedef std::future<UpdateConfigurationTemplateOutcome> UpdateConfigurationTemplateOutcomeCallable;
  typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
  typedef std::future<ValidateConfigurationSettingsOutcome> ValidateConfigurationSettingsOutcomeCallable;
} // namespace Model

  class ElasticBeanstalkClient;

  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::AbortEnvironmentUpdateRequest&, const Model::AbortEnvironmentUpdateOutcome&, const Aws::Client::AsyncCallerContext*> AbortEnvironmentUpdateOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::CheckDNSAvailabilityRequest&, const Model::CheckDNSAvailabilityOutcome&, const Aws::Client::AsyncCallerContext*> CheckDNSAvailabilityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const Aws::Client::AsyncCallerContext*> CreateApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::CreateApplicationVersionRequest&, const Model::CreateApplicationVersionOutcome&, const Aws::Client::AsyncCallerContext*> CreateApplicationVersionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::CreateConfigurationTemplateRequest&, const Model::CreateConfigurationTemplateOutcome&, const Aws::Client::AsyncCallerContext*> CreateConfigurationTemplateOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const Aws::Client::AsyncCallerContext*> CreateEnvironmentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::CreateStorageLocationRequest&, const Model::CreateStorageLocationOutcome&, const Aws::Client::AsyncCallerContext*> CreateStorageLocationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const Aws::Client::AsyncCallerContext*> DeleteApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DeleteApplicationVersionRequest&, const Model::DeleteApplicationVersionOutcome&, const Aws::Client::AsyncCallerContext*> DeleteApplicationVersionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DeleteConfigurationTemplateRequest&, const Model::DeleteConfigurationTemplateOutcome&, const Aws::Client::AsyncCallerContext*> DeleteConfigurationTemplateOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DeleteEnvironmentConfigurationRequest&, const Model::DeleteEnvironmentConfigurationOutcome&, const Aws::Client::AsyncCallerContext*> DeleteEnvironmentConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DescribeApplicationVersionsRequest&, const Model::DescribeApplicationVersionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeApplicationVersionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DescribeApplicationsRequest&, const Model::DescribeApplicationsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeApplicationsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DescribeConfigurationOptionsRequest&, const Model::DescribeConfigurationOptionsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeConfigurationOptionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DescribeConfigurationSettingsRequest&, const Model::DescribeConfigurationSettingsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeConfigurationSettingsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DescribeEnvironmentResourcesRequest&, const Model::DescribeEnvironmentResourcesOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEnvironmentResourcesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DescribeEnvironmentsRequest&, const Model::DescribeEnvironmentsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEnvironmentsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::ListAvailableSolutionStacksRequest&, const Model::ListAvailableSolutionStacksOutcome&, const Aws::Client::AsyncCallerContext*> ListAvailableSolutionStacksOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::RebuildEnvironmentRequest&, const Model::RebuildEnvironmentOutcome&, const Aws::Client::AsyncCallerContext*> RebuildEnvironmentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::RequestEnvironmentInfoRequest&, const Model::RequestEnvironmentInfoOutcome&, const Aws::Client::AsyncCallerContext*> RequestEnvironmentInfoOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::RestartAppServerRequest&, const Model::RestartAppServerOutcome&, const Aws::Client::AsyncCallerContext*> RestartAppServerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::RetrieveEnvironmentInfoRequest&, const Model::RetrieveEnvironmentInfoOutcome&, const Aws::Client::AsyncCallerContext*> RetrieveEnvironmentInfoOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::SwapEnvironmentCNAMEsRequest&, const Model::SwapEnvironmentCNAMEsOutcome&, const Aws::Client::AsyncCallerContext*> SwapEnvironmentCNAMEsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::TerminateEnvironmentRequest&, const Model::TerminateEnvironmentOutcome&, const Aws::Client::AsyncCallerContext*> TerminateEnvironmentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const Aws::Client::AsyncCallerContext*> UpdateApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::UpdateApplicationVersionRequest&, const Model::UpdateApplicationVersionOutcome&, const Aws::Client::AsyncCallerContext*> UpdateApplicationVersionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::UpdateConfigurationTemplateRequest&, const Model::UpdateConfigurationTemplateOutcome&, const Aws::Client::AsyncCallerContext*> UpdateConfigurationTemplateOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const Aws::Client::AsyncCallerContext*> UpdateEnvironmentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<ElasticBeanstalkClient, const Model::ValidateConfigurationSettingsRequest&, const Model::ValidateConfigurationSettingsOutcome&, const Aws::Client::AsyncCallerContext*> ValidateConfigurationSettingsOutcomeReceivedEvent;

  /*
    <fullname>AWS Elastic Beanstalk</fullname> <p> This is the AWS Elastic Beanstalk API Reference. This guide provides detailed information about AWS Elastic Beanstalk actions, data types, parameters, and errors. </p> <p>AWS Elastic Beanstalk is a tool that makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running on Amazon Web Services cloud resources. </p> <p> For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>. To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line tools that enable you to access the API, go to <a href="https://aws.amazon.com/tools/">Tools for Amazon Web Services</a>. </p> <p><b>Endpoints</b></p> <p>For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p>
  */
  class AWS_ELASTICBEANSTALK_API ElasticBeanstalkClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      ElasticBeanstalkClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      ElasticBeanstalkClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      ElasticBeanstalkClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~ElasticBeanstalkClient();

     /*
       <p>Cancels in-progress environment configuration update or application version deployment.</p>
     */
     Model::AbortEnvironmentUpdateOutcome AbortEnvironmentUpdate(const Model::AbortEnvironmentUpdateRequest& request) const;

     /*
       <p>Cancels in-progress environment configuration update or application version deployment.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AbortEnvironmentUpdateOutcomeCallable AbortEnvironmentUpdateCallable(const Model::AbortEnvironmentUpdateRequest& request) const;

     /*
       <p>Cancels in-progress environment configuration update or application version deployment.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AbortEnvironmentUpdateAsync(const Model::AbortEnvironmentUpdateRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Checks if the specified CNAME is available. </p>
     */
     Model::CheckDNSAvailabilityOutcome CheckDNSAvailability(const Model::CheckDNSAvailabilityRequest& request) const;

     /*
       <p> Checks if the specified CNAME is available. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CheckDNSAvailabilityOutcomeCallable CheckDNSAvailabilityCallable(const Model::CheckDNSAvailabilityRequest& request) const;

     /*
       <p> Checks if the specified CNAME is available. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CheckDNSAvailabilityAsync(const Model::CheckDNSAvailabilityRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates an application that has one configuration template named <code>default</code> and no application versions. </p>
     */
     Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

     /*
       <p> Creates an application that has one configuration template named <code>default</code> and no application versions. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

     /*
       <p> Creates an application that has one configuration template named <code>default</code> and no application versions. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates an application version for the specified application.</p> <note>Once you create an application version with a specified Amazon S3 bucket and key location, you cannot change that Amazon S3 location. If you change the Amazon S3 location, you receive an exception when you attempt to launch an environment from the application version. </note>
     */
     Model::CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest& request) const;

     /*
       <p>Creates an application version for the specified application.</p> <note>Once you create an application version with a specified Amazon S3 bucket and key location, you cannot change that Amazon S3 location. If you change the Amazon S3 location, you receive an exception when you attempt to launch an environment from the application version. </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const Model::CreateApplicationVersionRequest& request) const;

     /*
       <p>Creates an application version for the specified application.</p> <note>Once you create an application version with a specified Amazon S3 bucket and key location, you cannot change that Amazon S3 location. If you change the Amazon S3 location, you receive an exception when you attempt to launch an environment from the application version. </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateApplicationVersionAsync(const Model::CreateApplicationVersionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a configuration template. Templates are associated with a specific application and are used to deploy different versions of the application with the same configuration settings.</p> <p>Related Topics</p> <ul> <li> <a>DescribeConfigurationOptions</a> </li> <li> <a>DescribeConfigurationSettings</a> </li> <li> <a>ListAvailableSolutionStacks</a> </li> </ul>
     */
     Model::CreateConfigurationTemplateOutcome CreateConfigurationTemplate(const Model::CreateConfigurationTemplateRequest& request) const;

     /*
       <p>Creates a configuration template. Templates are associated with a specific application and are used to deploy different versions of the application with the same configuration settings.</p> <p>Related Topics</p> <ul> <li> <a>DescribeConfigurationOptions</a> </li> <li> <a>DescribeConfigurationSettings</a> </li> <li> <a>ListAvailableSolutionStacks</a> </li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateConfigurationTemplateOutcomeCallable CreateConfigurationTemplateCallable(const Model::CreateConfigurationTemplateRequest& request) const;

     /*
       <p>Creates a configuration template. Templates are associated with a specific application and are used to deploy different versions of the application with the same configuration settings.</p> <p>Related Topics</p> <ul> <li> <a>DescribeConfigurationOptions</a> </li> <li> <a>DescribeConfigurationSettings</a> </li> <li> <a>ListAvailableSolutionStacks</a> </li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateConfigurationTemplateAsync(const Model::CreateConfigurationTemplateRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Launches an environment for the specified application using the specified configuration. </p>
     */
     Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

     /*
       <p> Launches an environment for the specified application using the specified configuration. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

     /*
       <p> Launches an environment for the specified application using the specified configuration. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Creates the Amazon S3 storage location for the account. </p> <p> This location is used to store user log files. </p>
     */
     Model::CreateStorageLocationOutcome CreateStorageLocation(const Model::CreateStorageLocationRequest& request) const;

     /*
       <p> Creates the Amazon S3 storage location for the account. </p> <p> This location is used to store user log files. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateStorageLocationOutcomeCallable CreateStorageLocationCallable(const Model::CreateStorageLocationRequest& request) const;

     /*
       <p> Creates the Amazon S3 storage location for the account. </p> <p> This location is used to store user log files. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateStorageLocationAsync(const Model::CreateStorageLocationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes the specified application along with all associated versions and configurations. The application versions will not be deleted from your Amazon S3 bucket. </p> <note>You cannot delete an application that has a running environment. </note>
     */
     Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

     /*
       <p> Deletes the specified application along with all associated versions and configurations. The application versions will not be deleted from your Amazon S3 bucket. </p> <note>You cannot delete an application that has a running environment. </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

     /*
       <p> Deletes the specified application along with all associated versions and configurations. The application versions will not be deleted from your Amazon S3 bucket. </p> <note>You cannot delete an application that has a running environment. </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes the specified version from the specified application. </p> <note>You cannot delete an application version that is associated with a running environment.</note>
     */
     Model::DeleteApplicationVersionOutcome DeleteApplicationVersion(const Model::DeleteApplicationVersionRequest& request) const;

     /*
       <p> Deletes the specified version from the specified application. </p> <note>You cannot delete an application version that is associated with a running environment.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteApplicationVersionOutcomeCallable DeleteApplicationVersionCallable(const Model::DeleteApplicationVersionRequest& request) const;

     /*
       <p> Deletes the specified version from the specified application. </p> <note>You cannot delete an application version that is associated with a running environment.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteApplicationVersionAsync(const Model::DeleteApplicationVersionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specified configuration template.</p> <note>When you launch an environment using a configuration template, the environment gets a copy of the template. You can delete or modify the environment's copy of the template without affecting the running environment.</note>
     */
     Model::DeleteConfigurationTemplateOutcome DeleteConfigurationTemplate(const Model::DeleteConfigurationTemplateRequest& request) const;

     /*
       <p>Deletes the specified configuration template.</p> <note>When you launch an environment using a configuration template, the environment gets a copy of the template. You can delete or modify the environment's copy of the template without affecting the running environment.</note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteConfigurationTemplateOutcomeCallable DeleteConfigurationTemplateCallable(const Model::DeleteConfigurationTemplateRequest& request) const;

     /*
       <p>Deletes the specified configuration template.</p> <note>When you launch an environment using a configuration template, the environment gets a copy of the template. You can delete or modify the environment's copy of the template without affecting the running environment.</note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteConfigurationTemplateAsync(const Model::DeleteConfigurationTemplateRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes the draft configuration associated with the running environment. </p> <p> Updating a running environment with any configuration changes creates a draft configuration set. You can get the draft configuration using <a>DescribeConfigurationSettings</a> while the update is in progress or if the update fails. The <code>DeploymentStatus</code> for the draft configuration indicates whether the deployment is in process or has failed. The draft configuration remains in existence until it is deleted with this action. </p>
     */
     Model::DeleteEnvironmentConfigurationOutcome DeleteEnvironmentConfiguration(const Model::DeleteEnvironmentConfigurationRequest& request) const;

     /*
       <p> Deletes the draft configuration associated with the running environment. </p> <p> Updating a running environment with any configuration changes creates a draft configuration set. You can get the draft configuration using <a>DescribeConfigurationSettings</a> while the update is in progress or if the update fails. The <code>DeploymentStatus</code> for the draft configuration indicates whether the deployment is in process or has failed. The draft configuration remains in existence until it is deleted with this action. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteEnvironmentConfigurationOutcomeCallable DeleteEnvironmentConfigurationCallable(const Model::DeleteEnvironmentConfigurationRequest& request) const;

     /*
       <p> Deletes the draft configuration associated with the running environment. </p> <p> Updating a running environment with any configuration changes creates a draft configuration set. You can get the draft configuration using <a>DescribeConfigurationSettings</a> while the update is in progress or if the update fails. The <code>DeploymentStatus</code> for the draft configuration indicates whether the deployment is in process or has failed. The draft configuration remains in existence until it is deleted with this action. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteEnvironmentConfigurationAsync(const Model::DeleteEnvironmentConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns descriptions for existing application versions.</p>
     */
     Model::DescribeApplicationVersionsOutcome DescribeApplicationVersions(const Model::DescribeApplicationVersionsRequest& request) const;

     /*
       <p>Returns descriptions for existing application versions.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeApplicationVersionsOutcomeCallable DescribeApplicationVersionsCallable(const Model::DescribeApplicationVersionsRequest& request) const;

     /*
       <p>Returns descriptions for existing application versions.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeApplicationVersionsAsync(const Model::DescribeApplicationVersionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns the descriptions of existing applications.</p>
     */
     Model::DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest& request) const;

     /*
       <p>Returns the descriptions of existing applications.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request) const;

     /*
       <p>Returns the descriptions of existing applications.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Describes the configuration options that are used in a particular configuration template or environment, or that a specified solution stack defines. The description includes the values the options, their default values, and an indication of the required action on a running environment if an option value is changed. </p>
     */
     Model::DescribeConfigurationOptionsOutcome DescribeConfigurationOptions(const Model::DescribeConfigurationOptionsRequest& request) const;

     /*
       <p> Describes the configuration options that are used in a particular configuration template or environment, or that a specified solution stack defines. The description includes the values the options, their default values, and an indication of the required action on a running environment if an option value is changed. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeConfigurationOptionsOutcomeCallable DescribeConfigurationOptionsCallable(const Model::DescribeConfigurationOptionsRequest& request) const;

     /*
       <p> Describes the configuration options that are used in a particular configuration template or environment, or that a specified solution stack defines. The description includes the values the options, their default values, and an indication of the required action on a running environment if an option value is changed. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeConfigurationOptionsAsync(const Model::DescribeConfigurationOptionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a description of the settings for the specified configuration set, that is, either a configuration template or the configuration set associated with a running environment. </p> <p> When describing the settings for the configuration set associated with a running environment, it is possible to receive two sets of setting descriptions. One is the deployed configuration set, and the other is a draft configuration of an environment that is either in the process of deployment or that failed to deploy. </p> <p>Related Topics</p> <ul> <li> <a>DeleteEnvironmentConfiguration</a> </li> </ul>
     */
     Model::DescribeConfigurationSettingsOutcome DescribeConfigurationSettings(const Model::DescribeConfigurationSettingsRequest& request) const;

     /*
       <p> Returns a description of the settings for the specified configuration set, that is, either a configuration template or the configuration set associated with a running environment. </p> <p> When describing the settings for the configuration set associated with a running environment, it is possible to receive two sets of setting descriptions. One is the deployed configuration set, and the other is a draft configuration of an environment that is either in the process of deployment or that failed to deploy. </p> <p>Related Topics</p> <ul> <li> <a>DeleteEnvironmentConfiguration</a> </li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeConfigurationSettingsOutcomeCallable DescribeConfigurationSettingsCallable(const Model::DescribeConfigurationSettingsRequest& request) const;

     /*
       <p> Returns a description of the settings for the specified configuration set, that is, either a configuration template or the configuration set associated with a running environment. </p> <p> When describing the settings for the configuration set associated with a running environment, it is possible to receive two sets of setting descriptions. One is the deployed configuration set, and the other is a draft configuration of an environment that is either in the process of deployment or that failed to deploy. </p> <p>Related Topics</p> <ul> <li> <a>DeleteEnvironmentConfiguration</a> </li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeConfigurationSettingsAsync(const Model::DescribeConfigurationSettingsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns AWS resources for this environment.</p>
     */
     Model::DescribeEnvironmentResourcesOutcome DescribeEnvironmentResources(const Model::DescribeEnvironmentResourcesRequest& request) const;

     /*
       <p>Returns AWS resources for this environment.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEnvironmentResourcesOutcomeCallable DescribeEnvironmentResourcesCallable(const Model::DescribeEnvironmentResourcesRequest& request) const;

     /*
       <p>Returns AWS resources for this environment.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEnvironmentResourcesAsync(const Model::DescribeEnvironmentResourcesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns descriptions for existing environments.</p>
     */
     Model::DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest& request) const;

     /*
       <p>Returns descriptions for existing environments.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request) const;

     /*
       <p>Returns descriptions for existing environments.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns list of event descriptions matching criteria up to the last 6 weeks.</p> <note> This action returns the most recent 1,000 events from the specified <code>NextToken</code>. </note>
     */
     Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

     /*
       <p>Returns list of event descriptions matching criteria up to the last 6 weeks.</p> <note> This action returns the most recent 1,000 events from the specified <code>NextToken</code>. </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

     /*
       <p>Returns list of event descriptions matching criteria up to the last 6 weeks.</p> <note> This action returns the most recent 1,000 events from the specified <code>NextToken</code>. </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Returns a list of the available solution stack names. </p>
     */
     Model::ListAvailableSolutionStacksOutcome ListAvailableSolutionStacks(const Model::ListAvailableSolutionStacksRequest& request) const;

     /*
       <p> Returns a list of the available solution stack names. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListAvailableSolutionStacksOutcomeCallable ListAvailableSolutionStacksCallable(const Model::ListAvailableSolutionStacksRequest& request) const;

     /*
       <p> Returns a list of the available solution stack names. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListAvailableSolutionStacksAsync(const Model::ListAvailableSolutionStacksRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Deletes and recreates all of the AWS resources (for example: the Auto Scaling group, load balancer, etc.) for a specified environment and forces a restart. </p>
     */
     Model::RebuildEnvironmentOutcome RebuildEnvironment(const Model::RebuildEnvironmentRequest& request) const;

     /*
       <p> Deletes and recreates all of the AWS resources (for example: the Auto Scaling group, load balancer, etc.) for a specified environment and forces a restart. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RebuildEnvironmentOutcomeCallable RebuildEnvironmentCallable(const Model::RebuildEnvironmentRequest& request) const;

     /*
       <p> Deletes and recreates all of the AWS resources (for example: the Auto Scaling group, load balancer, etc.) for a specified environment and forces a restart. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RebuildEnvironmentAsync(const Model::RebuildEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Initiates a request to compile the specified type of information of the deployed environment. </p> <p> Setting the <code>InfoType</code> to <code>tail</code> compiles the last lines from the application server log files of every Amazon EC2 instance in your environment. </p> <p> Setting the <code>InfoType</code> to <code>bundle</code> compresses the application server log files for every Amazon EC2 instance into a <code>.zip</code> file. Legacy and .NET containers do not support bundle logs. </p> <p> Use <a>RetrieveEnvironmentInfo</a> to obtain the set of logs. </p> <p>Related Topics</p> <ul> <li> <a>RetrieveEnvironmentInfo</a> </li> </ul>
     */
     Model::RequestEnvironmentInfoOutcome RequestEnvironmentInfo(const Model::RequestEnvironmentInfoRequest& request) const;

     /*
       <p> Initiates a request to compile the specified type of information of the deployed environment. </p> <p> Setting the <code>InfoType</code> to <code>tail</code> compiles the last lines from the application server log files of every Amazon EC2 instance in your environment. </p> <p> Setting the <code>InfoType</code> to <code>bundle</code> compresses the application server log files for every Amazon EC2 instance into a <code>.zip</code> file. Legacy and .NET containers do not support bundle logs. </p> <p> Use <a>RetrieveEnvironmentInfo</a> to obtain the set of logs. </p> <p>Related Topics</p> <ul> <li> <a>RetrieveEnvironmentInfo</a> </li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RequestEnvironmentInfoOutcomeCallable RequestEnvironmentInfoCallable(const Model::RequestEnvironmentInfoRequest& request) const;

     /*
       <p> Initiates a request to compile the specified type of information of the deployed environment. </p> <p> Setting the <code>InfoType</code> to <code>tail</code> compiles the last lines from the application server log files of every Amazon EC2 instance in your environment. </p> <p> Setting the <code>InfoType</code> to <code>bundle</code> compresses the application server log files for every Amazon EC2 instance into a <code>.zip</code> file. Legacy and .NET containers do not support bundle logs. </p> <p> Use <a>RetrieveEnvironmentInfo</a> to obtain the set of logs. </p> <p>Related Topics</p> <ul> <li> <a>RetrieveEnvironmentInfo</a> </li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RequestEnvironmentInfoAsync(const Model::RequestEnvironmentInfoRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Causes the environment to restart the application container server running on each Amazon EC2 instance. </p>
     */
     Model::RestartAppServerOutcome RestartAppServer(const Model::RestartAppServerRequest& request) const;

     /*
       <p> Causes the environment to restart the application container server running on each Amazon EC2 instance. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RestartAppServerOutcomeCallable RestartAppServerCallable(const Model::RestartAppServerRequest& request) const;

     /*
       <p> Causes the environment to restart the application container server running on each Amazon EC2 instance. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RestartAppServerAsync(const Model::RestartAppServerRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Retrieves the compiled information from a <a>RequestEnvironmentInfo</a> request. </p> <p>Related Topics</p> <ul> <li> <a>RequestEnvironmentInfo</a> </li> </ul>
     */
     Model::RetrieveEnvironmentInfoOutcome RetrieveEnvironmentInfo(const Model::RetrieveEnvironmentInfoRequest& request) const;

     /*
       <p> Retrieves the compiled information from a <a>RequestEnvironmentInfo</a> request. </p> <p>Related Topics</p> <ul> <li> <a>RequestEnvironmentInfo</a> </li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RetrieveEnvironmentInfoOutcomeCallable RetrieveEnvironmentInfoCallable(const Model::RetrieveEnvironmentInfoRequest& request) const;

     /*
       <p> Retrieves the compiled information from a <a>RequestEnvironmentInfo</a> request. </p> <p>Related Topics</p> <ul> <li> <a>RequestEnvironmentInfo</a> </li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RetrieveEnvironmentInfoAsync(const Model::RetrieveEnvironmentInfoRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Swaps the CNAMEs of two environments. </p>
     */
     Model::SwapEnvironmentCNAMEsOutcome SwapEnvironmentCNAMEs(const Model::SwapEnvironmentCNAMEsRequest& request) const;

     /*
       <p> Swaps the CNAMEs of two environments. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SwapEnvironmentCNAMEsOutcomeCallable SwapEnvironmentCNAMEsCallable(const Model::SwapEnvironmentCNAMEsRequest& request) const;

     /*
       <p> Swaps the CNAMEs of two environments. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SwapEnvironmentCNAMEsAsync(const Model::SwapEnvironmentCNAMEsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Terminates the specified environment. </p>
     */
     Model::TerminateEnvironmentOutcome TerminateEnvironment(const Model::TerminateEnvironmentRequest& request) const;

     /*
       <p> Terminates the specified environment. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::TerminateEnvironmentOutcomeCallable TerminateEnvironmentCallable(const Model::TerminateEnvironmentRequest& request) const;

     /*
       <p> Terminates the specified environment. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void TerminateEnvironmentAsync(const Model::TerminateEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Updates the specified application to have the specified properties. </p> <note> If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear these properties, specify an empty string. </note>
     */
     Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

     /*
       <p>Updates the specified application to have the specified properties. </p> <note> If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear these properties, specify an empty string. </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

     /*
       <p>Updates the specified application to have the specified properties. </p> <note> If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear these properties, specify an empty string. </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Updates the specified application version to have the specified properties. </p> <note> If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear properties, specify an empty string. </note>
     */
     Model::UpdateApplicationVersionOutcome UpdateApplicationVersion(const Model::UpdateApplicationVersionRequest& request) const;

     /*
       <p> Updates the specified application version to have the specified properties. </p> <note> If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear properties, specify an empty string. </note>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateApplicationVersionOutcomeCallable UpdateApplicationVersionCallable(const Model::UpdateApplicationVersionRequest& request) const;

     /*
       <p> Updates the specified application version to have the specified properties. </p> <note> If a property (for example, <code>description</code>) is not provided, the value remains unchanged. To clear properties, specify an empty string. </note>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateApplicationVersionAsync(const Model::UpdateApplicationVersionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Updates the specified configuration template to have the specified properties or configuration option values. </p> <note> If a property (for example, <code>ApplicationName</code>) is not provided, its value remains unchanged. To clear such properties, specify an empty string. </note> <p>Related Topics</p> <ul> <li> <a>DescribeConfigurationOptions</a> </li> </ul>
     */
     Model::UpdateConfigurationTemplateOutcome UpdateConfigurationTemplate(const Model::UpdateConfigurationTemplateRequest& request) const;

     /*
       <p> Updates the specified configuration template to have the specified properties or configuration option values. </p> <note> If a property (for example, <code>ApplicationName</code>) is not provided, its value remains unchanged. To clear such properties, specify an empty string. </note> <p>Related Topics</p> <ul> <li> <a>DescribeConfigurationOptions</a> </li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateConfigurationTemplateOutcomeCallable UpdateConfigurationTemplateCallable(const Model::UpdateConfigurationTemplateRequest& request) const;

     /*
       <p> Updates the specified configuration template to have the specified properties or configuration option values. </p> <note> If a property (for example, <code>ApplicationName</code>) is not provided, its value remains unchanged. To clear such properties, specify an empty string. </note> <p>Related Topics</p> <ul> <li> <a>DescribeConfigurationOptions</a> </li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateConfigurationTemplateAsync(const Model::UpdateConfigurationTemplateRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Updates the environment description, deploys a new application version, updates the configuration settings to an entirely new configuration template, or updates select configuration option values in the running environment. </p> <p> Attempting to update both the release and configuration is not allowed and AWS Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error. </p> <p> When updating the configuration settings to a new template or individual settings, a draft configuration is created and <a>DescribeConfigurationSettings</a> for this environment returns two setting descriptions with different <code>DeploymentStatus</code> values. </p>
     */
     Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

     /*
       <p> Updates the environment description, deploys a new application version, updates the configuration settings to an entirely new configuration template, or updates select configuration option values in the running environment. </p> <p> Attempting to update both the release and configuration is not allowed and AWS Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error. </p> <p> When updating the configuration settings to a new template or individual settings, a draft configuration is created and <a>DescribeConfigurationSettings</a> for this environment returns two setting descriptions with different <code>DeploymentStatus</code> values. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

     /*
       <p> Updates the environment description, deploys a new application version, updates the configuration settings to an entirely new configuration template, or updates select configuration option values in the running environment. </p> <p> Attempting to update both the release and configuration is not allowed and AWS Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error. </p> <p> When updating the configuration settings to a new template or individual settings, a draft configuration is created and <a>DescribeConfigurationSettings</a> for this environment returns two setting descriptions with different <code>DeploymentStatus</code> values. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p> Takes a set of configuration settings and either a configuration template or environment, and determines whether those values are valid. </p> <p> This action returns a list of messages indicating any errors or warnings associated with the selection of option values. </p>
     */
     Model::ValidateConfigurationSettingsOutcome ValidateConfigurationSettings(const Model::ValidateConfigurationSettingsRequest& request) const;

     /*
       <p> Takes a set of configuration settings and either a configuration template or environment, and determines whether those values are valid. </p> <p> This action returns a list of messages indicating any errors or warnings associated with the selection of option values. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ValidateConfigurationSettingsOutcomeCallable ValidateConfigurationSettingsCallable(const Model::ValidateConfigurationSettingsRequest& request) const;

     /*
       <p> Takes a set of configuration settings and either a configuration template or environment, and determines whether those values are valid. </p> <p> This action returns a list of messages indicating any errors or warnings associated with the selection of option values. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ValidateConfigurationSettingsAsync(const Model::ValidateConfigurationSettingsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for AbortEnvironmentUpdateAsync to call upon completion to the handler chain. You need to call this to
    * use AbortEnvironmentUpdateAsync.
    */
    inline void RegisterAbortEnvironmentUpdateOutcomeReceivedHandler(const AbortEnvironmentUpdateOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAbortEnvironmentUpdateOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AbortEnvironmentUpdate.
    */
    inline void ClearAllAbortEnvironmentUpdateOutcomeReceivedHandlers()
    {
      m_onAbortEnvironmentUpdateOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CheckDNSAvailabilityAsync to call upon completion to the handler chain. You need to call this to
    * use CheckDNSAvailabilityAsync.
    */
    inline void RegisterCheckDNSAvailabilityOutcomeReceivedHandler(const CheckDNSAvailabilityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCheckDNSAvailabilityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CheckDNSAvailability.
    */
    inline void ClearAllCheckDNSAvailabilityOutcomeReceivedHandlers()
    {
      m_onCheckDNSAvailabilityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use CreateApplicationAsync.
    */
    inline void RegisterCreateApplicationOutcomeReceivedHandler(const CreateApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateApplication.
    */
    inline void ClearAllCreateApplicationOutcomeReceivedHandlers()
    {
      m_onCreateApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateApplicationVersionAsync to call upon completion to the handler chain. You need to call this to
    * use CreateApplicationVersionAsync.
    */
    inline void RegisterCreateApplicationVersionOutcomeReceivedHandler(const CreateApplicationVersionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateApplicationVersionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateApplicationVersion.
    */
    inline void ClearAllCreateApplicationVersionOutcomeReceivedHandlers()
    {
      m_onCreateApplicationVersionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateConfigurationTemplateAsync to call upon completion to the handler chain. You need to call this to
    * use CreateConfigurationTemplateAsync.
    */
    inline void RegisterCreateConfigurationTemplateOutcomeReceivedHandler(const CreateConfigurationTemplateOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateConfigurationTemplateOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateConfigurationTemplate.
    */
    inline void ClearAllCreateConfigurationTemplateOutcomeReceivedHandlers()
    {
      m_onCreateConfigurationTemplateOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateEnvironmentAsync to call upon completion to the handler chain. You need to call this to
    * use CreateEnvironmentAsync.
    */
    inline void RegisterCreateEnvironmentOutcomeReceivedHandler(const CreateEnvironmentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateEnvironmentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateEnvironment.
    */
    inline void ClearAllCreateEnvironmentOutcomeReceivedHandlers()
    {
      m_onCreateEnvironmentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateStorageLocationAsync to call upon completion to the handler chain. You need to call this to
    * use CreateStorageLocationAsync.
    */
    inline void RegisterCreateStorageLocationOutcomeReceivedHandler(const CreateStorageLocationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateStorageLocationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateStorageLocation.
    */
    inline void ClearAllCreateStorageLocationOutcomeReceivedHandlers()
    {
      m_onCreateStorageLocationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteApplicationAsync.
    */
    inline void RegisterDeleteApplicationOutcomeReceivedHandler(const DeleteApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteApplication.
    */
    inline void ClearAllDeleteApplicationOutcomeReceivedHandlers()
    {
      m_onDeleteApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteApplicationVersionAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteApplicationVersionAsync.
    */
    inline void RegisterDeleteApplicationVersionOutcomeReceivedHandler(const DeleteApplicationVersionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteApplicationVersionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteApplicationVersion.
    */
    inline void ClearAllDeleteApplicationVersionOutcomeReceivedHandlers()
    {
      m_onDeleteApplicationVersionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteConfigurationTemplateAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteConfigurationTemplateAsync.
    */
    inline void RegisterDeleteConfigurationTemplateOutcomeReceivedHandler(const DeleteConfigurationTemplateOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteConfigurationTemplateOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteConfigurationTemplate.
    */
    inline void ClearAllDeleteConfigurationTemplateOutcomeReceivedHandlers()
    {
      m_onDeleteConfigurationTemplateOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteEnvironmentConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteEnvironmentConfigurationAsync.
    */
    inline void RegisterDeleteEnvironmentConfigurationOutcomeReceivedHandler(const DeleteEnvironmentConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteEnvironmentConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteEnvironmentConfiguration.
    */
    inline void ClearAllDeleteEnvironmentConfigurationOutcomeReceivedHandlers()
    {
      m_onDeleteEnvironmentConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeApplicationVersionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeApplicationVersionsAsync.
    */
    inline void RegisterDescribeApplicationVersionsOutcomeReceivedHandler(const DescribeApplicationVersionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeApplicationVersionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeApplicationVersions.
    */
    inline void ClearAllDescribeApplicationVersionsOutcomeReceivedHandlers()
    {
      m_onDescribeApplicationVersionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeApplicationsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeApplicationsAsync.
    */
    inline void RegisterDescribeApplicationsOutcomeReceivedHandler(const DescribeApplicationsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeApplicationsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeApplications.
    */
    inline void ClearAllDescribeApplicationsOutcomeReceivedHandlers()
    {
      m_onDescribeApplicationsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeConfigurationOptionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeConfigurationOptionsAsync.
    */
    inline void RegisterDescribeConfigurationOptionsOutcomeReceivedHandler(const DescribeConfigurationOptionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeConfigurationOptionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeConfigurationOptions.
    */
    inline void ClearAllDescribeConfigurationOptionsOutcomeReceivedHandlers()
    {
      m_onDescribeConfigurationOptionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeConfigurationSettingsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeConfigurationSettingsAsync.
    */
    inline void RegisterDescribeConfigurationSettingsOutcomeReceivedHandler(const DescribeConfigurationSettingsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeConfigurationSettingsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeConfigurationSettings.
    */
    inline void ClearAllDescribeConfigurationSettingsOutcomeReceivedHandlers()
    {
      m_onDescribeConfigurationSettingsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEnvironmentResourcesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEnvironmentResourcesAsync.
    */
    inline void RegisterDescribeEnvironmentResourcesOutcomeReceivedHandler(const DescribeEnvironmentResourcesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEnvironmentResourcesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEnvironmentResources.
    */
    inline void ClearAllDescribeEnvironmentResourcesOutcomeReceivedHandlers()
    {
      m_onDescribeEnvironmentResourcesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEnvironmentsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEnvironmentsAsync.
    */
    inline void RegisterDescribeEnvironmentsOutcomeReceivedHandler(const DescribeEnvironmentsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEnvironmentsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEnvironments.
    */
    inline void ClearAllDescribeEnvironmentsOutcomeReceivedHandlers()
    {
      m_onDescribeEnvironmentsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeEventsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeEventsAsync.
    */
    inline void RegisterDescribeEventsOutcomeReceivedHandler(const DescribeEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeEvents.
    */
    inline void ClearAllDescribeEventsOutcomeReceivedHandlers()
    {
      m_onDescribeEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListAvailableSolutionStacksAsync to call upon completion to the handler chain. You need to call this to
    * use ListAvailableSolutionStacksAsync.
    */
    inline void RegisterListAvailableSolutionStacksOutcomeReceivedHandler(const ListAvailableSolutionStacksOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListAvailableSolutionStacksOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListAvailableSolutionStacks.
    */
    inline void ClearAllListAvailableSolutionStacksOutcomeReceivedHandlers()
    {
      m_onListAvailableSolutionStacksOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RebuildEnvironmentAsync to call upon completion to the handler chain. You need to call this to
    * use RebuildEnvironmentAsync.
    */
    inline void RegisterRebuildEnvironmentOutcomeReceivedHandler(const RebuildEnvironmentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRebuildEnvironmentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RebuildEnvironment.
    */
    inline void ClearAllRebuildEnvironmentOutcomeReceivedHandlers()
    {
      m_onRebuildEnvironmentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RequestEnvironmentInfoAsync to call upon completion to the handler chain. You need to call this to
    * use RequestEnvironmentInfoAsync.
    */
    inline void RegisterRequestEnvironmentInfoOutcomeReceivedHandler(const RequestEnvironmentInfoOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRequestEnvironmentInfoOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RequestEnvironmentInfo.
    */
    inline void ClearAllRequestEnvironmentInfoOutcomeReceivedHandlers()
    {
      m_onRequestEnvironmentInfoOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RestartAppServerAsync to call upon completion to the handler chain. You need to call this to
    * use RestartAppServerAsync.
    */
    inline void RegisterRestartAppServerOutcomeReceivedHandler(const RestartAppServerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRestartAppServerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RestartAppServer.
    */
    inline void ClearAllRestartAppServerOutcomeReceivedHandlers()
    {
      m_onRestartAppServerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RetrieveEnvironmentInfoAsync to call upon completion to the handler chain. You need to call this to
    * use RetrieveEnvironmentInfoAsync.
    */
    inline void RegisterRetrieveEnvironmentInfoOutcomeReceivedHandler(const RetrieveEnvironmentInfoOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRetrieveEnvironmentInfoOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RetrieveEnvironmentInfo.
    */
    inline void ClearAllRetrieveEnvironmentInfoOutcomeReceivedHandlers()
    {
      m_onRetrieveEnvironmentInfoOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SwapEnvironmentCNAMEsAsync to call upon completion to the handler chain. You need to call this to
    * use SwapEnvironmentCNAMEsAsync.
    */
    inline void RegisterSwapEnvironmentCNAMEsOutcomeReceivedHandler(const SwapEnvironmentCNAMEsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSwapEnvironmentCNAMEsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SwapEnvironmentCNAMEs.
    */
    inline void ClearAllSwapEnvironmentCNAMEsOutcomeReceivedHandlers()
    {
      m_onSwapEnvironmentCNAMEsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for TerminateEnvironmentAsync to call upon completion to the handler chain. You need to call this to
    * use TerminateEnvironmentAsync.
    */
    inline void RegisterTerminateEnvironmentOutcomeReceivedHandler(const TerminateEnvironmentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onTerminateEnvironmentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for TerminateEnvironment.
    */
    inline void ClearAllTerminateEnvironmentOutcomeReceivedHandlers()
    {
      m_onTerminateEnvironmentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateApplicationAsync.
    */
    inline void RegisterUpdateApplicationOutcomeReceivedHandler(const UpdateApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateApplication.
    */
    inline void ClearAllUpdateApplicationOutcomeReceivedHandlers()
    {
      m_onUpdateApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateApplicationVersionAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateApplicationVersionAsync.
    */
    inline void RegisterUpdateApplicationVersionOutcomeReceivedHandler(const UpdateApplicationVersionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateApplicationVersionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateApplicationVersion.
    */
    inline void ClearAllUpdateApplicationVersionOutcomeReceivedHandlers()
    {
      m_onUpdateApplicationVersionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateConfigurationTemplateAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateConfigurationTemplateAsync.
    */
    inline void RegisterUpdateConfigurationTemplateOutcomeReceivedHandler(const UpdateConfigurationTemplateOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateConfigurationTemplateOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateConfigurationTemplate.
    */
    inline void ClearAllUpdateConfigurationTemplateOutcomeReceivedHandlers()
    {
      m_onUpdateConfigurationTemplateOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateEnvironmentAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateEnvironmentAsync.
    */
    inline void RegisterUpdateEnvironmentOutcomeReceivedHandler(const UpdateEnvironmentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateEnvironmentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateEnvironment.
    */
    inline void ClearAllUpdateEnvironmentOutcomeReceivedHandlers()
    {
      m_onUpdateEnvironmentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ValidateConfigurationSettingsAsync to call upon completion to the handler chain. You need to call this to
    * use ValidateConfigurationSettingsAsync.
    */
    inline void RegisterValidateConfigurationSettingsOutcomeReceivedHandler(const ValidateConfigurationSettingsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onValidateConfigurationSettingsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ValidateConfigurationSettings.
    */
    inline void ClearAllValidateConfigurationSettingsOutcomeReceivedHandlers()
    {
      m_onValidateConfigurationSettingsOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AbortEnvironmentUpdateAsyncHelper(const Model::AbortEnvironmentUpdateRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CheckDNSAvailabilityAsyncHelper(const Model::CheckDNSAvailabilityRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateApplicationVersionAsyncHelper(const Model::CreateApplicationVersionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateConfigurationTemplateAsyncHelper(const Model::CreateConfigurationTemplateRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateEnvironmentAsyncHelper(const Model::CreateEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateStorageLocationAsyncHelper(const Model::CreateStorageLocationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteApplicationVersionAsyncHelper(const Model::DeleteApplicationVersionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteConfigurationTemplateAsyncHelper(const Model::DeleteConfigurationTemplateRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteEnvironmentConfigurationAsyncHelper(const Model::DeleteEnvironmentConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeApplicationVersionsAsyncHelper(const Model::DescribeApplicationVersionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeApplicationsAsyncHelper(const Model::DescribeApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeConfigurationOptionsAsyncHelper(const Model::DescribeConfigurationOptionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeConfigurationSettingsAsyncHelper(const Model::DescribeConfigurationSettingsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEnvironmentResourcesAsyncHelper(const Model::DescribeEnvironmentResourcesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEnvironmentsAsyncHelper(const Model::DescribeEnvironmentsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListAvailableSolutionStacksAsyncHelper(const Model::ListAvailableSolutionStacksRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RebuildEnvironmentAsyncHelper(const Model::RebuildEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RequestEnvironmentInfoAsyncHelper(const Model::RequestEnvironmentInfoRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RestartAppServerAsyncHelper(const Model::RestartAppServerRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RetrieveEnvironmentInfoAsyncHelper(const Model::RetrieveEnvironmentInfoRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SwapEnvironmentCNAMEsAsyncHelper(const Model::SwapEnvironmentCNAMEsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void TerminateEnvironmentAsyncHelper(const Model::TerminateEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateApplicationVersionAsyncHelper(const Model::UpdateApplicationVersionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateConfigurationTemplateAsyncHelper(const Model::UpdateConfigurationTemplateRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateEnvironmentAsyncHelper(const Model::UpdateEnvironmentRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ValidateConfigurationSettingsAsyncHelper(const Model::ValidateConfigurationSettingsRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AbortEnvironmentUpdateOutcomeReceivedEvent m_onAbortEnvironmentUpdateOutcomeReceived;
    CheckDNSAvailabilityOutcomeReceivedEvent m_onCheckDNSAvailabilityOutcomeReceived;
    CreateApplicationOutcomeReceivedEvent m_onCreateApplicationOutcomeReceived;
    CreateApplicationVersionOutcomeReceivedEvent m_onCreateApplicationVersionOutcomeReceived;
    CreateConfigurationTemplateOutcomeReceivedEvent m_onCreateConfigurationTemplateOutcomeReceived;
    CreateEnvironmentOutcomeReceivedEvent m_onCreateEnvironmentOutcomeReceived;
    CreateStorageLocationOutcomeReceivedEvent m_onCreateStorageLocationOutcomeReceived;
    DeleteApplicationOutcomeReceivedEvent m_onDeleteApplicationOutcomeReceived;
    DeleteApplicationVersionOutcomeReceivedEvent m_onDeleteApplicationVersionOutcomeReceived;
    DeleteConfigurationTemplateOutcomeReceivedEvent m_onDeleteConfigurationTemplateOutcomeReceived;
    DeleteEnvironmentConfigurationOutcomeReceivedEvent m_onDeleteEnvironmentConfigurationOutcomeReceived;
    DescribeApplicationVersionsOutcomeReceivedEvent m_onDescribeApplicationVersionsOutcomeReceived;
    DescribeApplicationsOutcomeReceivedEvent m_onDescribeApplicationsOutcomeReceived;
    DescribeConfigurationOptionsOutcomeReceivedEvent m_onDescribeConfigurationOptionsOutcomeReceived;
    DescribeConfigurationSettingsOutcomeReceivedEvent m_onDescribeConfigurationSettingsOutcomeReceived;
    DescribeEnvironmentResourcesOutcomeReceivedEvent m_onDescribeEnvironmentResourcesOutcomeReceived;
    DescribeEnvironmentsOutcomeReceivedEvent m_onDescribeEnvironmentsOutcomeReceived;
    DescribeEventsOutcomeReceivedEvent m_onDescribeEventsOutcomeReceived;
    ListAvailableSolutionStacksOutcomeReceivedEvent m_onListAvailableSolutionStacksOutcomeReceived;
    RebuildEnvironmentOutcomeReceivedEvent m_onRebuildEnvironmentOutcomeReceived;
    RequestEnvironmentInfoOutcomeReceivedEvent m_onRequestEnvironmentInfoOutcomeReceived;
    RestartAppServerOutcomeReceivedEvent m_onRestartAppServerOutcomeReceived;
    RetrieveEnvironmentInfoOutcomeReceivedEvent m_onRetrieveEnvironmentInfoOutcomeReceived;
    SwapEnvironmentCNAMEsOutcomeReceivedEvent m_onSwapEnvironmentCNAMEsOutcomeReceived;
    TerminateEnvironmentOutcomeReceivedEvent m_onTerminateEnvironmentOutcomeReceived;
    UpdateApplicationOutcomeReceivedEvent m_onUpdateApplicationOutcomeReceived;
    UpdateApplicationVersionOutcomeReceivedEvent m_onUpdateApplicationVersionOutcomeReceived;
    UpdateConfigurationTemplateOutcomeReceivedEvent m_onUpdateConfigurationTemplateOutcomeReceived;
    UpdateEnvironmentOutcomeReceivedEvent m_onUpdateEnvironmentOutcomeReceived;
    ValidateConfigurationSettingsOutcomeReceivedEvent m_onValidateConfigurationSettingsOutcomeReceived;
  };

} // namespace ElasticBeanstalk
} // namespace Aws
