﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionConfig.h>
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
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistributionConfigResult">AWS
   * API Reference</a></p>
   */
  class GetDistributionConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetDistributionConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetDistributionConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetDistributionConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The distribution's configuration information.</p>
     */
    inline const DistributionConfig& GetDistributionConfig() const{ return m_distributionConfig; }
    inline void SetDistributionConfig(const DistributionConfig& value) { m_distributionConfig = value; }
    inline void SetDistributionConfig(DistributionConfig&& value) { m_distributionConfig = std::move(value); }
    inline GetDistributionConfig2020_05_31Result& WithDistributionConfig(const DistributionConfig& value) { SetDistributionConfig(value); return *this;}
    inline GetDistributionConfig2020_05_31Result& WithDistributionConfig(DistributionConfig&& value) { SetDistributionConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline GetDistributionConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline GetDistributionConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline GetDistributionConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDistributionConfig2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDistributionConfig2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDistributionConfig2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DistributionConfig m_distributionConfig;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
