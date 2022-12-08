/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateMultiRegionAccessPointResult
  {
  public:
    AWS_S3CONTROL_API CreateMultiRegionAccessPointResult();
    AWS_S3CONTROL_API CreateMultiRegionAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateMultiRegionAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline const Aws::String& GetRequestTokenARN() const{ return m_requestTokenARN; }

    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline void SetRequestTokenARN(const Aws::String& value) { m_requestTokenARN = value; }

    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline void SetRequestTokenARN(Aws::String&& value) { m_requestTokenARN = std::move(value); }

    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline void SetRequestTokenARN(const char* value) { m_requestTokenARN.assign(value); }

    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline CreateMultiRegionAccessPointResult& WithRequestTokenARN(const Aws::String& value) { SetRequestTokenARN(value); return *this;}

    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline CreateMultiRegionAccessPointResult& WithRequestTokenARN(Aws::String&& value) { SetRequestTokenARN(std::move(value)); return *this;}

    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline CreateMultiRegionAccessPointResult& WithRequestTokenARN(const char* value) { SetRequestTokenARN(value); return *this;}

  private:

    Aws::String m_requestTokenARN;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
