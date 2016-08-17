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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * The request to delete a streaming distribution.
   */
  class AWS_CLOUDFRONT_API DeleteStreamingDistribution2016_01_28Request : public CloudFrontRequest
  {
  public:
    DeleteStreamingDistribution2016_01_28Request();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * The distribution id.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The distribution id.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The distribution id.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The distribution id.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The distribution id.
     */
    inline DeleteStreamingDistribution2016_01_28Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The distribution id.
     */
    inline DeleteStreamingDistribution2016_01_28Request& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The distribution id.
     */
    inline DeleteStreamingDistribution2016_01_28Request& WithId(const char* value) { SetId(value); return *this;}

    /**
     * The value of the ETag header you received when you disabled the streaming
     * distribution. For example: E2QWRUHAPOMQZL.
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * The value of the ETag header you received when you disabled the streaming
     * distribution. For example: E2QWRUHAPOMQZL.
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * The value of the ETag header you received when you disabled the streaming
     * distribution. For example: E2QWRUHAPOMQZL.
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * The value of the ETag header you received when you disabled the streaming
     * distribution. For example: E2QWRUHAPOMQZL.
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * The value of the ETag header you received when you disabled the streaming
     * distribution. For example: E2QWRUHAPOMQZL.
     */
    inline DeleteStreamingDistribution2016_01_28Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * The value of the ETag header you received when you disabled the streaming
     * distribution. For example: E2QWRUHAPOMQZL.
     */
    inline DeleteStreamingDistribution2016_01_28Request& WithIfMatch(Aws::String&& value) { SetIfMatch(value); return *this;}

    /**
     * The value of the ETag header you received when you disabled the streaming
     * distribution. For example: E2QWRUHAPOMQZL.
     */
    inline DeleteStreamingDistribution2016_01_28Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
