/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DisableFastSnapshotRestoreSuccessItem.h>
#include <aws/ec2/model/DisableFastSnapshotRestoreErrorItem.h>
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
  class DisableFastSnapshotRestoresResponse
  {
  public:
    AWS_EC2_API DisableFastSnapshotRestoresResponse();
    AWS_EC2_API DisableFastSnapshotRestoresResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableFastSnapshotRestoresResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline const Aws::Vector<DisableFastSnapshotRestoreSuccessItem>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline void SetSuccessful(const Aws::Vector<DisableFastSnapshotRestoreSuccessItem>& value) { m_successful = value; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline void SetSuccessful(Aws::Vector<DisableFastSnapshotRestoreSuccessItem>&& value) { m_successful = std::move(value); }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& WithSuccessful(const Aws::Vector<DisableFastSnapshotRestoreSuccessItem>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& WithSuccessful(Aws::Vector<DisableFastSnapshotRestoreSuccessItem>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& AddSuccessful(const DisableFastSnapshotRestoreSuccessItem& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores were
     * successfully disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& AddSuccessful(DisableFastSnapshotRestoreSuccessItem&& value) { m_successful.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline const Aws::Vector<DisableFastSnapshotRestoreErrorItem>& GetUnsuccessful() const{ return m_unsuccessful; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline void SetUnsuccessful(const Aws::Vector<DisableFastSnapshotRestoreErrorItem>& value) { m_unsuccessful = value; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline void SetUnsuccessful(Aws::Vector<DisableFastSnapshotRestoreErrorItem>&& value) { m_unsuccessful = std::move(value); }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& WithUnsuccessful(const Aws::Vector<DisableFastSnapshotRestoreErrorItem>& value) { SetUnsuccessful(value); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& WithUnsuccessful(Aws::Vector<DisableFastSnapshotRestoreErrorItem>&& value) { SetUnsuccessful(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& AddUnsuccessful(const DisableFastSnapshotRestoreErrorItem& value) { m_unsuccessful.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots for which fast snapshot restores could not be
     * disabled.</p>
     */
    inline DisableFastSnapshotRestoresResponse& AddUnsuccessful(DisableFastSnapshotRestoreErrorItem&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisableFastSnapshotRestoresResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisableFastSnapshotRestoresResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DisableFastSnapshotRestoreSuccessItem> m_successful;

    Aws::Vector<DisableFastSnapshotRestoreErrorItem> m_unsuccessful;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
