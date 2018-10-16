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
#include <aws/lightsail/model/RelationalDatabaseParameter.h>
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
  class AWS_LIGHTSAIL_API GetRelationalDatabaseParametersResult
  {
  public:
    GetRelationalDatabaseParametersResult();
    GetRelationalDatabaseParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRelationalDatabaseParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the result of your get relational database parameters
     * request.</p>
     */
    inline const Aws::Vector<RelationalDatabaseParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An object describing the result of your get relational database parameters
     * request.</p>
     */
    inline void SetParameters(const Aws::Vector<RelationalDatabaseParameter>& value) { m_parameters = value; }

    /**
     * <p>An object describing the result of your get relational database parameters
     * request.</p>
     */
    inline void SetParameters(Aws::Vector<RelationalDatabaseParameter>&& value) { m_parameters = std::move(value); }

    /**
     * <p>An object describing the result of your get relational database parameters
     * request.</p>
     */
    inline GetRelationalDatabaseParametersResult& WithParameters(const Aws::Vector<RelationalDatabaseParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>An object describing the result of your get relational database parameters
     * request.</p>
     */
    inline GetRelationalDatabaseParametersResult& WithParameters(Aws::Vector<RelationalDatabaseParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>An object describing the result of your get relational database parameters
     * request.</p>
     */
    inline GetRelationalDatabaseParametersResult& AddParameters(const RelationalDatabaseParameter& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>An object describing the result of your get relational database parameters
     * request.</p>
     */
    inline GetRelationalDatabaseParametersResult& AddParameters(RelationalDatabaseParameter&& value) { m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline GetRelationalDatabaseParametersResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline GetRelationalDatabaseParametersResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get static
     * IPs request.</p>
     */
    inline GetRelationalDatabaseParametersResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<RelationalDatabaseParameter> m_parameters;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
