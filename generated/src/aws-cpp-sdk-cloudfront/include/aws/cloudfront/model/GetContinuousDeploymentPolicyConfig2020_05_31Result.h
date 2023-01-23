/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyConfig.h>
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
  class GetContinuousDeploymentPolicyConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetContinuousDeploymentPolicyConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetContinuousDeploymentPolicyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetContinuousDeploymentPolicyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ContinuousDeploymentPolicyConfig& GetContinuousDeploymentPolicyConfig() const{ return m_continuousDeploymentPolicyConfig; }

    
    inline void SetContinuousDeploymentPolicyConfig(const ContinuousDeploymentPolicyConfig& value) { m_continuousDeploymentPolicyConfig = value; }

    
    inline void SetContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfig&& value) { m_continuousDeploymentPolicyConfig = std::move(value); }

    
    inline GetContinuousDeploymentPolicyConfig2020_05_31Result& WithContinuousDeploymentPolicyConfig(const ContinuousDeploymentPolicyConfig& value) { SetContinuousDeploymentPolicyConfig(value); return *this;}

    
    inline GetContinuousDeploymentPolicyConfig2020_05_31Result& WithContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfig&& value) { SetContinuousDeploymentPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline GetContinuousDeploymentPolicyConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline GetContinuousDeploymentPolicyConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the current version of the continuous deployment
     * policy.</p>
     */
    inline GetContinuousDeploymentPolicyConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    ContinuousDeploymentPolicyConfig m_continuousDeploymentPolicyConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
