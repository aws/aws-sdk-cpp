/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
namespace EMRContainers
{
namespace Model
{
  class CreateSecurityConfigurationResult
  {
  public:
    AWS_EMRCONTAINERS_API CreateSecurityConfigurationResult();
    AWS_EMRCONTAINERS_API CreateSecurityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API CreateSecurityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the security configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the security configuration.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the security configuration.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the security configuration.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the security configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the security configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the security configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the security configuration.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the security configuration.</p>
     */
    inline CreateSecurityConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSecurityConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSecurityConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSecurityConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
