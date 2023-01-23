/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/MLTransform.h>
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
namespace Glue
{
namespace Model
{
  class GetMLTransformsResult
  {
  public:
    AWS_GLUE_API GetMLTransformsResult();
    AWS_GLUE_API GetMLTransformsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMLTransformsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of machine learning transforms.</p>
     */
    inline const Aws::Vector<MLTransform>& GetTransforms() const{ return m_transforms; }

    /**
     * <p>A list of machine learning transforms.</p>
     */
    inline void SetTransforms(const Aws::Vector<MLTransform>& value) { m_transforms = value; }

    /**
     * <p>A list of machine learning transforms.</p>
     */
    inline void SetTransforms(Aws::Vector<MLTransform>&& value) { m_transforms = std::move(value); }

    /**
     * <p>A list of machine learning transforms.</p>
     */
    inline GetMLTransformsResult& WithTransforms(const Aws::Vector<MLTransform>& value) { SetTransforms(value); return *this;}

    /**
     * <p>A list of machine learning transforms.</p>
     */
    inline GetMLTransformsResult& WithTransforms(Aws::Vector<MLTransform>&& value) { SetTransforms(std::move(value)); return *this;}

    /**
     * <p>A list of machine learning transforms.</p>
     */
    inline GetMLTransformsResult& AddTransforms(const MLTransform& value) { m_transforms.push_back(value); return *this; }

    /**
     * <p>A list of machine learning transforms.</p>
     */
    inline GetMLTransformsResult& AddTransforms(MLTransform&& value) { m_transforms.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline GetMLTransformsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline GetMLTransformsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline GetMLTransformsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MLTransform> m_transforms;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
