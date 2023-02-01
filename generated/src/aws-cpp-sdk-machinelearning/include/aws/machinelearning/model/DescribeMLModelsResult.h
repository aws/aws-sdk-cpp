/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/MLModel.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DescribeMLModels</code> operation. The
   * content is essentially a list of <code>MLModel</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeMLModelsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeMLModelsResult
  {
  public:
    AWS_MACHINELEARNING_API DescribeMLModelsResult();
    AWS_MACHINELEARNING_API DescribeMLModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DescribeMLModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>MLModel</code> that meet the search criteria.</p>
     */
    inline const Aws::Vector<MLModel>& GetResults() const{ return m_results; }

    /**
     * <p>A list of <code>MLModel</code> that meet the search criteria.</p>
     */
    inline void SetResults(const Aws::Vector<MLModel>& value) { m_results = value; }

    /**
     * <p>A list of <code>MLModel</code> that meet the search criteria.</p>
     */
    inline void SetResults(Aws::Vector<MLModel>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of <code>MLModel</code> that meet the search criteria.</p>
     */
    inline DescribeMLModelsResult& WithResults(const Aws::Vector<MLModel>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of <code>MLModel</code> that meet the search criteria.</p>
     */
    inline DescribeMLModelsResult& WithResults(Aws::Vector<MLModel>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MLModel</code> that meet the search criteria.</p>
     */
    inline DescribeMLModelsResult& AddResults(const MLModel& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of <code>MLModel</code> that meet the search criteria.</p>
     */
    inline DescribeMLModelsResult& AddResults(MLModel&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeMLModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeMLModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeMLModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MLModel> m_results;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
