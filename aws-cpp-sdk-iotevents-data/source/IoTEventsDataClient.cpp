/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/iotevents-data/IoTEventsDataClient.h>
#include <aws/iotevents-data/IoTEventsDataEndpoint.h>
#include <aws/iotevents-data/IoTEventsDataErrorMarshaller.h>
#include <aws/iotevents-data/model/BatchAcknowledgeAlarmRequest.h>
#include <aws/iotevents-data/model/BatchDeleteDetectorRequest.h>
#include <aws/iotevents-data/model/BatchDisableAlarmRequest.h>
#include <aws/iotevents-data/model/BatchEnableAlarmRequest.h>
#include <aws/iotevents-data/model/BatchPutMessageRequest.h>
#include <aws/iotevents-data/model/BatchResetAlarmRequest.h>
#include <aws/iotevents-data/model/BatchSnoozeAlarmRequest.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorRequest.h>
#include <aws/iotevents-data/model/DescribeAlarmRequest.h>
#include <aws/iotevents-data/model/DescribeDetectorRequest.h>
#include <aws/iotevents-data/model/ListAlarmsRequest.h>
#include <aws/iotevents-data/model/ListDetectorsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTEventsData;
using namespace Aws::IoTEventsData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ioteventsdata";
static const char* ALLOCATION_TAG = "IoTEventsDataClient";

IoTEventsDataClient::IoTEventsDataClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTEventsDataClient::IoTEventsDataClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTEventsDataClient::IoTEventsDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTEventsDataClient::~IoTEventsDataClient()
{
}

void IoTEventsDataClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT Events Data");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTEventsDataEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTEventsDataClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BatchAcknowledgeAlarmOutcome IoTEventsDataClient::BatchAcknowledgeAlarm(const BatchAcknowledgeAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alarms/acknowledge");
  return BatchAcknowledgeAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAcknowledgeAlarmOutcomeCallable IoTEventsDataClient::BatchAcknowledgeAlarmCallable(const BatchAcknowledgeAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAcknowledgeAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAcknowledgeAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchAcknowledgeAlarmAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchAcknowledgeAlarmRequest& request, const BatchAcknowledgeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAcknowledgeAlarm(request), context);
}

void IoTEventsDataClient::BatchAcknowledgeAlarmAsync(const BatchAcknowledgeAlarmRequest& request, const BatchAcknowledgeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchAcknowledgeAlarmAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteDetectorOutcome IoTEventsDataClient::BatchDeleteDetector(const BatchDeleteDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detectors/delete");
  return BatchDeleteDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteDetectorOutcomeCallable IoTEventsDataClient::BatchDeleteDetectorCallable(const BatchDeleteDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchDeleteDetectorAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchDeleteDetectorRequest& request, const BatchDeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteDetector(request), context);
}

void IoTEventsDataClient::BatchDeleteDetectorAsync(const BatchDeleteDetectorRequest& request, const BatchDeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchDeleteDetectorAsyncHelper( this, request, handler, context ); } );
}

BatchDisableAlarmOutcome IoTEventsDataClient::BatchDisableAlarm(const BatchDisableAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alarms/disable");
  return BatchDisableAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisableAlarmOutcomeCallable IoTEventsDataClient::BatchDisableAlarmCallable(const BatchDisableAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisableAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisableAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchDisableAlarmAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchDisableAlarmRequest& request, const BatchDisableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisableAlarm(request), context);
}

void IoTEventsDataClient::BatchDisableAlarmAsync(const BatchDisableAlarmRequest& request, const BatchDisableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchDisableAlarmAsyncHelper( this, request, handler, context ); } );
}

BatchEnableAlarmOutcome IoTEventsDataClient::BatchEnableAlarm(const BatchEnableAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alarms/enable");
  return BatchEnableAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchEnableAlarmOutcomeCallable IoTEventsDataClient::BatchEnableAlarmCallable(const BatchEnableAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchEnableAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchEnableAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchEnableAlarmAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchEnableAlarmRequest& request, const BatchEnableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchEnableAlarm(request), context);
}

void IoTEventsDataClient::BatchEnableAlarmAsync(const BatchEnableAlarmRequest& request, const BatchEnableAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchEnableAlarmAsyncHelper( this, request, handler, context ); } );
}

BatchPutMessageOutcome IoTEventsDataClient::BatchPutMessage(const BatchPutMessageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/inputs/messages");
  return BatchPutMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchPutMessageOutcomeCallable IoTEventsDataClient::BatchPutMessageCallable(const BatchPutMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchPutMessageAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchPutMessage(request), context);
}

void IoTEventsDataClient::BatchPutMessageAsync(const BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchPutMessageAsyncHelper( this, request, handler, context ); } );
}

BatchResetAlarmOutcome IoTEventsDataClient::BatchResetAlarm(const BatchResetAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alarms/reset");
  return BatchResetAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchResetAlarmOutcomeCallable IoTEventsDataClient::BatchResetAlarmCallable(const BatchResetAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchResetAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchResetAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchResetAlarmAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchResetAlarmRequest& request, const BatchResetAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchResetAlarm(request), context);
}

void IoTEventsDataClient::BatchResetAlarmAsync(const BatchResetAlarmRequest& request, const BatchResetAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchResetAlarmAsyncHelper( this, request, handler, context ); } );
}

BatchSnoozeAlarmOutcome IoTEventsDataClient::BatchSnoozeAlarm(const BatchSnoozeAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alarms/snooze");
  return BatchSnoozeAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchSnoozeAlarmOutcomeCallable IoTEventsDataClient::BatchSnoozeAlarmCallable(const BatchSnoozeAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchSnoozeAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchSnoozeAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchSnoozeAlarmAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchSnoozeAlarmRequest& request, const BatchSnoozeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchSnoozeAlarm(request), context);
}

void IoTEventsDataClient::BatchSnoozeAlarmAsync(const BatchSnoozeAlarmRequest& request, const BatchSnoozeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchSnoozeAlarmAsyncHelper( this, request, handler, context ); } );
}

BatchUpdateDetectorOutcome IoTEventsDataClient::BatchUpdateDetector(const BatchUpdateDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detectors");
  return BatchUpdateDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateDetectorOutcomeCallable IoTEventsDataClient::BatchUpdateDetectorCallable(const BatchUpdateDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientBatchUpdateDetectorAsyncHelper(IoTEventsDataClient const * const clientThis, const BatchUpdateDetectorRequest& request, const BatchUpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchUpdateDetector(request), context);
}

void IoTEventsDataClient::BatchUpdateDetectorAsync(const BatchUpdateDetectorRequest& request, const BatchUpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientBatchUpdateDetectorAsyncHelper( this, request, handler, context ); } );
}

DescribeAlarmOutcome IoTEventsDataClient::DescribeAlarm(const DescribeAlarmRequest& request) const
{
  if (!request.AlarmModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAlarm", "Required field: AlarmModelName, is not set");
    return DescribeAlarmOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AlarmModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alarms/");
  uri.AddPathSegment(request.GetAlarmModelName());
  uri.AddPathSegments("/keyValues/");
  return DescribeAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlarmOutcomeCallable IoTEventsDataClient::DescribeAlarmCallable(const DescribeAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientDescribeAlarmAsyncHelper(IoTEventsDataClient const * const clientThis, const DescribeAlarmRequest& request, const DescribeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAlarm(request), context);
}

void IoTEventsDataClient::DescribeAlarmAsync(const DescribeAlarmRequest& request, const DescribeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientDescribeAlarmAsyncHelper( this, request, handler, context ); } );
}

DescribeDetectorOutcome IoTEventsDataClient::DescribeDetector(const DescribeDetectorRequest& request) const
{
  if (!request.DetectorModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDetector", "Required field: DetectorModelName, is not set");
    return DescribeDetectorOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detectors/");
  uri.AddPathSegment(request.GetDetectorModelName());
  uri.AddPathSegments("/keyValues/");
  return DescribeDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDetectorOutcomeCallable IoTEventsDataClient::DescribeDetectorCallable(const DescribeDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientDescribeDetectorAsyncHelper(IoTEventsDataClient const * const clientThis, const DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDetector(request), context);
}

void IoTEventsDataClient::DescribeDetectorAsync(const DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientDescribeDetectorAsyncHelper( this, request, handler, context ); } );
}

ListAlarmsOutcome IoTEventsDataClient::ListAlarms(const ListAlarmsRequest& request) const
{
  if (!request.AlarmModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAlarms", "Required field: AlarmModelName, is not set");
    return ListAlarmsOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AlarmModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alarms/");
  uri.AddPathSegment(request.GetAlarmModelName());
  return ListAlarmsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAlarmsOutcomeCallable IoTEventsDataClient::ListAlarmsCallable(const ListAlarmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlarmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlarms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientListAlarmsAsyncHelper(IoTEventsDataClient const * const clientThis, const ListAlarmsRequest& request, const ListAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAlarms(request), context);
}

void IoTEventsDataClient::ListAlarmsAsync(const ListAlarmsRequest& request, const ListAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientListAlarmsAsyncHelper( this, request, handler, context ); } );
}

ListDetectorsOutcome IoTEventsDataClient::ListDetectors(const ListDetectorsRequest& request) const
{
  if (!request.DetectorModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDetectors", "Required field: DetectorModelName, is not set");
    return ListDetectorsOutcome(Aws::Client::AWSError<IoTEventsDataErrors>(IoTEventsDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detectors/");
  uri.AddPathSegment(request.GetDetectorModelName());
  return ListDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDetectorsOutcomeCallable IoTEventsDataClient::ListDetectorsCallable(const ListDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsDataClientListDetectorsAsyncHelper(IoTEventsDataClient const * const clientThis, const ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDetectors(request), context);
}

void IoTEventsDataClient::ListDetectorsAsync(const ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTEventsDataClientListDetectorsAsyncHelper( this, request, handler, context ); } );
}

