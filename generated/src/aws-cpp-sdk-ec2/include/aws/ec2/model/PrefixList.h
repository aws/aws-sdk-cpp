/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes prefixes for Amazon Web Services services.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrefixList">AWS
   * API Reference</a></p>
   */
  class PrefixList
  {
  public:
    AWS_EC2_API PrefixList() = default;
    AWS_EC2_API PrefixList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrefixList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IP address range of the Amazon Web Services service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    void SetCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::forward<CidrsT>(value); }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    PrefixList& WithCidrs(CidrsT&& value) { SetCidrs(std::forward<CidrsT>(value)); return *this;}
    template<typename CidrsT = Aws::String>
    PrefixList& AddCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs.emplace_back(std::forward<CidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    PrefixList& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prefix.</p>
     */
    inline const Aws::String& GetPrefixListName() const { return m_prefixListName; }
    inline bool PrefixListNameHasBeenSet() const { return m_prefixListNameHasBeenSet; }
    template<typename PrefixListNameT = Aws::String>
    void SetPrefixListName(PrefixListNameT&& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = std::forward<PrefixListNameT>(value); }
    template<typename PrefixListNameT = Aws::String>
    PrefixList& WithPrefixListName(PrefixListNameT&& value) { SetPrefixListName(std::forward<PrefixListNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_prefixListName;
    bool m_prefixListNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
