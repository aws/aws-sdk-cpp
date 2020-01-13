/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/CopyJob.h>
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
  class AWS_BACKUP_API DescribeCopyJobResult
  {
  public:
    DescribeCopyJobResult();
    DescribeCopyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCopyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline const CopyJob& GetCopyJob() const{ return m_copyJob; }

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline void SetCopyJob(const CopyJob& value) { m_copyJob = value; }

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline void SetCopyJob(CopyJob&& value) { m_copyJob = std::move(value); }

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline DescribeCopyJobResult& WithCopyJob(const CopyJob& value) { SetCopyJob(value); return *this;}

    /**
     * <p>Contains detailed information about a copy job.</p>
     */
    inline DescribeCopyJobResult& WithCopyJob(CopyJob&& value) { SetCopyJob(std::move(value)); return *this;}

  private:

    CopyJob m_copyJob;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
