/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/Application.h>
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
namespace EMRServerless
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_EMRSERVERLESS_API UpdateApplicationResult();
    AWS_EMRSERVERLESS_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the updated application.</p>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p>Information about the updated application.</p>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p>Information about the updated application.</p>
     */
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    /**
     * <p>Information about the updated application.</p>
     */
    inline UpdateApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p>Information about the updated application.</p>
     */
    inline UpdateApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Application m_application;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
