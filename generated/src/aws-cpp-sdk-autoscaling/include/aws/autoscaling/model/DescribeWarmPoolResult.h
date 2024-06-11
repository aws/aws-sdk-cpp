/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/WarmPoolConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/Instance.h>
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
  class DescribeWarmPoolResult
  {
  public:
    AWS_AUTOSCALING_API DescribeWarmPoolResult();
    AWS_AUTOSCALING_API DescribeWarmPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeWarmPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The warm pool configuration details. </p>
     */
    inline const WarmPoolConfiguration& GetWarmPoolConfiguration() const{ return m_warmPoolConfiguration; }
    inline void SetWarmPoolConfiguration(const WarmPoolConfiguration& value) { m_warmPoolConfiguration = value; }
    inline void SetWarmPoolConfiguration(WarmPoolConfiguration&& value) { m_warmPoolConfiguration = std::move(value); }
    inline DescribeWarmPoolResult& WithWarmPoolConfiguration(const WarmPoolConfiguration& value) { SetWarmPoolConfiguration(value); return *this;}
    inline DescribeWarmPoolResult& WithWarmPoolConfiguration(WarmPoolConfiguration&& value) { SetWarmPoolConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances that are currently in the warm pool.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = std::move(value); }
    inline DescribeWarmPoolResult& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}
    inline DescribeWarmPoolResult& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}
    inline DescribeWarmPoolResult& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }
    inline DescribeWarmPoolResult& AddInstances(Instance&& value) { m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeWarmPoolResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWarmPoolResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWarmPoolResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeWarmPoolResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeWarmPoolResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    WarmPoolConfiguration m_warmPoolConfiguration;

    Aws::Vector<Instance> m_instances;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
