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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  class AWS_CLOUDSEARCH_API Limits
  {
  public:
    Limits();
    Limits(const Aws::Utils::Xml::XmlNode& xmlNode);
    Limits& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline int GetMaximumReplicationCount() const{ return m_maximumReplicationCount; }

    
    inline bool MaximumReplicationCountHasBeenSet() const { return m_maximumReplicationCountHasBeenSet; }

    
    inline void SetMaximumReplicationCount(int value) { m_maximumReplicationCountHasBeenSet = true; m_maximumReplicationCount = value; }

    
    inline Limits& WithMaximumReplicationCount(int value) { SetMaximumReplicationCount(value); return *this;}


    
    inline int GetMaximumPartitionCount() const{ return m_maximumPartitionCount; }

    
    inline bool MaximumPartitionCountHasBeenSet() const { return m_maximumPartitionCountHasBeenSet; }

    
    inline void SetMaximumPartitionCount(int value) { m_maximumPartitionCountHasBeenSet = true; m_maximumPartitionCount = value; }

    
    inline Limits& WithMaximumPartitionCount(int value) { SetMaximumPartitionCount(value); return *this;}

  private:

    int m_maximumReplicationCount;
    bool m_maximumReplicationCountHasBeenSet;

    int m_maximumPartitionCount;
    bool m_maximumPartitionCountHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
