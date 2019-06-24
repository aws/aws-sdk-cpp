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
     * <p>The normalized severity of a finding.</p>
     */
    inline int GetNormalized() const{ return m_normalized; }

    /**
     * <p>The normalized severity of a finding.</p>
     */
    inline bool NormalizedHasBeenSet() const { return m_normalizedHasBeenSet; }

    /**
     * <p>The normalized severity of a finding.</p>
     */
    inline void SetNormalized(int value) { m_normalizedHasBeenSet = true; m_normalized = value; }

    /**
     * <p>The normalized severity of a finding.</p>
     */
    inline Severity& WithNormalized(int value) { SetNormalized(value); return *this;}

  private:

    double m_product;
    bool m_productHasBeenSet;

    int m_normalized;
    bool m_normalizedHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
