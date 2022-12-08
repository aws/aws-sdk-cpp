/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/SensitivityInspectionTemplatesEntry.h>
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
namespace Macie2
{
namespace Model
{
  class ListSensitivityInspectionTemplatesResult
  {
  public:
    AWS_MACIE2_API ListSensitivityInspectionTemplatesResult();
    AWS_MACIE2_API ListSensitivityInspectionTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListSensitivityInspectionTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListSensitivityInspectionTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListSensitivityInspectionTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListSensitivityInspectionTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array that specifies the unique identifier and name of the sensitivity
     * inspection template for the account.</p>
     */
    inline const Aws::Vector<SensitivityInspectionTemplatesEntry>& GetSensitivityInspectionTemplates() const{ return m_sensitivityInspectionTemplates; }

    /**
     * <p>An array that specifies the unique identifier and name of the sensitivity
     * inspection template for the account.</p>
     */
    inline void SetSensitivityInspectionTemplates(const Aws::Vector<SensitivityInspectionTemplatesEntry>& value) { m_sensitivityInspectionTemplates = value; }

    /**
     * <p>An array that specifies the unique identifier and name of the sensitivity
     * inspection template for the account.</p>
     */
    inline void SetSensitivityInspectionTemplates(Aws::Vector<SensitivityInspectionTemplatesEntry>&& value) { m_sensitivityInspectionTemplates = std::move(value); }

    /**
     * <p>An array that specifies the unique identifier and name of the sensitivity
     * inspection template for the account.</p>
     */
    inline ListSensitivityInspectionTemplatesResult& WithSensitivityInspectionTemplates(const Aws::Vector<SensitivityInspectionTemplatesEntry>& value) { SetSensitivityInspectionTemplates(value); return *this;}

    /**
     * <p>An array that specifies the unique identifier and name of the sensitivity
     * inspection template for the account.</p>
     */
    inline ListSensitivityInspectionTemplatesResult& WithSensitivityInspectionTemplates(Aws::Vector<SensitivityInspectionTemplatesEntry>&& value) { SetSensitivityInspectionTemplates(std::move(value)); return *this;}

    /**
     * <p>An array that specifies the unique identifier and name of the sensitivity
     * inspection template for the account.</p>
     */
    inline ListSensitivityInspectionTemplatesResult& AddSensitivityInspectionTemplates(const SensitivityInspectionTemplatesEntry& value) { m_sensitivityInspectionTemplates.push_back(value); return *this; }

    /**
     * <p>An array that specifies the unique identifier and name of the sensitivity
     * inspection template for the account.</p>
     */
    inline ListSensitivityInspectionTemplatesResult& AddSensitivityInspectionTemplates(SensitivityInspectionTemplatesEntry&& value) { m_sensitivityInspectionTemplates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SensitivityInspectionTemplatesEntry> m_sensitivityInspectionTemplates;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
