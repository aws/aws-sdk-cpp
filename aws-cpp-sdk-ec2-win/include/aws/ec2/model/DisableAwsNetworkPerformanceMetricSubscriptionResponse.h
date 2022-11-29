﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class AWS_EC2_API DisableAwsNetworkPerformanceMetricSubscriptionResponse
  {
  public:
    DisableAwsNetworkPerformanceMetricSubscriptionResponse();
    DisableAwsNetworkPerformanceMetricSubscriptionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DisableAwsNetworkPerformanceMetricSubscriptionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Indicates whether the unsubscribe action was successful.</p>
     */
    inline bool GetOutput() const{ return m_output; }

    /**
     * <p>Indicates whether the unsubscribe action was successful.</p>
     */
    inline void SetOutput(bool value) { m_output = value; }

    /**
     * <p>Indicates whether the unsubscribe action was successful.</p>
     */
    inline DisableAwsNetworkPerformanceMetricSubscriptionResponse& WithOutput(bool value) { SetOutput(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisableAwsNetworkPerformanceMetricSubscriptionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisableAwsNetworkPerformanceMetricSubscriptionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_output;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
