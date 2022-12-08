/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SavingsPlansCoverage.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetSavingsPlansCoverageResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansCoverageResult();
    AWS_COSTEXPLORER_API GetSavingsPlansCoverageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansCoverageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline const Aws::Vector<SavingsPlansCoverage>& GetSavingsPlansCoverages() const{ return m_savingsPlansCoverages; }

    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline void SetSavingsPlansCoverages(const Aws::Vector<SavingsPlansCoverage>& value) { m_savingsPlansCoverages = value; }

    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline void SetSavingsPlansCoverages(Aws::Vector<SavingsPlansCoverage>&& value) { m_savingsPlansCoverages = std::move(value); }

    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline GetSavingsPlansCoverageResult& WithSavingsPlansCoverages(const Aws::Vector<SavingsPlansCoverage>& value) { SetSavingsPlansCoverages(value); return *this;}

    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline GetSavingsPlansCoverageResult& WithSavingsPlansCoverages(Aws::Vector<SavingsPlansCoverage>&& value) { SetSavingsPlansCoverages(std::move(value)); return *this;}

    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline GetSavingsPlansCoverageResult& AddSavingsPlansCoverages(const SavingsPlansCoverage& value) { m_savingsPlansCoverages.push_back(value); return *this; }

    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline GetSavingsPlansCoverageResult& AddSavingsPlansCoverages(SavingsPlansCoverage&& value) { m_savingsPlansCoverages.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansCoverageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansCoverageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansCoverageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SavingsPlansCoverage> m_savingsPlansCoverages;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
