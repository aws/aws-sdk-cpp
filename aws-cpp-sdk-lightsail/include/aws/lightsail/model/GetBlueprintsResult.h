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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Blueprint.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetBlueprintsResult
  {
  public:
    GetBlueprintsResult();
    GetBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline const Aws::Vector<Blueprint>& GetBlueprints() const{ return m_blueprints; }

    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline void SetBlueprints(const Aws::Vector<Blueprint>& value) { m_blueprints = value; }

    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline void SetBlueprints(Aws::Vector<Blueprint>&& value) { m_blueprints = std::move(value); }

    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline GetBlueprintsResult& WithBlueprints(const Aws::Vector<Blueprint>& value) { SetBlueprints(value); return *this;}

    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline GetBlueprintsResult& WithBlueprints(Aws::Vector<Blueprint>&& value) { SetBlueprints(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline GetBlueprintsResult& AddBlueprints(const Blueprint& value) { m_blueprints.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs that contains information about the available
     * blueprints.</p>
     */
    inline GetBlueprintsResult& AddBlueprints(Blueprint&& value) { m_blueprints.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline GetBlueprintsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline GetBlueprintsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline GetBlueprintsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Blueprint> m_blueprints;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
