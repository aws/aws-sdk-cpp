/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Personalize
{
namespace Model
{
  class CreateSolutionVersionResult
  {
  public:
    AWS_PERSONALIZE_API CreateSolutionVersionResult();
    AWS_PERSONALIZE_API CreateSolutionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateSolutionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArn = value; }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArn = std::move(value); }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArn.assign(value); }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline CreateSolutionVersionResult& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline CreateSolutionVersionResult& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline CreateSolutionVersionResult& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}

  private:

    Aws::String m_solutionVersionArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
