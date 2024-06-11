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
   * <p>Represents a usage plan key to identify a plan customer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UsagePlanKey">AWS
   * API Reference</a></p>
   */
  class GetUsagePlanKeyResult
  {
  public:
    AWS_APIGATEWAY_API GetUsagePlanKeyResult();
    AWS_APIGATEWAY_API GetUsagePlanKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetUsagePlanKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetUsagePlanKeyResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetUsagePlanKeyResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetUsagePlanKeyResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline void SetType(const Aws::String& value) { m_type = value; }
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }
    inline void SetType(const char* value) { m_type.assign(value); }
    inline GetUsagePlanKeyResult& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline GetUsagePlanKeyResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline GetUsagePlanKeyResult& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a usage plan key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline void SetValue(const Aws::String& value) { m_value = value; }
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }
    inline void SetValue(const char* value) { m_value.assign(value); }
    inline GetUsagePlanKeyResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline GetUsagePlanKeyResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline GetUsagePlanKeyResult& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a usage plan key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetUsagePlanKeyResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetUsagePlanKeyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetUsagePlanKeyResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUsagePlanKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUsagePlanKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUsagePlanKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_type;

    Aws::String m_value;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
