/*
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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StreamingDistributionList.h>
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
   * <p>The returned result of the corresponding request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListStreamingDistributionsResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListStreamingDistributions2019_03_26Result
  {
  public:
    ListStreamingDistributions2019_03_26Result();
    ListStreamingDistributions2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListStreamingDistributions2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The <code>StreamingDistributionList</code> type. </p>
     */
    inline const StreamingDistributionList& GetStreamingDistributionList() const{ return m_streamingDistributionList; }

    /**
     * <p>The <code>StreamingDistributionList</code> type. </p>
     */
    inline void SetStreamingDistributionList(const StreamingDistributionList& value) { m_streamingDistributionList = value; }

    /**
     * <p>The <code>StreamingDistributionList</code> type. </p>
     */
    inline void SetStreamingDistributionList(StreamingDistributionList&& value) { m_streamingDistributionList = std::move(value); }

    /**
     * <p>The <code>StreamingDistributionList</code> type. </p>
     */
    inline ListStreamingDistributions2019_03_26Result& WithStreamingDistributionList(const StreamingDistributionList& value) { SetStreamingDistributionList(value); return *this;}

    /**
     * <p>The <code>StreamingDistributionList</code> type. </p>
     */
    inline ListStreamingDistributions2019_03_26Result& WithStreamingDistributionList(StreamingDistributionList&& value) { SetStreamingDistributionList(std::move(value)); return *this;}

  private:

    StreamingDistributionList m_streamingDistributionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
