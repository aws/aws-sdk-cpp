/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/EnableFastSnapshotRestoreSuccessItem.h>
#include <aws/ec2/model/EnableFastSnapshotRestoreErrorItem.h>
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
  class EnableFastSnapshotRestoresResponse
  {
  public:
    AWS_EC2_API EnableFastSnapshotRestoresResponse();
    AWS_EC2_API EnableFastSnapshotRestoresResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableFastSnapshotRestoresResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully enabled.</p>
     */
    inline const Aws::Vector<EnableFastSnapshotRestoreSuccessItem>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully enabled.</p>
     */
    inline void SetSuccessful(const Aws::Vector<EnableFastSnapshotRestoreSuccessItem>& value) { m_successful = value; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully enabled.</p>
     */
    inline void SetSuccessful(Aws::Vector<EnableFastSnapshotRestoreSuccessItem>&& value) { m_successful = std::move(value); }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& WithSuccessful(const Aws::Vector<EnableFastSnapshotRestoreSuccessItem>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& WithSuccessful(Aws::Vector<EnableFastSnapshotRestoreSuccessItem>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& AddSuccessful(const EnableFastSnapshotRestoreSuccessItem& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& AddSuccessful(EnableFastSnapshotRestoreSuccessItem&& value) { m_successful.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * enabled.</p>
     */
    inline const Aws::Vector<EnableFastSnapshotRestoreErrorItem>& GetUnsuccessful() const{ return m_unsuccessful; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * enabled.</p>
     */
    inline void SetUnsuccessful(const Aws::Vector<EnableFastSnapshotRestoreErrorItem>& value) { m_unsuccessful = value; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * enabled.</p>
     */
    inline void SetUnsuccessful(Aws::Vector<EnableFastSnapshotRestoreErrorItem>&& value) { m_unsuccessful = std::move(value); }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& WithUnsuccessful(const Aws::Vector<EnableFastSnapshotRestoreErrorItem>& value) { SetUnsuccessful(value); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& WithUnsuccessful(Aws::Vector<EnableFastSnapshotRestoreErrorItem>&& value) { SetUnsuccessful(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& AddUnsuccessful(const EnableFastSnapshotRestoreErrorItem& value) { m_unsuccessful.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * enabled.</p>
     */
    inline EnableFastSnapshotRestoresResponse& AddUnsuccessful(EnableFastSnapshotRestoreErrorItem&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableFastSnapshotRestoresResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableFastSnapshotRestoresResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EnableFastSnapshotRestoreSuccessItem> m_successful;

    Aws::Vector<EnableFastSnapshotRestoreErrorItem> m_unsuccessful;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
