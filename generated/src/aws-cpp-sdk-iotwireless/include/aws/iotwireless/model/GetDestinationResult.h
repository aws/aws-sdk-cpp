/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/ExpressionType.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetDestinationResult
  {
  public:
    AWS_IOTWIRELESS_API GetDestinationResult();
    AWS_IOTWIRELESS_API GetDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetDestinationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetDestinationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetDestinationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDestinationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDestinationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDestinationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline void SetExpression(const Aws::String& value) { m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expression.assign(value); }
    inline GetDestinationResult& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline GetDestinationResult& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline GetDestinationResult& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline const ExpressionType& GetExpressionType() const{ return m_expressionType; }
    inline void SetExpressionType(const ExpressionType& value) { m_expressionType = value; }
    inline void SetExpressionType(ExpressionType&& value) { m_expressionType = std::move(value); }
    inline GetDestinationResult& WithExpressionType(const ExpressionType& value) { SetExpressionType(value); return *this;}
    inline GetDestinationResult& WithExpressionType(ExpressionType&& value) { SetExpressionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDestinationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDestinationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDestinationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetDestinationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetDestinationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetDestinationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_expression;

    ExpressionType m_expressionType;

    Aws::String m_description;

    Aws::String m_roleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
