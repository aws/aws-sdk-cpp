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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribeTagOptionResult
  {
  public:
    DescribeTagOptionResult();
    DescribeTagOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTagOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the TagOption.</p>
     */
    inline const TagOptionDetail& GetTagOptionDetail() const{ return m_tagOptionDetail; }

    /**
     * <p>Information about the TagOption.</p>
     */
    inline void SetTagOptionDetail(const TagOptionDetail& value) { m_tagOptionDetail = value; }

    /**
     * <p>Information about the TagOption.</p>
     */
    inline void SetTagOptionDetail(TagOptionDetail&& value) { m_tagOptionDetail = std::move(value); }

    /**
     * <p>Information about the TagOption.</p>
     */
    inline DescribeTagOptionResult& WithTagOptionDetail(const TagOptionDetail& value) { SetTagOptionDetail(value); return *this;}

    /**
     * <p>Information about the TagOption.</p>
     */
    inline DescribeTagOptionResult& WithTagOptionDetail(TagOptionDetail&& value) { SetTagOptionDetail(std::move(value)); return *this;}

  private:

    TagOptionDetail m_tagOptionDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
