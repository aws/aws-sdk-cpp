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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SecurityConfiguration.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetSecurityConfigurationsResult
  {
  public:
    GetSecurityConfigurationsResult();
    GetSecurityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSecurityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of security configurations.</p>
     */
    inline const Aws::Vector<SecurityConfiguration>& GetSecurityConfigurations() const{ return m_securityConfigurations; }

    /**
     * <p>A list of security configurations.</p>
     */
    inline void SetSecurityConfigurations(const Aws::Vector<SecurityConfiguration>& value) { m_securityConfigurations = value; }

    /**
     * <p>A list of security configurations.</p>
     */
    inline void SetSecurityConfigurations(Aws::Vector<SecurityConfiguration>&& value) { m_securityConfigurations = std::move(value); }

    /**
     * <p>A list of security configurations.</p>
     */
    inline GetSecurityConfigurationsResult& WithSecurityConfigurations(const Aws::Vector<SecurityConfiguration>& value) { SetSecurityConfigurations(value); return *this;}

    /**
     * <p>A list of security configurations.</p>
     */
    inline GetSecurityConfigurationsResult& WithSecurityConfigurations(Aws::Vector<SecurityConfiguration>&& value) { SetSecurityConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of security configurations.</p>
     */
    inline GetSecurityConfigurationsResult& AddSecurityConfigurations(const SecurityConfiguration& value) { m_securityConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of security configurations.</p>
     */
    inline GetSecurityConfigurationsResult& AddSecurityConfigurations(SecurityConfiguration&& value) { m_securityConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline GetSecurityConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline GetSecurityConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if there are more security configurations to
     * return.</p>
     */
    inline GetSecurityConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SecurityConfiguration> m_securityConfigurations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
