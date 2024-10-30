/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ServiceRevision.h>
#include <aws/ecs/model/Failure.h>
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
namespace ECS
{
namespace Model
{
  class DescribeServiceRevisionsResult
  {
  public:
    AWS_ECS_API DescribeServiceRevisionsResult();
    AWS_ECS_API DescribeServiceRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeServiceRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of service revisions described.</p>
     */
    inline const Aws::Vector<ServiceRevision>& GetServiceRevisions() const{ return m_serviceRevisions; }
    inline void SetServiceRevisions(const Aws::Vector<ServiceRevision>& value) { m_serviceRevisions = value; }
    inline void SetServiceRevisions(Aws::Vector<ServiceRevision>&& value) { m_serviceRevisions = std::move(value); }
    inline DescribeServiceRevisionsResult& WithServiceRevisions(const Aws::Vector<ServiceRevision>& value) { SetServiceRevisions(value); return *this;}
    inline DescribeServiceRevisionsResult& WithServiceRevisions(Aws::Vector<ServiceRevision>&& value) { SetServiceRevisions(std::move(value)); return *this;}
    inline DescribeServiceRevisionsResult& AddServiceRevisions(const ServiceRevision& value) { m_serviceRevisions.push_back(value); return *this; }
    inline DescribeServiceRevisionsResult& AddServiceRevisions(ServiceRevision&& value) { m_serviceRevisions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }
    inline DescribeServiceRevisionsResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}
    inline DescribeServiceRevisionsResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}
    inline DescribeServiceRevisionsResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }
    inline DescribeServiceRevisionsResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeServiceRevisionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeServiceRevisionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeServiceRevisionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceRevision> m_serviceRevisions;

    Aws::Vector<Failure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
