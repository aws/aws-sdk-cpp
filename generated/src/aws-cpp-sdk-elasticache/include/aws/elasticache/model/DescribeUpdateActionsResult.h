/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/UpdateAction.h>
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
namespace ElastiCache
{
namespace Model
{
  class DescribeUpdateActionsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeUpdateActionsResult();
    AWS_ELASTICACHE_API DescribeUpdateActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeUpdateActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeUpdateActionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeUpdateActionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeUpdateActionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of update actions</p>
     */
    inline const Aws::Vector<UpdateAction>& GetUpdateActions() const{ return m_updateActions; }
    inline void SetUpdateActions(const Aws::Vector<UpdateAction>& value) { m_updateActions = value; }
    inline void SetUpdateActions(Aws::Vector<UpdateAction>&& value) { m_updateActions = std::move(value); }
    inline DescribeUpdateActionsResult& WithUpdateActions(const Aws::Vector<UpdateAction>& value) { SetUpdateActions(value); return *this;}
    inline DescribeUpdateActionsResult& WithUpdateActions(Aws::Vector<UpdateAction>&& value) { SetUpdateActions(std::move(value)); return *this;}
    inline DescribeUpdateActionsResult& AddUpdateActions(const UpdateAction& value) { m_updateActions.push_back(value); return *this; }
    inline DescribeUpdateActionsResult& AddUpdateActions(UpdateAction&& value) { m_updateActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeUpdateActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeUpdateActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<UpdateAction> m_updateActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
