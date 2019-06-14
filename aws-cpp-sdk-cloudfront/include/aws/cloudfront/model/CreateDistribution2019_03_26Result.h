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
#include <aws/cloudfront/model/Distribution.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateDistributionResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateDistribution2019_03_26Result
  {
  public:
    CreateDistribution2019_03_26Result();
    CreateDistribution2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateDistribution2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The distribution's information.</p>
     */
    inline const Distribution& GetDistribution() const{ return m_distribution; }

    /**
     * <p>The distribution's information.</p>
     */
    inline void SetDistribution(const Distribution& value) { m_distribution = value; }

    /**
     * <p>The distribution's information.</p>
     */
    inline void SetDistribution(Distribution&& value) { m_distribution = std::move(value); }

    /**
     * <p>The distribution's information.</p>
     */
    inline CreateDistribution2019_03_26Result& WithDistribution(const Distribution& value) { SetDistribution(value); return *this;}

    /**
     * <p>The distribution's information.</p>
     */
    inline CreateDistribution2019_03_26Result& WithDistribution(Distribution&& value) { SetDistribution(std::move(value)); return *this;}


    /**
     * <p>The fully qualified URI of the new distribution resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/distribution/EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fully qualified URI of the new distribution resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/distribution/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The fully qualified URI of the new distribution resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/distribution/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The fully qualified URI of the new distribution resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/distribution/EDFDVBD632BHDS5</code>.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The fully qualified URI of the new distribution resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/distribution/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreateDistribution2019_03_26Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fully qualified URI of the new distribution resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/distribution/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreateDistribution2019_03_26Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URI of the new distribution resource just created. For
     * example:
     * <code>https://cloudfront.amazonaws.com/2010-11-01/distribution/EDFDVBD632BHDS5</code>.</p>
     */
    inline CreateDistribution2019_03_26Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The current version of the distribution created.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the distribution created.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the distribution created.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the distribution created.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the distribution created.</p>
     */
    inline CreateDistribution2019_03_26Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the distribution created.</p>
     */
    inline CreateDistribution2019_03_26Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the distribution created.</p>
     */
    inline CreateDistribution2019_03_26Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    Distribution m_distribution;

    Aws::String m_location;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
