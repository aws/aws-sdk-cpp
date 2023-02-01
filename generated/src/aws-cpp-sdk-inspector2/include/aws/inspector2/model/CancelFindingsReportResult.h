/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{
  class CancelFindingsReportResult
  {
  public:
    AWS_INSPECTOR2_API CancelFindingsReportResult();
    AWS_INSPECTOR2_API CancelFindingsReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API CancelFindingsReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the canceled report.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>The ID of the canceled report.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }

    /**
     * <p>The ID of the canceled report.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }

    /**
     * <p>The ID of the canceled report.</p>
     */
    inline void SetReportId(const char* value) { m_reportId.assign(value); }

    /**
     * <p>The ID of the canceled report.</p>
     */
    inline CancelFindingsReportResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>The ID of the canceled report.</p>
     */
    inline CancelFindingsReportResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>The ID of the canceled report.</p>
     */
    inline CancelFindingsReportResult& WithReportId(const char* value) { SetReportId(value); return *this;}

  private:

    Aws::String m_reportId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
