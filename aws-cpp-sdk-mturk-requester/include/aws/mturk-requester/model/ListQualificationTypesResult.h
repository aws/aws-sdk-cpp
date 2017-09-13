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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/QualificationType.h>
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
namespace MTurk
{
namespace Model
{
  class AWS_MTURK_API ListQualificationTypesResult
  {
  public:
    ListQualificationTypesResult();
    ListQualificationTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListQualificationTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The number of Qualification types on this page in the filtered results list,
     * equivalent to the number of types this operation returns. </p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p> The number of Qualification types on this page in the filtered results list,
     * equivalent to the number of types this operation returns. </p>
     */
    inline void SetNumResults(int value) { m_numResults = value; }

    /**
     * <p> The number of Qualification types on this page in the filtered results list,
     * equivalent to the number of types this operation returns. </p>
     */
    inline ListQualificationTypesResult& WithNumResults(int value) { SetNumResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListQualificationTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListQualificationTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListQualificationTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline const Aws::Vector<QualificationType>& GetQualificationTypes() const{ return m_qualificationTypes; }

    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline void SetQualificationTypes(const Aws::Vector<QualificationType>& value) { m_qualificationTypes = value; }

    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline void SetQualificationTypes(Aws::Vector<QualificationType>&& value) { m_qualificationTypes = std::move(value); }

    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline ListQualificationTypesResult& WithQualificationTypes(const Aws::Vector<QualificationType>& value) { SetQualificationTypes(value); return *this;}

    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline ListQualificationTypesResult& WithQualificationTypes(Aws::Vector<QualificationType>&& value) { SetQualificationTypes(std::move(value)); return *this;}

    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline ListQualificationTypesResult& AddQualificationTypes(const QualificationType& value) { m_qualificationTypes.push_back(value); return *this; }

    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline ListQualificationTypesResult& AddQualificationTypes(QualificationType&& value) { m_qualificationTypes.push_back(std::move(value)); return *this; }

  private:

    int m_numResults;

    Aws::String m_nextToken;

    Aws::Vector<QualificationType> m_qualificationTypes;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
