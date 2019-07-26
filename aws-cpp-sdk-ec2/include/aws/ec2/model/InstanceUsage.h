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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

  class AWS_EC2_API InstanceUsage
  {
  public:
    InstanceUsage();
    InstanceUsage(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceUsage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline InstanceUsage& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline InstanceUsage& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline InstanceUsage& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline int GetUsedInstanceCount() const{ return m_usedInstanceCount; }

    
    inline bool UsedInstanceCountHasBeenSet() const { return m_usedInstanceCountHasBeenSet; }

    
    inline void SetUsedInstanceCount(int value) { m_usedInstanceCountHasBeenSet = true; m_usedInstanceCount = value; }

    
    inline InstanceUsage& WithUsedInstanceCount(int value) { SetUsedInstanceCount(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    int m_usedInstanceCount;
    bool m_usedInstanceCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
