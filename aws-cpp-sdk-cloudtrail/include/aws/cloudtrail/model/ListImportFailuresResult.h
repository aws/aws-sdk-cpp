/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ImportFailureListItem.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListImportFailuresResult
  {
  public:
    AWS_CLOUDTRAIL_API ListImportFailuresResult();
    AWS_CLOUDTRAIL_API ListImportFailuresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListImportFailuresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Contains information about the import failures. </p>
     */
    inline const Aws::Vector<ImportFailureListItem>& GetFailures() const{ return m_failures; }

    /**
     * <p> Contains information about the import failures. </p>
     */
    inline void SetFailures(const Aws::Vector<ImportFailureListItem>& value) { m_failures = value; }

    /**
     * <p> Contains information about the import failures. </p>
     */
    inline void SetFailures(Aws::Vector<ImportFailureListItem>&& value) { m_failures = std::move(value); }

    /**
     * <p> Contains information about the import failures. </p>
     */
    inline ListImportFailuresResult& WithFailures(const Aws::Vector<ImportFailureListItem>& value) { SetFailures(value); return *this;}

    /**
     * <p> Contains information about the import failures. </p>
     */
    inline ListImportFailuresResult& WithFailures(Aws::Vector<ImportFailureListItem>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p> Contains information about the import failures. </p>
     */
    inline ListImportFailuresResult& AddFailures(const ImportFailureListItem& value) { m_failures.push_back(value); return *this; }

    /**
     * <p> Contains information about the import failures. </p>
     */
    inline ListImportFailuresResult& AddFailures(ImportFailureListItem&& value) { m_failures.push_back(std::move(value)); return *this; }


    /**
     * <p> A token you can use to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token you can use to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token you can use to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token you can use to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token you can use to get the next page of results. </p>
     */
    inline ListImportFailuresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token you can use to get the next page of results. </p>
     */
    inline ListImportFailuresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token you can use to get the next page of results. </p>
     */
    inline ListImportFailuresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImportFailureListItem> m_failures;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
