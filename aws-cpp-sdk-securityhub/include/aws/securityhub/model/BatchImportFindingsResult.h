/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/ImportFindingsError.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchImportFindingsResult
  {
  public:
    AWS_SECURITYHUB_API BatchImportFindingsResult();
    AWS_SECURITYHUB_API BatchImportFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchImportFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of findings that failed to import.</p>
     */
    inline int GetFailedCount() const{ return m_failedCount; }

    /**
     * <p>The number of findings that failed to import.</p>
     */
    inline void SetFailedCount(int value) { m_failedCount = value; }

    /**
     * <p>The number of findings that failed to import.</p>
     */
    inline BatchImportFindingsResult& WithFailedCount(int value) { SetFailedCount(value); return *this;}


    /**
     * <p>The number of findings that were successfully imported.</p>
     */
    inline int GetSuccessCount() const{ return m_successCount; }

    /**
     * <p>The number of findings that were successfully imported.</p>
     */
    inline void SetSuccessCount(int value) { m_successCount = value; }

    /**
     * <p>The number of findings that were successfully imported.</p>
     */
    inline BatchImportFindingsResult& WithSuccessCount(int value) { SetSuccessCount(value); return *this;}


    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline const Aws::Vector<ImportFindingsError>& GetFailedFindings() const{ return m_failedFindings; }

    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline void SetFailedFindings(const Aws::Vector<ImportFindingsError>& value) { m_failedFindings = value; }

    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline void SetFailedFindings(Aws::Vector<ImportFindingsError>&& value) { m_failedFindings = std::move(value); }

    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline BatchImportFindingsResult& WithFailedFindings(const Aws::Vector<ImportFindingsError>& value) { SetFailedFindings(value); return *this;}

    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline BatchImportFindingsResult& WithFailedFindings(Aws::Vector<ImportFindingsError>&& value) { SetFailedFindings(std::move(value)); return *this;}

    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline BatchImportFindingsResult& AddFailedFindings(const ImportFindingsError& value) { m_failedFindings.push_back(value); return *this; }

    /**
     * <p>The list of findings that failed to import.</p>
     */
    inline BatchImportFindingsResult& AddFailedFindings(ImportFindingsError&& value) { m_failedFindings.push_back(std::move(value)); return *this; }

  private:

    int m_failedCount;

    int m_successCount;

    Aws::Vector<ImportFindingsError> m_failedFindings;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
