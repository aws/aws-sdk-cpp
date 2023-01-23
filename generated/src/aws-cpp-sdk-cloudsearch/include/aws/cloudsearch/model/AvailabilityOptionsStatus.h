/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudsearch/model/OptionStatus.h>
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
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The status and configuration of the domain's availability
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/AvailabilityOptionsStatus">AWS
   * API Reference</a></p>
   */
  class AvailabilityOptionsStatus
  {
  public:
    AWS_CLOUDSEARCH_API AvailabilityOptionsStatus();
    AWS_CLOUDSEARCH_API AvailabilityOptionsStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API AvailabilityOptionsStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The availability options configured for the domain.</p>
     */
    inline bool GetOptions() const{ return m_options; }

    /**
     * <p>The availability options configured for the domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The availability options configured for the domain.</p>
     */
    inline void SetOptions(bool value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The availability options configured for the domain.</p>
     */
    inline AvailabilityOptionsStatus& WithOptions(bool value) { SetOptions(value); return *this;}


    
    inline const OptionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline AvailabilityOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    
    inline AvailabilityOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    bool m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
