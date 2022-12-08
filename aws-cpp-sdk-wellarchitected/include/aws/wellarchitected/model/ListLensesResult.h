/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Output of a list lenses call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensesOutput">AWS
   * API Reference</a></p>
   */
  class ListLensesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListLensesResult();
    AWS_WELLARCHITECTED_API ListLensesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListLensesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<LensSummary>& GetLensSummaries() const{ return m_lensSummaries; }

    
    inline void SetLensSummaries(const Aws::Vector<LensSummary>& value) { m_lensSummaries = value; }

    
    inline void SetLensSummaries(Aws::Vector<LensSummary>&& value) { m_lensSummaries = std::move(value); }

    
    inline ListLensesResult& WithLensSummaries(const Aws::Vector<LensSummary>& value) { SetLensSummaries(value); return *this;}

    
    inline ListLensesResult& WithLensSummaries(Aws::Vector<LensSummary>&& value) { SetLensSummaries(std::move(value)); return *this;}

    
    inline ListLensesResult& AddLensSummaries(const LensSummary& value) { m_lensSummaries.push_back(value); return *this; }

    
    inline ListLensesResult& AddLensSummaries(LensSummary&& value) { m_lensSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListLensesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListLensesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListLensesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LensSummary> m_lensSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
