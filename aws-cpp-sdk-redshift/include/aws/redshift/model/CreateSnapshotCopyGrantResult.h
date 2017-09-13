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
#include <aws/redshift/model/SnapshotCopyGrant.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
  class AWS_REDSHIFT_API CreateSnapshotCopyGrantResult
  {
  public:
    CreateSnapshotCopyGrantResult();
    CreateSnapshotCopyGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateSnapshotCopyGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const SnapshotCopyGrant& GetSnapshotCopyGrant() const{ return m_snapshotCopyGrant; }

    
    inline void SetSnapshotCopyGrant(const SnapshotCopyGrant& value) { m_snapshotCopyGrant = value; }

    
    inline void SetSnapshotCopyGrant(SnapshotCopyGrant&& value) { m_snapshotCopyGrant = std::move(value); }

    
    inline CreateSnapshotCopyGrantResult& WithSnapshotCopyGrant(const SnapshotCopyGrant& value) { SetSnapshotCopyGrant(value); return *this;}

    
    inline CreateSnapshotCopyGrantResult& WithSnapshotCopyGrant(SnapshotCopyGrant&& value) { SetSnapshotCopyGrant(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateSnapshotCopyGrantResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSnapshotCopyGrantResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    SnapshotCopyGrant m_snapshotCopyGrant;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
