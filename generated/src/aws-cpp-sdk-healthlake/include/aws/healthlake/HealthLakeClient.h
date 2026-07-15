/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/HealthLakePaginationBase.h>
#include <aws/healthlake/HealthLakeServiceClientModel.h>
#include <aws/healthlake/HealthLakeWaiter.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
/**
 * <p>This is the <i>AWS HealthLake API Reference</i>. For an introduction to the
 * service, see <a
 * href="https://docs.aws.amazon.com/healthlake/latest/devguide/what-is.html">What
 * is AWS HealthLake?</a> in the <i>AWS HealthLake Developer Guide</i>.</p>
 */
class AWS_HEALTHLAKE_API HealthLakeClient : public Aws::Client::AWSJsonClient,
                                            public Aws::Client::ClientWithAsyncTemplateMethods<HealthLakeClient>,
                                            public HealthLakePaginationBase<HealthLakeClient>,
                                            public HealthLakeWaiter<HealthLakeClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef HealthLakeClientConfiguration ClientConfigurationType;
  typedef HealthLakeEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  HealthLakeClient(
      const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration(),
      std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  HealthLakeClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  HealthLakeClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = nullptr,
      const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  HealthLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  HealthLakeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  HealthLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~HealthLakeClient();

  /**
   * <p>Creates a data transformation profile in DRAFT state. Specify a built-in
   * starter profile, an existing profile version, raw profile content, or a sample
   * data file as the source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateDataTransformationProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDataTransformationProfileOutcome CreateDataTransformationProfile(
      const Model::CreateDataTransformationProfileRequest& request) const;

  /**
   * A Callable wrapper for CreateDataTransformationProfile that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateDataTransformationProfileRequestT = Model::CreateDataTransformationProfileRequest>
  Model::CreateDataTransformationProfileOutcomeCallable CreateDataTransformationProfileCallable(
      const CreateDataTransformationProfileRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::CreateDataTransformationProfile, request);
  }

  /**
   * An Async wrapper for CreateDataTransformationProfile that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateDataTransformationProfileRequestT = Model::CreateDataTransformationProfileRequest>
  void CreateDataTransformationProfileAsync(const CreateDataTransformationProfileRequestT& request,
                                            const CreateDataTransformationProfileResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::CreateDataTransformationProfile, request, handler, context);
  }

  /**
   * <p>Create a FHIR-enabled data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateFHIRDatastore">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateFHIRDatastoreOutcome CreateFHIRDatastore(const Model::CreateFHIRDatastoreRequest& request) const;

  /**
   * A Callable wrapper for CreateFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateFHIRDatastoreRequestT = Model::CreateFHIRDatastoreRequest>
  Model::CreateFHIRDatastoreOutcomeCallable CreateFHIRDatastoreCallable(const CreateFHIRDatastoreRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::CreateFHIRDatastore, request);
  }

  /**
   * An Async wrapper for CreateFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateFHIRDatastoreRequestT = Model::CreateFHIRDatastoreRequest>
  void CreateFHIRDatastoreAsync(const CreateFHIRDatastoreRequestT& request, const CreateFHIRDatastoreResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::CreateFHIRDatastore, request, handler, context);
  }

  /**
   * <p>Deletes a data transformation profile and all its versions, including the
   * DRAFT and all published versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteDataTransformationProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDataTransformationProfileOutcome DeleteDataTransformationProfile(
      const Model::DeleteDataTransformationProfileRequest& request) const;

  /**
   * A Callable wrapper for DeleteDataTransformationProfile that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteDataTransformationProfileRequestT = Model::DeleteDataTransformationProfileRequest>
  Model::DeleteDataTransformationProfileOutcomeCallable DeleteDataTransformationProfileCallable(
      const DeleteDataTransformationProfileRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::DeleteDataTransformationProfile, request);
  }

  /**
   * An Async wrapper for DeleteDataTransformationProfile that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteDataTransformationProfileRequestT = Model::DeleteDataTransformationProfileRequest>
  void DeleteDataTransformationProfileAsync(const DeleteDataTransformationProfileRequestT& request,
                                            const DeleteDataTransformationProfileResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::DeleteDataTransformationProfile, request, handler, context);
  }

  /**
   * <p>Delete a FHIR-enabled data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteFHIRDatastore">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFHIRDatastoreOutcome DeleteFHIRDatastore(const Model::DeleteFHIRDatastoreRequest& request) const;

  /**
   * A Callable wrapper for DeleteFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteFHIRDatastoreRequestT = Model::DeleteFHIRDatastoreRequest>
  Model::DeleteFHIRDatastoreOutcomeCallable DeleteFHIRDatastoreCallable(const DeleteFHIRDatastoreRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::DeleteFHIRDatastore, request);
  }

  /**
   * An Async wrapper for DeleteFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteFHIRDatastoreRequestT = Model::DeleteFHIRDatastoreRequest>
  void DeleteFHIRDatastoreAsync(const DeleteFHIRDatastoreRequestT& request, const DeleteFHIRDatastoreResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::DeleteFHIRDatastore, request, handler, context);
  }

  /**
   * <p>Describes a data transformation job, including its current status,
   * configuration, and progress information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeDataTransformationJob">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeDataTransformationJobOutcome DescribeDataTransformationJob(
      const Model::DescribeDataTransformationJobRequest& request) const;

  /**
   * A Callable wrapper for DescribeDataTransformationJob that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeDataTransformationJobRequestT = Model::DescribeDataTransformationJobRequest>
  Model::DescribeDataTransformationJobOutcomeCallable DescribeDataTransformationJobCallable(
      const DescribeDataTransformationJobRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::DescribeDataTransformationJob, request);
  }

  /**
   * An Async wrapper for DescribeDataTransformationJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeDataTransformationJobRequestT = Model::DescribeDataTransformationJobRequest>
  void DescribeDataTransformationJobAsync(const DescribeDataTransformationJobRequestT& request,
                                          const DescribeDataTransformationJobResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::DescribeDataTransformationJob, request, handler, context);
  }

  /**
   * <p>Get properties for a FHIR-enabled data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRDatastore">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeFHIRDatastoreOutcome DescribeFHIRDatastore(const Model::DescribeFHIRDatastoreRequest& request) const;

  /**
   * A Callable wrapper for DescribeFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeFHIRDatastoreRequestT = Model::DescribeFHIRDatastoreRequest>
  Model::DescribeFHIRDatastoreOutcomeCallable DescribeFHIRDatastoreCallable(const DescribeFHIRDatastoreRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::DescribeFHIRDatastore, request);
  }

  /**
   * An Async wrapper for DescribeFHIRDatastore that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeFHIRDatastoreRequestT = Model::DescribeFHIRDatastoreRequest>
  void DescribeFHIRDatastoreAsync(const DescribeFHIRDatastoreRequestT& request, const DescribeFHIRDatastoreResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::DescribeFHIRDatastore, request, handler, context);
  }

  /**
   * <p>Get FHIR export job properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRExportJob">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeFHIRExportJobOutcome DescribeFHIRExportJob(const Model::DescribeFHIRExportJobRequest& request) const;

  /**
   * A Callable wrapper for DescribeFHIRExportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeFHIRExportJobRequestT = Model::DescribeFHIRExportJobRequest>
  Model::DescribeFHIRExportJobOutcomeCallable DescribeFHIRExportJobCallable(const DescribeFHIRExportJobRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::DescribeFHIRExportJob, request);
  }

  /**
   * An Async wrapper for DescribeFHIRExportJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeFHIRExportJobRequestT = Model::DescribeFHIRExportJobRequest>
  void DescribeFHIRExportJobAsync(const DescribeFHIRExportJobRequestT& request, const DescribeFHIRExportJobResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::DescribeFHIRExportJob, request, handler, context);
  }

  /**
   * <p>Get the import job properties to learn more about the job or job
   * progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRImportJob">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeFHIRImportJobOutcome DescribeFHIRImportJob(const Model::DescribeFHIRImportJobRequest& request) const;

  /**
   * A Callable wrapper for DescribeFHIRImportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeFHIRImportJobRequestT = Model::DescribeFHIRImportJobRequest>
  Model::DescribeFHIRImportJobOutcomeCallable DescribeFHIRImportJobCallable(const DescribeFHIRImportJobRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::DescribeFHIRImportJob, request);
  }

  /**
   * An Async wrapper for DescribeFHIRImportJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeFHIRImportJobRequestT = Model::DescribeFHIRImportJobRequest>
  void DescribeFHIRImportJobAsync(const DescribeFHIRImportJobRequestT& request, const DescribeFHIRImportJobResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::DescribeFHIRImportJob, request, handler, context);
  }

  /**
   * <p>Retrieves a data transformation profile's metadata and profile content at a
   * specific version. Specify version 0 to retrieve the DRAFT, a version number
   * between 1 and 99 to retrieve a specific published version, or omit the version
   * to retrieve the latest published version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/GetDataTransformationProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDataTransformationProfileOutcome GetDataTransformationProfile(
      const Model::GetDataTransformationProfileRequest& request) const;

  /**
   * A Callable wrapper for GetDataTransformationProfile that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetDataTransformationProfileRequestT = Model::GetDataTransformationProfileRequest>
  Model::GetDataTransformationProfileOutcomeCallable GetDataTransformationProfileCallable(
      const GetDataTransformationProfileRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::GetDataTransformationProfile, request);
  }

  /**
   * An Async wrapper for GetDataTransformationProfile that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetDataTransformationProfileRequestT = Model::GetDataTransformationProfileRequest>
  void GetDataTransformationProfileAsync(const GetDataTransformationProfileRequestT& request,
                                         const GetDataTransformationProfileResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::GetDataTransformationProfile, request, handler, context);
  }

  /**
   * <p>Lists data transformation jobs for your AWS account. Results can be filtered
   * by status, job name, and submit time window. Results are paginated. Use the
   * <code>NextToken</code> parameter to retrieve additional results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListDataTransformationJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDataTransformationJobsOutcome ListDataTransformationJobs(
      const Model::ListDataTransformationJobsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDataTransformationJobs that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListDataTransformationJobsRequestT = Model::ListDataTransformationJobsRequest>
  Model::ListDataTransformationJobsOutcomeCallable ListDataTransformationJobsCallable(
      const ListDataTransformationJobsRequestT& request = {}) const {
    return SubmitCallable(&HealthLakeClient::ListDataTransformationJobs, request);
  }

  /**
   * An Async wrapper for ListDataTransformationJobs that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListDataTransformationJobsRequestT = Model::ListDataTransformationJobsRequest>
  void ListDataTransformationJobsAsync(const ListDataTransformationJobsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const ListDataTransformationJobsRequestT& request = {}) const {
    return SubmitAsync(&HealthLakeClient::ListDataTransformationJobs, request, handler, context);
  }

  /**
   * <p>Lists all versions of a specific data transformation profile (DRAFT and
   * published), in reverse chronological order (newest first). Use
   * <code>GetDataTransformationProfile</code> to retrieve profile content. Results
   * are paginated. Use the <code>NextToken</code> parameter to retrieve additional
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListDataTransformationProfileVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDataTransformationProfileVersionsOutcome ListDataTransformationProfileVersions(
      const Model::ListDataTransformationProfileVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListDataTransformationProfileVersions that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListDataTransformationProfileVersionsRequestT = Model::ListDataTransformationProfileVersionsRequest>
  Model::ListDataTransformationProfileVersionsOutcomeCallable ListDataTransformationProfileVersionsCallable(
      const ListDataTransformationProfileVersionsRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::ListDataTransformationProfileVersions, request);
  }

  /**
   * An Async wrapper for ListDataTransformationProfileVersions that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListDataTransformationProfileVersionsRequestT = Model::ListDataTransformationProfileVersionsRequest>
  void ListDataTransformationProfileVersionsAsync(const ListDataTransformationProfileVersionsRequestT& request,
                                                  const ListDataTransformationProfileVersionsResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::ListDataTransformationProfileVersions, request, handler, context);
  }

  /**
   * <p>Lists all data transformation profiles in your account, returning the latest
   * version summary for each. Use <code>GetDataTransformationProfile</code> to
   * retrieve profile content. Results are paginated. Use the <code>NextToken</code>
   * parameter to retrieve additional results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListDataTransformationProfiles">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDataTransformationProfilesOutcome ListDataTransformationProfiles(
      const Model::ListDataTransformationProfilesRequest& request) const;

  /**
   * A Callable wrapper for ListDataTransformationProfiles that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListDataTransformationProfilesRequestT = Model::ListDataTransformationProfilesRequest>
  Model::ListDataTransformationProfilesOutcomeCallable ListDataTransformationProfilesCallable(
      const ListDataTransformationProfilesRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::ListDataTransformationProfiles, request);
  }

  /**
   * An Async wrapper for ListDataTransformationProfiles that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListDataTransformationProfilesRequestT = Model::ListDataTransformationProfilesRequest>
  void ListDataTransformationProfilesAsync(const ListDataTransformationProfilesRequestT& request,
                                           const ListDataTransformationProfilesResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::ListDataTransformationProfiles, request, handler, context);
  }

  /**
   * <p>List all FHIR-enabled data stores in a user’s account, regardless of data
   * store status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRDatastores">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFHIRDatastoresOutcome ListFHIRDatastores(const Model::ListFHIRDatastoresRequest& request = {}) const;

  /**
   * A Callable wrapper for ListFHIRDatastores that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFHIRDatastoresRequestT = Model::ListFHIRDatastoresRequest>
  Model::ListFHIRDatastoresOutcomeCallable ListFHIRDatastoresCallable(const ListFHIRDatastoresRequestT& request = {}) const {
    return SubmitCallable(&HealthLakeClient::ListFHIRDatastores, request);
  }

  /**
   * An Async wrapper for ListFHIRDatastores that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListFHIRDatastoresRequestT = Model::ListFHIRDatastoresRequest>
  void ListFHIRDatastoresAsync(const ListFHIRDatastoresResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const ListFHIRDatastoresRequestT& request = {}) const {
    return SubmitAsync(&HealthLakeClient::ListFHIRDatastores, request, handler, context);
  }

  /**
   * <p>Lists all FHIR export jobs associated with an account and their
   * statuses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRExportJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFHIRExportJobsOutcome ListFHIRExportJobs(const Model::ListFHIRExportJobsRequest& request) const;

  /**
   * A Callable wrapper for ListFHIRExportJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFHIRExportJobsRequestT = Model::ListFHIRExportJobsRequest>
  Model::ListFHIRExportJobsOutcomeCallable ListFHIRExportJobsCallable(const ListFHIRExportJobsRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::ListFHIRExportJobs, request);
  }

  /**
   * An Async wrapper for ListFHIRExportJobs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListFHIRExportJobsRequestT = Model::ListFHIRExportJobsRequest>
  void ListFHIRExportJobsAsync(const ListFHIRExportJobsRequestT& request, const ListFHIRExportJobsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::ListFHIRExportJobs, request, handler, context);
  }

  /**
   * <p>List all FHIR import jobs associated with an account and their
   * statuses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRImportJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFHIRImportJobsOutcome ListFHIRImportJobs(const Model::ListFHIRImportJobsRequest& request) const;

  /**
   * A Callable wrapper for ListFHIRImportJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFHIRImportJobsRequestT = Model::ListFHIRImportJobsRequest>
  Model::ListFHIRImportJobsOutcomeCallable ListFHIRImportJobsCallable(const ListFHIRImportJobsRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::ListFHIRImportJobs, request);
  }

  /**
   * An Async wrapper for ListFHIRImportJobs that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListFHIRImportJobsRequestT = Model::ListFHIRImportJobsRequest>
  void ListFHIRImportJobsAsync(const ListFHIRImportJobsRequestT& request, const ListFHIRImportJobsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::ListFHIRImportJobs, request, handler, context);
  }

  /**
   * <p>Returns a list of all existing tags associated with a data
   * store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Promotes the current DRAFT version of a data transformation profile to a new
   * immutable published version. Also supports rollback by publishing from a
   * previously published version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/PublishDataTransformationProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::PublishDataTransformationProfileOutcome PublishDataTransformationProfile(
      const Model::PublishDataTransformationProfileRequest& request) const;

  /**
   * A Callable wrapper for PublishDataTransformationProfile that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename PublishDataTransformationProfileRequestT = Model::PublishDataTransformationProfileRequest>
  Model::PublishDataTransformationProfileOutcomeCallable PublishDataTransformationProfileCallable(
      const PublishDataTransformationProfileRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::PublishDataTransformationProfile, request);
  }

  /**
   * An Async wrapper for PublishDataTransformationProfile that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PublishDataTransformationProfileRequestT = Model::PublishDataTransformationProfileRequest>
  void PublishDataTransformationProfileAsync(const PublishDataTransformationProfileRequestT& request,
                                             const PublishDataTransformationProfileResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::PublishDataTransformationProfile, request, handler, context);
  }

  /**
   * <p>Starts an asynchronous data transformation job that converts source files
   * from Amazon Simple Storage Service (Amazon S3) and writes the output to Amazon
   * S3 or AWS HealthLake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartDataTransformationJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartDataTransformationJobOutcome StartDataTransformationJob(
      const Model::StartDataTransformationJobRequest& request) const;

  /**
   * A Callable wrapper for StartDataTransformationJob that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartDataTransformationJobRequestT = Model::StartDataTransformationJobRequest>
  Model::StartDataTransformationJobOutcomeCallable StartDataTransformationJobCallable(
      const StartDataTransformationJobRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::StartDataTransformationJob, request);
  }

  /**
   * An Async wrapper for StartDataTransformationJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartDataTransformationJobRequestT = Model::StartDataTransformationJobRequest>
  void StartDataTransformationJobAsync(const StartDataTransformationJobRequestT& request,
                                       const StartDataTransformationJobResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::StartDataTransformationJob, request, handler, context);
  }

  /**
   * <p>Start a FHIR export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRExportJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartFHIRExportJobOutcome StartFHIRExportJob(const Model::StartFHIRExportJobRequest& request) const;

  /**
   * A Callable wrapper for StartFHIRExportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartFHIRExportJobRequestT = Model::StartFHIRExportJobRequest>
  Model::StartFHIRExportJobOutcomeCallable StartFHIRExportJobCallable(const StartFHIRExportJobRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::StartFHIRExportJob, request);
  }

  /**
   * An Async wrapper for StartFHIRExportJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartFHIRExportJobRequestT = Model::StartFHIRExportJobRequest>
  void StartFHIRExportJobAsync(const StartFHIRExportJobRequestT& request, const StartFHIRExportJobResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::StartFHIRExportJob, request, handler, context);
  }

  /**
   * <p>Start importing bulk FHIR data into an ACTIVE data store. The import job
   * imports FHIR data found in the <code>InputDataConfig</code> object and stores
   * processing results in the <code>JobOutputDataConfig</code> object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRImportJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartFHIRImportJobOutcome StartFHIRImportJob(const Model::StartFHIRImportJobRequest& request) const;

  /**
   * A Callable wrapper for StartFHIRImportJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartFHIRImportJobRequestT = Model::StartFHIRImportJobRequest>
  Model::StartFHIRImportJobOutcomeCallable StartFHIRImportJobCallable(const StartFHIRImportJobRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::StartFHIRImportJob, request);
  }

  /**
   * An Async wrapper for StartFHIRImportJob that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartFHIRImportJobRequestT = Model::StartFHIRImportJobRequest>
  void StartFHIRImportJobAsync(const StartFHIRImportJobRequestT& request, const StartFHIRImportJobResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::StartFHIRImportJob, request, handler, context);
  }

  /**
   * <p>Add a user-specifed key and value tag to a data store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::TagResource, request, handler, context);
  }

  /**
   * <p>Remove a user-specifed key and value tag from a data store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the DRAFT version (version 0) of a data transformation profile with
   * new profile content. The update replaces all existing DRAFT
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UpdateDataTransformationProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDataTransformationProfileOutcome UpdateDataTransformationProfile(
      const Model::UpdateDataTransformationProfileRequest& request) const;

  /**
   * A Callable wrapper for UpdateDataTransformationProfile that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateDataTransformationProfileRequestT = Model::UpdateDataTransformationProfileRequest>
  Model::UpdateDataTransformationProfileOutcomeCallable UpdateDataTransformationProfileCallable(
      const UpdateDataTransformationProfileRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::UpdateDataTransformationProfile, request);
  }

  /**
   * An Async wrapper for UpdateDataTransformationProfile that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateDataTransformationProfileRequestT = Model::UpdateDataTransformationProfileRequest>
  void UpdateDataTransformationProfileAsync(const UpdateDataTransformationProfileRequestT& request,
                                            const UpdateDataTransformationProfileResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::UpdateDataTransformationProfile, request, handler, context);
  }

  /**
   * <p>Update the properties of a FHIR-enabled data store.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UpdateFHIRDatastore">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFHIRDatastoreOutcome UpdateFHIRDatastore(const Model::UpdateFHIRDatastoreRequest& request) const;

  /**
   * A Callable wrapper for UpdateFHIRDatastore that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFHIRDatastoreRequestT = Model::UpdateFHIRDatastoreRequest>
  Model::UpdateFHIRDatastoreOutcomeCallable UpdateFHIRDatastoreCallable(const UpdateFHIRDatastoreRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::UpdateFHIRDatastore, request);
  }

  /**
   * An Async wrapper for UpdateFHIRDatastore that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateFHIRDatastoreRequestT = Model::UpdateFHIRDatastoreRequest>
  void UpdateFHIRDatastoreAsync(const UpdateFHIRDatastoreRequestT& request, const UpdateFHIRDatastoreResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::UpdateFHIRDatastore, request, handler, context);
  }

  /**
   * <p>Updates a data transformation profile using chat-based interaction with an
   * agent. Supports multi-turn conversations for iteratively customizing
   * profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UpdateProfileWithAgent">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProfileWithAgentOutcome UpdateProfileWithAgent(const Model::UpdateProfileWithAgentRequest& request) const;

  /**
   * A Callable wrapper for UpdateProfileWithAgent that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateProfileWithAgentRequestT = Model::UpdateProfileWithAgentRequest>
  Model::UpdateProfileWithAgentOutcomeCallable UpdateProfileWithAgentCallable(const UpdateProfileWithAgentRequestT& request) const {
    return SubmitCallable(&HealthLakeClient::UpdateProfileWithAgent, request);
  }

  /**
   * An Async wrapper for UpdateProfileWithAgent that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateProfileWithAgentRequestT = Model::UpdateProfileWithAgentRequest>
  void UpdateProfileWithAgentAsync(const UpdateProfileWithAgentRequestT& request,
                                   const UpdateProfileWithAgentResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&HealthLakeClient::UpdateProfileWithAgent, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<HealthLakeEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<HealthLakeClient>;
  void init(const HealthLakeClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, HealthLakeError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  HealthLakeClientConfiguration m_clientConfiguration;
  std::shared_ptr<HealthLakeEndpointProviderBase> m_endpointProvider;
};

}  // namespace HealthLake
}  // namespace Aws
