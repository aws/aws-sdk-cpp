/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ObjectLambdaAllowedFeature.h>
#include <aws/s3control/model/ObjectLambdaTransformationConfiguration.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>A configuration used when creating an Object Lambda Access
   * Point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectLambdaConfiguration">AWS
   * API Reference</a></p>
   */
  class ObjectLambdaConfiguration
  {
  public:
    AWS_S3CONTROL_API ObjectLambdaConfiguration();
    AWS_S3CONTROL_API ObjectLambdaConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetSupportingAccessPoint() const{ return m_supportingAccessPoint; }

    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline bool SupportingAccessPointHasBeenSet() const { return m_supportingAccessPointHasBeenSet; }

    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline void SetSupportingAccessPoint(const Aws::String& value) { m_supportingAccessPointHasBeenSet = true; m_supportingAccessPoint = value; }

    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline void SetSupportingAccessPoint(Aws::String&& value) { m_supportingAccessPointHasBeenSet = true; m_supportingAccessPoint = std::move(value); }

    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline void SetSupportingAccessPoint(const char* value) { m_supportingAccessPointHasBeenSet = true; m_supportingAccessPoint.assign(value); }

    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaConfiguration& WithSupportingAccessPoint(const Aws::String& value) { SetSupportingAccessPoint(value); return *this;}

    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaConfiguration& WithSupportingAccessPoint(Aws::String&& value) { SetSupportingAccessPoint(std::move(value)); return *this;}

    /**
     * <p>Standard access point associated with the Object Lambda Access Point.</p>
     */
    inline ObjectLambdaConfiguration& WithSupportingAccessPoint(const char* value) { SetSupportingAccessPoint(value); return *this;}


    /**
     * <p>A container for whether the CloudWatch metrics configuration is enabled.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }

    /**
     * <p>A container for whether the CloudWatch metrics configuration is enabled.</p>
     */
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p>A container for whether the CloudWatch metrics configuration is enabled.</p>
     */
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }

    /**
     * <p>A container for whether the CloudWatch metrics configuration is enabled.</p>
     */
    inline ObjectLambdaConfiguration& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}


    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline const Aws::Vector<ObjectLambdaAllowedFeature>& GetAllowedFeatures() const{ return m_allowedFeatures; }

    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline bool AllowedFeaturesHasBeenSet() const { return m_allowedFeaturesHasBeenSet; }

    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline void SetAllowedFeatures(const Aws::Vector<ObjectLambdaAllowedFeature>& value) { m_allowedFeaturesHasBeenSet = true; m_allowedFeatures = value; }

    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline void SetAllowedFeatures(Aws::Vector<ObjectLambdaAllowedFeature>&& value) { m_allowedFeaturesHasBeenSet = true; m_allowedFeatures = std::move(value); }

    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline ObjectLambdaConfiguration& WithAllowedFeatures(const Aws::Vector<ObjectLambdaAllowedFeature>& value) { SetAllowedFeatures(value); return *this;}

    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline ObjectLambdaConfiguration& WithAllowedFeatures(Aws::Vector<ObjectLambdaAllowedFeature>&& value) { SetAllowedFeatures(std::move(value)); return *this;}

    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline ObjectLambdaConfiguration& AddAllowedFeatures(const ObjectLambdaAllowedFeature& value) { m_allowedFeaturesHasBeenSet = true; m_allowedFeatures.push_back(value); return *this; }

    /**
     * <p>A container for allowed features. Valid inputs are
     * <code>GetObject-Range</code>, <code>GetObject-PartNumber</code>,
     * <code>HeadObject-Range</code>, and <code>HeadObject-PartNumber</code>.</p>
     */
    inline ObjectLambdaConfiguration& AddAllowedFeatures(ObjectLambdaAllowedFeature&& value) { m_allowedFeaturesHasBeenSet = true; m_allowedFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline const Aws::Vector<ObjectLambdaTransformationConfiguration>& GetTransformationConfigurations() const{ return m_transformationConfigurations; }

    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline bool TransformationConfigurationsHasBeenSet() const { return m_transformationConfigurationsHasBeenSet; }

    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline void SetTransformationConfigurations(const Aws::Vector<ObjectLambdaTransformationConfiguration>& value) { m_transformationConfigurationsHasBeenSet = true; m_transformationConfigurations = value; }

    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline void SetTransformationConfigurations(Aws::Vector<ObjectLambdaTransformationConfiguration>&& value) { m_transformationConfigurationsHasBeenSet = true; m_transformationConfigurations = std::move(value); }

    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline ObjectLambdaConfiguration& WithTransformationConfigurations(const Aws::Vector<ObjectLambdaTransformationConfiguration>& value) { SetTransformationConfigurations(value); return *this;}

    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline ObjectLambdaConfiguration& WithTransformationConfigurations(Aws::Vector<ObjectLambdaTransformationConfiguration>&& value) { SetTransformationConfigurations(std::move(value)); return *this;}

    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline ObjectLambdaConfiguration& AddTransformationConfigurations(const ObjectLambdaTransformationConfiguration& value) { m_transformationConfigurationsHasBeenSet = true; m_transformationConfigurations.push_back(value); return *this; }

    /**
     * <p>A container for transformation configurations for an Object Lambda Access
     * Point.</p>
     */
    inline ObjectLambdaConfiguration& AddTransformationConfigurations(ObjectLambdaTransformationConfiguration&& value) { m_transformationConfigurationsHasBeenSet = true; m_transformationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_supportingAccessPoint;
    bool m_supportingAccessPointHasBeenSet = false;

    bool m_cloudWatchMetricsEnabled;
    bool m_cloudWatchMetricsEnabledHasBeenSet = false;

    Aws::Vector<ObjectLambdaAllowedFeature> m_allowedFeatures;
    bool m_allowedFeaturesHasBeenSet = false;

    Aws::Vector<ObjectLambdaTransformationConfiguration> m_transformationConfigurations;
    bool m_transformationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
