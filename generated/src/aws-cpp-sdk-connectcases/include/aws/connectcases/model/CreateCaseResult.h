/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateCaseResult
  {
  public:
    AWS_CONNECTCASES_API CreateCaseResult();
    AWS_CONNECTCASES_API CreateCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline const Aws::String& GetCaseArn() const{ return m_caseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline void SetCaseArn(const Aws::String& value) { m_caseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline void SetCaseArn(Aws::String&& value) { m_caseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline void SetCaseArn(const char* value) { m_caseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline CreateCaseResult& WithCaseArn(const Aws::String& value) { SetCaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline CreateCaseResult& WithCaseArn(Aws::String&& value) { SetCaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline CreateCaseResult& WithCaseArn(const char* value) { SetCaseArn(value); return *this;}


    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseId = value; }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseId = std::move(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline void SetCaseId(const char* value) { m_caseId.assign(value); }

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CreateCaseResult& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CreateCaseResult& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the case.</p>
     */
    inline CreateCaseResult& WithCaseId(const char* value) { SetCaseId(value); return *this;}

  private:

    Aws::String m_caseArn;

    Aws::String m_caseId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
