/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateContactFlowResult
  {
  public:
    AWS_CONNECT_API CreateContactFlowResult();
    AWS_CONNECT_API CreateContactFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateContactFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline CreateContactFlowResult& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline CreateContactFlowResult& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline CreateContactFlowResult& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetContactFlowArn() const{ return m_contactFlowArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline void SetContactFlowArn(const Aws::String& value) { m_contactFlowArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline void SetContactFlowArn(Aws::String&& value) { m_contactFlowArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline void SetContactFlowArn(const char* value) { m_contactFlowArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline CreateContactFlowResult& WithContactFlowArn(const Aws::String& value) { SetContactFlowArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline CreateContactFlowResult& WithContactFlowArn(Aws::String&& value) { SetContactFlowArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline CreateContactFlowResult& WithContactFlowArn(const char* value) { SetContactFlowArn(value); return *this;}

  private:

    Aws::String m_contactFlowId;

    Aws::String m_contactFlowArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
