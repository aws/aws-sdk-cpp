/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudsearch/model/ScalingParameters.h>
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
   * <p>The status and configuration of a search domain's scaling parameters.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ScalingParametersStatus">AWS
   * API Reference</a></p>
   */
  class ScalingParametersStatus
  {
  public:
    AWS_CLOUDSEARCH_API ScalingParametersStatus();
    AWS_CLOUDSEARCH_API ScalingParametersStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API ScalingParametersStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const ScalingParameters& GetOptions() const{ return m_options; }

    
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    
    inline void SetOptions(const ScalingParameters& value) { m_optionsHasBeenSet = true; m_options = value; }

    
    inline void SetOptions(ScalingParameters&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    
    inline ScalingParametersStatus& WithOptions(const ScalingParameters& value) { SetOptions(value); return *this;}

    
    inline ScalingParametersStatus& WithOptions(ScalingParameters&& value) { SetOptions(std::move(value)); return *this;}


    
    inline const OptionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ScalingParametersStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    
    inline ScalingParametersStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ScalingParameters m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
