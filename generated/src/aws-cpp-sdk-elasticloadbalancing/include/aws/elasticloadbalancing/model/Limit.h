/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about an Elastic Load Balancing resource limit for your AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/Limit">AWS
   * API Reference</a></p>
   */
  class Limit
  {
  public:
    AWS_ELASTICLOADBALANCING_API Limit() = default;
    AWS_ELASTICLOADBALANCING_API Limit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API Limit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>classic-listeners</p> </li> <li> <p>classic-load-balancers</p> </li> <li>
     * <p>classic-registered-instances</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Limit& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the limit.</p>
     */
    inline const Aws::String& GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    template<typename MaxT = Aws::String>
    void SetMax(MaxT&& value) { m_maxHasBeenSet = true; m_max = std::forward<MaxT>(value); }
    template<typename MaxT = Aws::String>
    Limit& WithMax(MaxT&& value) { SetMax(std::forward<MaxT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
