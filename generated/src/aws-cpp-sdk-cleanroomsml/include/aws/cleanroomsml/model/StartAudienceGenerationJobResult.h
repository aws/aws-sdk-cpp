/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class StartAudienceGenerationJobResult
  {
  public:
    AWS_CLEANROOMSML_API StartAudienceGenerationJobResult();
    AWS_CLEANROOMSML_API StartAudienceGenerationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API StartAudienceGenerationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline const Aws::String& GetAudienceGenerationJobArn() const{ return m_audienceGenerationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(const Aws::String& value) { m_audienceGenerationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(Aws::String&& value) { m_audienceGenerationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline void SetAudienceGenerationJobArn(const char* value) { m_audienceGenerationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline StartAudienceGenerationJobResult& WithAudienceGenerationJobArn(const Aws::String& value) { SetAudienceGenerationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline StartAudienceGenerationJobResult& WithAudienceGenerationJobArn(Aws::String&& value) { SetAudienceGenerationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience generation job.</p>
     */
    inline StartAudienceGenerationJobResult& WithAudienceGenerationJobArn(const char* value) { SetAudienceGenerationJobArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartAudienceGenerationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartAudienceGenerationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartAudienceGenerationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_audienceGenerationJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
