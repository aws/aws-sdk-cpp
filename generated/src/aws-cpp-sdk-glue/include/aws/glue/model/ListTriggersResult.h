/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class ListTriggersResult
  {
  public:
    AWS_GLUE_API ListTriggersResult() = default;
    AWS_GLUE_API ListTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of all triggers in the account, or the triggers with the specified
     * tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTriggerNames() const { return m_triggerNames; }
    template<typename TriggerNamesT = Aws::Vector<Aws::String>>
    void SetTriggerNames(TriggerNamesT&& value) { m_triggerNamesHasBeenSet = true; m_triggerNames = std::forward<TriggerNamesT>(value); }
    template<typename TriggerNamesT = Aws::Vector<Aws::String>>
    ListTriggersResult& WithTriggerNames(TriggerNamesT&& value) { SetTriggerNames(std::forward<TriggerNamesT>(value)); return *this;}
    template<typename TriggerNamesT = Aws::String>
    ListTriggersResult& AddTriggerNames(TriggerNamesT&& value) { m_triggerNamesHasBeenSet = true; m_triggerNames.emplace_back(std::forward<TriggerNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTriggersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTriggersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_triggerNames;
    bool m_triggerNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
