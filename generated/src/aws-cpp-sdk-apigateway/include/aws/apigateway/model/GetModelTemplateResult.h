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
   * <p>Represents a mapping template used to transform a payload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Template">AWS
   * API Reference</a></p>
   */
  class GetModelTemplateResult
  {
  public:
    AWS_APIGATEWAY_API GetModelTemplateResult();
    AWS_APIGATEWAY_API GetModelTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetModelTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Apache Velocity Template Language (VTL) template content used for the
     * template resource.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline void SetValue(const Aws::String& value) { m_value = value; }
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }
    inline void SetValue(const char* value) { m_value.assign(value); }
    inline GetModelTemplateResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline GetModelTemplateResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline GetModelTemplateResult& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetModelTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetModelTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetModelTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_value;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
