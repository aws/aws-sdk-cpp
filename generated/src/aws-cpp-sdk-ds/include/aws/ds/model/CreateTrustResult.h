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
   * <p>The result of a CreateTrust request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateTrustResult">AWS
   * API Reference</a></p>
   */
  class CreateTrustResult
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateTrustResult();
    AWS_DIRECTORYSERVICE_API CreateTrustResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API CreateTrustResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the trust relationship that was created.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>A unique identifier for the trust relationship that was created.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustId = value; }

    /**
     * <p>A unique identifier for the trust relationship that was created.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustId = std::move(value); }

    /**
     * <p>A unique identifier for the trust relationship that was created.</p>
     */
    inline void SetTrustId(const char* value) { m_trustId.assign(value); }

    /**
     * <p>A unique identifier for the trust relationship that was created.</p>
     */
    inline CreateTrustResult& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>A unique identifier for the trust relationship that was created.</p>
     */
    inline CreateTrustResult& WithTrustId(Aws::String&& value) { SetTrustId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the trust relationship that was created.</p>
     */
    inline CreateTrustResult& WithTrustId(const char* value) { SetTrustId(value); return *this;}

  private:

    Aws::String m_trustId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
