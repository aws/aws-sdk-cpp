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
  class AWS_AUTOSCALING_API DescribeAdjustmentTypesResult
  {
  public:
    DescribeAdjustmentTypesResult();
    DescribeAdjustmentTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAdjustmentTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The policy adjustment types.</p>
     */
    inline const Aws::Vector<AdjustmentType>& GetAdjustmentTypes() const{ return m_adjustmentTypes; }

    /**
     * <p>The policy adjustment types.</p>
     */
    inline void SetAdjustmentTypes(const Aws::Vector<AdjustmentType>& value) { m_adjustmentTypes = value; }

    /**
     * <p>The policy adjustment types.</p>
     */
    inline void SetAdjustmentTypes(Aws::Vector<AdjustmentType>&& value) { m_adjustmentTypes = std::move(value); }

    /**
     * <p>The policy adjustment types.</p>
     */
    inline DescribeAdjustmentTypesResult& WithAdjustmentTypes(const Aws::Vector<AdjustmentType>& value) { SetAdjustmentTypes(value); return *this;}

    /**
     * <p>The policy adjustment types.</p>
     */
    inline DescribeAdjustmentTypesResult& WithAdjustmentTypes(Aws::Vector<AdjustmentType>&& value) { SetAdjustmentTypes(std::move(value)); return *this;}

    /**
     * <p>The policy adjustment types.</p>
     */
    inline DescribeAdjustmentTypesResult& AddAdjustmentTypes(const AdjustmentType& value) { m_adjustmentTypes.push_back(value); return *this; }

    /**
     * <p>The policy adjustment types.</p>
     */
    inline DescribeAdjustmentTypesResult& AddAdjustmentTypes(AdjustmentType&& value) { m_adjustmentTypes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAdjustmentTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAdjustmentTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AdjustmentType> m_adjustmentTypes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
