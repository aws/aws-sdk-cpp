/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Results message indicating whether a CNAME is available.</p>
   */
  class AWS_ELASTICBEANSTALK_API CheckDNSAvailabilityRequest : public ElasticBeanstalkRequest
  {
  public:
    CheckDNSAvailabilityRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline const Aws::String& GetCNAMEPrefix() const{ return m_cNAMEPrefix; }

    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline void SetCNAMEPrefix(const Aws::String& value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix = value; }

    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline void SetCNAMEPrefix(Aws::String&& value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix = value; }

    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline void SetCNAMEPrefix(const char* value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix.assign(value); }

    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline CheckDNSAvailabilityRequest& WithCNAMEPrefix(const Aws::String& value) { SetCNAMEPrefix(value); return *this;}

    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline CheckDNSAvailabilityRequest& WithCNAMEPrefix(Aws::String&& value) { SetCNAMEPrefix(value); return *this;}

    /**
     * <p>The prefix used when this CNAME is reserved.</p>
     */
    inline CheckDNSAvailabilityRequest& WithCNAMEPrefix(const char* value) { SetCNAMEPrefix(value); return *this;}

  private:
    Aws::String m_cNAMEPrefix;
    bool m_cNAMEPrefixHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
