/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a put repository triggers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggersOutput">AWS
   * API Reference</a></p>
   */
  class PutRepositoryTriggersResult
  {
  public:
    AWS_CODECOMMIT_API PutRepositoryTriggersResult() = default;
    AWS_CODECOMMIT_API PutRepositoryTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PutRepositoryTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline const Aws::String& GetConfigurationId() const { return m_configurationId; }
    template<typename ConfigurationIdT = Aws::String>
    void SetConfigurationId(ConfigurationIdT&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::forward<ConfigurationIdT>(value); }
    template<typename ConfigurationIdT = Aws::String>
    PutRepositoryTriggersResult& WithConfigurationId(ConfigurationIdT&& value) { SetConfigurationId(std::forward<ConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRepositoryTriggersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
