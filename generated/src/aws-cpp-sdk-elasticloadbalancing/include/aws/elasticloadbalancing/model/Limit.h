﻿/**
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
    AWS_ELASTICLOADBALANCING_API Limit();
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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Limit& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Limit& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Limit& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the limit.</p>
     */
    inline const Aws::String& GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(const Aws::String& value) { m_maxHasBeenSet = true; m_max = value; }
    inline void SetMax(Aws::String&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }
    inline void SetMax(const char* value) { m_maxHasBeenSet = true; m_max.assign(value); }
    inline Limit& WithMax(const Aws::String& value) { SetMax(value); return *this;}
    inline Limit& WithMax(Aws::String&& value) { SetMax(std::move(value)); return *this;}
    inline Limit& WithMax(const char* value) { SetMax(value); return *this;}
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
