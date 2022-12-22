/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MultiRegionAccessPointReport.h>
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
  class GetMultiRegionAccessPointResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult();
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A container element containing the details of the requested Multi-Region
     * Access Point.</p>
     */
    inline const MultiRegionAccessPointReport& GetAccessPoint() const{ return m_accessPoint; }

    /**
     * <p>A container element containing the details of the requested Multi-Region
     * Access Point.</p>
     */
    inline void SetAccessPoint(const MultiRegionAccessPointReport& value) { m_accessPoint = value; }

    /**
     * <p>A container element containing the details of the requested Multi-Region
     * Access Point.</p>
     */
    inline void SetAccessPoint(MultiRegionAccessPointReport&& value) { m_accessPoint = std::move(value); }

    /**
     * <p>A container element containing the details of the requested Multi-Region
     * Access Point.</p>
     */
    inline GetMultiRegionAccessPointResult& WithAccessPoint(const MultiRegionAccessPointReport& value) { SetAccessPoint(value); return *this;}

    /**
     * <p>A container element containing the details of the requested Multi-Region
     * Access Point.</p>
     */
    inline GetMultiRegionAccessPointResult& WithAccessPoint(MultiRegionAccessPointReport&& value) { SetAccessPoint(std::move(value)); return *this;}

  private:

    MultiRegionAccessPointReport m_accessPoint;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
