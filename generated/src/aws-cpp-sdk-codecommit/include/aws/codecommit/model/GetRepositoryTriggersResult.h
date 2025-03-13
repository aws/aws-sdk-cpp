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
    AWS_CODECOMMIT_API GetRepositoryTriggersResult() = default;
    AWS_CODECOMMIT_API GetRepositoryTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetRepositoryTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The system-generated unique ID for the trigger.</p>
     */
    inline const Aws::String& GetConfigurationId() const { return m_configurationId; }
    template<typename ConfigurationIdT = Aws::String>
    void SetConfigurationId(ConfigurationIdT&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::forward<ConfigurationIdT>(value); }
    template<typename ConfigurationIdT = Aws::String>
    GetRepositoryTriggersResult& WithConfigurationId(ConfigurationIdT&& value) { SetConfigurationId(std::forward<ConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline const Aws::Vector<RepositoryTrigger>& GetTriggers() const { return m_triggers; }
    template<typename TriggersT = Aws::Vector<RepositoryTrigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<RepositoryTrigger>>
    GetRepositoryTriggersResult& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = RepositoryTrigger>
    GetRepositoryTriggersResult& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRepositoryTriggersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::Vector<RepositoryTrigger> m_triggers;
    bool m_triggersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
