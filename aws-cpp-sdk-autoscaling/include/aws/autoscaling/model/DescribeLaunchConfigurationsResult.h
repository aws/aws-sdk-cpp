/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/LaunchConfiguration.h>
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
namespace AutoScaling
{
namespace Model
{
  class DescribeLaunchConfigurationsResult
  {
  public:
    AWS_AUTOSCALING_API DescribeLaunchConfigurationsResult();
    AWS_AUTOSCALING_API DescribeLaunchConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeLaunchConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The launch configurations.</p>
     */
    inline const Aws::Vector<LaunchConfiguration>& GetLaunchConfigurations() const{ return m_launchConfigurations; }

    /**
     * <p>The launch configurations.</p>
     */
    inline void SetLaunchConfigurations(const Aws::Vector<LaunchConfiguration>& value) { m_launchConfigurations = value; }

    /**
     * <p>The launch configurations.</p>
     */
    inline void SetLaunchConfigurations(Aws::Vector<LaunchConfiguration>&& value) { m_launchConfigurations = std::move(value); }

    /**
     * <p>The launch configurations.</p>
     */
    inline DescribeLaunchConfigurationsResult& WithLaunchConfigurations(const Aws::Vector<LaunchConfiguration>& value) { SetLaunchConfigurations(value); return *this;}

    /**
     * <p>The launch configurations.</p>
     */
    inline DescribeLaunchConfigurationsResult& WithLaunchConfigurations(Aws::Vector<LaunchConfiguration>&& value) { SetLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>The launch configurations.</p>
     */
    inline DescribeLaunchConfigurationsResult& AddLaunchConfigurations(const LaunchConfiguration& value) { m_launchConfigurations.push_back(value); return *this; }

    /**
     * <p>The launch configurations.</p>
     */
    inline DescribeLaunchConfigurationsResult& AddLaunchConfigurations(LaunchConfiguration&& value) { m_launchConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeLaunchConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeLaunchConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeLaunchConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLaunchConfigurationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLaunchConfigurationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LaunchConfiguration> m_launchConfigurations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
