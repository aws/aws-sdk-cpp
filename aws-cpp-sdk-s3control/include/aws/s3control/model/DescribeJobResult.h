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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/JobDescriptor.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class AWS_S3CONTROL_API DescribeJobResult
  {
  public:
    DescribeJobResult();
    DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains the configuration parameters and status for the job specified in the
     * <code>Describe Job</code> request.</p>
     */
    inline const JobDescriptor& GetJob() const{ return m_job; }

    /**
     * <p>Contains the configuration parameters and status for the job specified in the
     * <code>Describe Job</code> request.</p>
     */
    inline void SetJob(const JobDescriptor& value) { m_job = value; }

    /**
     * <p>Contains the configuration parameters and status for the job specified in the
     * <code>Describe Job</code> request.</p>
     */
    inline void SetJob(JobDescriptor&& value) { m_job = std::move(value); }

    /**
     * <p>Contains the configuration parameters and status for the job specified in the
     * <code>Describe Job</code> request.</p>
     */
    inline DescribeJobResult& WithJob(const JobDescriptor& value) { SetJob(value); return *this;}

    /**
     * <p>Contains the configuration parameters and status for the job specified in the
     * <code>Describe Job</code> request.</p>
     */
    inline DescribeJobResult& WithJob(JobDescriptor&& value) { SetJob(std::move(value)); return *this;}

  private:

    JobDescriptor m_job;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
