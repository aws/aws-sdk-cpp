/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
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
namespace GameSparks
{
namespace Model
{
  class StartGeneratedCodeJobResult
  {
  public:
    AWS_GAMESPARKS_API StartGeneratedCodeJobResult();
    AWS_GAMESPARKS_API StartGeneratedCodeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API StartGeneratedCodeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The identifier of the code generation job. You can use this identifier in
     * the <code>GetGeneratedCodeJob</code> operation. </p>
     */
    inline const Aws::String& GetGeneratedCodeJobId() const{ return m_generatedCodeJobId; }

    /**
     * <p> The identifier of the code generation job. You can use this identifier in
     * the <code>GetGeneratedCodeJob</code> operation. </p>
     */
    inline void SetGeneratedCodeJobId(const Aws::String& value) { m_generatedCodeJobId = value; }

    /**
     * <p> The identifier of the code generation job. You can use this identifier in
     * the <code>GetGeneratedCodeJob</code> operation. </p>
     */
    inline void SetGeneratedCodeJobId(Aws::String&& value) { m_generatedCodeJobId = std::move(value); }

    /**
     * <p> The identifier of the code generation job. You can use this identifier in
     * the <code>GetGeneratedCodeJob</code> operation. </p>
     */
    inline void SetGeneratedCodeJobId(const char* value) { m_generatedCodeJobId.assign(value); }

    /**
     * <p> The identifier of the code generation job. You can use this identifier in
     * the <code>GetGeneratedCodeJob</code> operation. </p>
     */
    inline StartGeneratedCodeJobResult& WithGeneratedCodeJobId(const Aws::String& value) { SetGeneratedCodeJobId(value); return *this;}

    /**
     * <p> The identifier of the code generation job. You can use this identifier in
     * the <code>GetGeneratedCodeJob</code> operation. </p>
     */
    inline StartGeneratedCodeJobResult& WithGeneratedCodeJobId(Aws::String&& value) { SetGeneratedCodeJobId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the code generation job. You can use this identifier in
     * the <code>GetGeneratedCodeJob</code> operation. </p>
     */
    inline StartGeneratedCodeJobResult& WithGeneratedCodeJobId(const char* value) { SetGeneratedCodeJobId(value); return *this;}

  private:

    Aws::String m_generatedCodeJobId;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
