/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudsearch/model/Expression.h>
#include <aws/cloudsearch/model/OptionStatus.h>
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
   * <p>The value of an <code>Expression</code> and its current status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ExpressionStatus">AWS
   * API Reference</a></p>
   */
  class ExpressionStatus
  {
  public:
    AWS_CLOUDSEARCH_API ExpressionStatus();
    AWS_CLOUDSEARCH_API ExpressionStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API ExpressionStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The expression that is evaluated for sorting while processing a search
     * request.</p>
     */
    inline const Expression& GetOptions() const{ return m_options; }

    /**
     * <p>The expression that is evaluated for sorting while processing a search
     * request.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The expression that is evaluated for sorting while processing a search
     * request.</p>
     */
    inline void SetOptions(const Expression& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The expression that is evaluated for sorting while processing a search
     * request.</p>
     */
    inline void SetOptions(Expression&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The expression that is evaluated for sorting while processing a search
     * request.</p>
     */
    inline ExpressionStatus& WithOptions(const Expression& value) { SetOptions(value); return *this;}

    /**
     * <p>The expression that is evaluated for sorting while processing a search
     * request.</p>
     */
    inline ExpressionStatus& WithOptions(Expression&& value) { SetOptions(std::move(value)); return *this;}


    
    inline const OptionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ExpressionStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    
    inline ExpressionStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Expression m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
