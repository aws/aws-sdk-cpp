/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/GroupingConfiguration.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class PutGroupingConfigurationResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API PutGroupingConfigurationResult() = default;
    AWS_APPLICATIONSIGNALS_API PutGroupingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API PutGroupingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing the updated grouping configuration, including all
     * grouping attribute definitions and the timestamp when it was last updated.</p>
     */
    inline const GroupingConfiguration& GetGroupingConfiguration() const { return m_groupingConfiguration; }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    void SetGroupingConfiguration(GroupingConfigurationT&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::forward<GroupingConfigurationT>(value); }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    PutGroupingConfigurationResult& WithGroupingConfiguration(GroupingConfigurationT&& value) { SetGroupingConfiguration(std::forward<GroupingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutGroupingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
