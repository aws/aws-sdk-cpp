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

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribePatchGroupStateResult
  {
  public:
    DescribePatchGroupStateResult();
    DescribePatchGroupStateResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePatchGroupStateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The number of instances in the patch group.</p>
     */
    inline int GetInstances() const{ return m_instances; }

    /**
     * <p>The number of instances in the patch group.</p>
     */
    inline void SetInstances(int value) { m_instances = value; }

    /**
     * <p>The number of instances in the patch group.</p>
     */
    inline DescribePatchGroupStateResult& WithInstances(int value) { SetInstances(value); return *this;}

    /**
     * <p>The number of instances with installed patches.</p>
     */
    inline int GetInstancesWithInstalledPatches() const{ return m_instancesWithInstalledPatches; }

    /**
     * <p>The number of instances with installed patches.</p>
     */
    inline void SetInstancesWithInstalledPatches(int value) { m_instancesWithInstalledPatches = value; }

    /**
     * <p>The number of instances with installed patches.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithInstalledPatches(int value) { SetInstancesWithInstalledPatches(value); return *this;}

    /**
     * <p>The number of instances with patches installed that aren’t defined in the
     * patch baseline.</p>
     */
    inline int GetInstancesWithInstalledOtherPatches() const{ return m_instancesWithInstalledOtherPatches; }

    /**
     * <p>The number of instances with patches installed that aren’t defined in the
     * patch baseline.</p>
     */
    inline void SetInstancesWithInstalledOtherPatches(int value) { m_instancesWithInstalledOtherPatches = value; }

    /**
     * <p>The number of instances with patches installed that aren’t defined in the
     * patch baseline.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithInstalledOtherPatches(int value) { SetInstancesWithInstalledOtherPatches(value); return *this;}

    /**
     * <p>The number of instances with missing patches from the patch baseline.</p>
     */
    inline int GetInstancesWithMissingPatches() const{ return m_instancesWithMissingPatches; }

    /**
     * <p>The number of instances with missing patches from the patch baseline.</p>
     */
    inline void SetInstancesWithMissingPatches(int value) { m_instancesWithMissingPatches = value; }

    /**
     * <p>The number of instances with missing patches from the patch baseline.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithMissingPatches(int value) { SetInstancesWithMissingPatches(value); return *this;}

    /**
     * <p>The number of instances with patches from the patch baseline that failed to
     * install.</p>
     */
    inline int GetInstancesWithFailedPatches() const{ return m_instancesWithFailedPatches; }

    /**
     * <p>The number of instances with patches from the patch baseline that failed to
     * install.</p>
     */
    inline void SetInstancesWithFailedPatches(int value) { m_instancesWithFailedPatches = value; }

    /**
     * <p>The number of instances with patches from the patch baseline that failed to
     * install.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithFailedPatches(int value) { SetInstancesWithFailedPatches(value); return *this;}

    /**
     * <p>The number of instances with patches that aren’t applicable.</p>
     */
    inline int GetInstancesWithNotApplicablePatches() const{ return m_instancesWithNotApplicablePatches; }

    /**
     * <p>The number of instances with patches that aren’t applicable.</p>
     */
    inline void SetInstancesWithNotApplicablePatches(int value) { m_instancesWithNotApplicablePatches = value; }

    /**
     * <p>The number of instances with patches that aren’t applicable.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithNotApplicablePatches(int value) { SetInstancesWithNotApplicablePatches(value); return *this;}

  private:
    int m_instances;
    int m_instancesWithInstalledPatches;
    int m_instancesWithInstalledOtherPatches;
    int m_instancesWithMissingPatches;
    int m_instancesWithFailedPatches;
    int m_instancesWithNotApplicablePatches;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
