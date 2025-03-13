/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DeleteExpression</a></code>
   * operation. Specifies the name of the domain you want to update and the name of
   * the expression you want to delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteExpressionRequest">AWS
   * API Reference</a></p>
   */
  class DeleteExpressionRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DeleteExpressionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteExpression"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DeleteExpressionRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code><a>Expression</a></code> to delete.</p>
     */
    inline const Aws::String& GetExpressionName() const { return m_expressionName; }
    inline bool ExpressionNameHasBeenSet() const { return m_expressionNameHasBeenSet; }
    template<typename ExpressionNameT = Aws::String>
    void SetExpressionName(ExpressionNameT&& value) { m_expressionNameHasBeenSet = true; m_expressionName = std::forward<ExpressionNameT>(value); }
    template<typename ExpressionNameT = Aws::String>
    DeleteExpressionRequest& WithExpressionName(ExpressionNameT&& value) { SetExpressionName(std::forward<ExpressionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_expressionName;
    bool m_expressionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
