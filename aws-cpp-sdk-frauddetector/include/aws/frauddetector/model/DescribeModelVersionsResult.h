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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelVersionDetail.h>
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
namespace FraudDetector
{
namespace Model
{
  class AWS_FRAUDDETECTOR_API DescribeModelVersionsResult
  {
  public:
    DescribeModelVersionsResult();
    DescribeModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The model version details.</p>
     */
    inline const Aws::Vector<ModelVersionDetail>& GetModelVersionDetails() const{ return m_modelVersionDetails; }

    /**
     * <p>The model version details.</p>
     */
    inline void SetModelVersionDetails(const Aws::Vector<ModelVersionDetail>& value) { m_modelVersionDetails = value; }

    /**
     * <p>The model version details.</p>
     */
    inline void SetModelVersionDetails(Aws::Vector<ModelVersionDetail>&& value) { m_modelVersionDetails = std::move(value); }

    /**
     * <p>The model version details.</p>
     */
    inline DescribeModelVersionsResult& WithModelVersionDetails(const Aws::Vector<ModelVersionDetail>& value) { SetModelVersionDetails(value); return *this;}

    /**
     * <p>The model version details.</p>
     */
    inline DescribeModelVersionsResult& WithModelVersionDetails(Aws::Vector<ModelVersionDetail>&& value) { SetModelVersionDetails(std::move(value)); return *this;}

    /**
     * <p>The model version details.</p>
     */
    inline DescribeModelVersionsResult& AddModelVersionDetails(const ModelVersionDetail& value) { m_modelVersionDetails.push_back(value); return *this; }

    /**
     * <p>The model version details.</p>
     */
    inline DescribeModelVersionsResult& AddModelVersionDetails(ModelVersionDetail&& value) { m_modelVersionDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token.</p>
     */
    inline DescribeModelVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token.</p>
     */
    inline DescribeModelVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token.</p>
     */
    inline DescribeModelVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelVersionDetail> m_modelVersionDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
