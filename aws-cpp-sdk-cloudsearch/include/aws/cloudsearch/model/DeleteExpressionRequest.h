/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DeleteExpression</a></code>
   * operation. Specifies the name of the domain you want to update and the name of
   * the expression you want to delete.</p>
   */
  class AWS_CLOUDSEARCH_API DeleteExpressionRequest : public CloudSearchRequest
  {
  public:
    DeleteExpressionRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DeleteExpressionRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DeleteExpressionRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    
    inline DeleteExpressionRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline const Aws::String& GetExpressionName() const{ return m_expressionName; }

    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline void SetExpressionName(const Aws::String& value) { m_expressionNameHasBeenSet = true; m_expressionName = value; }

    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline void SetExpressionName(Aws::String&& value) { m_expressionNameHasBeenSet = true; m_expressionName = value; }

    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline void SetExpressionName(const char* value) { m_expressionNameHasBeenSet = true; m_expressionName.assign(value); }

    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline DeleteExpressionRequest& WithExpressionName(const Aws::String& value) { SetExpressionName(value); return *this;}

    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline DeleteExpressionRequest& WithExpressionName(Aws::String&& value) { SetExpressionName(value); return *this;}

    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline DeleteExpressionRequest& WithExpressionName(const char* value) { SetExpressionName(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_expressionName;
    bool m_expressionNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
