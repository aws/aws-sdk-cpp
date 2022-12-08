/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class StartResourceEvaluationResult
  {
  public:
    AWS_CONFIGSERVICE_API StartResourceEvaluationResult();
    AWS_CONFIGSERVICE_API StartResourceEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API StartResourceEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const{ return m_resourceEvaluationId; }

    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline void SetResourceEvaluationId(const Aws::String& value) { m_resourceEvaluationId = value; }

    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline void SetResourceEvaluationId(Aws::String&& value) { m_resourceEvaluationId = std::move(value); }

    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline void SetResourceEvaluationId(const char* value) { m_resourceEvaluationId.assign(value); }

    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline StartResourceEvaluationResult& WithResourceEvaluationId(const Aws::String& value) { SetResourceEvaluationId(value); return *this;}

    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline StartResourceEvaluationResult& WithResourceEvaluationId(Aws::String&& value) { SetResourceEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline StartResourceEvaluationResult& WithResourceEvaluationId(const char* value) { SetResourceEvaluationId(value); return *this;}

  private:

    Aws::String m_resourceEvaluationId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
