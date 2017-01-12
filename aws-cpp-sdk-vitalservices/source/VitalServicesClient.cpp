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
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/vitalservices/VitalServicesClient.h>
#include <aws/vitalservices/VitalServicesEndpoint.h>
#include <aws/vitalservices/VitalServicesErrorMarshaller.h>
#include <aws/vitalservices/model/addCreditCardRequest.h>
#include <aws/vitalservices/model/getDoctorsRequest.h>
#include <aws/vitalservices/model/getLoggedInUserRequest.h>
#include <aws/vitalservices/model/getStripeCustomerRequest.h>
#include <aws/vitalservices/model/queryDoctorScheduleRequest.h>
#include <aws/vitalservices/model/getAppointmentsWithUserRequest.h>
#include <aws/vitalservices/model/urlForFileRequest.h>
#include <aws/vitalservices/model/getAllDoctorServicesRequest.h>
#include <aws/vitalservices/model/scheduleAppointmentRequest.h>
#include <aws/vitalservices/model/cancelAppointmentRequest.h>
#include <aws/vitalservices/model/updateUserRequest.h>
#include <aws/vitalservices/model/updateDoctorRequest.h>
#include <aws/vitalservices/model/getAppointmentPaymentMethodRequest.h>
#include <aws/vitalservices/model/searchForDoctorsRequest.h>
#include <aws/vitalservices/model/setDefaultPaymentSourceRequest.h>
#include <aws/vitalservices/model/getAppointmentBillRequest.h>
#include <aws/vitalservices/model/registerUserRequest.h>
#include <aws/vitalservices/model/getDoctorSpecialtiesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::VitalServices;
using namespace Aws::VitalServices::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "execute-api";
static const char* ALLOCATION_TAG = "VitalServicesClient";


VitalServicesClient::VitalServicesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<VitalServicesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VitalServicesClient::VitalServicesClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<VitalServicesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VitalServicesClient::VitalServicesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<VitalServicesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VitalServicesClient::~VitalServicesClient()
{
}

void VitalServicesClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << VitalServicesEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

addCreditCardOutcome VitalServicesClient::addCreditCard(const addCreditCardRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/add-credit-card";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return addCreditCardOutcome(addCreditCardResult(outcome.GetResult()));
  }
  else
  {
    return addCreditCardOutcome(outcome.GetError());
  }
}

addCreditCardOutcomeCallable VitalServicesClient::addCreditCardCallable(const addCreditCardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< addCreditCardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->addCreditCard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::addCreditCardAsync(const addCreditCardRequest& request, const addCreditCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->addCreditCardAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::addCreditCardAsyncHelper(const addCreditCardRequest& request, const addCreditCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, addCreditCard(request), context);
}

getDoctorsOutcome VitalServicesClient::getDoctors(const getDoctorsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-doctors";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getDoctorsOutcome(getDoctorsResult(outcome.GetResult()));
  }
  else
  {
    return getDoctorsOutcome(outcome.GetError());
  }
}

getDoctorsOutcomeCallable VitalServicesClient::getDoctorsCallable(const getDoctorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getDoctorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getDoctors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getDoctorsAsync(const getDoctorsRequest& request, const getDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getDoctorsAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getDoctorsAsyncHelper(const getDoctorsRequest& request, const getDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getDoctors(request), context);
}

getLoggedInUserOutcome VitalServicesClient::getLoggedInUser(const getLoggedInUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-logged-in-user";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getLoggedInUserOutcome(getLoggedInUserResult(outcome.GetResult()));
  }
  else
  {
    return getLoggedInUserOutcome(outcome.GetError());
  }
}

getLoggedInUserOutcomeCallable VitalServicesClient::getLoggedInUserCallable(const getLoggedInUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getLoggedInUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getLoggedInUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getLoggedInUserAsync(const getLoggedInUserRequest& request, const getLoggedInUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getLoggedInUserAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getLoggedInUserAsyncHelper(const getLoggedInUserRequest& request, const getLoggedInUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getLoggedInUser(request), context);
}

getStripeCustomerOutcome VitalServicesClient::getStripeCustomer(const getStripeCustomerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-stripe-customer";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getStripeCustomerOutcome(getStripeCustomerResult(outcome.GetResult()));
  }
  else
  {
    return getStripeCustomerOutcome(outcome.GetError());
  }
}

getStripeCustomerOutcomeCallable VitalServicesClient::getStripeCustomerCallable(const getStripeCustomerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getStripeCustomerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getStripeCustomer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getStripeCustomerAsync(const getStripeCustomerRequest& request, const getStripeCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getStripeCustomerAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getStripeCustomerAsyncHelper(const getStripeCustomerRequest& request, const getStripeCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getStripeCustomer(request), context);
}

queryDoctorScheduleOutcome VitalServicesClient::queryDoctorSchedule(const queryDoctorScheduleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/query-doctor-schedule";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return queryDoctorScheduleOutcome(queryDoctorScheduleResult(outcome.GetResult()));
  }
  else
  {
    return queryDoctorScheduleOutcome(outcome.GetError());
  }
}

queryDoctorScheduleOutcomeCallable VitalServicesClient::queryDoctorScheduleCallable(const queryDoctorScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< queryDoctorScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->queryDoctorSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::queryDoctorScheduleAsync(const queryDoctorScheduleRequest& request, const queryDoctorScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->queryDoctorScheduleAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::queryDoctorScheduleAsyncHelper(const queryDoctorScheduleRequest& request, const queryDoctorScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, queryDoctorSchedule(request), context);
}

getAppointmentsWithUserOutcome VitalServicesClient::getAppointmentsWithUser(const getAppointmentsWithUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-appointments-with-user";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getAppointmentsWithUserOutcome(getAppointmentsWithUserResult(outcome.GetResult()));
  }
  else
  {
    return getAppointmentsWithUserOutcome(outcome.GetError());
  }
}

getAppointmentsWithUserOutcomeCallable VitalServicesClient::getAppointmentsWithUserCallable(const getAppointmentsWithUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getAppointmentsWithUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getAppointmentsWithUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getAppointmentsWithUserAsync(const getAppointmentsWithUserRequest& request, const getAppointmentsWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getAppointmentsWithUserAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getAppointmentsWithUserAsyncHelper(const getAppointmentsWithUserRequest& request, const getAppointmentsWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getAppointmentsWithUser(request), context);
}

urlForFileOutcome VitalServicesClient::urlForFile(const urlForFileRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/url-for-file";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return urlForFileOutcome(urlForFileResult(outcome.GetResult()));
  }
  else
  {
    return urlForFileOutcome(outcome.GetError());
  }
}

urlForFileOutcomeCallable VitalServicesClient::urlForFileCallable(const urlForFileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< urlForFileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->urlForFile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::urlForFileAsync(const urlForFileRequest& request, const urlForFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->urlForFileAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::urlForFileAsyncHelper(const urlForFileRequest& request, const urlForFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, urlForFile(request), context);
}

getAllDoctorServicesOutcome VitalServicesClient::getAllDoctorServices(const getAllDoctorServicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-all-doctor-services";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getAllDoctorServicesOutcome(getAllDoctorServicesResult(outcome.GetResult()));
  }
  else
  {
    return getAllDoctorServicesOutcome(outcome.GetError());
  }
}

getAllDoctorServicesOutcomeCallable VitalServicesClient::getAllDoctorServicesCallable(const getAllDoctorServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getAllDoctorServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getAllDoctorServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getAllDoctorServicesAsync(const getAllDoctorServicesRequest& request, const getAllDoctorServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getAllDoctorServicesAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getAllDoctorServicesAsyncHelper(const getAllDoctorServicesRequest& request, const getAllDoctorServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getAllDoctorServices(request), context);
}

scheduleAppointmentOutcome VitalServicesClient::scheduleAppointment(const scheduleAppointmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/schedule-appointment";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return scheduleAppointmentOutcome(scheduleAppointmentResult(outcome.GetResult()));
  }
  else
  {
    return scheduleAppointmentOutcome(outcome.GetError());
  }
}

scheduleAppointmentOutcomeCallable VitalServicesClient::scheduleAppointmentCallable(const scheduleAppointmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< scheduleAppointmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->scheduleAppointment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::scheduleAppointmentAsync(const scheduleAppointmentRequest& request, const scheduleAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->scheduleAppointmentAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::scheduleAppointmentAsyncHelper(const scheduleAppointmentRequest& request, const scheduleAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, scheduleAppointment(request), context);
}

cancelAppointmentOutcome VitalServicesClient::cancelAppointment(const cancelAppointmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/cancel-appointment";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return cancelAppointmentOutcome(cancelAppointmentResult(outcome.GetResult()));
  }
  else
  {
    return cancelAppointmentOutcome(outcome.GetError());
  }
}

cancelAppointmentOutcomeCallable VitalServicesClient::cancelAppointmentCallable(const cancelAppointmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< cancelAppointmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->cancelAppointment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::cancelAppointmentAsync(const cancelAppointmentRequest& request, const cancelAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->cancelAppointmentAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::cancelAppointmentAsyncHelper(const cancelAppointmentRequest& request, const cancelAppointmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, cancelAppointment(request), context);
}

updateUserOutcome VitalServicesClient::updateUser(const updateUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/update-user";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return updateUserOutcome(updateUserResult(outcome.GetResult()));
  }
  else
  {
    return updateUserOutcome(outcome.GetError());
  }
}

updateUserOutcomeCallable VitalServicesClient::updateUserCallable(const updateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< updateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->updateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::updateUserAsync(const updateUserRequest& request, const updateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->updateUserAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::updateUserAsyncHelper(const updateUserRequest& request, const updateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, updateUser(request), context);
}

updateDoctorOutcome VitalServicesClient::updateDoctor(const updateDoctorRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/update-doctor";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return updateDoctorOutcome(updateDoctorResult(outcome.GetResult()));
  }
  else
  {
    return updateDoctorOutcome(outcome.GetError());
  }
}

updateDoctorOutcomeCallable VitalServicesClient::updateDoctorCallable(const updateDoctorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< updateDoctorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->updateDoctor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::updateDoctorAsync(const updateDoctorRequest& request, const updateDoctorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->updateDoctorAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::updateDoctorAsyncHelper(const updateDoctorRequest& request, const updateDoctorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, updateDoctor(request), context);
}

getAppointmentPaymentMethodOutcome VitalServicesClient::getAppointmentPaymentMethod(const getAppointmentPaymentMethodRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-appointment-payment-method";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getAppointmentPaymentMethodOutcome(getAppointmentPaymentMethodResult(outcome.GetResult()));
  }
  else
  {
    return getAppointmentPaymentMethodOutcome(outcome.GetError());
  }
}

getAppointmentPaymentMethodOutcomeCallable VitalServicesClient::getAppointmentPaymentMethodCallable(const getAppointmentPaymentMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getAppointmentPaymentMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getAppointmentPaymentMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getAppointmentPaymentMethodAsync(const getAppointmentPaymentMethodRequest& request, const getAppointmentPaymentMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getAppointmentPaymentMethodAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getAppointmentPaymentMethodAsyncHelper(const getAppointmentPaymentMethodRequest& request, const getAppointmentPaymentMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getAppointmentPaymentMethod(request), context);
}

searchForDoctorsOutcome VitalServicesClient::searchForDoctors(const searchForDoctorsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/search-for-doctors";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return searchForDoctorsOutcome(searchForDoctorsResult(outcome.GetResult()));
  }
  else
  {
    return searchForDoctorsOutcome(outcome.GetError());
  }
}

searchForDoctorsOutcomeCallable VitalServicesClient::searchForDoctorsCallable(const searchForDoctorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< searchForDoctorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->searchForDoctors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::searchForDoctorsAsync(const searchForDoctorsRequest& request, const searchForDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->searchForDoctorsAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::searchForDoctorsAsyncHelper(const searchForDoctorsRequest& request, const searchForDoctorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, searchForDoctors(request), context);
}

setDefaultPaymentSourceOutcome VitalServicesClient::setDefaultPaymentSource(const setDefaultPaymentSourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/set-default-payment-source";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return setDefaultPaymentSourceOutcome(setDefaultPaymentSourceResult(outcome.GetResult()));
  }
  else
  {
    return setDefaultPaymentSourceOutcome(outcome.GetError());
  }
}

setDefaultPaymentSourceOutcomeCallable VitalServicesClient::setDefaultPaymentSourceCallable(const setDefaultPaymentSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< setDefaultPaymentSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->setDefaultPaymentSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::setDefaultPaymentSourceAsync(const setDefaultPaymentSourceRequest& request, const setDefaultPaymentSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->setDefaultPaymentSourceAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::setDefaultPaymentSourceAsyncHelper(const setDefaultPaymentSourceRequest& request, const setDefaultPaymentSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, setDefaultPaymentSource(request), context);
}

getAppointmentBillOutcome VitalServicesClient::getAppointmentBill(const getAppointmentBillRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-appointment-bill";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getAppointmentBillOutcome(getAppointmentBillResult(outcome.GetResult()));
  }
  else
  {
    return getAppointmentBillOutcome(outcome.GetError());
  }
}

getAppointmentBillOutcomeCallable VitalServicesClient::getAppointmentBillCallable(const getAppointmentBillRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getAppointmentBillOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getAppointmentBill(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getAppointmentBillAsync(const getAppointmentBillRequest& request, const getAppointmentBillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getAppointmentBillAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getAppointmentBillAsyncHelper(const getAppointmentBillRequest& request, const getAppointmentBillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getAppointmentBill(request), context);
}

registerUserOutcome VitalServicesClient::registerUser(const registerUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/register-user";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return registerUserOutcome(registerUserResult(outcome.GetResult()));
  }
  else
  {
    return registerUserOutcome(outcome.GetError());
  }
}

registerUserOutcomeCallable VitalServicesClient::registerUserCallable(const registerUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< registerUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->registerUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::registerUserAsync(const registerUserRequest& request, const registerUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->registerUserAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::registerUserAsyncHelper(const registerUserRequest& request, const registerUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, registerUser(request), context);
}

getDoctorSpecialtiesOutcome VitalServicesClient::getDoctorSpecialties(const getDoctorSpecialtiesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-doctor-specialties";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getDoctorSpecialtiesOutcome(getDoctorSpecialtiesResult(outcome.GetResult()));
  }
  else
  {
    return getDoctorSpecialtiesOutcome(outcome.GetError());
  }
}

getDoctorSpecialtiesOutcomeCallable VitalServicesClient::getDoctorSpecialtiesCallable(const getDoctorSpecialtiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getDoctorSpecialtiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getDoctorSpecialties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getDoctorSpecialtiesAsync(const getDoctorSpecialtiesRequest& request, const getDoctorSpecialtiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getDoctorSpecialtiesAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getDoctorSpecialtiesAsyncHelper(const getDoctorSpecialtiesRequest& request, const getDoctorSpecialtiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getDoctorSpecialties(request), context);
}

