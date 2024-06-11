/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A set of validation rules for incoming Method requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RequestValidator">AWS
   * API Reference</a></p>
   */
  class GetRequestValidatorResult
  {
  public:
    AWS_APIGATEWAY_API GetRequestValidatorResult();
    AWS_APIGATEWAY_API GetRequestValidatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetRequestValidatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of this RequestValidator.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetRequestValidatorResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetRequestValidatorResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetRequestValidatorResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this RequestValidator</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetRequestValidatorResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetRequestValidatorResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetRequestValidatorResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured Model schema.</p>
     */
    inline bool GetValidateRequestBody() const{ return m_validateRequestBody; }
    inline void SetValidateRequestBody(bool value) { m_validateRequestBody = value; }
    inline GetRequestValidatorResult& WithValidateRequestBody(bool value) { SetValidateRequestBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline bool GetValidateRequestParameters() const{ return m_validateRequestParameters; }
    inline void SetValidateRequestParameters(bool value) { m_validateRequestParameters = value; }
    inline GetRequestValidatorResult& WithValidateRequestParameters(bool value) { SetValidateRequestParameters(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRequestValidatorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRequestValidatorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRequestValidatorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    bool m_validateRequestBody;

    bool m_validateRequestParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
