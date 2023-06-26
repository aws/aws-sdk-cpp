/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/EfsFileSystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

EfsFileSystemConfiguration::EfsFileSystemConfiguration() : 
    m_fileSystemPolicyHasBeenSet(false)
{
}

EfsFileSystemConfiguration::EfsFileSystemConfiguration(JsonView jsonValue) : 
    m_fileSystemPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

EfsFileSystemConfiguration& EfsFileSystemConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileSystemPolicy"))
  {
    m_fileSystemPolicy = jsonValue.GetString("fileSystemPolicy");

    m_fileSystemPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue EfsFileSystemConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemPolicyHasBeenSet)
  {
   payload.WithString("fileSystemPolicy", m_fileSystemPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
