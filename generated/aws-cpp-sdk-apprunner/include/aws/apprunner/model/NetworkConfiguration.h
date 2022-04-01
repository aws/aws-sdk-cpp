/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/EgressConfiguration.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes configuration settings related to network traffic of an App Runner
   * service. Consists of embedded objects for each configurable network
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_APPRUNNER_API NetworkConfiguration
  {
  public:
    NetworkConfiguration();
    NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline const EgressConfiguration& GetEgressConfiguration() const{ return m_egressConfiguration; }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline bool EgressConfigurationHasBeenSet() const { return m_egressConfigurationHasBeenSet; }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline void SetEgressConfiguration(const EgressConfiguration& value) { m_egressConfigurationHasBeenSet = true; m_egressConfiguration = value; }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline void SetEgressConfiguration(EgressConfiguration&& value) { m_egressConfigurationHasBeenSet = true; m_egressConfiguration = std::move(value); }

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline NetworkConfiguration& WithEgressConfiguration(const EgressConfiguration& value) { SetEgressConfiguration(value); return *this;}

    /**
     * <p>Network configuration settings for outbound message traffic.</p>
     */
    inline NetworkConfiguration& WithEgressConfiguration(EgressConfiguration&& value) { SetEgressConfiguration(std::move(value)); return *this;}

  private:

    EgressConfiguration m_egressConfiguration;
    bool m_egressConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
