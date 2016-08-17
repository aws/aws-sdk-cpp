/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/RepositoryTrigger.h>

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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a get repository triggers operation.</p>
   */
  class AWS_CODECOMMIT_API GetRepositoryTriggersResult
  {
  public:
    GetRepositoryTriggersResult();
    GetRepositoryTriggersResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRepositoryTriggersResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }

    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = value; }

    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }

    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline GetRepositoryTriggersResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline GetRepositoryTriggersResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline GetRepositoryTriggersResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline const Aws::Vector<RepositoryTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline void SetTriggers(const Aws::Vector<RepositoryTrigger>& value) { m_triggers = value; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline void SetTriggers(Aws::Vector<RepositoryTrigger>&& value) { m_triggers = value; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& WithTriggers(const Aws::Vector<RepositoryTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& WithTriggers(Aws::Vector<RepositoryTrigger>&& value) { SetTriggers(value); return *this;}

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& AddTriggers(const RepositoryTrigger& value) { m_triggers.push_back(value); return *this; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& AddTriggers(RepositoryTrigger&& value) { m_triggers.push_back(value); return *this; }

  private:
    Aws::String m_configurationId;
    Aws::Vector<RepositoryTrigger> m_triggers;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
