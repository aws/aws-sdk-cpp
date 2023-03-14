/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
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
namespace Honeycode
{
namespace Model
{
  class InvokeScreenAutomationResult
  {
  public:
    AWS_HONEYCODE_API InvokeScreenAutomationResult();
    AWS_HONEYCODE_API InvokeScreenAutomationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API InvokeScreenAutomationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated workbook cursor after performing the automation action.</p>
     */
    inline long long GetWorkbookCursor() const{ return m_workbookCursor; }

    /**
     * <p>The updated workbook cursor after performing the automation action.</p>
     */
    inline void SetWorkbookCursor(long long value) { m_workbookCursor = value; }

    /**
     * <p>The updated workbook cursor after performing the automation action.</p>
     */
    inline InvokeScreenAutomationResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline InvokeScreenAutomationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline InvokeScreenAutomationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline InvokeScreenAutomationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_workbookCursor;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
