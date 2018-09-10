﻿/*
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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DBClusterSnapshotAttributesResult.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class AWS_NEPTUNE_API DescribeDBClusterSnapshotAttributesResult
  {
  public:
    DescribeDBClusterSnapshotAttributesResult();
    DescribeDBClusterSnapshotAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBClusterSnapshotAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBClusterSnapshotAttributesResult& GetDBClusterSnapshotAttributesResult() const{ return m_dBClusterSnapshotAttributesResult; }

    
    inline void SetDBClusterSnapshotAttributesResult(const DBClusterSnapshotAttributesResult& value) { m_dBClusterSnapshotAttributesResult = value; }

    
    inline void SetDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResult&& value) { m_dBClusterSnapshotAttributesResult = std::move(value); }

    
    inline DescribeDBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributesResult(const DBClusterSnapshotAttributesResult& value) { SetDBClusterSnapshotAttributesResult(value); return *this;}

    
    inline DescribeDBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributesResult(DBClusterSnapshotAttributesResult&& value) { SetDBClusterSnapshotAttributesResult(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBClusterSnapshotAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClusterSnapshotAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBClusterSnapshotAttributesResult m_dBClusterSnapshotAttributesResult;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
