﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StreamingDistributionList.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListStreamingDistributionsResult">AWS
   * API Reference</a></p>
   */
  class ListStreamingDistributions2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListStreamingDistributions2020_05_31Result();
    AWS_CLOUDFRONT_API ListStreamingDistributions2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListStreamingDistributions2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The <code>StreamingDistributionList</code> type.</p>
     */
    inline const StreamingDistributionList& GetStreamingDistributionList() const{ return m_streamingDistributionList; }
    inline void SetStreamingDistributionList(const StreamingDistributionList& value) { m_streamingDistributionList = value; }
    inline void SetStreamingDistributionList(StreamingDistributionList&& value) { m_streamingDistributionList = std::move(value); }
    inline ListStreamingDistributions2020_05_31Result& WithStreamingDistributionList(const StreamingDistributionList& value) { SetStreamingDistributionList(value); return *this;}
    inline ListStreamingDistributions2020_05_31Result& WithStreamingDistributionList(StreamingDistributionList&& value) { SetStreamingDistributionList(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStreamingDistributions2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStreamingDistributions2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStreamingDistributions2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    StreamingDistributionList m_streamingDistributionList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
