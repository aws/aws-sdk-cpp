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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/InstanceProfile.h>
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
namespace DeviceFarm
{
namespace Model
{
  class AWS_DEVICEFARM_API ListInstanceProfilesResult
  {
  public:
    ListInstanceProfilesResult();
    ListInstanceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInstanceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about your instance profiles.</p>
     */
    inline const Aws::Vector<InstanceProfile>& GetInstanceProfiles() const{ return m_instanceProfiles; }

    /**
     * <p>An object containing information about your instance profiles.</p>
     */
    inline void SetInstanceProfiles(const Aws::Vector<InstanceProfile>& value) { m_instanceProfiles = value; }

    /**
     * <p>An object containing information about your instance profiles.</p>
     */
    inline void SetInstanceProfiles(Aws::Vector<InstanceProfile>&& value) { m_instanceProfiles = std::move(value); }

    /**
     * <p>An object containing information about your instance profiles.</p>
     */
    inline ListInstanceProfilesResult& WithInstanceProfiles(const Aws::Vector<InstanceProfile>& value) { SetInstanceProfiles(value); return *this;}

    /**
     * <p>An object containing information about your instance profiles.</p>
     */
    inline ListInstanceProfilesResult& WithInstanceProfiles(Aws::Vector<InstanceProfile>&& value) { SetInstanceProfiles(std::move(value)); return *this;}

    /**
     * <p>An object containing information about your instance profiles.</p>
     */
    inline ListInstanceProfilesResult& AddInstanceProfiles(const InstanceProfile& value) { m_instanceProfiles.push_back(value); return *this; }

    /**
     * <p>An object containing information about your instance profiles.</p>
     */
    inline ListInstanceProfilesResult& AddInstanceProfiles(InstanceProfile&& value) { m_instanceProfiles.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListInstanceProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListInstanceProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListInstanceProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceProfile> m_instanceProfiles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
