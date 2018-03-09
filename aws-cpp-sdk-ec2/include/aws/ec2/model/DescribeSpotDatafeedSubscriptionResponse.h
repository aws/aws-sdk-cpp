﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SpotDatafeedSubscription.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeSpotDatafeedSubscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscriptionResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeSpotDatafeedSubscriptionResponse
  {
  public:
    DescribeSpotDatafeedSubscriptionResponse();
    DescribeSpotDatafeedSubscriptionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSpotDatafeedSubscriptionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Spot Instance data feed subscription.</p>
     */
    inline const SpotDatafeedSubscription& GetSpotDatafeedSubscription() const{ return m_spotDatafeedSubscription; }

    /**
     * <p>The Spot Instance data feed subscription.</p>
     */
    inline void SetSpotDatafeedSubscription(const SpotDatafeedSubscription& value) { m_spotDatafeedSubscription = value; }

    /**
     * <p>The Spot Instance data feed subscription.</p>
     */
    inline void SetSpotDatafeedSubscription(SpotDatafeedSubscription&& value) { m_spotDatafeedSubscription = std::move(value); }

    /**
     * <p>The Spot Instance data feed subscription.</p>
     */
    inline DescribeSpotDatafeedSubscriptionResponse& WithSpotDatafeedSubscription(const SpotDatafeedSubscription& value) { SetSpotDatafeedSubscription(value); return *this;}

    /**
     * <p>The Spot Instance data feed subscription.</p>
     */
    inline DescribeSpotDatafeedSubscriptionResponse& WithSpotDatafeedSubscription(SpotDatafeedSubscription&& value) { SetSpotDatafeedSubscription(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSpotDatafeedSubscriptionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSpotDatafeedSubscriptionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    SpotDatafeedSubscription m_spotDatafeedSubscription;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
