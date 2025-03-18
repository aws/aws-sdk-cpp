/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Trigger.h>
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
  class BatchGetTriggersResult
  {
  public:
    AWS_GLUE_API BatchGetTriggersResult() = default;
    AWS_GLUE_API BatchGetTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of trigger definitions.</p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const { return m_triggers; }
    template<typename TriggersT = Aws::Vector<Trigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<Trigger>>
    BatchGetTriggersResult& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = Trigger>
    BatchGetTriggersResult& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTriggersNotFound() const { return m_triggersNotFound; }
    template<typename TriggersNotFoundT = Aws::Vector<Aws::String>>
    void SetTriggersNotFound(TriggersNotFoundT&& value) { m_triggersNotFoundHasBeenSet = true; m_triggersNotFound = std::forward<TriggersNotFoundT>(value); }
    template<typename TriggersNotFoundT = Aws::Vector<Aws::String>>
    BatchGetTriggersResult& WithTriggersNotFound(TriggersNotFoundT&& value) { SetTriggersNotFound(std::forward<TriggersNotFoundT>(value)); return *this;}
    template<typename TriggersNotFoundT = Aws::String>
    BatchGetTriggersResult& AddTriggersNotFound(TriggersNotFoundT&& value) { m_triggersNotFoundHasBeenSet = true; m_triggersNotFound.emplace_back(std::forward<TriggersNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetTriggersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Trigger> m_triggers;
    bool m_triggersHasBeenSet = false;

    Aws::Vector<Aws::String> m_triggersNotFound;
    bool m_triggersNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
