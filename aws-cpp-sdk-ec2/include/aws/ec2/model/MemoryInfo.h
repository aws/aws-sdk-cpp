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
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the memory for the instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MemoryInfo">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API MemoryInfo
  {
  public:
    MemoryInfo();
    MemoryInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    MemoryInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Size of the memory, in MiB.</p>
     */
    inline long long GetSizeInMiB() const{ return m_sizeInMiB; }

    /**
     * <p>Size of the memory, in MiB.</p>
     */
    inline bool SizeInMiBHasBeenSet() const { return m_sizeInMiBHasBeenSet; }

    /**
     * <p>Size of the memory, in MiB.</p>
     */
    inline void SetSizeInMiB(long long value) { m_sizeInMiBHasBeenSet = true; m_sizeInMiB = value; }

    /**
     * <p>Size of the memory, in MiB.</p>
     */
    inline MemoryInfo& WithSizeInMiB(long long value) { SetSizeInMiB(value); return *this;}

  private:

    long long m_sizeInMiB;
    bool m_sizeInMiBHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
