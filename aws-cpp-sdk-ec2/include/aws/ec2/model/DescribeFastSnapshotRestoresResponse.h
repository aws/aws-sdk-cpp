/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DescribeFastSnapshotRestoreSuccessItem.h>
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
namespace EC2
{
namespace Model
{
  class DescribeFastSnapshotRestoresResponse
  {
  public:
    AWS_EC2_API DescribeFastSnapshotRestoresResponse();
    AWS_EC2_API DescribeFastSnapshotRestoresResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFastSnapshotRestoresResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the state of fast snapshot restores.</p>
     */
    inline const Aws::Vector<DescribeFastSnapshotRestoreSuccessItem>& GetFastSnapshotRestores() const{ return m_fastSnapshotRestores; }

    /**
     * <p>Information about the state of fast snapshot restores.</p>
     */
    inline void SetFastSnapshotRestores(const Aws::Vector<DescribeFastSnapshotRestoreSuccessItem>& value) { m_fastSnapshotRestores = value; }

    /**
     * <p>Information about the state of fast snapshot restores.</p>
     */
    inline void SetFastSnapshotRestores(Aws::Vector<DescribeFastSnapshotRestoreSuccessItem>&& value) { m_fastSnapshotRestores = std::move(value); }

    /**
     * <p>Information about the state of fast snapshot restores.</p>
     */
    inline DescribeFastSnapshotRestoresResponse& WithFastSnapshotRestores(const Aws::Vector<DescribeFastSnapshotRestoreSuccessItem>& value) { SetFastSnapshotRestores(value); return *this;}

    /**
     * <p>Information about the state of fast snapshot restores.</p>
     */
    inline DescribeFastSnapshotRestoresResponse& WithFastSnapshotRestores(Aws::Vector<DescribeFastSnapshotRestoreSuccessItem>&& value) { SetFastSnapshotRestores(std::move(value)); return *this;}

    /**
     * <p>Information about the state of fast snapshot restores.</p>
     */
    inline DescribeFastSnapshotRestoresResponse& AddFastSnapshotRestores(const DescribeFastSnapshotRestoreSuccessItem& value) { m_fastSnapshotRestores.push_back(value); return *this; }

    /**
     * <p>Information about the state of fast snapshot restores.</p>
     */
    inline DescribeFastSnapshotRestoresResponse& AddFastSnapshotRestores(DescribeFastSnapshotRestoreSuccessItem&& value) { m_fastSnapshotRestores.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFastSnapshotRestoresResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFastSnapshotRestoresResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFastSnapshotRestoresResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeFastSnapshotRestoresResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeFastSnapshotRestoresResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DescribeFastSnapshotRestoreSuccessItem> m_fastSnapshotRestores;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
