﻿/*
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
#include <aws/cloudfront/model/StreamingDistribution.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace CloudFront
{
namespace Model
{
  /**
   * The returned result of the corresponding request.
   */
  class AWS_CLOUDFRONT_API GetStreamingDistribution2016_01_28Result
  {
  public:
    GetStreamingDistribution2016_01_28Result();
    GetStreamingDistribution2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetStreamingDistribution2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The streaming distribution's information.
     */
    inline const StreamingDistribution& GetStreamingDistribution() const{ return m_streamingDistribution; }

    /**
     * The streaming distribution's information.
     */
    inline void SetStreamingDistribution(const StreamingDistribution& value) { m_streamingDistribution = value; }

    /**
     * The streaming distribution's information.
     */
    inline void SetStreamingDistribution(StreamingDistribution&& value) { m_streamingDistribution = value; }

    /**
     * The streaming distribution's information.
     */
    inline GetStreamingDistribution2016_01_28Result& WithStreamingDistribution(const StreamingDistribution& value) { SetStreamingDistribution(value); return *this;}

    /**
     * The streaming distribution's information.
     */
    inline GetStreamingDistribution2016_01_28Result& WithStreamingDistribution(StreamingDistribution&& value) { SetStreamingDistribution(value); return *this;}

    /**
     * The current version of the streaming distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * The current version of the streaming distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * The current version of the streaming distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline void SetETag(Aws::String&& value) { m_eTag = value; }

    /**
     * The current version of the streaming distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * The current version of the streaming distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline GetStreamingDistribution2016_01_28Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * The current version of the streaming distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline GetStreamingDistribution2016_01_28Result& WithETag(Aws::String&& value) { SetETag(value); return *this;}

    /**
     * The current version of the streaming distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline GetStreamingDistribution2016_01_28Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:
    StreamingDistribution m_streamingDistribution;
    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws