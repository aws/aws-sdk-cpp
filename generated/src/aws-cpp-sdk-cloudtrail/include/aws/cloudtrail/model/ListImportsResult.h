/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ImportsListItem.h>
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
  class ListImportsResult
  {
  public:
    AWS_CLOUDTRAIL_API ListImportsResult();
    AWS_CLOUDTRAIL_API ListImportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListImportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of returned imports. </p>
     */
    inline const Aws::Vector<ImportsListItem>& GetImports() const{ return m_imports; }

    /**
     * <p> The list of returned imports. </p>
     */
    inline void SetImports(const Aws::Vector<ImportsListItem>& value) { m_imports = value; }

    /**
     * <p> The list of returned imports. </p>
     */
    inline void SetImports(Aws::Vector<ImportsListItem>&& value) { m_imports = std::move(value); }

    /**
     * <p> The list of returned imports. </p>
     */
    inline ListImportsResult& WithImports(const Aws::Vector<ImportsListItem>& value) { SetImports(value); return *this;}

    /**
     * <p> The list of returned imports. </p>
     */
    inline ListImportsResult& WithImports(Aws::Vector<ImportsListItem>&& value) { SetImports(std::move(value)); return *this;}

    /**
     * <p> The list of returned imports. </p>
     */
    inline ListImportsResult& AddImports(const ImportsListItem& value) { m_imports.push_back(value); return *this; }

    /**
     * <p> The list of returned imports. </p>
     */
    inline ListImportsResult& AddImports(ImportsListItem&& value) { m_imports.push_back(std::move(value)); return *this; }


    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline ListImportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline ListImportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline ListImportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImportsListItem> m_imports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
