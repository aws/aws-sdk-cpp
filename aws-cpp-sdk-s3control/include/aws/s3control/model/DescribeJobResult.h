/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeJobResult
  {
  public:
    AWS_S3CONTROL_API DescribeJobResult();
    AWS_S3CONTROL_API DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
