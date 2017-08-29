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
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningArtifactSummary.h>
#include <aws/servicecatalog/model/Tag.h>
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
  class AWS_SERVICECATALOG_API DescribeProductAsAdminResult
  {
  public:
    DescribeProductAsAdminResult();
    DescribeProductAsAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProductAsAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetProductViewDetail(ProductViewDetail&& value) { m_productViewDetail = std::move(value); }

    /**
     * <p>Detailed product view information.</p>
     */
    inline DescribeProductAsAdminResult& WithProductViewDetail(const ProductViewDetail& value) { SetProductViewDetail(value); return *this;}

    /**
     * <p>Detailed product view information.</p>
     */
    inline DescribeProductAsAdminResult& WithProductViewDetail(ProductViewDetail&& value) { SetProductViewDetail(std::move(value)); return *this;}


    /**
     * <p>A list of provisioning artifact summaries for the product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactSummary>& GetProvisioningArtifactSummaries() const{ return m_provisioningArtifactSummaries; }

    /**
     * <p>A list of provisioning artifact summaries for the product.</p>
     */
    inline void SetProvisioningArtifactSummaries(const Aws::Vector<ProvisioningArtifactSummary>& value) { m_provisioningArtifactSummaries = value; }

    /**
     * <p>A list of provisioning artifact summaries for the product.</p>
     */
    inline void SetProvisioningArtifactSummaries(Aws::Vector<ProvisioningArtifactSummary>&& value) { m_provisioningArtifactSummaries = std::move(value); }

    /**
     * <p>A list of provisioning artifact summaries for the product.</p>
     */
    inline DescribeProductAsAdminResult& WithProvisioningArtifactSummaries(const Aws::Vector<ProvisioningArtifactSummary>& value) { SetProvisioningArtifactSummaries(value); return *this;}

    /**
     * <p>A list of provisioning artifact summaries for the product.</p>
     */
    inline DescribeProductAsAdminResult& WithProvisioningArtifactSummaries(Aws::Vector<ProvisioningArtifactSummary>&& value) { SetProvisioningArtifactSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of provisioning artifact summaries for the product.</p>
     */
    inline DescribeProductAsAdminResult& AddProvisioningArtifactSummaries(const ProvisioningArtifactSummary& value) { m_provisioningArtifactSummaries.push_back(value); return *this; }

    /**
     * <p>A list of provisioning artifact summaries for the product.</p>
     */
    inline DescribeProductAsAdminResult& AddProvisioningArtifactSummaries(ProvisioningArtifactSummary&& value) { m_provisioningArtifactSummaries.push_back(std::move(value)); return *this; }


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
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>List of TagOptions associated with the product.</p>
     */
    inline const Aws::Vector<TagOptionDetail>& GetTagOptions() const{ return m_tagOptions; }

    /**
     * <p>List of TagOptions associated with the product.</p>
     */
    inline void SetTagOptions(const Aws::Vector<TagOptionDetail>& value) { m_tagOptions = value; }

    /**
     * <p>List of TagOptions associated with the product.</p>
     */
    inline void SetTagOptions(Aws::Vector<TagOptionDetail>&& value) { m_tagOptions = std::move(value); }

    /**
     * <p>List of TagOptions associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& WithTagOptions(const Aws::Vector<TagOptionDetail>& value) { SetTagOptions(value); return *this;}

    /**
     * <p>List of TagOptions associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& WithTagOptions(Aws::Vector<TagOptionDetail>&& value) { SetTagOptions(std::move(value)); return *this;}

    /**
     * <p>List of TagOptions associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& AddTagOptions(const TagOptionDetail& value) { m_tagOptions.push_back(value); return *this; }

    /**
     * <p>List of TagOptions associated with the product.</p>
     */
    inline DescribeProductAsAdminResult& AddTagOptions(TagOptionDetail&& value) { m_tagOptions.push_back(std::move(value)); return *this; }

  private:

    ProductViewDetail m_productViewDetail;

    Aws::Vector<ProvisioningArtifactSummary> m_provisioningArtifactSummaries;

    Aws::Vector<Tag> m_tags;

    Aws::Vector<TagOptionDetail> m_tagOptions;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
