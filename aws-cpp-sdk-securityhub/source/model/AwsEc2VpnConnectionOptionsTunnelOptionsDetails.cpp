/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpnConnectionOptionsTunnelOptionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2VpnConnectionOptionsTunnelOptionsDetails::AwsEc2VpnConnectionOptionsTunnelOptionsDetails() : 
    m_dpdTimeoutSeconds(0),
    m_dpdTimeoutSecondsHasBeenSet(false),
    m_ikeVersionsHasBeenSet(false),
    m_outsideIpAddressHasBeenSet(false),
    m_phase1DhGroupNumbersHasBeenSet(false),
    m_phase1EncryptionAlgorithmsHasBeenSet(false),
    m_phase1IntegrityAlgorithmsHasBeenSet(false),
    m_phase1LifetimeSeconds(0),
    m_phase1LifetimeSecondsHasBeenSet(false),
    m_phase2DhGroupNumbersHasBeenSet(false),
    m_phase2EncryptionAlgorithmsHasBeenSet(false),
    m_phase2IntegrityAlgorithmsHasBeenSet(false),
    m_phase2LifetimeSeconds(0),
    m_phase2LifetimeSecondsHasBeenSet(false),
    m_preSharedKeyHasBeenSet(false),
    m_rekeyFuzzPercentage(0),
    m_rekeyFuzzPercentageHasBeenSet(false),
    m_rekeyMarginTimeSeconds(0),
    m_rekeyMarginTimeSecondsHasBeenSet(false),
    m_replayWindowSize(0),
    m_replayWindowSizeHasBeenSet(false),
    m_tunnelInsideCidrHasBeenSet(false)
{
}

AwsEc2VpnConnectionOptionsTunnelOptionsDetails::AwsEc2VpnConnectionOptionsTunnelOptionsDetails(JsonView jsonValue) : 
    m_dpdTimeoutSeconds(0),
    m_dpdTimeoutSecondsHasBeenSet(false),
    m_ikeVersionsHasBeenSet(false),
    m_outsideIpAddressHasBeenSet(false),
    m_phase1DhGroupNumbersHasBeenSet(false),
    m_phase1EncryptionAlgorithmsHasBeenSet(false),
    m_phase1IntegrityAlgorithmsHasBeenSet(false),
    m_phase1LifetimeSeconds(0),
    m_phase1LifetimeSecondsHasBeenSet(false),
    m_phase2DhGroupNumbersHasBeenSet(false),
    m_phase2EncryptionAlgorithmsHasBeenSet(false),
    m_phase2IntegrityAlgorithmsHasBeenSet(false),
    m_phase2LifetimeSeconds(0),
    m_phase2LifetimeSecondsHasBeenSet(false),
    m_preSharedKeyHasBeenSet(false),
    m_rekeyFuzzPercentage(0),
    m_rekeyFuzzPercentageHasBeenSet(false),
    m_rekeyMarginTimeSeconds(0),
    m_rekeyMarginTimeSecondsHasBeenSet(false),
    m_replayWindowSize(0),
    m_replayWindowSizeHasBeenSet(false),
    m_tunnelInsideCidrHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AwsEc2VpnConnectionOptionsTunnelOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DpdTimeoutSeconds"))
  {
    m_dpdTimeoutSeconds = jsonValue.GetInteger("DpdTimeoutSeconds");

    m_dpdTimeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IkeVersions"))
  {
    Aws::Utils::Array<JsonView> ikeVersionsJsonList = jsonValue.GetArray("IkeVersions");
    for(unsigned ikeVersionsIndex = 0; ikeVersionsIndex < ikeVersionsJsonList.GetLength(); ++ikeVersionsIndex)
    {
      m_ikeVersions.push_back(ikeVersionsJsonList[ikeVersionsIndex].AsString());
    }
    m_ikeVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutsideIpAddress"))
  {
    m_outsideIpAddress = jsonValue.GetString("OutsideIpAddress");

    m_outsideIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase1DhGroupNumbers"))
  {
    Aws::Utils::Array<JsonView> phase1DhGroupNumbersJsonList = jsonValue.GetArray("Phase1DhGroupNumbers");
    for(unsigned phase1DhGroupNumbersIndex = 0; phase1DhGroupNumbersIndex < phase1DhGroupNumbersJsonList.GetLength(); ++phase1DhGroupNumbersIndex)
    {
      m_phase1DhGroupNumbers.push_back(phase1DhGroupNumbersJsonList[phase1DhGroupNumbersIndex].AsInteger());
    }
    m_phase1DhGroupNumbersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase1EncryptionAlgorithms"))
  {
    Aws::Utils::Array<JsonView> phase1EncryptionAlgorithmsJsonList = jsonValue.GetArray("Phase1EncryptionAlgorithms");
    for(unsigned phase1EncryptionAlgorithmsIndex = 0; phase1EncryptionAlgorithmsIndex < phase1EncryptionAlgorithmsJsonList.GetLength(); ++phase1EncryptionAlgorithmsIndex)
    {
      m_phase1EncryptionAlgorithms.push_back(phase1EncryptionAlgorithmsJsonList[phase1EncryptionAlgorithmsIndex].AsString());
    }
    m_phase1EncryptionAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase1IntegrityAlgorithms"))
  {
    Aws::Utils::Array<JsonView> phase1IntegrityAlgorithmsJsonList = jsonValue.GetArray("Phase1IntegrityAlgorithms");
    for(unsigned phase1IntegrityAlgorithmsIndex = 0; phase1IntegrityAlgorithmsIndex < phase1IntegrityAlgorithmsJsonList.GetLength(); ++phase1IntegrityAlgorithmsIndex)
    {
      m_phase1IntegrityAlgorithms.push_back(phase1IntegrityAlgorithmsJsonList[phase1IntegrityAlgorithmsIndex].AsString());
    }
    m_phase1IntegrityAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase1LifetimeSeconds"))
  {
    m_phase1LifetimeSeconds = jsonValue.GetInteger("Phase1LifetimeSeconds");

    m_phase1LifetimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase2DhGroupNumbers"))
  {
    Aws::Utils::Array<JsonView> phase2DhGroupNumbersJsonList = jsonValue.GetArray("Phase2DhGroupNumbers");
    for(unsigned phase2DhGroupNumbersIndex = 0; phase2DhGroupNumbersIndex < phase2DhGroupNumbersJsonList.GetLength(); ++phase2DhGroupNumbersIndex)
    {
      m_phase2DhGroupNumbers.push_back(phase2DhGroupNumbersJsonList[phase2DhGroupNumbersIndex].AsInteger());
    }
    m_phase2DhGroupNumbersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase2EncryptionAlgorithms"))
  {
    Aws::Utils::Array<JsonView> phase2EncryptionAlgorithmsJsonList = jsonValue.GetArray("Phase2EncryptionAlgorithms");
    for(unsigned phase2EncryptionAlgorithmsIndex = 0; phase2EncryptionAlgorithmsIndex < phase2EncryptionAlgorithmsJsonList.GetLength(); ++phase2EncryptionAlgorithmsIndex)
    {
      m_phase2EncryptionAlgorithms.push_back(phase2EncryptionAlgorithmsJsonList[phase2EncryptionAlgorithmsIndex].AsString());
    }
    m_phase2EncryptionAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase2IntegrityAlgorithms"))
  {
    Aws::Utils::Array<JsonView> phase2IntegrityAlgorithmsJsonList = jsonValue.GetArray("Phase2IntegrityAlgorithms");
    for(unsigned phase2IntegrityAlgorithmsIndex = 0; phase2IntegrityAlgorithmsIndex < phase2IntegrityAlgorithmsJsonList.GetLength(); ++phase2IntegrityAlgorithmsIndex)
    {
      m_phase2IntegrityAlgorithms.push_back(phase2IntegrityAlgorithmsJsonList[phase2IntegrityAlgorithmsIndex].AsString());
    }
    m_phase2IntegrityAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Phase2LifetimeSeconds"))
  {
    m_phase2LifetimeSeconds = jsonValue.GetInteger("Phase2LifetimeSeconds");

    m_phase2LifetimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreSharedKey"))
  {
    m_preSharedKey = jsonValue.GetString("PreSharedKey");

    m_preSharedKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RekeyFuzzPercentage"))
  {
    m_rekeyFuzzPercentage = jsonValue.GetInteger("RekeyFuzzPercentage");

    m_rekeyFuzzPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RekeyMarginTimeSeconds"))
  {
    m_rekeyMarginTimeSeconds = jsonValue.GetInteger("RekeyMarginTimeSeconds");

    m_rekeyMarginTimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplayWindowSize"))
  {
    m_replayWindowSize = jsonValue.GetInteger("ReplayWindowSize");

    m_replayWindowSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TunnelInsideCidr"))
  {
    m_tunnelInsideCidr = jsonValue.GetString("TunnelInsideCidr");

    m_tunnelInsideCidrHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpnConnectionOptionsTunnelOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dpdTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("DpdTimeoutSeconds", m_dpdTimeoutSeconds);

  }

  if(m_ikeVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ikeVersionsJsonList(m_ikeVersions.size());
   for(unsigned ikeVersionsIndex = 0; ikeVersionsIndex < ikeVersionsJsonList.GetLength(); ++ikeVersionsIndex)
   {
     ikeVersionsJsonList[ikeVersionsIndex].AsString(m_ikeVersions[ikeVersionsIndex]);
   }
   payload.WithArray("IkeVersions", std::move(ikeVersionsJsonList));

  }

  if(m_outsideIpAddressHasBeenSet)
  {
   payload.WithString("OutsideIpAddress", m_outsideIpAddress);

  }

  if(m_phase1DhGroupNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phase1DhGroupNumbersJsonList(m_phase1DhGroupNumbers.size());
   for(unsigned phase1DhGroupNumbersIndex = 0; phase1DhGroupNumbersIndex < phase1DhGroupNumbersJsonList.GetLength(); ++phase1DhGroupNumbersIndex)
   {
     phase1DhGroupNumbersJsonList[phase1DhGroupNumbersIndex].AsInteger(m_phase1DhGroupNumbers[phase1DhGroupNumbersIndex]);
   }
   payload.WithArray("Phase1DhGroupNumbers", std::move(phase1DhGroupNumbersJsonList));

  }

  if(m_phase1EncryptionAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phase1EncryptionAlgorithmsJsonList(m_phase1EncryptionAlgorithms.size());
   for(unsigned phase1EncryptionAlgorithmsIndex = 0; phase1EncryptionAlgorithmsIndex < phase1EncryptionAlgorithmsJsonList.GetLength(); ++phase1EncryptionAlgorithmsIndex)
   {
     phase1EncryptionAlgorithmsJsonList[phase1EncryptionAlgorithmsIndex].AsString(m_phase1EncryptionAlgorithms[phase1EncryptionAlgorithmsIndex]);
   }
   payload.WithArray("Phase1EncryptionAlgorithms", std::move(phase1EncryptionAlgorithmsJsonList));

  }

  if(m_phase1IntegrityAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phase1IntegrityAlgorithmsJsonList(m_phase1IntegrityAlgorithms.size());
   for(unsigned phase1IntegrityAlgorithmsIndex = 0; phase1IntegrityAlgorithmsIndex < phase1IntegrityAlgorithmsJsonList.GetLength(); ++phase1IntegrityAlgorithmsIndex)
   {
     phase1IntegrityAlgorithmsJsonList[phase1IntegrityAlgorithmsIndex].AsString(m_phase1IntegrityAlgorithms[phase1IntegrityAlgorithmsIndex]);
   }
   payload.WithArray("Phase1IntegrityAlgorithms", std::move(phase1IntegrityAlgorithmsJsonList));

  }

  if(m_phase1LifetimeSecondsHasBeenSet)
  {
   payload.WithInteger("Phase1LifetimeSeconds", m_phase1LifetimeSeconds);

  }

  if(m_phase2DhGroupNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phase2DhGroupNumbersJsonList(m_phase2DhGroupNumbers.size());
   for(unsigned phase2DhGroupNumbersIndex = 0; phase2DhGroupNumbersIndex < phase2DhGroupNumbersJsonList.GetLength(); ++phase2DhGroupNumbersIndex)
   {
     phase2DhGroupNumbersJsonList[phase2DhGroupNumbersIndex].AsInteger(m_phase2DhGroupNumbers[phase2DhGroupNumbersIndex]);
   }
   payload.WithArray("Phase2DhGroupNumbers", std::move(phase2DhGroupNumbersJsonList));

  }

  if(m_phase2EncryptionAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phase2EncryptionAlgorithmsJsonList(m_phase2EncryptionAlgorithms.size());
   for(unsigned phase2EncryptionAlgorithmsIndex = 0; phase2EncryptionAlgorithmsIndex < phase2EncryptionAlgorithmsJsonList.GetLength(); ++phase2EncryptionAlgorithmsIndex)
   {
     phase2EncryptionAlgorithmsJsonList[phase2EncryptionAlgorithmsIndex].AsString(m_phase2EncryptionAlgorithms[phase2EncryptionAlgorithmsIndex]);
   }
   payload.WithArray("Phase2EncryptionAlgorithms", std::move(phase2EncryptionAlgorithmsJsonList));

  }

  if(m_phase2IntegrityAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phase2IntegrityAlgorithmsJsonList(m_phase2IntegrityAlgorithms.size());
   for(unsigned phase2IntegrityAlgorithmsIndex = 0; phase2IntegrityAlgorithmsIndex < phase2IntegrityAlgorithmsJsonList.GetLength(); ++phase2IntegrityAlgorithmsIndex)
   {
     phase2IntegrityAlgorithmsJsonList[phase2IntegrityAlgorithmsIndex].AsString(m_phase2IntegrityAlgorithms[phase2IntegrityAlgorithmsIndex]);
   }
   payload.WithArray("Phase2IntegrityAlgorithms", std::move(phase2IntegrityAlgorithmsJsonList));

  }

  if(m_phase2LifetimeSecondsHasBeenSet)
  {
   payload.WithInteger("Phase2LifetimeSeconds", m_phase2LifetimeSeconds);

  }

  if(m_preSharedKeyHasBeenSet)
  {
   payload.WithString("PreSharedKey", m_preSharedKey);

  }

  if(m_rekeyFuzzPercentageHasBeenSet)
  {
   payload.WithInteger("RekeyFuzzPercentage", m_rekeyFuzzPercentage);

  }

  if(m_rekeyMarginTimeSecondsHasBeenSet)
  {
   payload.WithInteger("RekeyMarginTimeSeconds", m_rekeyMarginTimeSeconds);

  }

  if(m_replayWindowSizeHasBeenSet)
  {
   payload.WithInteger("ReplayWindowSize", m_replayWindowSize);

  }

  if(m_tunnelInsideCidrHasBeenSet)
  {
   payload.WithString("TunnelInsideCidr", m_tunnelInsideCidr);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
