/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudsearch/model/DomainEndpointOptions.h>
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
   * <p>The configuration and status of the domain's endpoint options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DomainEndpointOptionsStatus">AWS
   * API Reference</a></p>
   */
  class DomainEndpointOptionsStatus
  {
  public:
    AWS_CLOUDSEARCH_API DomainEndpointOptionsStatus();
    AWS_CLOUDSEARCH_API DomainEndpointOptionsStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API DomainEndpointOptionsStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The domain endpoint options configured for the domain.</p>
     */
    inline const DomainEndpointOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The domain endpoint options configured for the domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The domain endpoint options configured for the domain.</p>
     */
    inline void SetOptions(const DomainEndpointOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The domain endpoint options configured for the domain.</p>
     */
    inline void SetOptions(DomainEndpointOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The domain endpoint options configured for the domain.</p>
     */
    inline DomainEndpointOptionsStatus& WithOptions(const DomainEndpointOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The domain endpoint options configured for the domain.</p>
     */
    inline DomainEndpointOptionsStatus& WithOptions(DomainEndpointOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the configured domain endpoint options.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the configured domain endpoint options.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the configured domain endpoint options.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the configured domain endpoint options.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the configured domain endpoint options.</p>
     */
    inline DomainEndpointOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the configured domain endpoint options.</p>
     */
    inline DomainEndpointOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DomainEndpointOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
