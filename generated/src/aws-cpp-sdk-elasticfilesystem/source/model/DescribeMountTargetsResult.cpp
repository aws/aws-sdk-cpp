/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeMountTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMountTargetsResult::DescribeMountTargetsResult()
{
}

DescribeMountTargetsResult::DescribeMountTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMountTargetsResult& DescribeMountTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("MountTargets"))
  {
    Aws::Utils::Array<JsonView> mountTargetsJsonList = jsonValue.GetArray("MountTargets");
    for(unsigned mountTargetsIndex = 0; mountTargetsIndex < mountTargetsJsonList.GetLength(); ++mountTargetsIndex)
    {
      m_mountTargets.push_back(mountTargetsJsonList[mountTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }



  return *this;
}
