/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Result of a VerifyTrust request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/VerifyTrustResult">AWS
   * API Reference</a></p>
   */
  class VerifyTrustResult
  {
  public:
    AWS_DIRECTORYSERVICE_API VerifyTrustResult();
    AWS_DIRECTORYSERVICE_API VerifyTrustResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API VerifyTrustResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique Trust ID of the trust relationship that was verified.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>The unique Trust ID of the trust relationship that was verified.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustId = value; }

    /**
     * <p>The unique Trust ID of the trust relationship that was verified.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustId = std::move(value); }

    /**
     * <p>The unique Trust ID of the trust relationship that was verified.</p>
     */
    inline void SetTrustId(const char* value) { m_trustId.assign(value); }

    /**
     * <p>The unique Trust ID of the trust relationship that was verified.</p>
     */
    inline VerifyTrustResult& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>The unique Trust ID of the trust relationship that was verified.</p>
     */
    inline VerifyTrustResult& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}

    /**
     * <p>The unique Trust ID of the trust relationship that was verified.</p>
     */
    inline VerifyTrustResult& WithTrustId(const char* value) { SetTrustId(value); return *this;}

  private:

    Aws::String m_trustId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
