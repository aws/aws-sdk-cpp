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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Job.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API DescribeJobResult
  {
  public:
    DescribeJobResult();
    DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An S3 link to the job document.</p>
     */
    inline const Aws::String& GetDocumentSource() const{ return m_documentSource; }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(const Aws::String& value) { m_documentSource = value; }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(Aws::String&& value) { m_documentSource = std::move(value); }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(const char* value) { m_documentSource.assign(value); }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline DescribeJobResult& WithDocumentSource(const Aws::String& value) { SetDocumentSource(value); return *this;}

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline DescribeJobResult& WithDocumentSource(Aws::String&& value) { SetDocumentSource(std::move(value)); return *this;}

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline DescribeJobResult& WithDocumentSource(const char* value) { SetDocumentSource(value); return *this;}


    /**
     * <p>Information about the job.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>Information about the job.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>Information about the job.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>Information about the job.</p>
     */
    inline DescribeJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>Information about the job.</p>
     */
    inline DescribeJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Aws::String m_documentSource;

    Job m_job;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
