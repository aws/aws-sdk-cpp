/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The support case ID returned by a successful completion of the
   * <a>CreateCase</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCaseResponse">AWS
   * API Reference</a></p>
   */
  class CreateCaseResult
  {
  public:
    AWS_SUPPORT_API CreateCaseResult();
    AWS_SUPPORT_API CreateCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API CreateCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseId = value; }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseId = std::move(value); }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const char* value) { m_caseId.assign(value); }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline CreateCaseResult& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline CreateCaseResult& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string in the following format:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline CreateCaseResult& WithCaseId(const char* value) { SetCaseId(value); return *this;}

  private:

    Aws::String m_caseId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
