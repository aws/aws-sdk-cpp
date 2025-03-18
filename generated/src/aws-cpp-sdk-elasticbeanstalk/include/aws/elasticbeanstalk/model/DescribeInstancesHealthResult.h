/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/SingleInstanceHealth.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Detailed health information about the Amazon EC2 instances in an AWS Elastic
   * Beanstalk environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeInstancesHealthResult">AWS
   * API Reference</a></p>
   */
  class DescribeInstancesHealthResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeInstancesHealthResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeInstancesHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeInstancesHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline const Aws::Vector<SingleInstanceHealth>& GetInstanceHealthList() const { return m_instanceHealthList; }
    template<typename InstanceHealthListT = Aws::Vector<SingleInstanceHealth>>
    void SetInstanceHealthList(InstanceHealthListT&& value) { m_instanceHealthListHasBeenSet = true; m_instanceHealthList = std::forward<InstanceHealthListT>(value); }
    template<typename InstanceHealthListT = Aws::Vector<SingleInstanceHealth>>
    DescribeInstancesHealthResult& WithInstanceHealthList(InstanceHealthListT&& value) { SetInstanceHealthList(std::forward<InstanceHealthListT>(value)); return *this;}
    template<typename InstanceHealthListT = SingleInstanceHealth>
    DescribeInstancesHealthResult& AddInstanceHealthList(InstanceHealthListT&& value) { m_instanceHealthListHasBeenSet = true; m_instanceHealthList.emplace_back(std::forward<InstanceHealthListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshedAt() const { return m_refreshedAt; }
    template<typename RefreshedAtT = Aws::Utils::DateTime>
    void SetRefreshedAt(RefreshedAtT&& value) { m_refreshedAtHasBeenSet = true; m_refreshedAt = std::forward<RefreshedAtT>(value); }
    template<typename RefreshedAtT = Aws::Utils::DateTime>
    DescribeInstancesHealthResult& WithRefreshedAt(RefreshedAtT&& value) { SetRefreshedAt(std::forward<RefreshedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstancesHealthResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInstancesHealthResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SingleInstanceHealth> m_instanceHealthList;
    bool m_instanceHealthListHasBeenSet = false;

    Aws::Utils::DateTime m_refreshedAt{};
    bool m_refreshedAtHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
