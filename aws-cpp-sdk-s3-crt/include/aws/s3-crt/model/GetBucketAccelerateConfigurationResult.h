/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/BucketAccelerateStatus.h>
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
namespace S3Crt
{
namespace Model
{
  class GetBucketAccelerateConfigurationResult
  {
  public:
    AWS_S3CRT_API GetBucketAccelerateConfigurationResult();
    AWS_S3CRT_API GetBucketAccelerateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CRT_API GetBucketAccelerateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The accelerate configuration of the bucket.</p>
     */
    inline const BucketAccelerateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The accelerate configuration of the bucket.</p>
     */
    inline void SetStatus(const BucketAccelerateStatus& value) { m_status = value; }

    /**
     * <p>The accelerate configuration of the bucket.</p>
     */
    inline void SetStatus(BucketAccelerateStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The accelerate configuration of the bucket.</p>
     */
    inline GetBucketAccelerateConfigurationResult& WithStatus(const BucketAccelerateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The accelerate configuration of the bucket.</p>
     */
    inline GetBucketAccelerateConfigurationResult& WithStatus(BucketAccelerateStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    BucketAccelerateStatus m_status;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
