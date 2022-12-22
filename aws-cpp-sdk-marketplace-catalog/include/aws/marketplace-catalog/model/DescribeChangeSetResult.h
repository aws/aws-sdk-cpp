/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/ChangeStatus.h>
#include <aws/marketplace-catalog/model/FailureCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/ChangeSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{
  class DescribeChangeSetResult
  {
  public:
    AWS_MARKETPLACECATALOG_API DescribeChangeSetResult();
    AWS_MARKETPLACECATALOG_API DescribeChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API DescribeChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetId = value; }

    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetId = std::move(value); }

    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline void SetChangeSetId(const char* value) { m_changeSetId.assign(value); }

    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}


    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline const Aws::String& GetChangeSetArn() const{ return m_changeSetArn; }

    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline void SetChangeSetArn(const Aws::String& value) { m_changeSetArn = value; }

    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline void SetChangeSetArn(Aws::String&& value) { m_changeSetArn = std::move(value); }

    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline void SetChangeSetArn(const char* value) { m_changeSetArn.assign(value); }

    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetArn(const Aws::String& value) { SetChangeSetArn(value); return *this;}

    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetArn(Aws::String&& value) { SetChangeSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetArn(const char* value) { SetChangeSetArn(value); return *this;}


    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetName = value; }

    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetName = std::move(value); }

    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetName.assign(value); }

    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}

    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTime = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline DescribeChangeSetResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline DescribeChangeSetResult& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline DescribeChangeSetResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTime = value; }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTime = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline void SetEndTime(const char* value) { m_endTime.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline DescribeChangeSetResult& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline DescribeChangeSetResult& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline DescribeChangeSetResult& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * <p>The status of the change request.</p>
     */
    inline const ChangeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the change request.</p>
     */
    inline void SetStatus(const ChangeStatus& value) { m_status = value; }

    /**
     * <p>The status of the change request.</p>
     */
    inline void SetStatus(ChangeStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the change request.</p>
     */
    inline DescribeChangeSetResult& WithStatus(const ChangeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the change request.</p>
     */
    inline DescribeChangeSetResult& WithStatus(ChangeStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code>), or <code>SERVER_FAULT</code>, which
     * means that there is a problem in the system, and you should retry your
     * request.</p>
     */
    inline const FailureCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code>), or <code>SERVER_FAULT</code>, which
     * means that there is a problem in the system, and you should retry your
     * request.</p>
     */
    inline void SetFailureCode(const FailureCode& value) { m_failureCode = value; }

    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code>), or <code>SERVER_FAULT</code>, which
     * means that there is a problem in the system, and you should retry your
     * request.</p>
     */
    inline void SetFailureCode(FailureCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code>), or <code>SERVER_FAULT</code>, which
     * means that there is a problem in the system, and you should retry your
     * request.</p>
     */
    inline DescribeChangeSetResult& WithFailureCode(const FailureCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code>), or <code>SERVER_FAULT</code>, which
     * means that there is a problem in the system, and you should retry your
     * request.</p>
     */
    inline DescribeChangeSetResult& WithFailureCode(FailureCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline const Aws::String& GetFailureDescription() const{ return m_failureDescription; }

    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline void SetFailureDescription(const Aws::String& value) { m_failureDescription = value; }

    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline void SetFailureDescription(Aws::String&& value) { m_failureDescription = std::move(value); }

    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline void SetFailureDescription(const char* value) { m_failureDescription.assign(value); }

    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline DescribeChangeSetResult& WithFailureDescription(const Aws::String& value) { SetFailureDescription(value); return *this;}

    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline DescribeChangeSetResult& WithFailureDescription(Aws::String&& value) { SetFailureDescription(std::move(value)); return *this;}

    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline DescribeChangeSetResult& WithFailureDescription(const char* value) { SetFailureDescription(value); return *this;}


    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline const Aws::Vector<ChangeSummary>& GetChangeSet() const{ return m_changeSet; }

    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline void SetChangeSet(const Aws::Vector<ChangeSummary>& value) { m_changeSet = value; }

    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline void SetChangeSet(Aws::Vector<ChangeSummary>&& value) { m_changeSet = std::move(value); }

    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline DescribeChangeSetResult& WithChangeSet(const Aws::Vector<ChangeSummary>& value) { SetChangeSet(value); return *this;}

    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline DescribeChangeSetResult& WithChangeSet(Aws::Vector<ChangeSummary>&& value) { SetChangeSet(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline DescribeChangeSetResult& AddChangeSet(const ChangeSummary& value) { m_changeSet.push_back(value); return *this; }

    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline DescribeChangeSetResult& AddChangeSet(ChangeSummary&& value) { m_changeSet.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_changeSetId;

    Aws::String m_changeSetArn;

    Aws::String m_changeSetName;

    Aws::String m_startTime;

    Aws::String m_endTime;

    ChangeStatus m_status;

    FailureCode m_failureCode;

    Aws::String m_failureDescription;

    Aws::Vector<ChangeSummary> m_changeSet;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
