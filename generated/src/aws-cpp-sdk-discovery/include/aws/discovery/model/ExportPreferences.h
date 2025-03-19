/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/Ec2RecommendationsExportPreferences.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> Indicates the type of data that is being exported. Only one
   * <code>ExportPreferences</code> can be enabled for a <a
   * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_StartExportTask.html">StartExportTask</a>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ExportPreferences">AWS
   * API Reference</a></p>
   */
  class ExportPreferences
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ExportPreferences() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API ExportPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API ExportPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> If enabled, exported data includes EC2 instance type matches for on-premises
     * servers discovered through Amazon Web Services Application Discovery Service.
     * </p>
     */
    inline const Ec2RecommendationsExportPreferences& GetEc2RecommendationsPreferences() const { return m_ec2RecommendationsPreferences; }
    inline bool Ec2RecommendationsPreferencesHasBeenSet() const { return m_ec2RecommendationsPreferencesHasBeenSet; }
    template<typename Ec2RecommendationsPreferencesT = Ec2RecommendationsExportPreferences>
    void SetEc2RecommendationsPreferences(Ec2RecommendationsPreferencesT&& value) { m_ec2RecommendationsPreferencesHasBeenSet = true; m_ec2RecommendationsPreferences = std::forward<Ec2RecommendationsPreferencesT>(value); }
    template<typename Ec2RecommendationsPreferencesT = Ec2RecommendationsExportPreferences>
    ExportPreferences& WithEc2RecommendationsPreferences(Ec2RecommendationsPreferencesT&& value) { SetEc2RecommendationsPreferences(std::forward<Ec2RecommendationsPreferencesT>(value)); return *this;}
    ///@}
  private:

    Ec2RecommendationsExportPreferences m_ec2RecommendationsPreferences;
    bool m_ec2RecommendationsPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
