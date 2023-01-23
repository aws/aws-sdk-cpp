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
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionHistoryResult();
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline const Aws::Vector<ManagedActionHistoryItem>& GetManagedActionHistoryItems() const{ return m_managedActionHistoryItems; }

    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline void SetManagedActionHistoryItems(const Aws::Vector<ManagedActionHistoryItem>& value) { m_managedActionHistoryItems = value; }

    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline void SetManagedActionHistoryItems(Aws::Vector<ManagedActionHistoryItem>&& value) { m_managedActionHistoryItems = std::move(value); }

    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionHistoryResult& WithManagedActionHistoryItems(const Aws::Vector<ManagedActionHistoryItem>& value) { SetManagedActionHistoryItems(value); return *this;}

    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionHistoryResult& WithManagedActionHistoryItems(Aws::Vector<ManagedActionHistoryItem>&& value) { SetManagedActionHistoryItems(std::move(value)); return *this;}

    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionHistoryResult& AddManagedActionHistoryItems(const ManagedActionHistoryItem& value) { m_managedActionHistoryItems.push_back(value); return *this; }

    /**
     * <p>A list of completed and failed managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionHistoryResult& AddManagedActionHistoryItems(ManagedActionHistoryItem&& value) { m_managedActionHistoryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline DescribeEnvironmentManagedActionHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline DescribeEnvironmentManagedActionHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that you pass to
     * <a>DescribeEnvironmentManagedActionHistory</a> to get the next page of
     * results.</p>
     */
    inline DescribeEnvironmentManagedActionHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEnvironmentManagedActionHistoryResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEnvironmentManagedActionHistoryResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ManagedActionHistoryItem> m_managedActionHistoryItems;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
