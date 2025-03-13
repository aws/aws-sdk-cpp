/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/AdjustmentType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class DescribeAdjustmentTypesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeAdjustmentTypesResult() = default;
    AWS_AUTOSCALING_API DescribeAdjustmentTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeAdjustmentTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The policy adjustment types.</p>
     */
    inline const Aws::Vector<AdjustmentType>& GetAdjustmentTypes() const { return m_adjustmentTypes; }
    template<typename AdjustmentTypesT = Aws::Vector<AdjustmentType>>
    void SetAdjustmentTypes(AdjustmentTypesT&& value) { m_adjustmentTypesHasBeenSet = true; m_adjustmentTypes = std::forward<AdjustmentTypesT>(value); }
    template<typename AdjustmentTypesT = Aws::Vector<AdjustmentType>>
    DescribeAdjustmentTypesResult& WithAdjustmentTypes(AdjustmentTypesT&& value) { SetAdjustmentTypes(std::forward<AdjustmentTypesT>(value)); return *this;}
    template<typename AdjustmentTypesT = AdjustmentType>
    DescribeAdjustmentTypesResult& AddAdjustmentTypes(AdjustmentTypesT&& value) { m_adjustmentTypesHasBeenSet = true; m_adjustmentTypes.emplace_back(std::forward<AdjustmentTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAdjustmentTypesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdjustmentType> m_adjustmentTypes;
    bool m_adjustmentTypesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
