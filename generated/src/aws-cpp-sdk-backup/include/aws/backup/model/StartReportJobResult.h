/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{
  class StartReportJobResult
  {
  public:
    AWS_BACKUP_API StartReportJobResult();
    AWS_BACKUP_API StartReportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API StartReportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline const Aws::String& GetReportJobId() const{ return m_reportJobId; }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline void SetReportJobId(const Aws::String& value) { m_reportJobId = value; }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline void SetReportJobId(Aws::String&& value) { m_reportJobId = std::move(value); }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline void SetReportJobId(const char* value) { m_reportJobId.assign(value); }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline StartReportJobResult& WithReportJobId(const Aws::String& value) { SetReportJobId(value); return *this;}

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline StartReportJobResult& WithReportJobId(Aws::String&& value) { SetReportJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline StartReportJobResult& WithReportJobId(const char* value) { SetReportJobId(value); return *this;}

  private:

    Aws::String m_reportJobId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
