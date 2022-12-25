/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AthenaIntegration.h>
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
   * <p>Describes service integrations with VPC Flow logs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IntegrateServices">AWS
   * API Reference</a></p>
   */
  class IntegrateServices
  {
  public:
    AWS_EC2_API IntegrateServices();
    AWS_EC2_API IntegrateServices(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IntegrateServices& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline const Aws::Vector<AthenaIntegration>& GetAthenaIntegrations() const{ return m_athenaIntegrations; }

    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline bool AthenaIntegrationsHasBeenSet() const { return m_athenaIntegrationsHasBeenSet; }

    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline void SetAthenaIntegrations(const Aws::Vector<AthenaIntegration>& value) { m_athenaIntegrationsHasBeenSet = true; m_athenaIntegrations = value; }

    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline void SetAthenaIntegrations(Aws::Vector<AthenaIntegration>&& value) { m_athenaIntegrationsHasBeenSet = true; m_athenaIntegrations = std::move(value); }

    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline IntegrateServices& WithAthenaIntegrations(const Aws::Vector<AthenaIntegration>& value) { SetAthenaIntegrations(value); return *this;}

    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline IntegrateServices& WithAthenaIntegrations(Aws::Vector<AthenaIntegration>&& value) { SetAthenaIntegrations(std::move(value)); return *this;}

    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline IntegrateServices& AddAthenaIntegrations(const AthenaIntegration& value) { m_athenaIntegrationsHasBeenSet = true; m_athenaIntegrations.push_back(value); return *this; }

    /**
     * <p>Information about the integration with Amazon Athena.</p>
     */
    inline IntegrateServices& AddAthenaIntegrations(AthenaIntegration&& value) { m_athenaIntegrationsHasBeenSet = true; m_athenaIntegrations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AthenaIntegration> m_athenaIntegrations;
    bool m_athenaIntegrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
