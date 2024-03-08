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
  class UpdateConfiguredAudienceModelResult
  {
  public:
    AWS_CLEANROOMSML_API UpdateConfiguredAudienceModelResult();
    AWS_CLEANROOMSML_API UpdateConfiguredAudienceModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API UpdateConfiguredAudienceModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was
     * updated.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was
     * updated.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was
     * updated.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was
     * updated.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was
     * updated.</p>
     */
    inline UpdateConfiguredAudienceModelResult& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was
     * updated.</p>
     */
    inline UpdateConfiguredAudienceModelResult& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was
     * updated.</p>
     */
    inline UpdateConfiguredAudienceModelResult& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateConfiguredAudienceModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateConfiguredAudienceModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateConfiguredAudienceModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_configuredAudienceModelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
