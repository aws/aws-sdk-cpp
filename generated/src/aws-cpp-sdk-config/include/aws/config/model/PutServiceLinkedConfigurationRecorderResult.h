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
  class PutServiceLinkedConfigurationRecorderResult
  {
  public:
    AWS_CONFIGSERVICE_API PutServiceLinkedConfigurationRecorderResult();
    AWS_CONFIGSERVICE_API PutServiceLinkedConfigurationRecorderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutServiceLinkedConfigurationRecorderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified configuration recorder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline PutServiceLinkedConfigurationRecorderResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PutServiceLinkedConfigurationRecorderResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PutServiceLinkedConfigurationRecorderResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the specified configuration recorder.</p> <p>For service-linked
     * configuration recorders, Config automatically assigns a name that has the prefix
     * "<code>AWS</code>" to the new service-linked configuration recorder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline PutServiceLinkedConfigurationRecorderResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutServiceLinkedConfigurationRecorderResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutServiceLinkedConfigurationRecorderResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutServiceLinkedConfigurationRecorderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutServiceLinkedConfigurationRecorderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutServiceLinkedConfigurationRecorderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
