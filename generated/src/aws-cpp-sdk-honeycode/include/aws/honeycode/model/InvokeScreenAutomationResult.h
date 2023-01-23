/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>

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

  private:

    long long m_workbookCursor;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
