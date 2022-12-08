/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A continuous deployment policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContinuousDeploymentPolicy">AWS
   * API Reference</a></p>
   */
  class ContinuousDeploymentPolicy
  {
  public:
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicy();
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline ContinuousDeploymentPolicy& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline ContinuousDeploymentPolicy& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline ContinuousDeploymentPolicy& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time the continuous deployment policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the continuous deployment policy was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the continuous deployment policy was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the continuous deployment policy was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the continuous deployment policy was last modified.</p>
     */
    inline ContinuousDeploymentPolicy& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the continuous deployment policy was last modified.</p>
     */
    inline ContinuousDeploymentPolicy& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const ContinuousDeploymentPolicyConfig& GetContinuousDeploymentPolicyConfig() const{ return m_continuousDeploymentPolicyConfig; }

    
    inline bool ContinuousDeploymentPolicyConfigHasBeenSet() const { return m_continuousDeploymentPolicyConfigHasBeenSet; }

    
    inline void SetContinuousDeploymentPolicyConfig(const ContinuousDeploymentPolicyConfig& value) { m_continuousDeploymentPolicyConfigHasBeenSet = true; m_continuousDeploymentPolicyConfig = value; }

    
    inline void SetContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfig&& value) { m_continuousDeploymentPolicyConfigHasBeenSet = true; m_continuousDeploymentPolicyConfig = std::move(value); }

    
    inline ContinuousDeploymentPolicy& WithContinuousDeploymentPolicyConfig(const ContinuousDeploymentPolicyConfig& value) { SetContinuousDeploymentPolicyConfig(value); return *this;}

    
    inline ContinuousDeploymentPolicy& WithContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfig&& value) { SetContinuousDeploymentPolicyConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    ContinuousDeploymentPolicyConfig m_continuousDeploymentPolicyConfig;
    bool m_continuousDeploymentPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
