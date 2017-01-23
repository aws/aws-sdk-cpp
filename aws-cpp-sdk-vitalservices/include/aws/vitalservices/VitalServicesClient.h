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
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/vitalservices/VitalServicesErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vitalservices/model/getStripeCustomerResult.h>
#include <aws/vitalservices/model/scheduleAppointmentResult.h>
#include <aws/vitalservices/model/getAppointmentPaymentMethodResult.h>
#include <aws/vitalservices/model/registerDoctorResult.h>
#include <aws/vitalservices/model/registerUserResult.h>
#include <aws/vitalservices/model/getLoggedInUserResult.h>
#include <aws/vitalservices/model/cancelAppointmentResult.h>
#include <aws/vitalservices/model/queryDoctorScheduleResult.h>
#include <aws/vitalservices/model/updateUserResult.h>
#include <aws/vitalservices/model/searchForDoctorsResult.h>
#include <aws/vitalservices/model/setDefaultPaymentSourceResult.h>
#include <aws/vitalservices/model/getAllDoctorServicesResult.h>
#include <aws/vitalservices/model/getDoctorSpecialtiesResult.h>
#include <aws/vitalservices/model/getAppointmentBillResult.h>
#include <aws/vitalservices/model/updateDoctorResult.h>
#include <aws/vitalservices/model/getAppointmentsWithUserResult.h>
#include <aws/vitalservices/model/urlForFileResult.h>
#include <aws/vitalservices/model/addCreditCardResult.h>
#include <aws/vitalservices/model/getDoctorsResult.h>
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

namespace VitalServices
{

namespace Model
{
        class getStripeCustomerRequest;
        class scheduleAppointmentRequest;
        class getAppointmentPaymentMethodRequest;
        class registerDoctorRequest;
        class registerUserRequest;
        class getLoggedInUserRequest;
        class cancelAppointmentRequest;
        class queryDoctorScheduleRequest;
        class updateUserRequest;
        class searchForDoctorsRequest;
        class setDefaultPaymentSourceRequest;
        class getAllDoctorServicesRequest;
        class getDoctorSpecialtiesRequest;
        class getAppointmentBillRequest;
        class updateDoctorRequest;
        class getAppointmentsWithUserRequest;
        class urlForFileRequest;
        class addCreditCardRequest;
        class getDoctorsRequest;

        typedef Aws::Utils::Outcome<getStripeCustomerResult, Aws::Client::AWSError<VitalServicesErrors>> getStripeCustomerOutcome;
        typedef Aws::Utils::Outcome<scheduleAppointmentResult, Aws::Client::AWSError<VitalServicesErrors>> scheduleAppointmentOutcome;
        typedef Aws::Utils::Outcome<getAppointmentPaymentMethodResult, Aws::Client::AWSError<VitalServicesErrors>> getAppointmentPaymentMethodOutcome;
        typedef Aws::Utils::Outcome<registerDoctorResult, Aws::Client::AWSError<VitalServicesErrors>> registerDoctorOutcome;
        typedef Aws::Utils::Outcome<registerUserResult, Aws::Client::AWSError<VitalServicesErrors>> registerUserOutcome;
        typedef Aws::Utils::Outcome<getLoggedInUserResult, Aws::Client::AWSError<VitalServicesErrors>> getLoggedInUserOutcome;
        typedef Aws::Utils::Outcome<cancelAppointmentResult, Aws::Client::AWSError<VitalServicesErrors>> cancelAppointmentOutcome;
        typedef Aws::Utils::Outcome<queryDoctorScheduleResult, Aws::Client::AWSError<VitalServicesErrors>> queryDoctorScheduleOutcome;
        typedef Aws::Utils::Outcome<updateUserResult, Aws::Client::AWSError<VitalServicesErrors>> updateUserOutcome;
        typedef Aws::Utils::Outcome<searchForDoctorsResult, Aws::Client::AWSError<VitalServicesErrors>> searchForDoctorsOutcome;
        typedef Aws::Utils::Outcome<setDefaultPaymentSourceResult, Aws::Client::AWSError<VitalServicesErrors>> setDefaultPaymentSourceOutcome;
        typedef Aws::Utils::Outcome<getAllDoctorServicesResult, Aws::Client::AWSError<VitalServicesErrors>> getAllDoctorServicesOutcome;
        typedef Aws::Utils::Outcome<getDoctorSpecialtiesResult, Aws::Client::AWSError<VitalServicesErrors>> getDoctorSpecialtiesOutcome;
        typedef Aws::Utils::Outcome<getAppointmentBillResult, Aws::Client::AWSError<VitalServicesErrors>> getAppointmentBillOutcome;
        typedef Aws::Utils::Outcome<updateDoctorResult, Aws::Client::AWSError<VitalServicesErrors>> updateDoctorOutcome;
        typedef Aws::Utils::Outcome<getAppointmentsWithUserResult, Aws::Client::AWSError<VitalServicesErrors>> getAppointmentsWithUserOutcome;
        typedef Aws::Utils::Outcome<urlForFileResult, Aws::Client::AWSError<VitalServicesErrors>> urlForFileOutcome;
        typedef Aws::Utils::Outcome<addCreditCardResult, Aws::Client::AWSError<VitalServicesErrors>> addCreditCardOutcome;
        typedef Aws::Utils::Outcome<getDoctorsResult, Aws::Client::AWSError<VitalServicesErrors>> getDoctorsOutcome;

        typedef std::future<getStripeCustomerOutcome> getStripeCustomerOutcomeCallable;
        typedef std::future<scheduleAppointmentOutcome> scheduleAppointmentOutcomeCallable;
        typedef std::future<getAppointmentPaymentMethodOutcome> getAppointmentPaymentMethodOutcomeCallable;
        typedef std::future<registerDoctorOutcome> registerDoctorOutcomeCallable;
        typedef std::future<registerUserOutcome> registerUserOutcomeCallable;
        typedef std::future<getLoggedInUserOutcome> getLoggedInUserOutcomeCallable;
        typedef std::future<cancelAppointmentOutcome> cancelAppointmentOutcomeCallable;
        typedef std::future<queryDoctorScheduleOutcome> queryDoctorScheduleOutcomeCallable;
        typedef std::future<updateUserOutcome> updateUserOutcomeCallable;
        typedef std::future<searchForDoctorsOutcome> searchForDoctorsOutcomeCallable;
        typedef std::future<setDefaultPaymentSourceOutcome> setDefaultPaymentSourceOutcomeCallable;
        typedef std::future<getAllDoctorServicesOutcome> getAllDoctorServicesOutcomeCallable;
        typedef std::future<getDoctorSpecialtiesOutcome> getDoctorSpecialtiesOutcomeCallable;
        typedef std::future<getAppointmentBillOutcome> getAppointmentBillOutcomeCallable;
        typedef std::future<updateDoctorOutcome> updateDoctorOutcomeCallable;
        typedef std::future<getAppointmentsWithUserOutcome> getAppointmentsWithUserOutcomeCallable;
        typedef std::future<urlForFileOutcome> urlForFileOutcomeCallable;
        typedef std::future<addCreditCardOutcome> addCreditCardOutcomeCallable;
        typedef std::future<getDoctorsOutcome> getDoctorsOutcomeCallable;
} // namespace Model

  class VitalServicesClient;

    typedef std::function<void(const VitalServicesClient*, const Model::getStripeCustomerRequest&, const Model::getStripeCustomerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getStripeCustomerResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::scheduleAppointmentRequest&, const Model::scheduleAppointmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > scheduleAppointmentResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::getAppointmentPaymentMethodRequest&, const Model::getAppointmentPaymentMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getAppointmentPaymentMethodResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::registerDoctorRequest&, const Model::registerDoctorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > registerDoctorResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::registerUserRequest&, const Model::registerUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > registerUserResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::getLoggedInUserRequest&, const Model::getLoggedInUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getLoggedInUserResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::cancelAppointmentRequest&, const Model::cancelAppointmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > cancelAppointmentResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::queryDoctorScheduleRequest&, const Model::queryDoctorScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > queryDoctorScheduleResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::updateUserRequest&, const Model::updateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > updateUserResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::searchForDoctorsRequest&, const Model::searchForDoctorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > searchForDoctorsResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::setDefaultPaymentSourceRequest&, const Model::setDefaultPaymentSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > setDefaultPaymentSourceResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::getAllDoctorServicesRequest&, const Model::getAllDoctorServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getAllDoctorServicesResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::getDoctorSpecialtiesRequest&, const Model::getDoctorSpecialtiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getDoctorSpecialtiesResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::getAppointmentBillRequest&, const Model::getAppointmentBillOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getAppointmentBillResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::updateDoctorRequest&, const Model::updateDoctorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > updateDoctorResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::getAppointmentsWithUserRequest&, const Model::getAppointmentsWithUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getAppointmentsWithUserResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::urlForFileRequest&, const Model::urlForFileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > urlForFileResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::addCreditCardRequest&, const Model::addCreditCardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > addCreditCardResponseReceivedHandler;
    typedef std::function<void(const VitalServicesClient*, const Model::getDoctorsRequest&, const Model::getDoctorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > getDoctorsResponseReceivedHandler;

  class AWS_VITALSERVICES_API VitalServicesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VitalServicesClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VitalServicesClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VitalServicesClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~VitalServicesClient();

        /**
         * 
         */
        virtual Model::getStripeCustomerOutcome getStripeCustomer(const Model::getStripeCustomerRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getStripeCustomerOutcomeCallable getStripeCustomerCallable(const Model::getStripeCustomerRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getStripeCustomerAsync(const Model::getStripeCustomerRequest& request, const getStripeCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::scheduleAppointmentOutcome scheduleAppointment(const Model::scheduleAppointmentRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::scheduleAppointmentOutcomeCallable scheduleAppointmentCallable(const Model::scheduleAppointmentRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void scheduleAppointmentAsync(const Model::scheduleAppointmentRequest& request, const scheduleAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::getAppointmentPaymentMethodOutcome getAppointmentPaymentMethod(const Model::getAppointmentPaymentMethodRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getAppointmentPaymentMethodOutcomeCallable getAppointmentPaymentMethodCallable(const Model::getAppointmentPaymentMethodRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getAppointmentPaymentMethodAsync(const Model::getAppointmentPaymentMethodRequest& request, const getAppointmentPaymentMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::registerDoctorOutcome registerDoctor(const Model::registerDoctorRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::registerDoctorOutcomeCallable registerDoctorCallable(const Model::registerDoctorRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void registerDoctorAsync(const Model::registerDoctorRequest& request, const registerDoctorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::registerUserOutcome registerUser(const Model::registerUserRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::registerUserOutcomeCallable registerUserCallable(const Model::registerUserRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void registerUserAsync(const Model::registerUserRequest& request, const registerUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::getLoggedInUserOutcome getLoggedInUser(const Model::getLoggedInUserRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getLoggedInUserOutcomeCallable getLoggedInUserCallable(const Model::getLoggedInUserRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getLoggedInUserAsync(const Model::getLoggedInUserRequest& request, const getLoggedInUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::cancelAppointmentOutcome cancelAppointment(const Model::cancelAppointmentRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::cancelAppointmentOutcomeCallable cancelAppointmentCallable(const Model::cancelAppointmentRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void cancelAppointmentAsync(const Model::cancelAppointmentRequest& request, const cancelAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::queryDoctorScheduleOutcome queryDoctorSchedule(const Model::queryDoctorScheduleRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::queryDoctorScheduleOutcomeCallable queryDoctorScheduleCallable(const Model::queryDoctorScheduleRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void queryDoctorScheduleAsync(const Model::queryDoctorScheduleRequest& request, const queryDoctorScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::updateUserOutcome updateUser(const Model::updateUserRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::updateUserOutcomeCallable updateUserCallable(const Model::updateUserRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void updateUserAsync(const Model::updateUserRequest& request, const updateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::searchForDoctorsOutcome searchForDoctors(const Model::searchForDoctorsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::searchForDoctorsOutcomeCallable searchForDoctorsCallable(const Model::searchForDoctorsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void searchForDoctorsAsync(const Model::searchForDoctorsRequest& request, const searchForDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::setDefaultPaymentSourceOutcome setDefaultPaymentSource(const Model::setDefaultPaymentSourceRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::setDefaultPaymentSourceOutcomeCallable setDefaultPaymentSourceCallable(const Model::setDefaultPaymentSourceRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void setDefaultPaymentSourceAsync(const Model::setDefaultPaymentSourceRequest& request, const setDefaultPaymentSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::getAllDoctorServicesOutcome getAllDoctorServices(const Model::getAllDoctorServicesRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getAllDoctorServicesOutcomeCallable getAllDoctorServicesCallable(const Model::getAllDoctorServicesRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getAllDoctorServicesAsync(const Model::getAllDoctorServicesRequest& request, const getAllDoctorServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::getDoctorSpecialtiesOutcome getDoctorSpecialties(const Model::getDoctorSpecialtiesRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getDoctorSpecialtiesOutcomeCallable getDoctorSpecialtiesCallable(const Model::getDoctorSpecialtiesRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getDoctorSpecialtiesAsync(const Model::getDoctorSpecialtiesRequest& request, const getDoctorSpecialtiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::getAppointmentBillOutcome getAppointmentBill(const Model::getAppointmentBillRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getAppointmentBillOutcomeCallable getAppointmentBillCallable(const Model::getAppointmentBillRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getAppointmentBillAsync(const Model::getAppointmentBillRequest& request, const getAppointmentBillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::updateDoctorOutcome updateDoctor(const Model::updateDoctorRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::updateDoctorOutcomeCallable updateDoctorCallable(const Model::updateDoctorRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void updateDoctorAsync(const Model::updateDoctorRequest& request, const updateDoctorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::getAppointmentsWithUserOutcome getAppointmentsWithUser(const Model::getAppointmentsWithUserRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getAppointmentsWithUserOutcomeCallable getAppointmentsWithUserCallable(const Model::getAppointmentsWithUserRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getAppointmentsWithUserAsync(const Model::getAppointmentsWithUserRequest& request, const getAppointmentsWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::urlForFileOutcome urlForFile(const Model::urlForFileRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::urlForFileOutcomeCallable urlForFileCallable(const Model::urlForFileRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void urlForFileAsync(const Model::urlForFileRequest& request, const urlForFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::addCreditCardOutcome addCreditCard(const Model::addCreditCardRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::addCreditCardOutcomeCallable addCreditCardCallable(const Model::addCreditCardRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void addCreditCardAsync(const Model::addCreditCardRequest& request, const addCreditCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::getDoctorsOutcome getDoctors(const Model::getDoctorsRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::getDoctorsOutcomeCallable getDoctorsCallable(const Model::getDoctorsRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void getDoctorsAsync(const Model::getDoctorsRequest& request, const getDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        virtual void BuildHttpRequest(const Aws::AmazonWebServiceRequest& request, const std::shared_ptr<Http::HttpRequest>& httpRequest) const override
        {
            BASECLASS::BuildHttpRequest(request, httpRequest);
            httpRequest->SetContentType("application/json");
        }

    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void getStripeCustomerAsyncHelper(const Model::getStripeCustomerRequest& request, const getStripeCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void scheduleAppointmentAsyncHelper(const Model::scheduleAppointmentRequest& request, const scheduleAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void getAppointmentPaymentMethodAsyncHelper(const Model::getAppointmentPaymentMethodRequest& request, const getAppointmentPaymentMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void registerDoctorAsyncHelper(const Model::registerDoctorRequest& request, const registerDoctorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void registerUserAsyncHelper(const Model::registerUserRequest& request, const registerUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void getLoggedInUserAsyncHelper(const Model::getLoggedInUserRequest& request, const getLoggedInUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void cancelAppointmentAsyncHelper(const Model::cancelAppointmentRequest& request, const cancelAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void queryDoctorScheduleAsyncHelper(const Model::queryDoctorScheduleRequest& request, const queryDoctorScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void updateUserAsyncHelper(const Model::updateUserRequest& request, const updateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void searchForDoctorsAsyncHelper(const Model::searchForDoctorsRequest& request, const searchForDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void setDefaultPaymentSourceAsyncHelper(const Model::setDefaultPaymentSourceRequest& request, const setDefaultPaymentSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void getAllDoctorServicesAsyncHelper(const Model::getAllDoctorServicesRequest& request, const getAllDoctorServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void getDoctorSpecialtiesAsyncHelper(const Model::getDoctorSpecialtiesRequest& request, const getDoctorSpecialtiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void getAppointmentBillAsyncHelper(const Model::getAppointmentBillRequest& request, const getAppointmentBillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void updateDoctorAsyncHelper(const Model::updateDoctorRequest& request, const updateDoctorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void getAppointmentsWithUserAsyncHelper(const Model::getAppointmentsWithUserRequest& request, const getAppointmentsWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void urlForFileAsyncHelper(const Model::urlForFileRequest& request, const urlForFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void addCreditCardAsyncHelper(const Model::addCreditCardRequest& request, const addCreditCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void getDoctorsAsyncHelper(const Model::getDoctorsRequest& request, const getDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace VitalServices
} // namespace Aws
