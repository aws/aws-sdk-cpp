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
#include <aws/ssm/model/PatchGroupPatchBaselineMapping.h>
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
  class AWS_SSM_API DescribePatchGroupsResult
  {
  public:
    DescribePatchGroupsResult();
    DescribePatchGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePatchGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Each entry in the array contains:</p> <p>PatchGroup: string (between 1 and
     * 256 characters, Regex: ^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</p>
     * <p>PatchBaselineIdentity: A PatchBaselineIdentity element. </p>
     */
    inline const Aws::Vector<PatchGroupPatchBaselineMapping>& GetMappings() const{ return m_mappings; }

    /**
     * <p>Each entry in the array contains:</p> <p>PatchGroup: string (between 1 and
     * 256 characters, Regex: ^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</p>
     * <p>PatchBaselineIdentity: A PatchBaselineIdentity element. </p>
     */
    inline void SetMappings(const Aws::Vector<PatchGroupPatchBaselineMapping>& value) { m_mappings = value; }

    /**
     * <p>Each entry in the array contains:</p> <p>PatchGroup: string (between 1 and
     * 256 characters, Regex: ^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</p>
     * <p>PatchBaselineIdentity: A PatchBaselineIdentity element. </p>
     */
    inline void SetMappings(Aws::Vector<PatchGroupPatchBaselineMapping>&& value) { m_mappings = std::move(value); }

    /**
     * <p>Each entry in the array contains:</p> <p>PatchGroup: string (between 1 and
     * 256 characters, Regex: ^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</p>
     * <p>PatchBaselineIdentity: A PatchBaselineIdentity element. </p>
     */
    inline DescribePatchGroupsResult& WithMappings(const Aws::Vector<PatchGroupPatchBaselineMapping>& value) { SetMappings(value); return *this;}

    /**
     * <p>Each entry in the array contains:</p> <p>PatchGroup: string (between 1 and
     * 256 characters, Regex: ^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</p>
     * <p>PatchBaselineIdentity: A PatchBaselineIdentity element. </p>
     */
    inline DescribePatchGroupsResult& WithMappings(Aws::Vector<PatchGroupPatchBaselineMapping>&& value) { SetMappings(std::move(value)); return *this;}

    /**
     * <p>Each entry in the array contains:</p> <p>PatchGroup: string (between 1 and
     * 256 characters, Regex: ^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</p>
     * <p>PatchBaselineIdentity: A PatchBaselineIdentity element. </p>
     */
    inline DescribePatchGroupsResult& AddMappings(const PatchGroupPatchBaselineMapping& value) { m_mappings.push_back(value); return *this; }

    /**
     * <p>Each entry in the array contains:</p> <p>PatchGroup: string (between 1 and
     * 256 characters, Regex: ^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$)</p>
     * <p>PatchBaselineIdentity: A PatchBaselineIdentity element. </p>
     */
    inline DescribePatchGroupsResult& AddMappings(PatchGroupPatchBaselineMapping&& value) { m_mappings.push_back(std::move(value)); return *this; }


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
    inline DescribePatchGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribePatchGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribePatchGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PatchGroupPatchBaselineMapping> m_mappings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
