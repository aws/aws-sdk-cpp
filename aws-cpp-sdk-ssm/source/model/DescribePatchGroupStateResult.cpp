/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/DescribePatchGroupStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePatchGroupStateResult::DescribePatchGroupStateResult() : 
    m_instances(0),
    m_instancesWithInstalledPatches(0),
    m_instancesWithInstalledOtherPatches(0),
    m_instancesWithMissingPatches(0),
    m_instancesWithFailedPatches(0),
    m_instancesWithNotApplicablePatches(0)
{
}

DescribePatchGroupStateResult::DescribePatchGroupStateResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_instances(0),
    m_instancesWithInstalledPatches(0),
    m_instancesWithInstalledOtherPatches(0),
    m_instancesWithMissingPatches(0),
    m_instancesWithFailedPatches(0),
    m_instancesWithNotApplicablePatches(0)
{
  *this = result;
}

DescribePatchGroupStateResult& DescribePatchGroupStateResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Instances"))
  {
    m_instances = jsonValue.GetInteger("Instances");

  }

  if(jsonValue.ValueExists("InstancesWithInstalledPatches"))
  {
    m_instancesWithInstalledPatches = jsonValue.GetInteger("InstancesWithInstalledPatches");

  }

  if(jsonValue.ValueExists("InstancesWithInstalledOtherPatches"))
  {
    m_instancesWithInstalledOtherPatches = jsonValue.GetInteger("InstancesWithInstalledOtherPatches");

  }

  if(jsonValue.ValueExists("InstancesWithMissingPatches"))
  {
    m_instancesWithMissingPatches = jsonValue.GetInteger("InstancesWithMissingPatches");

  }

  if(jsonValue.ValueExists("InstancesWithFailedPatches"))
  {
    m_instancesWithFailedPatches = jsonValue.GetInteger("InstancesWithFailedPatches");

  }

  if(jsonValue.ValueExists("InstancesWithNotApplicablePatches"))
  {
    m_instancesWithNotApplicablePatches = jsonValue.GetInteger("InstancesWithNotApplicablePatches");

  }



  return *this;
}
