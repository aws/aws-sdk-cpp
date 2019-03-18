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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudHSMV2
{
namespace Model
{

  class AWS_CLOUDHSMV2_API DestinationBackup
  {
  public:
    DestinationBackup();
    DestinationBackup(Aws::Utils::Json::JsonView jsonValue);
    DestinationBackup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    
    inline DestinationBackup& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    
    inline DestinationBackup& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    
    inline DestinationBackup& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    
    inline DestinationBackup& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    
    inline DestinationBackup& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    
    inline const Aws::String& GetSourceBackup() const{ return m_sourceBackup; }

    
    inline bool SourceBackupHasBeenSet() const { return m_sourceBackupHasBeenSet; }

    
    inline void SetSourceBackup(const Aws::String& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = value; }

    
    inline void SetSourceBackup(Aws::String&& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = std::move(value); }

    
    inline void SetSourceBackup(const char* value) { m_sourceBackupHasBeenSet = true; m_sourceBackup.assign(value); }

    
    inline DestinationBackup& WithSourceBackup(const Aws::String& value) { SetSourceBackup(value); return *this;}

    
    inline DestinationBackup& WithSourceBackup(Aws::String&& value) { SetSourceBackup(std::move(value)); return *this;}

    
    inline DestinationBackup& WithSourceBackup(const char* value) { SetSourceBackup(value); return *this;}


    
    inline const Aws::String& GetSourceCluster() const{ return m_sourceCluster; }

    
    inline bool SourceClusterHasBeenSet() const { return m_sourceClusterHasBeenSet; }

    
    inline void SetSourceCluster(const Aws::String& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = value; }

    
    inline void SetSourceCluster(Aws::String&& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = std::move(value); }

    
    inline void SetSourceCluster(const char* value) { m_sourceClusterHasBeenSet = true; m_sourceCluster.assign(value); }

    
    inline DestinationBackup& WithSourceCluster(const Aws::String& value) { SetSourceCluster(value); return *this;}

    
    inline DestinationBackup& WithSourceCluster(Aws::String&& value) { SetSourceCluster(std::move(value)); return *this;}

    
    inline DestinationBackup& WithSourceCluster(const char* value) { SetSourceCluster(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;

    Aws::String m_sourceBackup;
    bool m_sourceBackupHasBeenSet;

    Aws::String m_sourceCluster;
    bool m_sourceClusterHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
