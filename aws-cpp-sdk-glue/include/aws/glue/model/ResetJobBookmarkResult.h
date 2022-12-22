/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/JobBookmarkEntry.h>
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
  class ResetJobBookmarkResult
  {
  public:
    AWS_GLUE_API ResetJobBookmarkResult();
    AWS_GLUE_API ResetJobBookmarkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ResetJobBookmarkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The reset bookmark entry.</p>
     */
    inline const JobBookmarkEntry& GetJobBookmarkEntry() const{ return m_jobBookmarkEntry; }

    /**
     * <p>The reset bookmark entry.</p>
     */
    inline void SetJobBookmarkEntry(const JobBookmarkEntry& value) { m_jobBookmarkEntry = value; }

    /**
     * <p>The reset bookmark entry.</p>
     */
    inline void SetJobBookmarkEntry(JobBookmarkEntry&& value) { m_jobBookmarkEntry = std::move(value); }

    /**
     * <p>The reset bookmark entry.</p>
     */
    inline ResetJobBookmarkResult& WithJobBookmarkEntry(const JobBookmarkEntry& value) { SetJobBookmarkEntry(value); return *this;}

    /**
     * <p>The reset bookmark entry.</p>
     */
    inline ResetJobBookmarkResult& WithJobBookmarkEntry(JobBookmarkEntry&& value) { SetJobBookmarkEntry(std::move(value)); return *this;}

  private:

    JobBookmarkEntry m_jobBookmarkEntry;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
