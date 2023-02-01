/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/GeneratedCodeJobDetails.h>
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
  class GetGeneratedCodeJobResult
  {
  public:
    AWS_GAMESPARKS_API GetGeneratedCodeJobResult();
    AWS_GAMESPARKS_API GetGeneratedCodeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetGeneratedCodeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the generated code job.</p>
     */
    inline const GeneratedCodeJobDetails& GetGeneratedCodeJob() const{ return m_generatedCodeJob; }

    /**
     * <p>Details about the generated code job.</p>
     */
    inline void SetGeneratedCodeJob(const GeneratedCodeJobDetails& value) { m_generatedCodeJob = value; }

    /**
     * <p>Details about the generated code job.</p>
     */
    inline void SetGeneratedCodeJob(GeneratedCodeJobDetails&& value) { m_generatedCodeJob = std::move(value); }

    /**
     * <p>Details about the generated code job.</p>
     */
    inline GetGeneratedCodeJobResult& WithGeneratedCodeJob(const GeneratedCodeJobDetails& value) { SetGeneratedCodeJob(value); return *this;}

    /**
     * <p>Details about the generated code job.</p>
     */
    inline GetGeneratedCodeJobResult& WithGeneratedCodeJob(GeneratedCodeJobDetails&& value) { SetGeneratedCodeJob(std::move(value)); return *this;}

  private:

    GeneratedCodeJobDetails m_generatedCodeJob;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
