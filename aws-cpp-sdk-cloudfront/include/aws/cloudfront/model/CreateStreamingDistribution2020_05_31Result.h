﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StreamingDistribution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistributionResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateStreamingDistribution2020_05_31Result
  {
  public:
    CreateStreamingDistribution2020_05_31Result();
    CreateStreamingDistribution2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateStreamingDistribution2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The streaming distribution's information.</p>
     */
    inline const StreamingDistribution& GetStreamingDistribution() const{ return m_streamingDistribution; }

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline void SetStreamingDistribution(const StreamingDistribution& value) { m_streamingDistribution = value; }

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline void SetStreamingDistribution(StreamingDistribution&& value) { m_streamingDistribution = std::move(value); }

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithStreamingDistribution(const StreamingDistribution& value) { SetStreamingDistribution(value); return *this;}

    /**
     * <p>The streaming distribution's information.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithStreamingDistribution(StreamingDistribution&& value) { SetStreamingDistribution(std::move(value)); return *this;}


    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URI of the new streaming distribution resource just
     * created.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The current version of the streaming distribution created.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the streaming distribution created.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the streaming distribution created.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the streaming distribution created.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the streaming distribution created.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the streaming distribution created.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the streaming distribution created.</p>
     */
    inline CreateStreamingDistribution2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    StreamingDistribution m_streamingDistribution;

    Aws::String m_location;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
