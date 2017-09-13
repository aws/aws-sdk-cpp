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
#include <aws/mturk-requester/model/Qualification.h>
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
  class AWS_MTURK_API ListWorkersWithQualificationTypeResult
  {
  public:
    ListWorkersWithQualificationTypeResult();
    ListWorkersWithQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListWorkersWithQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListWorkersWithQualificationTypeResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkersWithQualificationTypeResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkersWithQualificationTypeResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The number of Qualifications on this page in the filtered results list,
     * equivalent to the number of Qualifications being returned by this call.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p> The number of Qualifications on this page in the filtered results list,
     * equivalent to the number of Qualifications being returned by this call.</p>
     */
    inline void SetNumResults(int value) { m_numResults = value; }

    /**
     * <p> The number of Qualifications on this page in the filtered results list,
     * equivalent to the number of Qualifications being returned by this call.</p>
     */
    inline ListWorkersWithQualificationTypeResult& WithNumResults(int value) { SetNumResults(value); return *this;}


    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline const Aws::Vector<Qualification>& GetQualifications() const{ return m_qualifications; }

    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline void SetQualifications(const Aws::Vector<Qualification>& value) { m_qualifications = value; }

    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline void SetQualifications(Aws::Vector<Qualification>&& value) { m_qualifications = std::move(value); }

    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline ListWorkersWithQualificationTypeResult& WithQualifications(const Aws::Vector<Qualification>& value) { SetQualifications(value); return *this;}

    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline ListWorkersWithQualificationTypeResult& WithQualifications(Aws::Vector<Qualification>&& value) { SetQualifications(std::move(value)); return *this;}

    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline ListWorkersWithQualificationTypeResult& AddQualifications(const Qualification& value) { m_qualifications.push_back(value); return *this; }

    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline ListWorkersWithQualificationTypeResult& AddQualifications(Qualification&& value) { m_qualifications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_numResults;

    Aws::Vector<Qualification> m_qualifications;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
