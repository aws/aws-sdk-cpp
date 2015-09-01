/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/StreamingDistributionConfig.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /*
    The request to create a new streaming distribution.
  */
  class AWS_CLOUDFRONT_API CreateStreamingDistribution2015_04_17Request : public CloudFrontRequest
  {
  public:
    CreateStreamingDistribution2015_04_17Request();
    Aws::String SerializePayload() const override;


    /*
     The streaming distribution's configuration information.
    */
    inline const StreamingDistributionConfig& GetStreamingDistributionConfig() const{ return m_streamingDistributionConfig; }

    /*
     The streaming distribution's configuration information.
    */
    inline void SetStreamingDistributionConfig(const StreamingDistributionConfig& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = value; }

    /*
     The streaming distribution's configuration information.
    */
    inline void SetStreamingDistributionConfig(StreamingDistributionConfig&& value) { m_streamingDistributionConfigHasBeenSet = true; m_streamingDistributionConfig = value; }

    /*
     The streaming distribution's configuration information.
    */
    inline CreateStreamingDistribution2015_04_17Request& WithStreamingDistributionConfig(const StreamingDistributionConfig& value) { SetStreamingDistributionConfig(value); return *this;}

    /*
     The streaming distribution's configuration information.
    */
    inline CreateStreamingDistribution2015_04_17Request& WithStreamingDistributionConfig(StreamingDistributionConfig&& value) { SetStreamingDistributionConfig(value); return *this;}

  private:
    StreamingDistributionConfig m_streamingDistributionConfig;
    bool m_streamingDistributionConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
