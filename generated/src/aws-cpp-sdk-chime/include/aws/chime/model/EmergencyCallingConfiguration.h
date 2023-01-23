/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/DNISEmergencyCallingConfiguration.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The emergency calling configuration details associated with an Amazon Chime
   * Voice Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/EmergencyCallingConfiguration">AWS
   * API Reference</a></p>
   */
  class EmergencyCallingConfiguration
  {
  public:
    AWS_CHIME_API EmergencyCallingConfiguration();
    AWS_CHIME_API EmergencyCallingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API EmergencyCallingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline const Aws::Vector<DNISEmergencyCallingConfiguration>& GetDNIS() const{ return m_dNIS; }

    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline bool DNISHasBeenSet() const { return m_dNISHasBeenSet; }

    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline void SetDNIS(const Aws::Vector<DNISEmergencyCallingConfiguration>& value) { m_dNISHasBeenSet = true; m_dNIS = value; }

    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline void SetDNIS(Aws::Vector<DNISEmergencyCallingConfiguration>&& value) { m_dNISHasBeenSet = true; m_dNIS = std::move(value); }

    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline EmergencyCallingConfiguration& WithDNIS(const Aws::Vector<DNISEmergencyCallingConfiguration>& value) { SetDNIS(value); return *this;}

    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline EmergencyCallingConfiguration& WithDNIS(Aws::Vector<DNISEmergencyCallingConfiguration>&& value) { SetDNIS(std::move(value)); return *this;}

    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline EmergencyCallingConfiguration& AddDNIS(const DNISEmergencyCallingConfiguration& value) { m_dNISHasBeenSet = true; m_dNIS.push_back(value); return *this; }

    /**
     * <p>The Dialed Number Identification Service (DNIS) emergency calling
     * configuration details.</p>
     */
    inline EmergencyCallingConfiguration& AddDNIS(DNISEmergencyCallingConfiguration&& value) { m_dNISHasBeenSet = true; m_dNIS.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DNISEmergencyCallingConfiguration> m_dNIS;
    bool m_dNISHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
