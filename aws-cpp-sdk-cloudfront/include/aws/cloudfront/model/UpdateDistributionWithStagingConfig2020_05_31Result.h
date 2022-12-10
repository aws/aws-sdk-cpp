﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/Distribution.h>
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
  class UpdateDistributionWithStagingConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdateDistributionWithStagingConfig2020_05_31Result();
    AWS_CLOUDFRONT_API UpdateDistributionWithStagingConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdateDistributionWithStagingConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Distribution& GetDistribution() const{ return m_distribution; }

    
    inline void SetDistribution(const Distribution& value) { m_distribution = value; }

    
    inline void SetDistribution(Distribution&& value) { m_distribution = std::move(value); }

    
    inline UpdateDistributionWithStagingConfig2020_05_31Result& WithDistribution(const Distribution& value) { SetDistribution(value); return *this;}

    
    inline UpdateDistributionWithStagingConfig2020_05_31Result& WithDistribution(Distribution&& value) { SetDistribution(std::move(value)); return *this;}


    /**
     * <p>The current version of the primary distribution (after it’s updated).</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the primary distribution (after it’s updated).</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the primary distribution (after it’s updated).</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the primary distribution (after it’s updated).</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the primary distribution (after it’s updated).</p>
     */
    inline UpdateDistributionWithStagingConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the primary distribution (after it’s updated).</p>
     */
    inline UpdateDistributionWithStagingConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the primary distribution (after it’s updated).</p>
     */
    inline UpdateDistributionWithStagingConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    Distribution m_distribution;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
