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
#include <aws/cloudfront/model/StreamingDistributionList.h>

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
  class AWS_CLOUDFRONT_API ListStreamingDistributions2016_01_28Result
  {
  public:
    ListStreamingDistributions2016_01_28Result();
    ListStreamingDistributions2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListStreamingDistributions2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The StreamingDistributionList type.
     */
    inline const StreamingDistributionList& GetStreamingDistributionList() const{ return m_streamingDistributionList; }

    /**
     * The StreamingDistributionList type.
     */
    inline void SetStreamingDistributionList(const StreamingDistributionList& value) { m_streamingDistributionList = value; }

    /**
     * The StreamingDistributionList type.
     */
    inline void SetStreamingDistributionList(StreamingDistributionList&& value) { m_streamingDistributionList = value; }

    /**
     * The StreamingDistributionList type.
     */
    inline ListStreamingDistributions2016_01_28Result& WithStreamingDistributionList(const StreamingDistributionList& value) { SetStreamingDistributionList(value); return *this;}

    /**
     * The StreamingDistributionList type.
     */
    inline ListStreamingDistributions2016_01_28Result& WithStreamingDistributionList(StreamingDistributionList&& value) { SetStreamingDistributionList(value); return *this;}

  private:
    StreamingDistributionList m_streamingDistributionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws