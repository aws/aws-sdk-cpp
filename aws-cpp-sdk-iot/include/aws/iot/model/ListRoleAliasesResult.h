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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListRoleAliasesResult
  {
  public:
    ListRoleAliasesResult();
    ListRoleAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRoleAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The role aliases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleAliases() const{ return m_roleAliases; }

    /**
     * <p>The role aliases.</p>
     */
    inline void SetRoleAliases(const Aws::Vector<Aws::String>& value) { m_roleAliases = value; }

    /**
     * <p>The role aliases.</p>
     */
    inline void SetRoleAliases(Aws::Vector<Aws::String>&& value) { m_roleAliases = std::move(value); }

    /**
     * <p>The role aliases.</p>
     */
    inline ListRoleAliasesResult& WithRoleAliases(const Aws::Vector<Aws::String>& value) { SetRoleAliases(value); return *this;}

    /**
     * <p>The role aliases.</p>
     */
    inline ListRoleAliasesResult& WithRoleAliases(Aws::Vector<Aws::String>&& value) { SetRoleAliases(std::move(value)); return *this;}

    /**
     * <p>The role aliases.</p>
     */
    inline ListRoleAliasesResult& AddRoleAliases(const Aws::String& value) { m_roleAliases.push_back(value); return *this; }

    /**
     * <p>The role aliases.</p>
     */
    inline ListRoleAliasesResult& AddRoleAliases(Aws::String&& value) { m_roleAliases.push_back(std::move(value)); return *this; }

    /**
     * <p>The role aliases.</p>
     */
    inline ListRoleAliasesResult& AddRoleAliases(const char* value) { m_roleAliases.push_back(value); return *this; }


    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListRoleAliasesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListRoleAliasesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>A marker used to get the next set of results.</p>
     */
    inline ListRoleAliasesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_roleAliases;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
