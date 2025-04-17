/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/NetworkOriginConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Proposed configuration for an access point attached to an Amazon S3 directory
   * bucket. You can propose up to 10 access points per bucket. If the proposed
   * access point configuration is for an existing Amazon S3 directory bucket, the
   * access preview uses the proposed access point configuration in place of the
   * existing access points. To propose an access point without a policy, you can
   * provide an empty string as the access point policy. For more information about
   * access points for Amazon S3 directory buckets, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-directory-buckets.html">Managing
   * access to directory buckets with access points</a> in the Amazon Simple Storage
   * Service User Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3ExpressDirectoryAccessPointConfiguration">AWS
   * API Reference</a></p>
   */
  class S3ExpressDirectoryAccessPointConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API S3ExpressDirectoryAccessPointConfiguration() = default;
    AWS_ACCESSANALYZER_API S3ExpressDirectoryAccessPointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API S3ExpressDirectoryAccessPointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The proposed access point policy for an Amazon S3 directory bucket access
     * point.</p>
     */
    inline const Aws::String& GetAccessPointPolicy() const { return m_accessPointPolicy; }
    inline bool AccessPointPolicyHasBeenSet() const { return m_accessPointPolicyHasBeenSet; }
    template<typename AccessPointPolicyT = Aws::String>
    void SetAccessPointPolicy(AccessPointPolicyT&& value) { m_accessPointPolicyHasBeenSet = true; m_accessPointPolicy = std::forward<AccessPointPolicyT>(value); }
    template<typename AccessPointPolicyT = Aws::String>
    S3ExpressDirectoryAccessPointConfiguration& WithAccessPointPolicy(AccessPointPolicyT&& value) { SetAccessPointPolicy(std::forward<AccessPointPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkOriginConfiguration& GetNetworkOrigin() const { return m_networkOrigin; }
    inline bool NetworkOriginHasBeenSet() const { return m_networkOriginHasBeenSet; }
    template<typename NetworkOriginT = NetworkOriginConfiguration>
    void SetNetworkOrigin(NetworkOriginT&& value) { m_networkOriginHasBeenSet = true; m_networkOrigin = std::forward<NetworkOriginT>(value); }
    template<typename NetworkOriginT = NetworkOriginConfiguration>
    S3ExpressDirectoryAccessPointConfiguration& WithNetworkOrigin(NetworkOriginT&& value) { SetNetworkOrigin(std::forward<NetworkOriginT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPointPolicy;
    bool m_accessPointPolicyHasBeenSet = false;

    NetworkOriginConfiguration m_networkOrigin;
    bool m_networkOriginHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
