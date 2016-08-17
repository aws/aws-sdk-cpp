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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/RecordOutput.h>

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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribeRecordResult
  {
  public:
    DescribeRecordResult();
    DescribeRecordResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRecordResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Detailed record information for the specified product. </p>
     */
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }

    /**
     * <p>Detailed record information for the specified product. </p>
     */
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }

    /**
     * <p>Detailed record information for the specified product. </p>
     */
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = value; }

    /**
     * <p>Detailed record information for the specified product. </p>
     */
    inline DescribeRecordResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}

    /**
     * <p>Detailed record information for the specified product. </p>
     */
    inline DescribeRecordResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(value); return *this;}

    /**
     * <p>A list of outputs for the specified Product object created as the result of a
     * request. For example, a CloudFormation-backed product that creates an S3 bucket
     * would have an output for the S3 bucket URL.</p>
     */
    inline const Aws::Vector<RecordOutput>& GetRecordOutputs() const{ return m_recordOutputs; }

    /**
     * <p>A list of outputs for the specified Product object created as the result of a
     * request. For example, a CloudFormation-backed product that creates an S3 bucket
     * would have an output for the S3 bucket URL.</p>
     */
    inline void SetRecordOutputs(const Aws::Vector<RecordOutput>& value) { m_recordOutputs = value; }

    /**
     * <p>A list of outputs for the specified Product object created as the result of a
     * request. For example, a CloudFormation-backed product that creates an S3 bucket
     * would have an output for the S3 bucket URL.</p>
     */
    inline void SetRecordOutputs(Aws::Vector<RecordOutput>&& value) { m_recordOutputs = value; }

    /**
     * <p>A list of outputs for the specified Product object created as the result of a
     * request. For example, a CloudFormation-backed product that creates an S3 bucket
     * would have an output for the S3 bucket URL.</p>
     */
    inline DescribeRecordResult& WithRecordOutputs(const Aws::Vector<RecordOutput>& value) { SetRecordOutputs(value); return *this;}

    /**
     * <p>A list of outputs for the specified Product object created as the result of a
     * request. For example, a CloudFormation-backed product that creates an S3 bucket
     * would have an output for the S3 bucket URL.</p>
     */
    inline DescribeRecordResult& WithRecordOutputs(Aws::Vector<RecordOutput>&& value) { SetRecordOutputs(value); return *this;}

    /**
     * <p>A list of outputs for the specified Product object created as the result of a
     * request. For example, a CloudFormation-backed product that creates an S3 bucket
     * would have an output for the S3 bucket URL.</p>
     */
    inline DescribeRecordResult& AddRecordOutputs(const RecordOutput& value) { m_recordOutputs.push_back(value); return *this; }

    /**
     * <p>A list of outputs for the specified Product object created as the result of a
     * request. For example, a CloudFormation-backed product that creates an S3 bucket
     * would have an output for the S3 bucket URL.</p>
     */
    inline DescribeRecordResult& AddRecordOutputs(RecordOutput&& value) { m_recordOutputs.push_back(value); return *this; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeRecordResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeRecordResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeRecordResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:
    RecordDetail m_recordDetail;
    Aws::Vector<RecordOutput> m_recordOutputs;
    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
