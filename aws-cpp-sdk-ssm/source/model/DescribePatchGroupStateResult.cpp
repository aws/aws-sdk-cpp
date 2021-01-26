/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribePatchGroupStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
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
    m_instancesWithInstalledPendingRebootPatches(0),
    m_instancesWithInstalledRejectedPatches(0),
    m_instancesWithMissingPatches(0),
    m_instancesWithFailedPatches(0),
    m_instancesWithNotApplicablePatches(0),
    m_instancesWithUnreportedNotApplicablePatches(0)
{
}

DescribePatchGroupStateResult::DescribePatchGroupStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_instances(0),
    m_instancesWithInstalledPatches(0),
    m_instancesWithInstalledOtherPatches(0),
    m_instancesWithInstalledPendingRebootPatches(0),
    m_instancesWithInstalledRejectedPatches(0),
    m_instancesWithMissingPatches(0),
    m_instancesWithFailedPatches(0),
    m_instancesWithNotApplicablePatches(0),
    m_instancesWithUnreportedNotApplicablePatches(0)
{
  *this = result;
}

DescribePatchGroupStateResult& DescribePatchGroupStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("InstancesWithInstalledPendingRebootPatches"))
  {
    m_instancesWithInstalledPendingRebootPatches = jsonValue.GetInteger("InstancesWithInstalledPendingRebootPatches");

  }

  if(jsonValue.ValueExists("InstancesWithInstalledRejectedPatches"))
  {
    m_instancesWithInstalledRejectedPatches = jsonValue.GetInteger("InstancesWithInstalledRejectedPatches");

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

  if(jsonValue.ValueExists("InstancesWithUnreportedNotApplicablePatches"))
  {
    m_instancesWithUnreportedNotApplicablePatches = jsonValue.GetInteger("InstancesWithUnreportedNotApplicablePatches");

  }



  return *this;
}
