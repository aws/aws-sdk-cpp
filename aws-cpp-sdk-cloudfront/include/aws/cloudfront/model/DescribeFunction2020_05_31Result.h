/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionSummary.h>
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
namespace CloudFront
{
namespace Model
{
  class DescribeFunction2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API DescribeFunction2020_05_31Result();
    AWS_CLOUDFRONT_API DescribeFunction2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API DescribeFunction2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains configuration information and metadata about a CloudFront
     * function.</p>
     */
    inline const FunctionSummary& GetFunctionSummary() const{ return m_functionSummary; }

    /**
     * <p>Contains configuration information and metadata about a CloudFront
     * function.</p>
     */
    inline void SetFunctionSummary(const FunctionSummary& value) { m_functionSummary = value; }

    /**
     * <p>Contains configuration information and metadata about a CloudFront
     * function.</p>
     */
    inline void SetFunctionSummary(FunctionSummary&& value) { m_functionSummary = std::move(value); }

    /**
     * <p>Contains configuration information and metadata about a CloudFront
     * function.</p>
     */
    inline DescribeFunction2020_05_31Result& WithFunctionSummary(const FunctionSummary& value) { SetFunctionSummary(value); return *this;}

    /**
     * <p>Contains configuration information and metadata about a CloudFront
     * function.</p>
     */
    inline DescribeFunction2020_05_31Result& WithFunctionSummary(FunctionSummary&& value) { SetFunctionSummary(std::move(value)); return *this;}


    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline DescribeFunction2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline DescribeFunction2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline DescribeFunction2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    FunctionSummary m_functionSummary;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
