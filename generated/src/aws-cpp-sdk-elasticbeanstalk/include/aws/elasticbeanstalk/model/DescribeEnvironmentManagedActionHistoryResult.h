/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ManagedActionHistoryItem.h>
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
   * <p>A result message containing a list of completed and failed managed
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionHistoryResult">AWS
   * API Reference</a></p>
   */
  class DescribeEnvironmentManagedActionHistoryResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionHistoryResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline const Aws::Vector<ManagedActionHistoryItem>& GetManagedActionHistoryItems() const { return m_managedActionHistoryItems; }
    template<typename ManagedActionHistoryItemsT = Aws::Vector<ManagedActionHistoryItem>>
    void SetManagedActionHistoryItems(ManagedActionHistoryItemsT&& value) { m_managedActionHistoryItemsHasBeenSet = true; m_managedActionHistoryItems = std::forward<ManagedActionHistoryItemsT>(value); }
    template<typename ManagedActionHistoryItemsT = Aws::Vector<ManagedActionHistoryItem>>
    DescribeEnvironmentManagedActionHistoryResult& WithManagedActionHistoryItems(ManagedActionHistoryItemsT&& value) { SetManagedActionHistoryItems(std::forward<ManagedActionHistoryItemsT>(value)); return *this;}
    template<typename ManagedActionHistoryItemsT = ManagedActionHistoryItem>
    DescribeEnvironmentManagedActionHistoryResult& AddManagedActionHistoryItems(ManagedActionHistoryItemsT&& value) { m_managedActionHistoryItemsHasBeenSet = true; m_managedActionHistoryItems.emplace_back(std::forward<ManagedActionHistoryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEnvironmentManagedActionHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEnvironmentManagedActionHistoryResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedActionHistoryItem> m_managedActionHistoryItems;
    bool m_managedActionHistoryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
