/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionList.h>
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
  class ListFunctions2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListFunctions2020_05_31Result();
    AWS_CLOUDFRONT_API ListFunctions2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListFunctions2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of CloudFront functions.</p>
     */
    inline const FunctionList& GetFunctionList() const{ return m_functionList; }

    /**
     * <p>A list of CloudFront functions.</p>
     */
    inline void SetFunctionList(const FunctionList& value) { m_functionList = value; }

    /**
     * <p>A list of CloudFront functions.</p>
     */
    inline void SetFunctionList(FunctionList&& value) { m_functionList = std::move(value); }

    /**
     * <p>A list of CloudFront functions.</p>
     */
    inline ListFunctions2020_05_31Result& WithFunctionList(const FunctionList& value) { SetFunctionList(value); return *this;}

    /**
     * <p>A list of CloudFront functions.</p>
     */
    inline ListFunctions2020_05_31Result& WithFunctionList(FunctionList&& value) { SetFunctionList(std::move(value)); return *this;}

  private:

    FunctionList m_functionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
