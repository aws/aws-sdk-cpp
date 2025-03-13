/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>

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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Routing criteria for a prompt router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RoutingCriteria">AWS
   * API Reference</a></p>
   */
  class RoutingCriteria
  {
  public:
    AWS_BEDROCK_API RoutingCriteria() = default;
    AWS_BEDROCK_API RoutingCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RoutingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The criteria's response quality difference.</p>
     */
    inline double GetResponseQualityDifference() const { return m_responseQualityDifference; }
    inline bool ResponseQualityDifferenceHasBeenSet() const { return m_responseQualityDifferenceHasBeenSet; }
    inline void SetResponseQualityDifference(double value) { m_responseQualityDifferenceHasBeenSet = true; m_responseQualityDifference = value; }
    inline RoutingCriteria& WithResponseQualityDifference(double value) { SetResponseQualityDifference(value); return *this;}
    ///@}
  private:

    double m_responseQualityDifference{0.0};
    bool m_responseQualityDifferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
