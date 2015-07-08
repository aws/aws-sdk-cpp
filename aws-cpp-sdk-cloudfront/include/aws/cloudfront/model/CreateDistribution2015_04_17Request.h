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
#include <aws/cloudfront/model/DistributionConfig.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /*
    The request to create a new distribution.
  */
  class AWS_CLOUDFRONT_API CreateDistribution2015_04_17Request : public CloudFrontRequest
  {
  public:
    CreateDistribution2015_04_17Request();
    Aws::String SerializePayload() const override;


    /*
     The distribution's configuration information.
    */
    inline const DistributionConfig& GetDistributionConfig() const{ return m_distributionConfig; }
    /*
     The distribution's configuration information.
    */
    inline void SetDistributionConfig(const DistributionConfig& value) { m_distributionConfigHasBeenSet = true; m_distributionConfig = value; }

    /*
     The distribution's configuration information.
    */
    inline CreateDistribution2015_04_17Request&  WithDistributionConfig(const DistributionConfig& value) { SetDistributionConfig(value); return *this;}

  private:
    DistributionConfig m_distributionConfig;
    bool m_distributionConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
