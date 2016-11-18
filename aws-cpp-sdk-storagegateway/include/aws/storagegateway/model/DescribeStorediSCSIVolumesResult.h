/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/StorediSCSIVolume.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class AWS_STORAGEGATEWAY_API DescribeStorediSCSIVolumesResult
  {
  public:
    DescribeStorediSCSIVolumesResult();
    DescribeStorediSCSIVolumesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStorediSCSIVolumesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<StorediSCSIVolume>& GetStorediSCSIVolumes() const{ return m_storediSCSIVolumes; }

    
    inline void SetStorediSCSIVolumes(const Aws::Vector<StorediSCSIVolume>& value) { m_storediSCSIVolumes = value; }

    
    inline void SetStorediSCSIVolumes(Aws::Vector<StorediSCSIVolume>&& value) { m_storediSCSIVolumes = value; }

    
    inline DescribeStorediSCSIVolumesResult& WithStorediSCSIVolumes(const Aws::Vector<StorediSCSIVolume>& value) { SetStorediSCSIVolumes(value); return *this;}

    
    inline DescribeStorediSCSIVolumesResult& WithStorediSCSIVolumes(Aws::Vector<StorediSCSIVolume>&& value) { SetStorediSCSIVolumes(value); return *this;}

    
    inline DescribeStorediSCSIVolumesResult& AddStorediSCSIVolumes(const StorediSCSIVolume& value) { m_storediSCSIVolumes.push_back(value); return *this; }

    
    inline DescribeStorediSCSIVolumesResult& AddStorediSCSIVolumes(StorediSCSIVolume&& value) { m_storediSCSIVolumes.push_back(value); return *this; }

  private:
    Aws::Vector<StorediSCSIVolume> m_storediSCSIVolumes;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
