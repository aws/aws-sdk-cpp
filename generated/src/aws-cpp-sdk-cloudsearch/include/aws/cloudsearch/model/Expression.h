/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>A named expression that can be evaluated at search time. Can be used to sort
   * the search results, define other expressions, or return computed information in
   * the search results. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/Expression">AWS
   * API Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_CLOUDSEARCH_API Expression() = default;
    AWS_CLOUDSEARCH_API Expression(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API Expression& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetExpressionName() const { return m_expressionName; }
    inline bool ExpressionNameHasBeenSet() const { return m_expressionNameHasBeenSet; }
    template<typename ExpressionNameT = Aws::String>
    void SetExpressionName(ExpressionNameT&& value) { m_expressionNameHasBeenSet = true; m_expressionName = std::forward<ExpressionNameT>(value); }
    template<typename ExpressionNameT = Aws::String>
    Expression& WithExpressionName(ExpressionNameT&& value) { SetExpressionName(std::forward<ExpressionNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetExpressionValue() const { return m_expressionValue; }
    inline bool ExpressionValueHasBeenSet() const { return m_expressionValueHasBeenSet; }
    template<typename ExpressionValueT = Aws::String>
    void SetExpressionValue(ExpressionValueT&& value) { m_expressionValueHasBeenSet = true; m_expressionValue = std::forward<ExpressionValueT>(value); }
    template<typename ExpressionValueT = Aws::String>
    Expression& WithExpressionValue(ExpressionValueT&& value) { SetExpressionValue(std::forward<ExpressionValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expressionName;
    bool m_expressionNameHasBeenSet = false;

    Aws::String m_expressionValue;
    bool m_expressionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
