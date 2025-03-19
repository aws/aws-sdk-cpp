/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/InTransitEncryptionConfiguration.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>Configurations related to encryption for the security
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API EncryptionConfiguration() = default;
    AWS_EMRCONTAINERS_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>In-transit encryption-related input for the security configuration.</p>
     */
    inline const InTransitEncryptionConfiguration& GetInTransitEncryptionConfiguration() const { return m_inTransitEncryptionConfiguration; }
    inline bool InTransitEncryptionConfigurationHasBeenSet() const { return m_inTransitEncryptionConfigurationHasBeenSet; }
    template<typename InTransitEncryptionConfigurationT = InTransitEncryptionConfiguration>
    void SetInTransitEncryptionConfiguration(InTransitEncryptionConfigurationT&& value) { m_inTransitEncryptionConfigurationHasBeenSet = true; m_inTransitEncryptionConfiguration = std::forward<InTransitEncryptionConfigurationT>(value); }
    template<typename InTransitEncryptionConfigurationT = InTransitEncryptionConfiguration>
    EncryptionConfiguration& WithInTransitEncryptionConfiguration(InTransitEncryptionConfigurationT&& value) { SetInTransitEncryptionConfiguration(std::forward<InTransitEncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    InTransitEncryptionConfiguration m_inTransitEncryptionConfiguration;
    bool m_inTransitEncryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
