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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/SnapshotErrorMessage.h>
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
namespace Redshift
{
namespace Model
{
  class AWS_REDSHIFT_API BatchModifyClusterSnapshotsResult
  {
  public:
    BatchModifyClusterSnapshotsResult();
    BatchModifyClusterSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    BatchModifyClusterSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resources = value; }

    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resources = std::move(value); }

    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline BatchModifyClusterSnapshotsResult& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline BatchModifyClusterSnapshotsResult& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline BatchModifyClusterSnapshotsResult& AddResources(const Aws::String& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline BatchModifyClusterSnapshotsResult& AddResources(Aws::String&& value) { m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the snapshots that were modified.</p>
     */
    inline BatchModifyClusterSnapshotsResult& AddResources(const char* value) { m_resources.push_back(value); return *this; }


    /**
     * <p>A list of any errors returned.</p>
     */
    inline const Aws::Vector<SnapshotErrorMessage>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of any errors returned.</p>
     */
    inline void SetErrors(const Aws::Vector<SnapshotErrorMessage>& value) { m_errors = value; }

    /**
     * <p>A list of any errors returned.</p>
     */
    inline void SetErrors(Aws::Vector<SnapshotErrorMessage>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of any errors returned.</p>
     */
    inline BatchModifyClusterSnapshotsResult& WithErrors(const Aws::Vector<SnapshotErrorMessage>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of any errors returned.</p>
     */
    inline BatchModifyClusterSnapshotsResult& WithErrors(Aws::Vector<SnapshotErrorMessage>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of any errors returned.</p>
     */
    inline BatchModifyClusterSnapshotsResult& AddErrors(const SnapshotErrorMessage& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of any errors returned.</p>
     */
    inline BatchModifyClusterSnapshotsResult& AddErrors(SnapshotErrorMessage&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BatchModifyClusterSnapshotsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BatchModifyClusterSnapshotsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_resources;

    Aws::Vector<SnapshotErrorMessage> m_errors;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
