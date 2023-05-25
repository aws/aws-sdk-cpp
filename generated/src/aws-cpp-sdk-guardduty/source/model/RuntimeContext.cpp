/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RuntimeContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

RuntimeContext::RuntimeContext() : 
    m_modifyingProcessHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_libraryPathHasBeenSet(false),
    m_ldPreloadValueHasBeenSet(false),
    m_socketPathHasBeenSet(false),
    m_runcBinaryPathHasBeenSet(false),
    m_releaseAgentPathHasBeenSet(false),
    m_mountSourceHasBeenSet(false),
    m_mountTargetHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false),
    m_flagsHasBeenSet(false),
    m_moduleNameHasBeenSet(false),
    m_moduleFilePathHasBeenSet(false),
    m_moduleSha256HasBeenSet(false),
    m_shellHistoryFilePathHasBeenSet(false),
    m_targetProcessHasBeenSet(false),
    m_addressFamilyHasBeenSet(false),
    m_ianaProtocolNumber(0),
    m_ianaProtocolNumberHasBeenSet(false),
    m_memoryRegionsHasBeenSet(false)
{
}

RuntimeContext::RuntimeContext(JsonView jsonValue) : 
    m_modifyingProcessHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_libraryPathHasBeenSet(false),
    m_ldPreloadValueHasBeenSet(false),
    m_socketPathHasBeenSet(false),
    m_runcBinaryPathHasBeenSet(false),
    m_releaseAgentPathHasBeenSet(false),
    m_mountSourceHasBeenSet(false),
    m_mountTargetHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false),
    m_flagsHasBeenSet(false),
    m_moduleNameHasBeenSet(false),
    m_moduleFilePathHasBeenSet(false),
    m_moduleSha256HasBeenSet(false),
    m_shellHistoryFilePathHasBeenSet(false),
    m_targetProcessHasBeenSet(false),
    m_addressFamilyHasBeenSet(false),
    m_ianaProtocolNumber(0),
    m_ianaProtocolNumberHasBeenSet(false),
    m_memoryRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeContext& RuntimeContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modifyingProcess"))
  {
    m_modifyingProcess = jsonValue.GetObject("modifyingProcess");

    m_modifyingProcessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptPath"))
  {
    m_scriptPath = jsonValue.GetString("scriptPath");

    m_scriptPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("libraryPath"))
  {
    m_libraryPath = jsonValue.GetString("libraryPath");

    m_libraryPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ldPreloadValue"))
  {
    m_ldPreloadValue = jsonValue.GetString("ldPreloadValue");

    m_ldPreloadValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("socketPath"))
  {
    m_socketPath = jsonValue.GetString("socketPath");

    m_socketPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runcBinaryPath"))
  {
    m_runcBinaryPath = jsonValue.GetString("runcBinaryPath");

    m_runcBinaryPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("releaseAgentPath"))
  {
    m_releaseAgentPath = jsonValue.GetString("releaseAgentPath");

    m_releaseAgentPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountSource"))
  {
    m_mountSource = jsonValue.GetString("mountSource");

    m_mountSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountTarget"))
  {
    m_mountTarget = jsonValue.GetString("mountTarget");

    m_mountTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileSystemType"))
  {
    m_fileSystemType = jsonValue.GetString("fileSystemType");

    m_fileSystemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flags"))
  {
    Aws::Utils::Array<JsonView> flagsJsonList = jsonValue.GetArray("flags");
    for(unsigned flagsIndex = 0; flagsIndex < flagsJsonList.GetLength(); ++flagsIndex)
    {
      m_flags.push_back(flagsJsonList[flagsIndex].AsString());
    }
    m_flagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("moduleName"))
  {
    m_moduleName = jsonValue.GetString("moduleName");

    m_moduleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("moduleFilePath"))
  {
    m_moduleFilePath = jsonValue.GetString("moduleFilePath");

    m_moduleFilePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("moduleSha256"))
  {
    m_moduleSha256 = jsonValue.GetString("moduleSha256");

    m_moduleSha256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("shellHistoryFilePath"))
  {
    m_shellHistoryFilePath = jsonValue.GetString("shellHistoryFilePath");

    m_shellHistoryFilePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetProcess"))
  {
    m_targetProcess = jsonValue.GetObject("targetProcess");

    m_targetProcessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addressFamily"))
  {
    m_addressFamily = jsonValue.GetString("addressFamily");

    m_addressFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ianaProtocolNumber"))
  {
    m_ianaProtocolNumber = jsonValue.GetInteger("ianaProtocolNumber");

    m_ianaProtocolNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryRegions"))
  {
    Aws::Utils::Array<JsonView> memoryRegionsJsonList = jsonValue.GetArray("memoryRegions");
    for(unsigned memoryRegionsIndex = 0; memoryRegionsIndex < memoryRegionsJsonList.GetLength(); ++memoryRegionsIndex)
    {
      m_memoryRegions.push_back(memoryRegionsJsonList[memoryRegionsIndex].AsString());
    }
    m_memoryRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeContext::Jsonize() const
{
  JsonValue payload;

  if(m_modifyingProcessHasBeenSet)
  {
   payload.WithObject("modifyingProcess", m_modifyingProcess.Jsonize());

  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_scriptPathHasBeenSet)
  {
   payload.WithString("scriptPath", m_scriptPath);

  }

  if(m_libraryPathHasBeenSet)
  {
   payload.WithString("libraryPath", m_libraryPath);

  }

  if(m_ldPreloadValueHasBeenSet)
  {
   payload.WithString("ldPreloadValue", m_ldPreloadValue);

  }

  if(m_socketPathHasBeenSet)
  {
   payload.WithString("socketPath", m_socketPath);

  }

  if(m_runcBinaryPathHasBeenSet)
  {
   payload.WithString("runcBinaryPath", m_runcBinaryPath);

  }

  if(m_releaseAgentPathHasBeenSet)
  {
   payload.WithString("releaseAgentPath", m_releaseAgentPath);

  }

  if(m_mountSourceHasBeenSet)
  {
   payload.WithString("mountSource", m_mountSource);

  }

  if(m_mountTargetHasBeenSet)
  {
   payload.WithString("mountTarget", m_mountTarget);

  }

  if(m_fileSystemTypeHasBeenSet)
  {
   payload.WithString("fileSystemType", m_fileSystemType);

  }

  if(m_flagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> flagsJsonList(m_flags.size());
   for(unsigned flagsIndex = 0; flagsIndex < flagsJsonList.GetLength(); ++flagsIndex)
   {
     flagsJsonList[flagsIndex].AsString(m_flags[flagsIndex]);
   }
   payload.WithArray("flags", std::move(flagsJsonList));

  }

  if(m_moduleNameHasBeenSet)
  {
   payload.WithString("moduleName", m_moduleName);

  }

  if(m_moduleFilePathHasBeenSet)
  {
   payload.WithString("moduleFilePath", m_moduleFilePath);

  }

  if(m_moduleSha256HasBeenSet)
  {
   payload.WithString("moduleSha256", m_moduleSha256);

  }

  if(m_shellHistoryFilePathHasBeenSet)
  {
   payload.WithString("shellHistoryFilePath", m_shellHistoryFilePath);

  }

  if(m_targetProcessHasBeenSet)
  {
   payload.WithObject("targetProcess", m_targetProcess.Jsonize());

  }

  if(m_addressFamilyHasBeenSet)
  {
   payload.WithString("addressFamily", m_addressFamily);

  }

  if(m_ianaProtocolNumberHasBeenSet)
  {
   payload.WithInteger("ianaProtocolNumber", m_ianaProtocolNumber);

  }

  if(m_memoryRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memoryRegionsJsonList(m_memoryRegions.size());
   for(unsigned memoryRegionsIndex = 0; memoryRegionsIndex < memoryRegionsJsonList.GetLength(); ++memoryRegionsIndex)
   {
     memoryRegionsJsonList[memoryRegionsIndex].AsString(m_memoryRegions[memoryRegionsIndex]);
   }
   payload.WithArray("memoryRegions", std::move(memoryRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
