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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationSummary.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The ListOperations response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API ListOperationsResult
  {
  public:
    ListOperationsResult();
    ListOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline const Aws::Vector<OperationSummary>& GetOperations() const{ return m_operations; }

    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline void SetOperations(const Aws::Vector<OperationSummary>& value) { m_operations = value; }

    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline void SetOperations(Aws::Vector<OperationSummary>&& value) { m_operations = std::move(value); }

    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline ListOperationsResult& WithOperations(const Aws::Vector<OperationSummary>& value) { SetOperations(value); return *this;}

    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline ListOperationsResult& WithOperations(Aws::Vector<OperationSummary>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline ListOperationsResult& AddOperations(const OperationSummary& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline ListOperationsResult& AddOperations(OperationSummary&& value) { m_operations.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const{ return m_nextPageMarker; }

    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline void SetNextPageMarker(const Aws::String& value) { m_nextPageMarker = value; }

    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline void SetNextPageMarker(Aws::String&& value) { m_nextPageMarker = std::move(value); }

    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline void SetNextPageMarker(const char* value) { m_nextPageMarker.assign(value); }

    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline ListOperationsResult& WithNextPageMarker(const Aws::String& value) { SetNextPageMarker(value); return *this;}

    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline ListOperationsResult& WithNextPageMarker(Aws::String&& value) { SetNextPageMarker(std::move(value)); return *this;}

    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline ListOperationsResult& WithNextPageMarker(const char* value) { SetNextPageMarker(value); return *this;}

  private:

    Aws::Vector<OperationSummary> m_operations;

    Aws::String m_nextPageMarker;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
