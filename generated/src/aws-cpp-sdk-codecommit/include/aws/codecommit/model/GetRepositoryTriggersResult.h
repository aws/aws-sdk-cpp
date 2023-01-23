/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/RepositoryTrigger.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a get repository triggers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggersOutput">AWS
   * API Reference</a></p>
   */
  class GetRepositoryTriggersResult
  {
  public:
    AWS_CODECOMMIT_API GetRepositoryTriggersResult();
    AWS_CODECOMMIT_API GetRepositoryTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetRepositoryTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }

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
    inline GetRepositoryTriggersResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

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
    inline void SetTriggers(Aws::Vector<RepositoryTrigger>&& value) { m_triggers = std::move(value); }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& WithTriggers(const Aws::Vector<RepositoryTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& WithTriggers(Aws::Vector<RepositoryTrigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& AddTriggers(const RepositoryTrigger& value) { m_triggers.push_back(value); return *this; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline GetRepositoryTriggersResult& AddTriggers(RepositoryTrigger&& value) { m_triggers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationId;

    Aws::Vector<RepositoryTrigger> m_triggers;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
