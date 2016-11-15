/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/Tag.h>

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
  class AWS_SERVICECATALOG_API DescribeProductAsAdminResult
  {
  public:
    DescribeProductAsAdminResult();
    DescribeProductAsAdminResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProductAsAdminResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Detailed product view information.</p>
     */
    inline const ProductViewDetail& GetProductViewDetail() const{ return m_productViewDetail; }

    /**
     * <p>Detailed product view information.</p>
     */
    inline void SetProductViewDetail(const ProductViewDetail& value) { m_productViewDetail = value; }

    /**
     * <p>Detailed product view information.</p>
     */
    inline void SetProductViewDetail(ProductViewDetail&& value) { m_productViewDetail = value; }

    /**
     * <p>Detailed product view information.</p>
     */
    inline DescribeProductAsAdminResult& WithProductViewDetail(const ProductViewDetail& value) { SetProductViewDetail(value); return *this;}

    /**
     * <p>Detailed product view information.</p>
     */
    inline DescribeProductAsAdminResult& WithProductViewDetail(ProductViewDetail&& value) { SetProductViewDetail(value); return *this;}

    /**
     * <p>Tags associated with the product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the product.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Tags associated with the product.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = value; }

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& AddTags(Tag&& value) { m_tags.push_back(value); return *this; }

  private:
    ProductViewDetail m_productViewDetail;
    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
