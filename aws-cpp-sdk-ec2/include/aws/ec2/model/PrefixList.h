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
#include <aws/core/utils/memory/stl/AWSVector.h>
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

  /**
   * <p>Describes prefixes for AWS services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrefixList">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API PrefixList
  {
  public:
    PrefixList();
    PrefixList(const Aws::Utils::Xml::XmlNode& xmlNode);
    PrefixList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }

    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }

    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }

    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline PrefixList& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}

    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline PrefixList& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}

    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline PrefixList& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }

    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline PrefixList& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP address range of the AWS service.</p>
     */
    inline PrefixList& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }


    /**
     * <p>The ID of the prefix.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline PrefixList& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix.</p>
     */
    inline PrefixList& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix.</p>
     */
    inline PrefixList& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The name of the prefix.</p>
     */
    inline const Aws::String& GetPrefixListName() const{ return m_prefixListName; }

    /**
     * <p>The name of the prefix.</p>
     */
    inline void SetPrefixListName(const Aws::String& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = value; }

    /**
     * <p>The name of the prefix.</p>
     */
    inline void SetPrefixListName(Aws::String&& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = std::move(value); }

    /**
     * <p>The name of the prefix.</p>
     */
    inline void SetPrefixListName(const char* value) { m_prefixListNameHasBeenSet = true; m_prefixListName.assign(value); }

    /**
     * <p>The name of the prefix.</p>
     */
    inline PrefixList& WithPrefixListName(const Aws::String& value) { SetPrefixListName(value); return *this;}

    /**
     * <p>The name of the prefix.</p>
     */
    inline PrefixList& WithPrefixListName(Aws::String&& value) { SetPrefixListName(std::move(value)); return *this;}

    /**
     * <p>The name of the prefix.</p>
     */
    inline PrefixList& WithPrefixListName(const char* value) { SetPrefixListName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet;

    Aws::String m_prefixListName;
    bool m_prefixListNameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
