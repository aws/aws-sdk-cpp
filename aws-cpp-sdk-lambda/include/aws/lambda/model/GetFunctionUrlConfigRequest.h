/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API GetFunctionUrlConfigRequest : public LambdaRequest
  {
  public:
    GetFunctionUrlConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFunctionUrlConfig"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    
    inline GetFunctionUrlConfigRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    
    inline GetFunctionUrlConfigRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    
    inline GetFunctionUrlConfigRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }

    
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::move(value); }

    
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    
    inline GetFunctionUrlConfigRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    
    inline GetFunctionUrlConfigRequest& WithQualifier(Aws::String&& value) { SetQualifier(std::move(value)); return *this;}

    
    inline GetFunctionUrlConfigRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
