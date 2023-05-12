/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{
  class CancelFlowExecutionsResult
  {
  public:
    AWS_APPFLOW_API CancelFlowExecutionsResult();
    AWS_APPFLOW_API CancelFlowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API CancelFlowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidExecutions() const{ return m_invalidExecutions; }

    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline void SetInvalidExecutions(const Aws::Vector<Aws::String>& value) { m_invalidExecutions = value; }

    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline void SetInvalidExecutions(Aws::Vector<Aws::String>&& value) { m_invalidExecutions = std::move(value); }

    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline CancelFlowExecutionsResult& WithInvalidExecutions(const Aws::Vector<Aws::String>& value) { SetInvalidExecutions(value); return *this;}

    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline CancelFlowExecutionsResult& WithInvalidExecutions(Aws::Vector<Aws::String>&& value) { SetInvalidExecutions(std::move(value)); return *this;}

    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline CancelFlowExecutionsResult& AddInvalidExecutions(const Aws::String& value) { m_invalidExecutions.push_back(value); return *this; }

    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline CancelFlowExecutionsResult& AddInvalidExecutions(Aws::String&& value) { m_invalidExecutions.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline CancelFlowExecutionsResult& AddInvalidExecutions(const char* value) { m_invalidExecutions.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelFlowExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelFlowExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelFlowExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_invalidExecutions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
