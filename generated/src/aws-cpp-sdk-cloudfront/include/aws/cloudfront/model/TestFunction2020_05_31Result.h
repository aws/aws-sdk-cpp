/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/TestResult.h>
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
  class TestFunction2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API TestFunction2020_05_31Result();
    AWS_CLOUDFRONT_API TestFunction2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API TestFunction2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An object that represents the result of running the function with the
     * provided event object.</p>
     */
    inline const TestResult& GetTestResult() const{ return m_testResult; }

    /**
     * <p>An object that represents the result of running the function with the
     * provided event object.</p>
     */
    inline void SetTestResult(const TestResult& value) { m_testResult = value; }

    /**
     * <p>An object that represents the result of running the function with the
     * provided event object.</p>
     */
    inline void SetTestResult(TestResult&& value) { m_testResult = std::move(value); }

    /**
     * <p>An object that represents the result of running the function with the
     * provided event object.</p>
     */
    inline TestFunction2020_05_31Result& WithTestResult(const TestResult& value) { SetTestResult(value); return *this;}

    /**
     * <p>An object that represents the result of running the function with the
     * provided event object.</p>
     */
    inline TestFunction2020_05_31Result& WithTestResult(TestResult&& value) { SetTestResult(std::move(value)); return *this;}

  private:

    TestResult m_testResult;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
