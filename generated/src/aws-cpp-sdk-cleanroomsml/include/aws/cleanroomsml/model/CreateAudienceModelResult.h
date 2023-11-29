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
  class CreateAudienceModelResult
  {
  public:
    AWS_CLEANROOMSML_API CreateAudienceModelResult();
    AWS_CLEANROOMSML_API CreateAudienceModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateAudienceModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline CreateAudienceModelResult& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline CreateAudienceModelResult& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model.</p>
     */
    inline CreateAudienceModelResult& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAudienceModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAudienceModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAudienceModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_audienceModelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
