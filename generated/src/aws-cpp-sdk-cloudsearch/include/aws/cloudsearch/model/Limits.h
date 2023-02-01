/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  class Limits
  {
  public:
    AWS_CLOUDSEARCH_API Limits();
    AWS_CLOUDSEARCH_API Limits(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API Limits& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
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
    bool m_maximumReplicationCountHasBeenSet = false;

    int m_maximumPartitionCount;
    bool m_maximumPartitionCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
