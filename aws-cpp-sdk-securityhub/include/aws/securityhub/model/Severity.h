/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SeverityLabel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The severity of the finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Severity">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Severity
  {
  public:
    Severity();
    Severity(Aws::Utils::Json::JsonView jsonValue);
    Severity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The native severity as defined by the AWS service or integrated partner
     * product that generated the finding.</p>
     */
    inline double GetProduct() const{ return m_product; }

    /**
     * <p>The native severity as defined by the AWS service or integrated partner
     * product that generated the finding.</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>The native severity as defined by the AWS service or integrated partner
     * product that generated the finding.</p>
     */
    inline void SetProduct(double value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>The native severity as defined by the AWS service or integrated partner
     * product that generated the finding.</p>
     */
    inline Severity& WithProduct(double value) { SetProduct(value); return *this;}


    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul>
     */
    inline const SeverityLabel& GetLabel() const{ return m_label; }

    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul>
     */
    inline void SetLabel(const SeverityLabel& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul>
     */
    inline void SetLabel(SeverityLabel&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul>
     */
    inline Severity& WithLabel(const SeverityLabel& value) { SetLabel(value); return *this;}

    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul>
     */
    inline Severity& WithLabel(SeverityLabel&& value) { SetLabel(std::move(value)); return *this;}


    /**
     * <p>Deprecated. This attribute is being deprecated. Instead of providing
     * <code>Normalized</code>, provide <code>Label</code>.</p> <p>If you provide
     * <code>Normalized</code> and do not provide <code>Label</code>,
     * <code>Label</code> is set automatically as follows. </p> <ul> <li> <p>0 -
     * <code>INFORMATIONAL</code> </p> </li> <li> <p>1–39 - <code>LOW</code> </p> </li>
     * <li> <p>40–69 - <code>MEDIUM</code> </p> </li> <li> <p>70–89 - <code>HIGH</code>
     * </p> </li> <li> <p>90–100 - <code>CRITICAL</code> </p> </li> </ul>
     */
    inline int GetNormalized() const{ return m_normalized; }

    /**
     * <p>Deprecated. This attribute is being deprecated. Instead of providing
     * <code>Normalized</code>, provide <code>Label</code>.</p> <p>If you provide
     * <code>Normalized</code> and do not provide <code>Label</code>,
     * <code>Label</code> is set automatically as follows. </p> <ul> <li> <p>0 -
     * <code>INFORMATIONAL</code> </p> </li> <li> <p>1–39 - <code>LOW</code> </p> </li>
     * <li> <p>40–69 - <code>MEDIUM</code> </p> </li> <li> <p>70–89 - <code>HIGH</code>
     * </p> </li> <li> <p>90–100 - <code>CRITICAL</code> </p> </li> </ul>
     */
    inline bool NormalizedHasBeenSet() const { return m_normalizedHasBeenSet; }

    /**
     * <p>Deprecated. This attribute is being deprecated. Instead of providing
     * <code>Normalized</code>, provide <code>Label</code>.</p> <p>If you provide
     * <code>Normalized</code> and do not provide <code>Label</code>,
     * <code>Label</code> is set automatically as follows. </p> <ul> <li> <p>0 -
     * <code>INFORMATIONAL</code> </p> </li> <li> <p>1–39 - <code>LOW</code> </p> </li>
     * <li> <p>40–69 - <code>MEDIUM</code> </p> </li> <li> <p>70–89 - <code>HIGH</code>
     * </p> </li> <li> <p>90–100 - <code>CRITICAL</code> </p> </li> </ul>
     */
    inline void SetNormalized(int value) { m_normalizedHasBeenSet = true; m_normalized = value; }

    /**
     * <p>Deprecated. This attribute is being deprecated. Instead of providing
     * <code>Normalized</code>, provide <code>Label</code>.</p> <p>If you provide
     * <code>Normalized</code> and do not provide <code>Label</code>,
     * <code>Label</code> is set automatically as follows. </p> <ul> <li> <p>0 -
     * <code>INFORMATIONAL</code> </p> </li> <li> <p>1–39 - <code>LOW</code> </p> </li>
     * <li> <p>40–69 - <code>MEDIUM</code> </p> </li> <li> <p>70–89 - <code>HIGH</code>
     * </p> </li> <li> <p>90–100 - <code>CRITICAL</code> </p> </li> </ul>
     */
    inline Severity& WithNormalized(int value) { SetNormalized(value); return *this;}

  private:

    double m_product;
    bool m_productHasBeenSet;

    SeverityLabel m_label;
    bool m_labelHasBeenSet;

    int m_normalized;
    bool m_normalizedHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
