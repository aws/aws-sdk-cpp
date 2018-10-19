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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchComplianceData.h>
#include <utility>

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
  class AWS_SSM_API DescribeInstancePatchesResult
  {
  public:
    DescribeInstancePatchesResult();
    DescribeInstancePatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInstancePatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Title (string)</p>
     * <p>KBId (string)</p> <p>Classification (string)</p> <p>Severity (string)</p>
     * <p>State (string, such as "INSTALLED" or "FAILED")</p> <p>InstalledTime
     * (DateTime)</p> <p>InstalledBy (string)</p>
     */
    inline const Aws::Vector<PatchComplianceData>& GetPatches() const{ return m_patches; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Title (string)</p>
     * <p>KBId (string)</p> <p>Classification (string)</p> <p>Severity (string)</p>
     * <p>State (string, such as "INSTALLED" or "FAILED")</p> <p>InstalledTime
     * (DateTime)</p> <p>InstalledBy (string)</p>
     */
    inline void SetPatches(const Aws::Vector<PatchComplianceData>& value) { m_patches = value; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Title (string)</p>
     * <p>KBId (string)</p> <p>Classification (string)</p> <p>Severity (string)</p>
     * <p>State (string, such as "INSTALLED" or "FAILED")</p> <p>InstalledTime
     * (DateTime)</p> <p>InstalledBy (string)</p>
     */
    inline void SetPatches(Aws::Vector<PatchComplianceData>&& value) { m_patches = std::move(value); }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Title (string)</p>
     * <p>KBId (string)</p> <p>Classification (string)</p> <p>Severity (string)</p>
     * <p>State (string, such as "INSTALLED" or "FAILED")</p> <p>InstalledTime
     * (DateTime)</p> <p>InstalledBy (string)</p>
     */
    inline DescribeInstancePatchesResult& WithPatches(const Aws::Vector<PatchComplianceData>& value) { SetPatches(value); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Title (string)</p>
     * <p>KBId (string)</p> <p>Classification (string)</p> <p>Severity (string)</p>
     * <p>State (string, such as "INSTALLED" or "FAILED")</p> <p>InstalledTime
     * (DateTime)</p> <p>InstalledBy (string)</p>
     */
    inline DescribeInstancePatchesResult& WithPatches(Aws::Vector<PatchComplianceData>&& value) { SetPatches(std::move(value)); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Title (string)</p>
     * <p>KBId (string)</p> <p>Classification (string)</p> <p>Severity (string)</p>
     * <p>State (string, such as "INSTALLED" or "FAILED")</p> <p>InstalledTime
     * (DateTime)</p> <p>InstalledBy (string)</p>
     */
    inline DescribeInstancePatchesResult& AddPatches(const PatchComplianceData& value) { m_patches.push_back(value); return *this; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Title (string)</p>
     * <p>KBId (string)</p> <p>Classification (string)</p> <p>Severity (string)</p>
     * <p>State (string, such as "INSTALLED" or "FAILED")</p> <p>InstalledTime
     * (DateTime)</p> <p>InstalledBy (string)</p>
     */
    inline DescribeInstancePatchesResult& AddPatches(PatchComplianceData&& value) { m_patches.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstancePatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstancePatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstancePatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PatchComplianceData> m_patches;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
